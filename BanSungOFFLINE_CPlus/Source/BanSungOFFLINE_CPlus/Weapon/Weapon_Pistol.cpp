// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon_Pistol.h"


// Sets default values
AWeapon_Pistol::AWeapon_Pistol()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Damage = 10.0f;
	Range = 500.0f;
	FireRate = 2.0f;
	Ammo= 45;
	CurrentAmmo = 15;
	MaxAmmo = 15;
	Type = 0;
	SpeedAmmo = 50;
}

// Called when the game starts or when spawned
void AWeapon_Pistol::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWeapon_Pistol::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

