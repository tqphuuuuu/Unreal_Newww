// Copyright Epic Games, Inc. All Rights Reserved.

#include "BanSungOFFLINE_CPlusPlayerController.h"
#include "GameFramework/Pawn.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "NiagaraFunctionLibrary.h"
#include "BanSungOFFLINE_CPlusCharacter.h"
#include "Engine/World.h"
#include "EnhancedInputComponent.h"
#include "InputActionValue.h"
#include "EnhancedInputSubsystems.h"
#include "Engine/LocalPlayer.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Weapon/Weapon_Pistol.h"
#include "Weapon/Weapon_Rifle.h"

DEFINE_LOG_CATEGORY(LogTemplateCharacter);

ABanSungOFFLINE_CPlusPlayerController::ABanSungOFFLINE_CPlusPlayerController()
{
	bShowMouseCursor = true;
	DefaultMouseCursor = EMouseCursor::Default;
	CachedDestination = FVector::ZeroVector;
	FollowTime = 0.f;
}

void ABanSungOFFLINE_CPlusPlayerController::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();
}

void ABanSungOFFLINE_CPlusPlayerController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	FHitResult HitResult;
	bool bHitSuccessful = false;
	bHitSuccessful = GetHitResultUnderCursor(ECollisionChannel::ECC_Visibility, true, HitResult);

	///////////////// Nhìn theo hướng chuột///////////////////////////
	if (bHitSuccessful)
	{	
		FVector DirectionMouse = HitResult.Location;
		FVector start = GetPawn()->GetActorLocation();
		start.Z = 0.f;
		DirectionMouse.Z = 0.f;
		FRotator Rotator = UKismetMathLibrary::FindLookAtRotation(start,DirectionMouse);
		GetPawn()->SetActorRotation(Rotator);
	}
}

void ABanSungOFFLINE_CPlusPlayerController::SetupInputComponent()
{
	// set up gameplay key bindings
	Super::SetupInputComponent();
	
	// Add Input Mapping Context
	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		Subsystem->AddMappingContext(DefaultMappingContext, 0);
	}

	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(InputComponent))
	{
		// Setup mouse input events
		EnhancedInputComponent->BindAction(SetDestinationClickAction, ETriggerEvent::Started, this, &ABanSungOFFLINE_CPlusPlayerController::OnSetDestinationTriggered);
		EnhancedInputComponent->BindAction(SetDestinationClickAction, ETriggerEvent::Completed, this, &ABanSungOFFLINE_CPlusPlayerController::OnMouseReleased);

		InputComponent->BindAction("Mouse Click", IE_Released, this, &ABanSungOFFLINE_CPlusPlayerController::OnMouseButtonReleased);
	


		// Move W S A D
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ABanSungOFFLINE_CPlusPlayerController::OnMoveAction);
		EnhancedInputComponent->BindAction(Key_BoardPisol, ETriggerEvent::Triggered, this, &ABanSungOFFLINE_CPlusPlayerController::OnKeyBoard_Pistol);
		EnhancedInputComponent->BindAction(Key_BoardRifle, ETriggerEvent::Triggered, this, &ABanSungOFFLINE_CPlusPlayerController::OnKeyBoard_Rifle);
		EnhancedInputComponent->BindAction(keyBoardReloadAmmo, ETriggerEvent::Started, this, &ABanSungOFFLINE_CPlusPlayerController::OnKeyBoard_ReloadAmmo);

		


	}
	else
	{
		UE_LOG(LogTemplateCharacter, Error, TEXT("'%s' Failed to find an Enhanced Input Component! This template is built to use the Enhanced Input system. If you intend to use the legacy system, then you will need to update this C++ file."), *GetNameSafe(this));
	}
}


void ABanSungOFFLINE_CPlusPlayerController::OnInputStarted()
{
	StopMovement();
}

// Triggered every frame when the input is held down
void ABanSungOFFLINE_CPlusPlayerController::OnSetDestinationTriggered()
{
	// We flag that the input is being pressed
	FollowTime += GetWorld()->GetDeltaSeconds();
	
	// We look for the location in the world where the player has pressed the input
	FHitResult Hit;
	bool bHitSuccessful = false;
	if (bIsTouch)
	{
		bHitSuccessful = GetHitResultUnderFinger(ETouchIndex::Touch1, ECollisionChannel::ECC_Visibility, true, Hit);
	}
	else
	{
		bHitSuccessful = GetHitResultUnderCursor(ECollisionChannel::ECC_Visibility, true, Hit);
	}

	// If we hit a surface, cache the location
	if (bHitSuccessful)
	{
		CachedDestination = Hit.Location;
	}
	
		// Lấy tham chiếu đến nhân vật
		ABanSungOFFLINE_CPlusCharacter* MyCharacter = Cast<ABanSungOFFLINE_CPlusCharacter>(GetPawn());

		if (!MyCharacter) return;

		// Tìm kiếm súng hiện tại trong mảng Weapons dựa trên loại Type
		AWeapon* SelectedWeapon = nullptr;
		for (AWeapon* Weapon : MyCharacter->Weapons)
		{
			if (Weapon && MyCharacter->IsWeaponVisible(Weapon->GetClass()))  // Kiểm tra xem súng nào đang hiển thị
			{
				SelectedWeapon = Weapon;
				break;  // Dừng vòng lặp sau khi tìm thấy súng đang hiển thị
			}
		}

		// Nếu tìm thấy súng hiện tại
		if (SelectedWeapon)
		{
			if (SelectedWeapon->CurrentAmmo >= 1)
			{
				Cast<AWeapon>(MyCharacter->CurrentWeapon)->Fire();
			}
		}
	

	
	// Move towards mouse pointer or touch
	APawn* ControlledPawn = GetPawn();
	if (ControlledPawn != nullptr)
	{
		FVector WorldDirection = (CachedDestination - ControlledPawn->GetActorLocation()).GetSafeNormal();
		ControlledPawn->AddMovementInput(WorldDirection, 1.0, false);
	}
}

