// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE5TransformTestGameMode.h"
#include "UE5TransformTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE5TransformTestGameMode::AUE5TransformTestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
