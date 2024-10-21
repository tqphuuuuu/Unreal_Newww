// Fill out your copyright notice in the Description page of Project Settings.


#include "Enermy_Zombie.h"


// Sets default values
AEnermy_Zombie::AEnermy_Zombie()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Health = 100;
}

// Called when the game starts or when spawned
void AEnermy_Zombie::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnermy_Zombie::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (Health <= 0)
	{
		Destroy();
	}
}

// Called to bind functionality to input
void AEnermy_Zombie::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

