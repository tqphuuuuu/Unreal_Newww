// Fill out your copyright notice in the Description page of Project Settings.


#include "Projectiles.h"

#include "Components/SphereComponent.h"


// Sets default values
AProjectiles::AProjectiles()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
	SphereComponent->SetupAttachment(RootComponent);
	SetRootComponent(SphereComponent);
	
	Projectiles = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Gun_Pistol"));
	Projectiles->SetupAttachment(SphereComponent);

	
}

// Called when the game starts or when spawned
void AProjectiles::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AProjectiles::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

