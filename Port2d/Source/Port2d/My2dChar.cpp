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


DEFINE_LOG_CATEGORY_STATIC(JumpLog, Log, All);
DEFINE_LOG_CATEGORY_STATIC(WallLog, Log, All);
DEFINE_LOG_CATEGORY_STATIC(CornerLog, Log, All);
DEFINE_LOG_CATEGORY_STATIC(AnimationLog, Log, All);



AMy2dChar::AMy2dChar()
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
	GetCharacterMovement()->MaxCustomMovementSpeed = 700.f;
	GetCharacterMovement()->GroundFriction = 3.0f;
	GetCharacterMovement()->MaxWalkSpeed = 600.0f;
	GetCharacterMovement()->MaxFlySpeed = 700.0f;

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

	/** Set by reference */
	static ConstructorHelpers::FObjectFinder<UPaperFlipbook> FlipAnimiIdle(TEXT("PaperFlipbook'/Game/2DSideScroller/import/HeroPack/Hero_Sprite/Flipbook/Idle_Hero.Idle_Hero'"));
	IdleAnimation = FlipAnimiIdle.Object;
	static ConstructorHelpers::FObjectFinder<UPaperFlipbook> FlipAnimiWalk(TEXT("PaperFlipbook'/Game/2DSideScroller/import/HeroPack/Hero_Sprite/Flipbook/Walk_Hero.Walk_Hero'"));
	WalkAnimation = FlipAnimiWalk.Object;
	static ConstructorHelpers::FObjectFinder<UPaperFlipbook> FlipAnimiRun(TEXT("PaperFlipbook'/Game/2DSideScroller/import/HeroPack/Hero_Sprite/Flipbook/Run_Hero.Run_Hero'"));
	RunAnimation = FlipAnimiRun.Object;
	static ConstructorHelpers::FObjectFinder<UPaperFlipbook> FlipAnimiCharg(TEXT("PaperFlipbook'/Game/2DSideScroller/import/HeroPack/Hero_Sprite/Flipbook/ChargJump_Hero.ChargJump_Hero'"));
	ChargAnimation = FlipAnimiCharg.Object;
	static ConstructorHelpers::FObjectFinder<UPaperFlipbook> FlipAnimiJump(TEXT("PaperFlipbook'/Game/2DSideScroller/import/HeroPack/Hero_Sprite/Flipbook/Jump_Hero.Jump_Hero'"));
	JumpAnimation = FlipAnimiJump.Object;
	static ConstructorHelpers::FObjectFinder<UPaperFlipbook> FlipAnimiFly(TEXT("PaperFlipbook'/Game/2DSideScroller/import/HeroPack/Hero_Sprite/Flipbook/OneMoreJump_Hero.OneMoreJump_Hero'"));
	OneMoreJumpAnimation = FlipAnimiFly.Object;
	static ConstructorHelpers::FObjectFinder<UPaperFlipbook> FlipAnimiFall(TEXT("PaperFlipbook'/Game/2DSideScroller/import/HeroPack/Hero_Sprite/Flipbook/Fall_Hero.Fall_Hero'"));
	FallAnimation = FlipAnimiFall.Object;
	static ConstructorHelpers::FObjectFinder<UPaperFlipbook> FlipAnimiLand(TEXT("PaperFlipbook'/Game/2DSideScroller/import/HeroPack/Hero_Sprite/Flipbook/Land_Hero.Land_Hero'"));
	LandAnimation = FlipAnimiLand.Object;
	static ConstructorHelpers::FObjectFinder<UPaperFlipbook> FlipAnimiWall(TEXT("PaperFlipbook'/Game/2DSideScroller/import/HeroPack/Hero_Sprite/Flipbook/Wall_HEro.Wall_HEro'"));
	WallAnimation = FlipAnimiWall.Object;
	static ConstructorHelpers::FObjectFinder<UPaperFlipbook> FlipAnimiGrabCorner(TEXT("PaperFlipbook'/Game/2DSideScroller/import/HeroPack/Hero_Sprite/Flipbook/GrabCorner_Hero.GrabCorner_Hero'"));
	GrabCornerAnimation = FlipAnimiGrabCorner.Object;
	//TODO Climb Animation(Flipbook and frams)
	static ConstructorHelpers::FObjectFinder<UPaperFlipbook> FlipAnimiLadder(TEXT("PaperFlipbook'/Game/2DSideScroller/import/HeroPack/Hero_Sprite/Flipbook/Fly_Hero.Fly_Hero'"));
	LadderAnimation = FlipAnimiLadder.Object;
	static ConstructorHelpers::FObjectFinder<UPaperFlipbook> FlipAnimiArray1(TEXT("PaperFlipbook'/Game/2DSideScroller/import/HeroPack/Hero_Sprite/Flipbook/Fly_Hero.Fly_Hero'"));
	static ConstructorHelpers::FObjectFinder<UPaperFlipbook> FlipAnimiArray2(TEXT("PaperFlipbook'/Game/2DSideScroller/import/HeroPack/Hero_Sprite/Flipbook/Fly_Hero.Fly_Hero'"));
	static ConstructorHelpers::FObjectFinder<UPaperFlipbook> FlipAnimiArray3(TEXT("PaperFlipbook'/Game/2DSideScroller/import/HeroPack/Hero_Sprite/Flipbook/Fly_Hero.Fly_Hero'"));
	static ConstructorHelpers::FObjectFinder<UPaperFlipbook> FlipAnimiArray4(TEXT("PaperFlipbook'/Game/2DSideScroller/import/HeroPack/Hero_Sprite/Flipbook/Fly_Hero.Fly_Hero'"));
	ArrayLadderAnimation.Add(FlipAnimiArray1.Object);
	ArrayLadderAnimation.Add(FlipAnimiArray2.Object);
	ArrayLadderAnimation.Add(FlipAnimiArray3.Object);
	ArrayLadderAnimation.Add(FlipAnimiArray4.Object);

	GetSprite()->SetFlipbook(IdleAnimation);

	/// scale only for this sprite
	GetSprite()->SetRelativeScale3D(FVector(5.f, 5.f, 5.f));
	this->SetActorRelativeScale3D(FVector(0.3f, 0.3f, 0.3f));
}

