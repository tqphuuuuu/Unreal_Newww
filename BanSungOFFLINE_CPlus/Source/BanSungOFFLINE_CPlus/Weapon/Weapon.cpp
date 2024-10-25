// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon.h"

#include "BanSungOFFLINE_CPlus/BanSungOFFLINE_CPlusCharacter.h"
#include "BanSungOFFLINE_CPlus/BanSungOFFLINE_CPlusPlayerController.h"
#include "BanSungOFFLINE_CPlus/Enemy/Enemy.h"
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
	// Kiểm tra Type để quyết định loại đạn cần bắn
	if (Type == 0  )  // Type 0 là Pistol
	{
		
		// Thực hiện bắn đạn Pistol
		FTransform x = GunMesh->GetSocketTransform("Socket_Point");
		//UKismetSystemLibrary::PrintString(this, x.GetLocation().ToString());

		AProjectiles_Pistol* Jerry = GetWorld()->SpawnActor<AProjectiles_Pistol>(Projectile_Pistol, x);
		/*FVector Temp = (JerryPosition - GetActorLocation());
		Temp.Normalize();
		Jerry->Velocity = Temp * SpeedAmmo;*/
		Jerry->ProjectitleFly(JerryPosition);
		
	}
	else
	{
		if (Type == 1)
		{
			FTransform x = GunMesh->GetSocketTransform("Socket_Point");
			//	UKismetSystemLibrary::PrintString(this, x.GetLocation().ToString());

			AProjectiles_Rifle* Jerry = GetWorld()->SpawnActor<AProjectiles_Rifle>(Projectile_Rifle, x);
			/*FVector Temp = (JerryPosition - GetActorLocation());
			Temp.Normalize();
			Jerry->Velocity = Temp * SpeedAmmo;*/
			Jerry->ProjectitleFly(JerryPosition);

		}
	}
	
	CurrentAmmo--;

}

void AWeapon::FireShooting(FVector& JerryPosition)
{
	/*if (Type == 1)
	{
		ABanSungOFFLINE_CPlusPlayerController* MyController = Cast<ABanSungOFFLINE_CPlusPlayerController>(GetOwner());
	
		// Thực hiện bắn đạn Rifle
		FTransform x = GunMesh->GetSocketTransform("Socket_Point");
	//	UKismetSystemLibrary::PrintString(this, x.GetLocation().ToString());

		AProjectiles_Rifle* Jerry = GetWorld()->SpawnActor<AProjectiles_Rifle>(Projectile_Rifle, x);
		FVector Temp = (JerryPosition - GetActorLocation());
		Temp.Normalize();
		Jerry->Velocity = Temp * SpeedAmmo;
		
		UKismetSystemLibrary::PrintString(this,FString::SanitizeFloat(Jerry->Velocity.Length()));
		CurrentAmmo--;
	}*/
	
}

void AWeapon::ReLoadAmmo()
{	
	if (CurrentAmmo == MaxAmmo)  // Kiểm tra nếu băng đạn đã đầy
	{
		return;  // Không cần nạp đạn nếu băng đạn đã đầy
	}

	// Tính số đạn cần để nạp đầy băng đạn
	int32 AmmoNeededToFillClip = MaxAmmo - CurrentAmmo;

	// Nếu đạn dự trữ đủ để nạp đầy băng
	if (Ammo >= AmmoNeededToFillClip)
	{
		// Nạp đầy băng đạn và trừ đạn dự trữ
		CurrentAmmo += AmmoNeededToFillClip;
		Ammo -= AmmoNeededToFillClip;
		
	}
	else
	{
		// Nếu không đủ đạn dự trữ, nạp hết đạn còn lại
		CurrentAmmo += Ammo;  
		Ammo = 0; 
	}
}
