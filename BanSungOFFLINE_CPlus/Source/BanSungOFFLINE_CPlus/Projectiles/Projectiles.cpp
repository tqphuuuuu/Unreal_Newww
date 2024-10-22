// Fill out your copyright notice in the Description page of Project Settings.


#include "Projectiles.h"

#include "BanSungOFFLINE_CPlus/BanSungOFFLINE_CPlusCharacter.h"
#include "BanSungOFFLINE_CPlus/Enemy/Enemy.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"


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
	SphereComponent->OnComponentBeginOverlap.AddDynamic(this, &AProjectiles::OnOverlap);
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

	Velocity.Z=0.f;
	SetActorLocation(GetActorLocation() + Velocity);
	
	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ABanSungOFFLINE_CPlusCharacter::StaticClass(), FoundActors);
	if ((FoundActors[0]->GetActorLocation() - GetActorLocation()).SquaredLength() > 1000000007)
	{
		Destroy();
	}
}
// Hàm được gọi khi viên đạn va chạm với một đối tượng khác
void AProjectiles::OnOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// Kiểm tra nếu đối tượng va chạm là kẻ địch (Enermy)
	AEnemy* Enermy = Cast<AEnemy>(OtherActor);
	if (IsValid(Enermy))
	{
		// Giảm máu của kẻ địch khi viên đạn va chạm
		Enermy->Health -= Damage;

		UKismetSystemLibrary::PrintString(this,FString::SanitizeFloat(Enermy->Health));
		// Optional: Phá hủy viên đạn sau khi va chạm
		if (Velocity.SquaredLength() > 0.1f)
		Destroy();
	}

	// Nếu muốn viên đạn bị phá hủy sau khi va chạm với bất kỳ đối tượng nào
	// Destroy();
}
