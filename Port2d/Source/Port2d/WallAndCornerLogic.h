// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WallAndCornerLogic.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PORT2D_API UWallAndCornerLogic : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UWallAndCornerLogic();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	/*
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Overlap")
	void BeginOverlapWall();
	void BeginOverlapWall_Implementation();*/

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
	
};
