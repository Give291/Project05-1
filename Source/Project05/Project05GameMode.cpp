// Copyright Epic Games, Inc. All Rights Reserved.

#include "Project05GameMode.h"
#include "Project05Character.h"
#include "UObject/ConstructorHelpers.h"

AProject05GameMode::AProject05GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
