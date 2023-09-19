// Copyright Epic Games, Inc. All Rights Reserved.

#include "FlyerTestGameMode.h"
#include "FlyerTestPawn.h"

AFlyerTestGameMode::AFlyerTestGameMode()
{
	// set default pawn class to our flying pawn
	DefaultPawnClass = AFlyerTestPawn::StaticClass();
}
