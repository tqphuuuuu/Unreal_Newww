// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemPickUp.h"



// Sets default values
AItemPickUp::AItemPickUp()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
	SetRootComponent(SphereComponent);

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("AmmoMesh"));
	Mesh->SetupAttachment(SphereComponent);

	
	RotatingMovement = CreateDefaultSubobject<URotatingMovementComponent>(TEXT("RotatingMovement"));
}

// Called when the game starts or when spawned
void AItemPickUp::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AItemPickUp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

