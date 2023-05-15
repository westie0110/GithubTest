// Copyright Epic Games, Inc. All Rights Reserved.

#include "GithubTestGameMode.h"
#include "GithubTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGithubTestGameMode::AGithubTestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
