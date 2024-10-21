// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Perception/PawnSensingComponent.h"
#include "GameFramework/Actor.h"
#include "DrawDebugHelpers.h"
#include "Enermy.generated.h"

UCLASS()
class BANSUNGOFFLINE_CPLUS_API AEnermy : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnermy();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, Category = "AI")
	UPawnSensingComponent* PawnSensingComponent;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	class USphereComponent* SphereComponent;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Animation")
	UAnimationAsset* DeathAnimation;


public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(EditDefaultsOnly, Category = "Combat")
	float AttackDistance = 500.0f; 
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
	class UAnimSequence* AttackAnimation;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gun Properties")
	float Damage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gun Properties")
	float Health;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Gun Properties")
	int Type;

	virtual void AttackCharacter();
	
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
