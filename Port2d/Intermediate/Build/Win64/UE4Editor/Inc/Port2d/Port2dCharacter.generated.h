// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PORT2D_Port2dCharacter_generated_h
#error "Port2dCharacter.generated.h already included, missing '#pragma once' in Port2dCharacter.h"
#endif
#define PORT2D_Port2dCharacter_generated_h

#define Port2d_Source_Port2d_Port2dCharacter_h_23_RPC_WRAPPERS \
	virtual void BindFuckingFuncAA_Implementation(); \
	virtual void BindFuckingFunc_Implementation(); \
 \
	DECLARE_FUNCTION(execFinshPlaying) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FinshPlaying(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBindFuckingFuncAA) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BindFuckingFuncAA_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBindFuckingFunc) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BindFuckingFunc_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFShit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FShit(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFShChangUgol) \
	{ \
		P_GET_UBOOL(Z_Param_chang); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FShChangUgol(Z_Param_chang); \
		P_NATIVE_END; \
	}


#define Port2d_Source_Port2d_Port2dCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFinshPlaying) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FinshPlaying(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBindFuckingFuncAA) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BindFuckingFuncAA_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBindFuckingFunc) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BindFuckingFunc_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFShit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FShit(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFShChangUgol) \
	{ \
		P_GET_UBOOL(Z_Param_chang); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FShChangUgol(Z_Param_chang); \
		P_NATIVE_END; \
	}


#define Port2d_Source_Port2d_Port2dCharacter_h_23_EVENT_PARMS
#define Port2d_Source_Port2d_Port2dCharacter_h_23_CALLBACK_WRAPPERS
#define Port2d_Source_Port2d_Port2dCharacter_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPort2dCharacter(); \
	friend PORT2D_API class UClass* Z_Construct_UClass_APort2dCharacter(); \
public: \
	DECLARE_CLASS(APort2dCharacter, APaperCharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Port2d"), NO_API) \
	DECLARE_SERIALIZER(APort2dCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Port2d_Source_Port2d_Port2dCharacter_h_23_INCLASS \
private: \
	static void StaticRegisterNativesAPort2dCharacter(); \
	friend PORT2D_API class UClass* Z_Construct_UClass_APort2dCharacter(); \
public: \
	DECLARE_CLASS(APort2dCharacter, APaperCharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Port2d"), NO_API) \
	DECLARE_SERIALIZER(APort2dCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Port2d_Source_Port2d_Port2dCharacter_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APort2dCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APort2dCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APort2dCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APort2dCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APort2dCharacter(APort2dCharacter&&); \
	NO_API APort2dCharacter(const APort2dCharacter&); \
public:


#define Port2d_Source_Port2d_Port2dCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APort2dCharacter(APort2dCharacter&&); \
	NO_API APort2dCharacter(const APort2dCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APort2dCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APort2dCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APort2dCharacter)


#define Port2d_Source_Port2d_Port2dCharacter_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SideViewCameraComponent() { return STRUCT_OFFSET(APort2dCharacter, SideViewCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(APort2dCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__IdleAnimation() { return STRUCT_OFFSET(APort2dCharacter, IdleAnimation); } \
	FORCEINLINE static uint32 __PPO__WalkAnimation() { return STRUCT_OFFSET(APort2dCharacter, WalkAnimation); } \
	FORCEINLINE static uint32 __PPO__RunAnimation() { return STRUCT_OFFSET(APort2dCharacter, RunAnimation); } \
	FORCEINLINE static uint32 __PPO__ChargAnimation() { return STRUCT_OFFSET(APort2dCharacter, ChargAnimation); } \
	FORCEINLINE static uint32 __PPO__JumpAnimation() { return STRUCT_OFFSET(APort2dCharacter, JumpAnimation); } \
	FORCEINLINE static uint32 __PPO__FlyAnimation() { return STRUCT_OFFSET(APort2dCharacter, FlyAnimation); } \
	FORCEINLINE static uint32 __PPO__FallAnimation() { return STRUCT_OFFSET(APort2dCharacter, FallAnimation); } \
	FORCEINLINE static uint32 __PPO__LandAnimation() { return STRUCT_OFFSET(APort2dCharacter, LandAnimation); } \
	FORCEINLINE static uint32 __PPO__StenaAnimation() { return STRUCT_OFFSET(APort2dCharacter, StenaAnimation); } \
	FORCEINLINE static uint32 __PPO__ClimbAnimation() { return STRUCT_OFFSET(APort2dCharacter, ClimbAnimation); } \
	FORCEINLINE static uint32 __PPO__LadderAnimation() { return STRUCT_OFFSET(APort2dCharacter, LadderAnimation); } \
	FORCEINLINE static uint32 __PPO__ArrayLadderAnimation() { return STRUCT_OFFSET(APort2dCharacter, ArrayLadderAnimation); } \
	FORCEINLINE static uint32 __PPO__AnimState() { return STRUCT_OFFSET(APort2dCharacter, AnimState); }


#define Port2d_Source_Port2d_Port2dCharacter_h_20_PROLOG \
	Port2d_Source_Port2d_Port2dCharacter_h_23_EVENT_PARMS


#define Port2d_Source_Port2d_Port2dCharacter_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Port2d_Source_Port2d_Port2dCharacter_h_23_PRIVATE_PROPERTY_OFFSET \
	Port2d_Source_Port2d_Port2dCharacter_h_23_RPC_WRAPPERS \
	Port2d_Source_Port2d_Port2dCharacter_h_23_CALLBACK_WRAPPERS \
	Port2d_Source_Port2d_Port2dCharacter_h_23_INCLASS \
	Port2d_Source_Port2d_Port2dCharacter_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Port2d_Source_Port2d_Port2dCharacter_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Port2d_Source_Port2d_Port2dCharacter_h_23_PRIVATE_PROPERTY_OFFSET \
	Port2d_Source_Port2d_Port2dCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Port2d_Source_Port2d_Port2dCharacter_h_23_CALLBACK_WRAPPERS \
	Port2d_Source_Port2d_Port2dCharacter_h_23_INCLASS_NO_PURE_DECLS \
	Port2d_Source_Port2d_Port2dCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Port2d_Source_Port2d_Port2dCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
