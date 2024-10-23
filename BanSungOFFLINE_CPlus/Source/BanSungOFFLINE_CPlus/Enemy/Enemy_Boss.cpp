// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy_Boss.h"


// Sets default values
AEnemy_Boss::AEnemy_Boss()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Health = 100;
	MaxHealth =100;
	Damage = 10.f;
}

// Called when the game starts or when spawned
void AEnemy_Boss::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemy_Boss::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

// Called to bind functionality to input
void AEnemy_Boss::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

