// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "Port2dCharacter.h"
#include "PaperFlipbookComponent.h"
#include "Components/TextRenderComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "Camera/CameraComponent.h"

DEFINE_LOG_CATEGORY_STATIC(SideScrollerCharacter, Log, All);
DEFINE_LOG_CATEGORY_STATIC(AnimationLog, Log, All);
//////////////////////////////////////////////////////////////////////////
// APort2dCharacter


APort2dCharacter::APort2dCharacter()
{
	// Use only Yaw from the controller and ignore the rest of the rotation.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = true;
	bUseControllerRotationRoll = false;
	
	// Set the size of our collision capsule.
	GetCapsuleComponent()->SetCapsuleHalfHeight(96.0f);
	GetCapsuleComponent()->SetCapsuleRadius(40.0f);

	// Create a camera boom attached to the root (capsule)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 500.0f;
	CameraBoom->SocketOffset = FVector(0.0f, 0.0f, 75.0f);
	CameraBoom->bAbsoluteRotation = true;
	CameraBoom->bDoCollisionTest = false;
	CameraBoom->RelativeRotation = FRotator(0.0f, -90.0f, 0.0f);
	

	// Create an orthographic camera (no perspective) and attach it to the boom
	SideViewCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("SideViewCamera"));
	SideViewCameraComponent->ProjectionMode = ECameraProjectionMode::Orthographic;
	SideViewCameraComponent->OrthoWidth = 2048.0f;
	SideViewCameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);

	// Prevent all automatic rotation behavior on the camera, character, and camera component
	CameraBoom->bAbsoluteRotation = true;
	SideViewCameraComponent->bUsePawnControlRotation = false;
	SideViewCameraComponent->bAutoActivate = true;
	GetCharacterMovement()->bOrientRotationToMovement = false;

	// Configure character movement
	GetCharacterMovement()->GravityScale = 2.0f;
	GetCharacterMovement()->AirControl = 0.80f;
	GetCharacterMovement()->JumpZVelocity = 1000.f;
	GetCharacterMovement()->GroundFriction = 3.0f;
	GetCharacterMovement()->MaxWalkSpeed = 600.0f;
	GetCharacterMovement()->MaxFlySpeed = 600.0f;

	// Lock character motion onto the XZ plane, so the character can't move in or out of the screen
	GetCharacterMovement()->bConstrainToPlane = true;
	GetCharacterMovement()->SetPlaneConstraintNormal(FVector(0.0f, -1.0f, 0.0f));

	// Behave like a traditional 2D platformer character, with a flat bottom instead of a curved capsule bottom
	// Note: This can cause a little floating when going up inclines; you can choose the tradeoff between better
	// behavior on the edge of a ledge versus inclines by setting this to true or false
	GetCharacterMovement()->bUseFlatBaseForFloorChecks = true;

    // 	TextComponent = CreateDefaultSubobject<UTextRenderComponent>(TEXT("IncarGear"));
    // 	TextComponent->SetRelativeScale3D(FVector(3.0f, 3.0f, 3.0f));
    // 	TextComponent->SetRelativeLocation(FVector(35.0f, 5.0f, 20.0f));
    // 	TextComponent->SetRelativeRotation(FRotator(0.0f, 90.0f, 0.0f));
    // 	TextComponent->SetupAttachment(RootComponent);

	// Enable replication on the Sprite component so animations show up when networked
	GetSprite()->SetIsReplicated(true);
	bReplicates = true;

	//GetSprite()->OnFinishedPlaying.AddDynamic(this, &APort2dCharacter::FinshPlaying);

}

//////////////////////////////////////////////////////////////////////////
// Animation
void APort2dCharacter::FinshPlaying()
{
	UE_LOG(LogTemp, Warning, TEXT("BINDisJUMP"));
	GetSprite()->SetLooping(true);
	isJump = false;
	AnimState = EAnim2dState::A2D_OneMoreJump;
	//GetSprite()->OnFinishedPlaying.Remove(this, TEXT("FinshPlaying"));
	
}

