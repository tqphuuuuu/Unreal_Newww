// Copyright Epic Games, Inc. All Rights Reserved.

#include "BanSungOFFLINE_CPlusGameMode.h"
#include "BanSungOFFLINE_CPlusPlayerController.h"
#include "BanSungOFFLINE_CPlusCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABanSungOFFLINE_CPlusGameMode::ABanSungOFFLINE_CPlusGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ABanSungOFFLINE_CPlusPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// set default controller to our Blueprinted controller
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownPlayerController"));
	if(PlayerControllerBPClass.Class != NULL)
	{
		PlayerControllerClass = PlayerControllerBPClass.Class;
	}
}