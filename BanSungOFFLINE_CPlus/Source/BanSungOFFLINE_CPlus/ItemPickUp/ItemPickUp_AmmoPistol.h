// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ItemPickUp.h"
#include "GameFramework/Actor.h"
#include "ItemPickUp_AmmoPistol.generated.h"

UCLASS()
class BANSUNGOFFLINE_CPLUS_API AItemPickUp_AmmoPistol : public AItemPickUp
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AItemPickUp_AmmoPistol();

	UFUNCTION()
	void OnOverlap (UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
