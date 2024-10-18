// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapon.h"
#include "GameFramework/Actor.h"
#include "Weapon_Pistol.generated.h"

UCLASS()
class BANSUNGOFFLINE_CPLUS_API AWeapon_Pistol : public AWeapon
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AWeapon_Pistol();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
