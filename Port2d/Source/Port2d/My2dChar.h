// Fill out your copyright notice in the Description page of Project Settings.

#pragma once




#include "CoreMinimal.h"
#include "Animation2DState.h"
#include "PaperCharacter.h"
#include "My2dChar.generated.h"


#define MAXJUMP 2
#define STARTCHARG 700
#define MAXCHARG 1600


class UTextRenderComponent;

/**
 * 
 */
UCLASS(config = Game)
class PORT2D_API AMy2dChar : public APaperCharacter
{
	GENERATED_BODY()
	
		/** Side view camera */
		UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class UCameraComponent* SideViewCameraComponent;

	/** Camera boom positioning the camera beside the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class USpringArmComponent* CameraBoom;

	UTextRenderComponent* TextComponent;
	virtual void Tick(float DeltaSeconds) override;
protected:


	/** Called to choose the correct animation to play based on the character's movement state */
	void UpdateAnimation();

	/** Called for side to side input */
	void MoveRight(float Value);

	void UpdateCharacter();



	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;
	// End of APawn interface
	
	/** Moving On Ground: Walk and Run*/

	bool isWalk = false;
	


	/** Jump and ChargJump */

	bool isJump = false;
	bool isJump2 = false;
	bool isCanJump = true;
	bool isCanSimpleJump = true;
	int32 JumpCount = MAXJUMP;

	float NextJumpTimer = 0;


	bool isChargJump = false;
	int32 JumpCharg = STARTCHARG;


	void SimpleJump();
	void SecondJump(); // diferent is playeble animation on jump
	
	void StartCharg();
	void ChargJump();
	void Charging();

	void ResetJump() { JumpCount = MAXJUMP; isCanSimpleJump = true; JumpCharg = STARTCHARG; bool isChargJump = false;	NextJumpTimer = 0; };

















	/**  Sprites animation    */
		class UPaperFlipbook* IdleAnimation;
		class UPaperFlipbook* WalkAnimation;
		class UPaperFlipbook* RunAnimation;
		class UPaperFlipbook* ChargAnimation;
		class UPaperFlipbook* JumpAnimation;
		class UPaperFlipbook* OneMoreJumpAnimation;
		class UPaperFlipbook* FallAnimation;
		class UPaperFlipbook* LandAnimation;
		class UPaperFlipbook* WallAnimation;
		class UPaperFlipbook* GrabCornerAnimation;
		class UPaperFlipbook* LadderAnimation;
		TArray<UPaperFlipbook*> ArrayLadderAnimation;
	
		
		/** Wall slide and Corner grab  */

		bool isOnWall = false;
		bool isGrabCorner = false;
		bool isCanDoubleJump = true;

		UFUNCTION(BlueprintCallable, Category = "Wall and Corner")
			void ChangeGrabCornerStatus(bool Status);
		UFUNCTION(BlueprintCallable, Category = "Wall and Corner")
			void ChangeSlideWallStatus(bool Status);




	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		EAnim2dState AnimState = EAnim2dState::A2D_Idle;
public:
	AMy2dChar();

	/** Returns SideViewCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetSideViewCameraComponent() const { return SideViewCameraComponent; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
};
