// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon.h"

#include "BanSungOFFLINE_CPlus/BanSungOFFLINE_CPlusCharacter.h"
#include "BanSungOFFLINE_CPlus/BanSungOFFLINE_CPlusPlayerController.h"
#include "Components/SphereComponent.h"
#include "Kismet/KismetSystemLibrary.h"


// Sets default values
AWeapon::AWeapon()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	//SetRootComponent(SphereComponent);
	SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
	SphereComponent->SetupAttachment(RootComponent);
	SetRootComponent(SphereComponent);
	
	GunMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Gun_Pistol"));
	GunMesh->SetupAttachment(SphereComponent);

	
}

// Called when the game starts or when spawned
void AWeapon::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

FTimerHandle TimerHandle_SpawnRifle;

void AWeapon::Fire(FVector& JerryPosition)
{
	
	UKismetSystemLibrary::PrintString(this,"Da Click");
	
	
	// Kiểm tra Type để quyết định loại đạn cần bắn
	if ( Type == 0)  // Type 0 là Pistol
	{
		UKismetSystemLibrary::PrintString(this,"Xem có chạy không");

		// Thực hiện bắn đạn Pistol
		FTransform x = GunMesh->GetSocketTransform("Socket_Point");
		UKismetSystemLibrary::PrintString(this, x.GetLocation().ToString());

		AProjectiles_Pistol* Jerry = GetWorld()->SpawnActor<AProjectiles_Pistol>(Projectile_Pistol, x);
		FVector Temp = (JerryPosition - GetActorLocation());
		Temp.Normalize();
		Jerry->Velocity = Temp * SpeedAmmo;
	}
	

	// Trừ đạn sau khi bắn
	CurrentAmmo--;

}

void AWeapon::FireShooting(FVector& JerryPosition)
{
	if (Type == 1)
	{
		ABanSungOFFLINE_CPlusPlayerController* MyController = Cast<ABanSungOFFLINE_CPlusPlayerController>(GetOwner());
	
		// Thực hiện bắn đạn Rifle
		UKismetSystemLibrary::PrintString(this,"Xem có chạy không1");

		FTransform x = GunMesh->GetSocketTransform("Socket_Point");
		UKismetSystemLibrary::PrintString(this, x.GetLocation().ToString());

		AProjectiles_Rifle* Jerry = GetWorld()->SpawnActor<AProjectiles_Rifle>(Projectile_Rifle, x);
		FVector Temp = (JerryPosition - GetActorLocation());
		Temp.Normalize();
		Jerry->Velocity = Temp * SpeedAmmo;

		CurrentAmmo--;
	}
	
}

