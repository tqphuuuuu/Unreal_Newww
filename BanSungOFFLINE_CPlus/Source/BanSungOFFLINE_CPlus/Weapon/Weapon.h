// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BanSungOFFLINE_CPlus/BanSungOFFLINE_CPlusPlayerController.h"
#include "BanSungOFFLINE_CPlus/Projectiles/Projectiles_Pistol.h"
#include "BanSungOFFLINE_CPlus/Projectiles/Projectiles_Rifle.h"
#include "GameFramework/Actor.h"
#include "Weapon.generated.h"

UCLASS()
class BANSUNGOFFLINE_CPLUS_API AWeapon : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AWeapon();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Mesh component for the gun
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mesh")
	USkeletalMeshComponent* GunMesh;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Coli")
	class USphereComponent* SphereComponent;
	
	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category=Input,meta=(AllowPrivateAccess = "true"))
	TSubclassOf<AProjectiles> ProjectitlesClass;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gun Properties")
	float Damage;
	//Ammo
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Gun Properties")
	float Ammo;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Gun Properties")
	float MaxAmmo;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Gun Properties")
	float CurrentAmmo;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Gun Properties")
	int Type;
	
	UFUNCTION()
	void ReLoadAmmo();
	void FireShooting(FVector& JerryPosition);
	virtual void Fire(FVector& JerryPosition);
};
