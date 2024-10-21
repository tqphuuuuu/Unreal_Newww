// Fill out your copyright notice in the Description page of Project Settings.


#include "Enermy.h"

#include "BanSungOFFLINE_CPlus/BanSungOFFLINE_CPlusCharacter.h"
#include "BanSungOFFLINE_CPlus/BanSungOFFLINE_CPlusPlayerController.h"
#include "Components/SphereComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"
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

void AEnermy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}
void AEnermy::AttackCharacter()
{
	FVector Start = GetMesh()->GetSocketLocation(FName("A"));
	FVector End = GetMesh()->GetSocketLocation(FName("B"));

	TArray<AActor*> IgnoreActors;
	IgnoreActors.Add(this); // Bỏ qua "Enemy"

	// Thực hiện phép dò tia (Line Trace) từ "RightHand" đến "RightArm"
	FHitResult HitResult;
	bool bHit = UKismetSystemLibrary::LineTraceSingle(
		GetWorld(),
		Start,  // Điểm bắt đầu là từ socket 
		End,    // Điểm kết thúc là từ socket 
		ETraceTypeQuery::TraceTypeQuery1, 
		false,
		IgnoreActors,
		EDrawDebugTrace::ForDuration, // Hiển thị Line Trace trong một thời gian ngắn để debug
		HitResult,
		true
	);
	
	if (bHit)
	{
		GetMesh()->PlayAnimation(AttackAnimation,true);
		// Kiểm tra nếu đối tượng va chạm là nhân vật
		ACharacter* PlayerCharacter = Cast<ACharacter>(HitResult.GetActor());
		if (PlayerCharacter)
		{
			// Tấn công nhân vật
			UKismetSystemLibrary::PrintString(this, TEXT("Tấn công nhân vật!"), true, true, FLinearColor::Green, 2.0f);

			ABanSungOFFLINE_CPlusPlayerController* PlayerController = Cast<ABanSungOFFLINE_CPlusPlayerController>(PlayerCharacter->GetController());
			if (PlayerController)
			{
				PlayerController->Health -=Damage;
			}
			// Gây damage lên nhân vật
			UGameplayStatics::ApplyDamage(PlayerCharacter, Damage, GetController(), this, UDamageType::StaticClass());
		}
	}
}


