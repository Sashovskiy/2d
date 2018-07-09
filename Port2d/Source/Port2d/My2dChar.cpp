// Fill out your copyright notice in the Description page of Project Settings.


#include "My2dChar.h"
#include "PaperFlipbookComponent.h"
#include "PaperFlipbook.h"
#include "Components/TextRenderComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "Camera/CameraComponent.h"
#include "ConstructorHelpers.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"





AMy2dChar::AMy2dChar()
{
	static ConstructorHelpers::FObjectFinder<UPaperFlipbook> FlipAnimiIdle(TEXT("PaperFlipbook'/Game/2DSideScroller/import/HeroPack/Hero_Sprite/Flipbook/Idle1.Idle1'"));
	IdleAnimation = FlipAnimiIdle.Object;
	static ConstructorHelpers::FObjectFinder<UPaperFlipbook> FlipAnimiWalk(TEXT("PaperFlipbook'/Game/2DSideScroller/import/HeroPack/Hero_Sprite/Flipbook/Idle1.Idle1'"));
	WalkAnimation = FlipAnimiWalk.Object;
	static ConstructorHelpers::FObjectFinder<UPaperFlipbook> FlipAnimiRun(TEXT("PaperFlipbook'/Game/2DSideScroller/import/HeroPack/Hero_Sprite/Flipbook/Idle1.Idle1'"));
	RunAnimation = FlipAnimiRun.Object;
	static ConstructorHelpers::FObjectFinder<UPaperFlipbook> FlipAnimiCharg(TEXT("PaperFlipbook'/Game/2DSideScroller/import/HeroPack/Hero_Sprite/Flipbook/Idle1.Idle1'"));
	ChargAnimation = FlipAnimiCharg.Object;
	static ConstructorHelpers::FObjectFinder<UPaperFlipbook> FlipAnimiJump(TEXT("PaperFlipbook'/Game/2DSideScroller/import/HeroPack/Hero_Sprite/Flipbook/Idle1.Idle1'"));
	JumpAnimation = FlipAnimiJump.Object;
	static ConstructorHelpers::FObjectFinder<UPaperFlipbook> FlipAnimiFly(TEXT("PaperFlipbook'/Game/2DSideScroller/import/HeroPack/Hero_Sprite/Flipbook/Idle1.Idle1'"));
	FlyAnimation = FlipAnimiFly.Object;
	static ConstructorHelpers::FObjectFinder<UPaperFlipbook> FlipAnimiFall(TEXT("PaperFlipbook'/Game/2DSideScroller/import/HeroPack/Hero_Sprite/Flipbook/Idle1.Idle1'"));
	FallAnimation = FlipAnimiFall.Object;
	static ConstructorHelpers::FObjectFinder<UPaperFlipbook> FlipAnimiLand(TEXT("PaperFlipbook'/Game/2DSideScroller/import/HeroPack/Hero_Sprite/Flipbook/Idle1.Idle1'"));
	LandAnimation = FlipAnimiLand.Object;
	static ConstructorHelpers::FObjectFinder<UPaperFlipbook> FlipAnimiStena(TEXT("PaperFlipbook'/Game/2DSideScroller/import/HeroPack/Hero_Sprite/Flipbook/Idle1.Idle1'"));
	StenaAnimation = FlipAnimiStena.Object;
	static ConstructorHelpers::FObjectFinder<UPaperFlipbook> FlipAnimiClimb(TEXT("PaperFlipbook'/Game/2DSideScroller/import/HeroPack/Hero_Sprite/Flipbook/Idle1.Idle1'"));
	ClimbAnimation = FlipAnimiClimb.Object;
	static ConstructorHelpers::FObjectFinder<UPaperFlipbook> FlipAnimiLadder(TEXT("PaperFlipbook'/Game/2DSideScroller/import/HeroPack/Hero_Sprite/Flipbook/Idle1.Idle1'"));
	LadderAnimation = FlipAnimiLadder.Object;
	static ConstructorHelpers::FObjectFinder<UPaperFlipbook> FlipAnimiArray1(TEXT("PaperFlipbook'/Game/2DSideScroller/import/HeroPack/Hero_Sprite/Flipbook/Idle1.Idle1'"));
	static ConstructorHelpers::FObjectFinder<UPaperFlipbook> FlipAnimiArray2(TEXT("PaperFlipbook'/Game/2DSideScroller/import/HeroPack/Hero_Sprite/Flipbook/Idle1.Idle1'"));
	static ConstructorHelpers::FObjectFinder<UPaperFlipbook> FlipAnimiArray3(TEXT("PaperFlipbook'/Game/2DSideScroller/import/HeroPack/Hero_Sprite/Flipbook/Idle1.Idle1'"));
	static ConstructorHelpers::FObjectFinder<UPaperFlipbook> FlipAnimiArray4(TEXT("PaperFlipbook'/Game/2DSideScroller/import/HeroPack/Hero_Sprite/Flipbook/Idle1.Idle1'"));
	ArrayLadderAnimation.Add(FlipAnimiArray1.Object);
	ArrayLadderAnimation.Add(FlipAnimiArray2.Object);
	ArrayLadderAnimation.Add(FlipAnimiArray3.Object);
	ArrayLadderAnimation.Add(FlipAnimiArray4.Object);
}

void AMy2dChar::FinshPlaying()
{
}

void AMy2dChar::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

}

void AMy2dChar::UpdateAnimation()
{
}

void AMy2dChar::MoveRight(float Value)
{
}

void AMy2dChar::UpdateCharacter()
{
}

void AMy2dChar::SetupPlayerInputComponent(UInputComponent * InputComponent)
{
	// Note: the 'Jump' action and the 'MoveRight' axis are bound to actual keys/buttons/sticks in DefaultInput.ini (editable from Project Settings..Input)
	InputComponent->BindAction("Jump", IE_Pressed, this, &AMy2dChar::CustomJ);
	//PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
	InputComponent->BindAxis("MoveRight", this, &AMy2dChar::MoveRight);
	//PlayerInputComponent->BindAxis("UpAlpha", this, &APort2dCharacter::UpAlpha);

	InputComponent->BindAction("JumpReady", IE_Pressed, this, &AMy2dChar::JumpReady);
	InputComponent->BindAction("JumpReady", IE_Released, this, &AMy2dChar::JumpStart);
}

void AMy2dChar::CustomJ()
{
}

void AMy2dChar::UpAlpha(float Value)
{
}

void AMy2dChar::JumpReady()
{
}

void AMy2dChar::JumpStart()
{
}

void AMy2dChar::FShit()
{
}

void AMy2dChar::BindFuckingFunc_Implementation()
{
}

void AMy2dChar::BindFuckingFuncAA_Implementation()
{
}
