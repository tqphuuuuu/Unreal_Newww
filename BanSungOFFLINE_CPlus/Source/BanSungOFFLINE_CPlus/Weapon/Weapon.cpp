// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon.h"

#include "BanSungOFFLINE_CPlus/BanSungOFFLINE_CPlusCharacter.h"
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

void AWeapon::Fire()
{
	
	UKismetSystemLibrary::PrintString(this,"Da Click");
	
	ABanSungOFFLINE_CPlusCharacter* MyCharacter = Cast<ABanSungOFFLINE_CPlusCharacter>(GetOwner());

	
	// Kiểm tra Type để quyết định loại đạn cần bắn
	if ( Type == 0)  // Type 0 là Pistol
	{
		// Thực hiện bắn đạn Pistol
		FTransform x = GunMesh->GetSocketTransform("Socket_Point");
		GetWorld()->SpawnActor<AActor>(Projectile_Pistol, x);
	}
	else if (Type == 1)  // Type 1 là Rifle
	{
		// Thực hiện bắn đạn Rifle
		FTransform x = GunMesh->GetSocketTransform("Socket_Point");
		GetWorld()->SpawnActor<AActor>(Projectile_Rifle, x);
	}

	// Trừ đạn sau khi bắn
	CurrentAmmo--;

}

