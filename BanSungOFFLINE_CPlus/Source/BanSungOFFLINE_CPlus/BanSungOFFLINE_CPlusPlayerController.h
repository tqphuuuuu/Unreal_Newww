// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "InputActionValue.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/PlayerController.h"
#include "Delegates/DelegateCombinations.h"

#include "BanSungOFFLINE_CPlusPlayerController.generated.h"

/** Forward declaration to improve compiling times */
class UNiagaraSystem;
class UInputMappingContext;
class UInputAction;


DECLARE_DYNAMIC_MULTICAST_DELEGATE(FBulletCount);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDisplayWBBulletCount);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMaxHealth);

DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);

UCLASS()
class ABanSungOFFLINE_CPlusPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	ABanSungOFFLINE_CPlusPlayerController();

	/** Time Threshold to know if it was a short press */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	float ShortPressThreshold;

	/** FX Class that we will spawn when clicking */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UNiagaraSystem* FXCursor;

	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	UInputMappingContext* DefaultMappingContext;
	
	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	UInputAction* SetDestinationClickAction;

	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	UInputAction* SetDestinationTouchAction;

	// Move Action
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	UInputAction* MoveAction;


	// Tạo key board
	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category=Input,meta=(AllowPrivateAccess="true"))
	UInputAction* Key_BoardPisol;
	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category=Input,meta=(AllowPrivateAccess="true"))
	UInputAction* Key_BoardRifle;

	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category=Input,meta=(AllowPrivateAccess="true"))
	UInputAction* keyBoardReloadAmmo;

	//UI AMmo
	UPROPERTY(BlueprintAssignable)
	FDisplayWBBulletCount ShowWBCountBullet;


	UPROPERTY(BlueprintAssignable)
	FMaxHealth ShowHealth;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Health")
	float Health;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Max Health")
	float MaxHealth;
	
	bool ShootOneByOne;
	int32 ShootRate = 0;
	
	void OnShooting();
	
protected:
	/** True if the controlled character should navigate to the mouse cursor. */
	uint32 bMoveToMouseCursor : 1;

	virtual void SetupInputComponent() override;
	
	// To add mapping context
	virtual void BeginPlay();
	virtual void Tick(float DeltaSeconds) override;


	/** Input handlers for SetDestination action. */
	void OnInputStarted();
	void OnSetDestinationTriggered();
	void OnSetDestinationReleased();
	void OnTouchTriggered();
	void OnTouchReleased();
	void OnMouseReleased ();
	void OnMouseButtonReleased();
	void OnMoveAction(const FInputActionValue& Value);
	void OnKeyBoard_Pistol(const FInputActionValue& Value);
	void OnKeyBoard_Rifle(const FInputActionValue& Value);
	void OnKeyBoard_ReloadAmmo(const FInputActionValue& Value);

	bool bIsShooting = false; //  biến để theo dõi trạng thái bấm chuột
	//Bắn đạn Rifle
	FTimerHandle RifleFireTimerHandle;
	bool bCanFireRifle = true;

private:
	FVector CachedDestination;

	bool bIsTouch; // Is it a touch device
	float FollowTime; // For how long it has been pressed
public:
	bool FireShooting = false;
	FVector DirectionMouse;

	bool isReloading = false;

	void ReloadGun();
};


