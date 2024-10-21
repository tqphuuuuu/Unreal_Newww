// Fill out your copyright notice in the Description page of Project Settings.


#include "Projectiles_Pistol.h"


// Sets default values
AProjectiles_Pistol::AProjectiles_Pistol()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Damage = 10;
}

// Called when the game starts or when spawned
void AProjectiles_Pistol::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AProjectiles_Pistol::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

