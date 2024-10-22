// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemy.h"
#include "GameFramework/Character.h"
#include "Enemy_Boss.generated.h"

UCLASS()
class BANSUNGOFFLINE_CPLUS_API AEnemy_Boss : public AEnemy
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemy_Boss();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
