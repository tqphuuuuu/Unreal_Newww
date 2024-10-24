// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemPickUp_Health.h"

#include "BanSungOFFLINE_CPlus/BanSungOFFLINE_CPlusCharacter.h"
#include "BanSungOFFLINE_CPlus/BanSungOFFLINE_CPlusPlayerController.h"
#include "Components/SphereComponent.h"
#include "GameFramework/RotatingMovementComponent.h"


// Sets default values
AItemPickUp_Health::AItemPickUp_Health()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SphereComponent->OnComponentBeginOverlap.AddDynamic(this, &AItemPickUp_Health::OnOverlap);
}

// Called when the game starts or when spawned
void AItemPickUp_Health::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AItemPickUp_Health::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AItemPickUp_Health::OnOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	
	ABanSungOFFLINE_CPlusCharacter* PlayerCharacter = Cast<ABanSungOFFLINE_CPlusCharacter>(OtherActor);
	if (IsValid(PlayerCharacter))
	{
		ABanSungOFFLINE_CPlusPlayerController* PlayerController = Cast<ABanSungOFFLINE_CPlusPlayerController>(PlayerCharacter->GetController());
		if (IsValid(PlayerController))
		{

			
			if(PlayerController->Health <= PlayerController->MaxHealth -5)
			{
				PlayerController->Health += 5;  
				Destroy(); 
				
			}
			else
			{
				PlayerController->Health = PlayerController->MaxHealth;
				Destroy();
			}
		}
	}
}