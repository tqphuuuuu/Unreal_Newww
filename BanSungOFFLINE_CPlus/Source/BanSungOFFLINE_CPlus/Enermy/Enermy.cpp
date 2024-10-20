// Fill out your copyright notice in the Description page of Project Settings.


#include "Enermy.h"

#include "Components/SphereComponent.h"
#include "Perception/PawnSensingComponent.h"

// Sets default values
AEnermy::AEnermy()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
	SphereComponent->SetupAttachment(RootComponent);

	PawnSensingComponent = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("PawnSensingComponent"));
	PawnSensingComponent->SightRadius = 2500.0f; // Adjust the range of sight
	PawnSensingComponent->SetPeripheralVisionAngle(30.0f); // Set the field of view
}

// Called when the game starts or when spawned
void AEnermy::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnermy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AEnermy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

