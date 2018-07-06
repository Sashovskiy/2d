// Fill out your copyright notice in the Description page of Project Settings.


#include "My2dChar.h"
#include "PaperFlipbookComponent.h"
#include "Components/TextRenderComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "Camera/CameraComponent.h"


void AMy2dChar::FinshPlaying()
{
}

AMy2dChar::AMy2dChar()
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