void APort2dCharacter::UpdateAnimation()
{
	const FVector PlayerVelocity = GetVelocity();
	const float PlayerSpeedSqr = PlayerVelocity.SizeSquared();

	//if (isJump)
	//	UE_LOG(LogTemp, Warning, TEXT("isJump"));

	////	GetSprite()->SetLooping(!isJump);

	//if(GetSprite()->IsLooping())
	//	UE_LOG(LogTemp, Warning, TEXT("Loop"))
	
	
	// Are we moving or standing still?
	/*UPaperFlipbook* DesiredAnimation = ((PlayerSpeedSqr > 0.0f)&&(GetCharacterMovement()->IsMovingOnGround() && !bCharg)) ? RunningAnimation : IdleAnimation;
	if( GetSprite()->GetFlipbook() != DesiredAnimation 	)
	{
		GetSprite()->SetFlipbook(DesiredAnimation);
	}*/

	/*if((PlayerVelocity.SizeSquared2D() > 0.0f))if ((GetCharacterMovement()->IsMovingOnGround()))*/
	

	if(GetSprite()->OnFinishedPlaying.Contains(this,TEXT("FinshPlaying")))
		UE_LOG(LogTemp, Warning, TEXT("EAnim2dState::123"));


	switch (AnimState)
	{
		
	case EAnim2dState::A2D_Idle : 
		if (GetSprite()->GetFlipbook() != IdleAnimation)
		GetSprite()->SetFlipbook(IdleAnimation);
		break;
	case EAnim2dState::A2D_Walk:
		if (GetSprite()->GetFlipbook() != WalkAnimation)
		GetSprite()->SetFlipbook(WalkAnimation);
		break;
	case EAnim2dState::A2D_Run : 
		if (GetSprite()->GetFlipbook() != RunAnimation)
		GetSprite()->SetFlipbook(RunAnimation);
		break;
	case EAnim2dState::A2D_Charg : 
		if (GetSprite()->GetFlipbook() != ChargAnimation)
		GetSprite()->SetFlipbook(ChargAnimation);
		break;
	case EAnim2dState::A2D_Jump : 
		if (GetSprite()->GetFlipbook() != JumpAnimation)
		{
			//GetSprite()->SetLooping(false);
			GetSprite()->SetFlipbook(JumpAnimation);
			isJump = true;
			
		}
		if ((GetSprite()->GetPlaybackPositionInFrames() == 1)&& isJump)
		{
			LaunchCharacter(FVector(0.f, 0.f, 1.f) * 700 * ((doubleJ && !GetCharacterMovement()->IsMovingOnGround())?1.5f:1), false, false);
			isJump = false;
			if (doubleJ) doubleJ = false;
		}

		if (GetSprite()->GetPlaybackPositionInFrames() == 3)
			FShit();
		UE_LOG(LogTemp, Warning, TEXT("fsffsf: %d "), GetSprite()->GetPlaybackPositionInFrames());

		//if (!GetSprite()->OnFinishedPlaying.Contains(this, TEXT("FinshPlaying"))) {
		//	GetSprite()->OnFinishedPlaying.RemoveDynamic(this, &APort2dCharacter::FinshPlaying);

			//GetSprite()->OnFinishedPlaying.AddDynamic(this, &APort2dCharacter::FinshPlaying);

			
		/*else
		{
			AnimState = EAnim2dState::A2D_OneMoreJump;
			isJump = false;
		}*/
		/*if (!GetSprite()->OnFinishedPlaying.Contains(this, TEXT("FinshPlaying")))
		GetSprite()->OnFinishedPlaying.AddDynamic(this, &APort2dCharacter::FinshPlaying);*/
		//
		
		//if( == GetSprite()->GetFlipbookLength())
			//AnimState = EAnim2dState::A2D_OneMoreJump;
		break;
	case EAnim2dState::A2D_OneMoreJump : 
		GetSprite()->SetFlipbook(FlyAnimation);
		AnimState = EAnim2dState::A2D_Fall;
		break;
	case EAnim2dState::A2D_Fall :
		if(GetSprite()->GetFlipbook() != FallAnimation)
		GetSprite()->SetFlipbook(FallAnimation);
		if (GetCharacterMovement()->IsMovingOnGround())
			AnimState = EAnim2dState::A2D_Land;
		break;
	case EAnim2dState::A2D_Land : 
		if (GetSprite()->GetFlipbook() != LandAnimation)
		GetSprite()->SetFlipbook(LandAnimation);
		else
		AnimState = EAnim2dState::A2D_Idle;
		break;
	case EAnim2dState::A2D_Wall:
		if (GetSprite()->GetFlipbook() != StenaAnimation)
			GetSprite()->SetFlipbook(StenaAnimation);
		else
			AnimState = EAnim2dState::A2D_Wall;
		break;
	case EAnim2dState::A2D_GrabCorner:
		if (GetSprite()->GetFlipbook() != ClimbAnimation)
			GetSprite()->SetFlipbook(ClimbAnimation);
		else
			AnimState = EAnim2dState::A2D_GrabCorner;
		break;



	default:
		break;
	}










}

void APort2dCharacter::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	//LaunchCharacter(FVector(0.f, 0.f, 1.f)*(test_alpha), false, false);
	if (bCharg)
	{
		JumpPower += 5;
		UE_LOG(LogTemp, Warning, TEXT("Jump Power : %f"), JumpPower);
	}
	
	

	if (stena) {
		if (!Ugol)
		this->GetMovementComponent()->Velocity = FVector(0.f, 0.f, -1.f);//more interesting desithion
		else
		this->GetMovementComponent()->Velocity = FVector(0.f, 0.f, 0.f);//more interesting desithion
	//LaunchCharacter(FVector(0.f, 0.f, 1.f) * 30/*test_alpha*/, false, false);
		///UE_LOG(SideScrollerCharacter, Warning, TEXT("TRUE: %s"), *GetVelocity().ToString() );
	}
	else
	{
		Ugol = false;
	}
	UE_LOG(SideScrollerCharacter, Warning, TEXT("FALSE: %s"), *GetVelocity().ToString());
	UpdateCharacter();
}