void AMy2dChar::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	UpdateCharacter();

///	UE_LOG(JumpLog, Warning, TEXT("Velocity.Z = %f"), GetVelocity().Z);



	if (isJump2)
		NextJumpTimer += 0.1f;

	if (GetCharacterMovement()->IsMovingOnGround() || isOnWall)
		ResetJump();

	if (isOnWall) {
		UE_LOG(WallLog, Warning,TEXT("IsOnWAll true"))
		if (!isGrabCorner)
			this->GetMovementComponent()->Velocity = FVector(0.f, 0.f, -1.f);//more interesting desithion
		else
			this->GetMovementComponent()->Velocity = FVector(0.f, 0.f, 0.f);//more interesting desithio
	}
	else
	{
		isGrabCorner = false;
	}


}

void AMy2dChar::UpdateAnimation()
{
	switch (AnimState)
	{
	case EAnim2dState::A2D_Idle:
		if (GetSprite()->GetFlipbook() != IdleAnimation)
			GetSprite()->SetFlipbook(IdleAnimation);
		break;

	case EAnim2dState::A2D_Walk:
		if (GetSprite()->GetFlipbook() != WalkAnimation && isWalk)
			GetSprite()->SetFlipbook(WalkAnimation);
		break;

	case EAnim2dState::A2D_Run:
		if (GetSprite()->GetFlipbook() != RunAnimation)
			GetSprite()->SetFlipbook(RunAnimation);
		break;

	case EAnim2dState::A2D_Charg:
		if (GetSprite()->GetFlipbook() != ChargAnimation)
			GetSprite()->SetFlipbook(ChargAnimation);
		break;

	case EAnim2dState::A2D_Jump:
		if (GetSprite()->GetFlipbook() != JumpAnimation)
		GetSprite()->SetFlipbook(JumpAnimation);
		if ((GetSprite()->GetPlaybackPositionInFrames() == 1) && GetSprite()->GetFlipbook() == JumpAnimation && isJump)
		{
	
			LaunchCharacter(FVector(0.f, 0.f, 1.f) * 700  * ((isCanDoubleJump && !GetCharacterMovement()->IsMovingOnGround()) ? 1.5f : 1), false, false);
			isJump = false;
			if (isCanDoubleJump) isCanDoubleJump = false;
		}
		if (GetSprite()->GetPlaybackPositionInFrames() == 3)
			AnimState = EAnim2dState::A2D_Fall;
		break;

	case EAnim2dState::A2D_OneMoreJump: //TODO Delete Fly state, because fly doesn`t need
		GetSprite()->SetFlipbook(OneMoreJumpAnimation);
		if ((GetSprite()->GetPlaybackPositionInFrames() == 1) && GetSprite()->GetFlipbook() == OneMoreJumpAnimation && isJump)
		{
			//GetCharacterMovement()->Velocity.Z = 0.f;
			FVector TetingJump;
			TetingJump = (FVector(0.f, 0.f, 1.f) * 700 + ((GetVelocity().Z < 0) ? abs(GetCharacterMovement()->Velocity.Z) : 0) );
			UE_LOG(JumpLog, Warning, TEXT("Velocity.Z = %f"), GetVelocity().Z);
			UE_LOG(JumpLog, Warning, TEXT("Launch1: %s"), *TetingJump.ToString());
			LaunchCharacter(FVector(0.f, 0.f, 1.f) * 700  + ((isCanDoubleJump && !GetCharacterMovement()->IsMovingOnGround()) ? ((GetVelocity().Z < 0 )? abs(GetCharacterMovement()->Velocity.Z):0) : 0), false, false);
			isJump = false;
			if (isCanDoubleJump) isCanDoubleJump = false;
		}
		if (GetSprite()->GetPlaybackPositionInFrames() == 1)
			AnimState = EAnim2dState::A2D_Fall;
		break;
	case EAnim2dState::A2D_Fall:
		if (GetSprite()->GetFlipbook() != FallAnimation)
			GetSprite()->SetFlipbook(FallAnimation);
		if (GetCharacterMovement()->IsMovingOnGround())
			AnimState = EAnim2dState::A2D_Land;
		break;
	case EAnim2dState::A2D_Land:
		if (GetSprite()->GetFlipbook() != LandAnimation)
			GetSprite()->SetFlipbook(LandAnimation);
		else
			AnimState = EAnim2dState::A2D_Idle;
		break;
	case EAnim2dState::A2D_Wall:
		if (GetSprite()->GetFlipbook() != WallAnimation)
			GetSprite()->SetFlipbook(WallAnimation);
		else
			AnimState = EAnim2dState::A2D_Wall;
		break;
	case EAnim2dState::A2D_GrabCorner:
		if (GetSprite()->GetFlipbook() != GrabCornerAnimation)
			GetSprite()->SetFlipbook(GrabCornerAnimation);
		else
			AnimState = EAnim2dState::A2D_GrabCorner;
		break;







	default:
		break;
	}
}

