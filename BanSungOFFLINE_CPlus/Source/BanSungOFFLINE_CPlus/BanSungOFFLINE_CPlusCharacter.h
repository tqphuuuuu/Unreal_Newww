// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Weapon/Weapon.h"
#include "BanSungOFFLINE_CPlusCharacter.generated.h"

UCLASS(Blueprintable)
class ABanSungOFFLINE_CPlusCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	ABanSungOFFLINE_CPlusCharacter();

	// Called every frame.
	virtual void Tick(float DeltaSeconds) override;

	/** Returns TopDownCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetTopDownCameraComponent() const { return TopDownCameraComponent; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	// Overlap
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override; 

	void AddWeapon(AWeapon* NewWeapon);  // Hàm thêm vũ khí

	// Mảng chứa cả Pistol và Rifle
	TArray<class AWeapon*> Weapons;

	void InitializeWeaponClasses();
	// Hàm kiểm tra trong mảng có gì
	void PrintAllWeaponsInArray();
	// Hàm show vũ khí
	void ShowWeapon(int32 Type);

	// Biến hiện UI
	UPROPERTY(BlueprintReadOnly)
	int Cur_weapon = 0;

	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category="Weapon");
	AWeapon* CurrentWeapon;

	//Kiểm tra hiển thị của súng
	UFUNCTION(BlueprintCallable, Category = "Weapon")
	bool IsWeaponVisible(TSubclassOf<AWeapon> WeaponClass);



private:
	/** Top down camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* TopDownCameraComponent;

	/** Camera boom positioning the camera above the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;
};

