// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Perception/PawnSensingComponent.h"
#include "GameFramework/Actor.h"
#include "DrawDebugHelpers.h"
#include "Components/WidgetComponent.h"
#include "Enemy.generated.h"
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSetHealthWidget);
UCLASS()
class BANSUNGOFFLINE_CPLUS_API AEnemy : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemy();

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
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage")
	float Damage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
	float Health;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MaxHealth")
	float MaxHealth;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Type")
	int Type;

	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "UI", meta = (AllowPrivateAccess = "true"))
	UWidgetComponent* WidgetComponent;
	/*
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Widget")
	UWidgetComponent* WidgetComponent;
	*/

	UPROPERTY(BlueprintAssignable)
	FSetHealthWidget ShowHealthWidget;
	
	virtual void AttackCharacter();

	/*UFUNCTION()
	void OnOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);*/

	void DelayedAttackCharacter();

	FTimerHandle _loopTimeHanlde;

	int32 Timer = 0;

	void PlayDeathAnimation();
	void CheckHealth();
	void OnDeathComplete();
	bool bIsDead = false;
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	

};
