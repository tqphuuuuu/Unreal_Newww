// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon_Rifle.h"


// Sets default values
AWeapon_Rifle::AWeapon_Rifle()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Damage = 20.0f;
	Ammo =120;
	MaxAmmo = 40;
	CurrentAmmo = 40;
	Type =1;
	SpeedAmmo = 50;
}

// Called when the game starts or when spawned
void AWeapon_Rifle::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWeapon_Rifle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

