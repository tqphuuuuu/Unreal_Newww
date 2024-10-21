// Copyright Epic Games, Inc. All Rights Reserved.

#include "BanSungOFFLINE_CPlusCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Camera/CameraComponent.h"
#include "Components/DecalComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/SpringArmComponent.h"
#include "Materials/Material.h"
#include "Engine/World.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Weapon/Weapon.h"
#include "Weapon/Weapon_Pistol.h"
#include "Weapon/Weapon_Rifle.h"

ABanSungOFFLINE_CPlusCharacter::ABanSungOFFLINE_CPlusCharacter()
{
	// Set size for player capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// Don't rotate character to camera direction
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Rotate character to moving direction
	GetCharacterMovement()->RotationRate = FRotator(0.f, 640.f, 0.f);
	GetCharacterMovement()->bConstrainToPlane = true;
	GetCharacterMovement()->bSnapToPlaneAtStart = true;

	// Create a camera boom...
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->SetUsingAbsoluteRotation(true); // Don't want arm to rotate when character does
	CameraBoom->TargetArmLength = 800.f;
	CameraBoom->SetRelativeRotation(FRotator(-60.f, 0.f, 0.f));
	CameraBoom->bDoCollisionTest = false; // Don't want to pull camera in when it collides with level

	// Create a camera...
	TopDownCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("TopDownCamera"));
	TopDownCameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	TopDownCameraComponent->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Activate ticking in order to update the cursor every frame.
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;

	
}

void ABanSungOFFLINE_CPlusCharacter::Tick(float DeltaSeconds)
{
    Super::Tick(DeltaSeconds);
	

}
/// Kiểm tra xem có phải là vũ khí cần nhặt không
TArray<UClass*> ValidWeaponClasses;  
void ABanSungOFFLINE_CPlusCharacter::InitializeWeaponClasses()  
{  
	ValidWeaponClasses.Add(AWeapon_Pistol::StaticClass());  
	ValidWeaponClasses.Add(AWeapon_Rifle::StaticClass());  
}
//// Add vũ khí vào hàm
void ABanSungOFFLINE_CPlusCharacter::AddWeapon(AWeapon* NewWeapon)  
{  
	if (NewWeapon)  
	{  
		for (UClass* WeaponClass : ValidWeaponClasses)  
		{  
			if (NewWeapon->GetClass() == WeaponClass)  
			{  
				Weapons.Add(NewWeapon);
				UKismetSystemLibrary::PrintString(this, TEXT("Đã thêm vũ khí vào mảng."), true, true, FLinearColor::Green, 2.0f);
				return;
			}  
		}  
		UE_LOG(LogTemp, Warning, TEXT("Ko phai sung"));  
	}  
}  

void ABanSungOFFLINE_CPlusCharacter::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor); // Gọi phương thức lớp cơ sở
	UKismetSystemLibrary::PrintString(this, OtherActor->GetName(), true, true, FLinearColor::Yellow, 2.0f);

	// Kiểm tra nếu đối tượng va chạm là Pistol hoặc Rifle thông qua lớp cơ sở AWeapon
	if (OtherActor)
	{
		AWeapon* Weapon = Cast<AWeapon>(OtherActor);  // Kiểm tra nếu OtherActor là loại AWeapon
		//	UKismetSystemLibrary::PrintString(this, Weapon->GetName(), true, true, FLinearColor::Red, 2.0f);

		if (Weapon)
		{
			
			Weapons.Add(Weapon);  // Thêm Pistol vào mảng

			UKismetSystemLibrary::PrintString(this, TEXT("Pistol được thêm vào mảng."), true, true, FLinearColor::Green, 2.0f);
			Weapon->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, TEXT("Socket_Weapon"));

			///////////////////Đoạn này dùng để kiểm tra///////////////////////////////

			int WeapontCout = Weapons.Num();
			UKismetSystemLibrary::PrintString(this, FString::Printf(TEXT("Số lượng vũ khí trong mảng: %d"), WeapontCout), true, true, FLinearColor::Green, 2.0f);
	
			Weapon->SetActorHiddenInGame(true);
			PrintAllWeaponsInArray();

			////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
		}
	}
}