void ABanSungOFFLINE_CPlusPlayerController::OnSetDestinationReleased()
{
	// If it was a short press
	if (FollowTime <= ShortPressThreshold)
	{
		// We move there and spawn some particles
		UAIBlueprintHelperLibrary::SimpleMoveToLocation(this, CachedDestination);
		UNiagaraFunctionLibrary::SpawnSystemAtLocation(this, FXCursor, CachedDestination, FRotator::ZeroRotator, FVector(1.f, 1.f, 1.f), true, true, ENCPoolMethod::None, true);
	}

	FollowTime = 0.f;
}

// Triggered every frame when the input is held down
void ABanSungOFFLINE_CPlusPlayerController::OnTouchTriggered()
{
	bIsTouch = true;
	OnSetDestinationTriggered();
}

void ABanSungOFFLINE_CPlusPlayerController::OnTouchReleased()
{
	bIsTouch = false;
	OnSetDestinationReleased();
}

void ABanSungOFFLINE_CPlusPlayerController::OnMoveAction(const FInputActionValue& Value)
{
	const FVector2D MovementVector = Value.Get<FVector2D>();
	if (this != nullptr)
	{
		// find out which way is forward
		const FRotator Rotation = GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	
		// get right vector .
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		// add movement 
		GetPawn()->AddMovementInput(ForwardDirection, MovementVector.Y);
		GetPawn()->AddMovementInput(RightDirection, MovementVector.X);
	}
}
void ABanSungOFFLINE_CPlusPlayerController::OnMouseReleased()
{
	// Code xử lý khi chuột được thả
}

void ABanSungOFFLINE_CPlusPlayerController::OnMouseButtonReleased()
{
	// Code xử lý khi nút chuột được thả
}
void ABanSungOFFLINE_CPlusPlayerController::OnKeyBoard_Pistol(const FInputActionValue& Value)
{
	// Log để kiểm tra xem phím bàn phím có được nhấn hay không
	UKismetSystemLibrary::PrintString(this,"So 1");
	

	ABanSungOFFLINE_CPlusCharacter* MyCharacter = Cast<ABanSungOFFLINE_CPlusCharacter>(GetCharacter());
	
	if (MyCharacter)
	{
		MyCharacter->ShowWeapon(0);
		ShowWBCountBullet.Broadcast();
		MyCharacter->Cur_weapon = 1;
		auto Weapon_Array = MyCharacter->Weapons;
		for (auto i:Weapon_Array)
		{
			if (Cast<AWeapon_Pistol>(i))
			{
				MyCharacter->CurrentWeapon = i;
				break;
			}
		}
		
	}
		
}

void ABanSungOFFLINE_CPlusPlayerController::OnKeyBoard_Rifle(const FInputActionValue& Value)
{
	// Log để kiểm tra xem phím bàn phím có được nhấn hay không
	UKismetSystemLibrary::PrintString(this,"So 2");
	

	ABanSungOFFLINE_CPlusCharacter* MyCharacter = Cast<ABanSungOFFLINE_CPlusCharacter>(GetCharacter());
	
	

	if (MyCharacter)
	{
		MyCharacter->ShowWeapon(1);
		ShowWBCountBullet.Broadcast();
		MyCharacter->Cur_weapon = 1;
		auto Weapon_Array = MyCharacter->Weapons;
		for (auto i:Weapon_Array)
		{
			if (Cast<AWeapon_Rifle>(i))
			{
				MyCharacter->CurrentWeapon = i;
				break;
			}
		}
		
	}
		
}

void ABanSungOFFLINE_CPlusPlayerController::OnKeyBoard_ReloadAmmo(const FInputActionValue& Value)
{
	// Log để kiểm tra xem phím bàn phím có được nhấn hay không
	UKismetSystemLibrary::PrintString(this,"Phim R");
	

	/*ABanSungOFFLINE_CCharacter* MyCharacter = Cast<ABanSungOFFLINE_CCharacter>(GetCharacter());
	
	/*if (MyCharacter)
	{
		MyCharacter->ShowPistol();
		
	}#1#

	if (MyCharacter)
	{
		MyCharacter->ShowWeapon(0);
		ShowWBCountBullet.Broadcast();
		MyCharacter->Cur_weapon = 1;
		auto Weapon_Array = MyCharacter->Weapons;
		for (auto i:Weapon_Array)
		{
			if (Cast<AGun_Pistol>(i))
			{
				MyCharacter->CurrentWeapon = i;
				break;
			}
		}
		
	}*/
		
}