void AMy2dChar::MoveRight(float Value)
{
	
	
	/*UpdateChar();*/
	if (GetMovementComponent()->IsMovingOnGround() && (AnimState != EAnim2dState::A2D_Jump) && (Value != 0.f))
		AnimState = EAnim2dState::A2D_Run;
	else
		if ((AnimState == EAnim2dState::A2D_Run) && (Value == 0.f))
			AnimState = EAnim2dState::A2D_Idle;

	if (AnimState == EAnim2dState::A2D_GrabCorner && !isGrabCorner)
		AnimState = EAnim2dState::A2D_Wall;
	// Apply the input to the character motion
	AddMovementInput(FVector(1.0f * (GetCharacterMovement()->IsMovingOnGround()) ? 1: 2 , 0.0f, 0.0f), Value * ((isWalk) ? 0.5f : 1));
}

void AMy2dChar::UpdateCharacter()
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

void AMy2dChar::SetupPlayerInputComponent(UInputComponent * InputComponent)
{
	// Note: the 'Jump' action and the 'MoveRight' axis are bound to actual keys/buttons/sticks in DefaultInput.ini (editable from Project Settings..Input)
	InputComponent->BindAction("Jump", IE_Pressed, this, &AMy2dChar::SimpleJump);
	InputComponent->BindAxis("MoveRight", this, &AMy2dChar::MoveRight);
	

	InputComponent->BindAction("JumpReady", IE_Pressed, this, &AMy2dChar::StartCharg);
	InputComponent->BindAction("JumpReady", IE_Released, this, &AMy2dChar::ChargJump);
}

