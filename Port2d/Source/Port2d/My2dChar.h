// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation2DState.h"
#include "PaperCharacter.h"
#include "My2dChar.generated.h"


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
	
		class TArray<UPaperFlipbook*> ArrayLadderAnimation;


	/*DECLARE_MULTICAST_DELEGATE(FinshPlaying)*/
	UFUNCTION()
		void FinshPlaying();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		EAnim2dState AnimState = EAnim2dState::A2D_Idle;
public:
	AMy2dChar();

	/** Returns SideViewCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetSideViewCameraComponent() const { return SideViewCameraComponent; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
};
