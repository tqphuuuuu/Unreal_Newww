// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemPickUp_AmmoPistol.h"

#include "BanSungOFFLINE_CPlus/BanSungOFFLINE_CPlusCharacter.h"
#include "BanSungOFFLINE_CPlus/BanSungOFFLINE_CPlusPlayerController.h"
#include "BanSungOFFLINE_CPlus/Weapon/Weapon_Pistol.h"
#include "Kismet/KismetSystemLibrary.h"


// Sets default values
AItemPickUp_AmmoPistol::AItemPickUp_AmmoPistol()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SphereComponent->OnComponentBeginOverlap.AddDynamic(this, &AItemPickUp_AmmoPistol::OnOverlap);

}

// Called when the game starts or when spawned
void AItemPickUp_AmmoPistol::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AItemPickUp_AmmoPistol::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AItemPickUp_AmmoPistol::OnOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//UKismetSystemLibrary::DrawDebugSphere(this, GetActorLocation(), SphereComponent->GetScaledSphereRadius(), 12, FColor::Red, false, 5.0f);

	ABanSungOFFLINE_CPlusCharacter* PlayerCharacter = Cast<ABanSungOFFLINE_CPlusCharacter>(OtherActor);
	if (IsValid(PlayerCharacter))
	{
		
		AWeapon_Pistol* Pistol = Cast<AWeapon_Pistol>(PlayerCharacter->GetOwner()); 

		if (IsValid(Pistol))
		{

			if(Pistol->Ammo <= 225 )
			{

				//UKismetSystemLibrary::PrintString(this, "Da va cham voi pickup");
				Pistol->CurrentAmmo += 15;  // Add ammo to the controller
				Destroy();  // Destroy the ammo pickup
				
			}
			else
			{
				Pistol->Ammo =240 ;
				Destroy();
			}
		}
		else
		{
			UKismetSystemLibrary::PrintString(this,"Valid is not Pistol");
		}

	}
}
