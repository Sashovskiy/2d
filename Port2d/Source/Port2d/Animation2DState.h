// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedEnum.h"
#include "Animation2DState.generated.h"

/**
 * 
 */
UENUM(BlueprintType)
enum class EAnim2dState :uint8
{
	A2D_Idle		UMETA(DisplayName = "Idle"),
	A2D_Walk		UMETA(DisplayName = "Walk"),
	A2D_Run			UMETA(DisplayName = "Run"),
	A2D_Charg		UMETA(DisplayName = "Charg"),
	A2D_Jump		UMETA(DisplayName = "Jump"),
	A2D_OneMoreJump	UMETA(DisplayName = "One more Jump"),
	A2D_Fall		UMETA(DisplayName = "Fall"),
	A2D_Land		UMETA(DisplayName = "Landing"),
	A2D_Wall		UMETA(DisplayName = "Wall"),
	A2D_GrabCorner	UMETA(DisplayName = "Gran Corner")
};

