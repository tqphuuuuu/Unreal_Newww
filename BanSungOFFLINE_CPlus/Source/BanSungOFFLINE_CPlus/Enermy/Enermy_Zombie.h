// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enermy.h"
#include "GameFramework/Character.h"
#include "Enermy_Zombie.generated.h"

UCLASS()
class BANSUNGOFFLINE_CPLUS_API AEnermy_Zombie : public AEnermy
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnermy_Zombie();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