void AMy2dChar::SimpleJump()
{
	UE_LOG(JumpLog, Warning, TEXT("JumpCount::294: %d"), JumpCount); 
	if (JumpCount == MAXJUMP)
	{
		UE_LOG(JumpLog, Warning, TEXT("JumpCount::297: %d"), JumpCount);
		isCanSimpleJump = false;
		isJump2 = true;
		UE_LOG(JumpLog, Warning, TEXT("GetMovementComponent()->IsMovingOnGround() : true"))
		if (isOnWall)
			isOnWall = false;
		isJump = true;
		UE_LOG(JumpLog, Warning, TEXT("AMy2dChar::Timer 1 is: %f"), NextJumpTimer);
		JumpCount--;
		UE_LOG(JumpLog, Warning, TEXT("JumpCount::306: %d"), JumpCount);
		AnimState = EAnim2dState::A2D_Jump;
	}
	else
	{
		UE_LOG(JumpLog, Warning, TEXT("AMy2dChar::timer 2 is: %f"), NextJumpTimer);
		UE_LOG(JumpLog, Warning, TEXT("JumpCount::312: %d"), JumpCount);
		if ((JumpCount > 0) /*&& (NextJumpTimer >= 1.6f)*/)
		{
			UE_LOG(JumpLog, Warning, TEXT("AMy2dChar::timer 3 is: %f"), NextJumpTimer);
			UE_LOG(JumpLog, Warning, TEXT("JumpCount::315: %d"), JumpCount);
			SecondJump();
		}
	}
}

void AMy2dChar::SecondJump()
{
	UE_LOG(JumpLog, Warning, TEXT("AMy2dChar::Timer 3 is: %f"), NextJumpTimer);
	JumpCount--;
	isJump = true;
	isJump2 = false;
	AnimState = EAnim2dState::A2D_OneMoreJump;


}

void AMy2dChar::StartCharg()
{
}

void AMy2dChar::ChargJump()
{
}

void AMy2dChar::Charging()
{
}

void AMy2dChar::ChangeGrabCornerStatus(bool Status)
{
	isGrabCorner = Status;
	if (Status)
		AnimState = EAnim2dState::A2D_GrabCorner;
	
}

void AMy2dChar::ChangeSlideWallStatus(bool Status)
{
	isOnWall = Status;
	UE_LOG(WallLog, Warning, TEXT("False "));
	if (isOnWall)
	{
		OldZ = this->GetActorLocation().Z;
		isCanDoubleJump = true;
		UE_LOG(WallLog, Warning, TEXT("True "));
	}


}

void AMy2dChar::UpdatePositionOnWall(float NewZ)
{
	this->SetActorLocation(FVector(this->GetActorLocation().X, this->GetActorLocation().Y, (NewZ + OldZ)));
}