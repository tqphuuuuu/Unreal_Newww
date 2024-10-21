// Fill out your copyright notice in the Description page of Project Settings.


#include "Enermy_Boss.h"


// Sets default values
AEnermy_Boss::AEnermy_Boss()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Health = 50;
}

// Called when the game starts or when spawned
void AEnermy_Boss::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnermy_Boss::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (Health <= 0)
	{
		Destroy();
	}
}

// Called to bind functionality to input
void AEnermy_Boss::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

