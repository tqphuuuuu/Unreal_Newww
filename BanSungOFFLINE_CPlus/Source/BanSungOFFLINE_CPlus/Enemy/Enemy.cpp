// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy.h"

#include "BanSungOFFLINE_CPlus/BanSungOFFLINE_CPlusCharacter.h"
#include "BanSungOFFLINE_CPlus/BanSungOFFLINE_CPlusPlayerController.h"
#include "Components/SphereComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Perception/PawnSensingComponent.h"

// Sets default values
AEnemy::AEnemy()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
	SphereComponent->SetupAttachment(RootComponent);

	PawnSensingComponent = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("PawnSensingComponent"));
	PawnSensingComponent->SightRadius = 2500.0f; // Adjust the range of sight
	PawnSensingComponent->SetPeripheralVisionAngle(60.0f); // Set the field of view

	WidgetComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("HealthWidget"));
	WidgetComponent->SetupAttachment(RootComponent);

	
	SphereComponent->OnComponentBeginOverlap.AddDynamic(this, &AEnemy::OnOverlap);

}

// Called when the game starts or when spawned
void AEnemy::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Timer++;
	AttackCharacter();
		
	
}

void AEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}
void AEnemy::AttackCharacter()
{
	FVector Start = GetMesh()->GetSocketLocation(FName("A"));
	FVector End = GetMesh()->GetSocketLocation(FName("B"));

	TArray<AActor*> IgnoreActors;
	IgnoreActors.Add(this); // Bỏ qua "Enemy"

	// Thực hiện phép dò tia (Line Trace) từ "RightHand" đến "RightArm"
	FHitResult HitResult;
	bool bHit = UKismetSystemLibrary::LineTraceSingle(GetWorld(),Start,End,
		static_cast<ETraceTypeQuery>(ECollisionChannel::ECC_Pawn),  // Thử với kênh Pawn
		false,
		IgnoreActors,
		EDrawDebugTrace::None,
		HitResult,
		true);
	
	if (bHit)
	{
		// Kiểm tra đối tượng bị hit có phải là nhân vật không
		ACharacter* PlayerCharacter = Cast<ACharacter>(HitResult.GetActor());
		if (PlayerCharacter && PlayerCharacter->IsA(ABanSungOFFLINE_CPlusCharacter::StaticClass()))
		{
			ABanSungOFFLINE_CPlusPlayerController* PlayerController = Cast<ABanSungOFFLINE_CPlusPlayerController>(PlayerCharacter->GetController());
			if (PlayerController)
			{
				if (Timer >= 300)
				{
					Timer = 0;
					PlayerController->Health -=Damage;
					PlayerController->ShowHealth.Broadcast();
				}
			}

		}
		
	}
}

void AEnemy::OnOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// Kiểm tra nếu OtherActor là nhân vật
	ACharacter* PlayerCharacter = Cast<ACharacter>(OtherActor);
	if (PlayerCharacter && PlayerCharacter->IsA(ABanSungOFFLINE_CPlusCharacter::StaticClass()))
	{
		// Chạy animation tấn công
		if (AttackAnimation)
		{
				GetMesh()->PlayAnimation(AttackAnimation, true);
				
		}

	}
	else
	{
		
	}
}


