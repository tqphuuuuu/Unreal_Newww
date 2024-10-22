// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy_Zombie.h"


// Sets default values
AEnemy_Zombie::AEnemy_Zombie()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Health = 50;
	MaxHealth = 50;
	Damage = 5.f;
}

// Called when the game starts or when spawned
void AEnemy_Zombie::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemy_Zombie::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (Health <= 0)
	{
		Destroy();
	}
}

// Called to bind functionality to input
void AEnemy_Zombie::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}


