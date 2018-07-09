// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Animation2DState.h"
#include "PaperCharacter.h"
#include "Port2dCharacter.generated.h"

class UTextRenderComponent;

/**
 * This class is the default character for Port2d, and it is responsible for all
 * physical interaction between the player and the world.
 *
 * The capsule component (inherited from ACharacter) handles collision with the world
 * The CharacterMovementComponent (inherited from ACharacter) handles movement of the collision capsule
 * The Sprite component (inhedrited from APaperCharacter) handles the visuals
 */
UCLASS(config=Game)
class APort2dCharacter : public APaperCharacter
{
	GENERATED_BODY()
	
	/** Side view camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera, meta=(AllowPrivateAccess="true"))
	class UCameraComponent* SideViewCameraComponent;

	/** Camera boom positioning the camera beside the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	UTextRenderComponent* TextComponent;
	virtual void Tick(float DeltaSeconds) override;
protected:
	// The animation to play while running around
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Animations)
	//class UPaperFlipbook* RunningAnimation;

	//// The animation to play while idle (standing still)
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
	//class UPaperFlipbook* IdleAnimation;

	/** Called to choose the correct animation to play based on the character's movement state */
	void UpdateAnimation();

	bool stena = false;
	bool Ugol = false;
	bool doubleJ = false;
	UFUNCTION(BlueprintCallable, Category = "FuckingShit")
		void FShChangUgol(bool chang);


	/** Called for side to side input */
	void MoveRight(float Value);

	void UpdateCharacter();

	/** Handle touch inputs. */
	void TouchStarted(const ETouchIndex::Type FingerIndex, const FVector Location);

	/** Handle touch stop event. */
	void TouchStopped(const ETouchIndex::Type FingerIndex, const FVector Location);

	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;
	// End of APawn interface
	void CustomJ();
	float test_alpha = 1.f;
	void UpAlpha(float Value);

	void JumpReady();
	bool bCharg = false;
	bool isJump = false;
	float JumpPower = 10;
	void JumpStart();
	UFUNCTION(BlueprintCallable, Category = "FuckingShit")
		void FShit();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "FuckingShit")
		void BindFuckingFunc();
	void BindFuckingFunc_Implementation();
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "FuckingShit")
		void BindFuckingFuncAA();
	void BindFuckingFuncAA_Implementation();


	


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
	class UPaperFlipbook* IdleAnimation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
	class UPaperFlipbook* WalkAnimation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
	class UPaperFlipbook* RunAnimation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
	class UPaperFlipbook* ChargAnimation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
	class UPaperFlipbook* JumpAnimation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
	class UPaperFlipbook* FlyAnimation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
	class UPaperFlipbook* FallAnimation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
	class UPaperFlipbook* LandAnimation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
		class UPaperFlipbook* StenaAnimation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
		class UPaperFlipbook* ClimbAnimation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
		class UPaperFlipbook* LadderAnimation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
		TArray< class UPaperFlipbook*> ArrayLadderAnimation;

	/*DECLARE_MULTICAST_DELEGATE(FinshPlaying)*/
	UFUNCTION()
		void FinshPlaying();
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	EAnim2dState AnimState = EAnim2dState::A2D_Idle;
public:
	APort2dCharacter();

	/** Returns SideViewCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetSideViewCameraComponent() const { return SideViewCameraComponent; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }


};
