// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "Port2dGameMode.h"
#include "Port2dCharacter.h"

APort2dGameMode::APort2dGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = APort2dCharacter::StaticClass();	
}