//////////////////////////////////////////////////////////////////////////
// Input

void APort2dCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Note: the 'Jump' action and the 'MoveRight' axis are bound to actual keys/buttons/sticks in DefaultInput.ini (editable from Project Settings..Input)
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &APort2dCharacter::CustomJ);
	//PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
	PlayerInputComponent->BindAxis("MoveRight", this, &APort2dCharacter::MoveRight);
	PlayerInputComponent->BindAxis("UpAlpha", this, &APort2dCharacter::UpAlpha);

	PlayerInputComponent->BindAction("JumpReady", IE_Pressed, this, &APort2dCharacter::JumpReady);
	PlayerInputComponent->BindAction("JumpReady", IE_Released, this, &APort2dCharacter::JumpStart);


	PlayerInputComponent->BindTouch(IE_Pressed, this, &APort2dCharacter::TouchStarted);
	PlayerInputComponent->BindTouch(IE_Released, this, &APort2dCharacter::TouchStopped);
}



void APort2dCharacter::FShChangUgol(bool chang)
{
	Ugol = chang;
	UE_LOG(AnimationLog, Warning, TEXT("A2D_GrabCorner 1 "));
	if (chang)
	{
		UE_LOG(AnimationLog, Warning, TEXT("A2D_GrabCorner 2 "));
		AnimState = EAnim2dState::A2D_GrabCorner;
	}
}

void APort2dCharacter::MoveRight(float Value)
{
	/*UpdateChar();*/
	if (GetMovementComponent()->IsMovingOnGround() && (AnimState != EAnim2dState::A2D_Jump) && (Value != 0.f) )
		AnimState = EAnim2dState::A2D_Run;
	else 
		if((AnimState == EAnim2dState::A2D_Run) && (Value == 0.f))
			AnimState = EAnim2dState::A2D_Idle;

	if(AnimState == EAnim2dState::A2D_GrabCorner && !Ugol)
		AnimState = EAnim2dState::A2D_Wall;
	// Apply the input to the character motion
	AddMovementInput(FVector(1.0f, 0.0f, 0.0f), Value);
}

void ladderUPDown()
{
	
}









void APort2dCharacter::UpAlpha(float Value)
{
	test_alpha += Value;
	UE_LOG(LogTemp, Warning, TEXT("ACharacter::test_alpha : %f"), test_alpha);
	
}

void APort2dCharacter::JumpReady()
{
	AnimState = EAnim2dState::A2D_Charg;
	//GetSprite()->SetFlipbook(ChargAnimation);
	///GetSprite()->SetLooping(false);
	bCharg = true;
}

void APort2dCharacter::JumpStart()
{
	bCharg = false;
	///GetSprite()->SetLooping(true);
	//GetSprite()->SetFlipbook(JumpAnimation);
	AnimState = EAnim2dState::A2D_OneMoreJump;

	//LaunchCharacter(FVector(0.f, 0.f, 1.f) * JumpPower, false, false);
	JumpPower = 10;
}

void APort2dCharacter::FShit()
{
	UE_LOG(LogTemp, Warning, TEXT("BINDisShit"));
	//GetSprite()->SetLooping(true);
	GetSprite()->SetFlipbook(FallAnimation);
	isJump = false;
	AnimState = EAnim2dState::A2D_OneMoreJump;
}

void APort2dCharacter::BindFuckingFunc_Implementation()
{
	stena = true;
	if (!Ugol) 
	{
		UE_LOG(AnimationLog, Warning, TEXT("A2D_Wall"));
		AnimState = EAnim2dState::A2D_Wall;
	}
	doubleJ = true;
}

void APort2dCharacter::BindFuckingFuncAA_Implementation()
{
	stena = false;

}

void APort2dCharacter::CustomJ()
{
	
	if(stena)
	stena = false;
	AnimState = EAnim2dState::A2D_Jump;
	//LaunchCharacter(FVector(0.f, 0.f, 1.f)*700/*test_alpha*/, false, false);

}





void APort2dCharacter::TouchStarted(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	// Jump on any touch
	Jump();
}

void APort2dCharacter::TouchStopped(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	// Cease jumping once touch stopped
	StopJumping();
}

void APort2dCharacter::UpdateCharacter()
{
	// Update animation to match the motion
	UpdateAnimation();

	// Now setup the rotation of the controller based on the direction we are travelling
	const FVector PlayerVelocity = GetVelocity();	
	float TravelDirection = PlayerVelocity.X;
	// Set the rotation so that the character faces his direction of travel.
	if (Controller != nullptr)
	{
		if (TravelDirection < 0.0f)
		{
			Controller->SetControlRotation(FRotator(0.0, 180.0f, 0.0f));
		}
		else if (TravelDirection > 0.0f)
		{
			Controller->SetControlRotation(FRotator(0.0f, 0.0f, 0.0f));
		}
	}
}
