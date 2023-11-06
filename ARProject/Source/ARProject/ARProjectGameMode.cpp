// Copyright Epic Games, Inc. All Rights Reserved.

#include "ARProjectGameMode.h"
#include "ARProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AARProjectGameMode::AARProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