/////////////Hàm dùng để kiểm tra trong mảng có gì //////////////////////////

void ABanSungOFFLINE_CPlusCharacter::PrintAllWeaponsInArray()
{
	if (Weapons.Num() == 0)
	{
		//  UKismetSystemLibrary::PrintString(this, TEXT("Không có vũ khí nào trong mảng."), true, true, FLinearColor::Red, 2.0f);
		return;
	}

	// UKismetSystemLibrary::PrintString(this, TEXT("Các vũ khí trong mảng:"), true, true, FLinearColor::Green, 2.0f);
    
	for (AWeapon* Weapon : Weapons) // Duyệt qua từng phần tử trong mảng Weapons
	{
		if (Weapon) // Kiểm tra xem vũ khí không phải là nullptr
		{
			// In ra tên của vũ khí
			FString WeaponName = Weapon->GetName();
			//  UKismetSystemLibrary::PrintString(this, FString::Printf(TEXT("Vũ khí: %s"), *WeaponName), true, true, FLinearColor::Yellow, 2.0f);
		}
	}

	// In ra số lượng vũ khí trong mảng
	int WeaponCount = Weapons.Num();
	// UKismetSystemLibrary::PrintString(this, FString::Printf(TEXT("Tổng số vũ khí trong mảng: %d"), WeaponCount), true, true, FLinearColor::Blue, 2.0f);
}
///	Hàm Show Vũ khí
void ABanSungOFFLINE_CPlusCharacter::ShowWeapon(int32 Type)
{
	if (Weapons.Num() == 0)
	{
		UKismetSystemLibrary::PrintString(this, TEXT("Không có vũ khí nào trong mảng."), true, true, FLinearColor::Red, 2.0f);
		return;
	}
	// Ẩn tất cả vũ khí trước khi hiển thị vũ khí mới
	for (AWeapon* Weapon : Weapons)
	{
		if (Weapon)
		{
			Weapon->SetActorHiddenInGame(true);  // Ẩn vũ khí
		}
	}
	// Hiển thị vũ khí theo Type
	for (AWeapon* Weapon : Weapons)
	{
		if (Weapon && Weapon->Type == Type)  // Kiểm tra loại vũ khí
		{
			if (Type == 0)
			{
				Weapon->SetActorHiddenInGame(false);  // Hiển thị vũ khí

				//UKismetSystemLibrary::PrintString(this, TEXT("Pistol được hiển thị."), true, true, FLinearColor::Green, 2.0f);
			}
			else if (Type == 1)
			{

				Weapon->SetActorHiddenInGame(false);  // Hiển thị vũ khí

				//	UKismetSystemLibrary::PrintString(this, TEXT("Rifle được hiển thị."), true, true, FLinearColor::Blue, 2.0f);
			}
			return;  // Thoát vòng lặp sau khi tìm thấy và hiển thị vũ khí
		}
	}

	// Nếu không tìm thấy vũ khí phù hợp với Type
	UKismetSystemLibrary::PrintString(this, TEXT("Không tìm thấy vũ khí phù hợp."), true, true, FLinearColor::Red, 2.0f);
}

TSubclassOf<AWeapon> ABanSungOFFLINE_CPlusCharacter::GetCurrentWeaponClass()
{
	// Duyệt qua mảng Weapons để tìm vũ khí không bị ẩn
	for (AWeapon* Weapon : Weapons)
	{
		if (Weapon && !Weapon->IsHidden())
		{
			return Weapon->GetClass(); // Trả về loại vũ khí đầu tiên không bị ẩn
		}
	}

	return nullptr; // Nếu không có vũ khí nào, trả về nullptr
}

bool ABanSungOFFLINE_CPlusCharacter::IsWeaponVisible(TSubclassOf<AWeapon> WeaponClass)
{
	for (AWeapon* Weapon : Weapons)
	{
		// Kiểm tra nếu vũ khí này không bị ẩn và thuộc lớp WeaponClass
		if (Weapon && !Weapon->IsHidden() && Weapon->IsA(WeaponClass))
		{
			return true;  // Nếu tìm thấy vũ khí phù hợp thì trả về true
		}
	}

	// Nếu không tìm thấy vũ khí nào phù hợp, trả về false
	return false;
}
