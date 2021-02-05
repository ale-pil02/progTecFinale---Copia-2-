// Copyright Epic Games, Inc. All Rights Reserved.

#include "progTecFinaleGameMode.h"
#include "progTecFinaleCharacter.h"
#include "UObject/ConstructorHelpers.h"

AprogTecFinaleGameMode::AprogTecFinaleGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
