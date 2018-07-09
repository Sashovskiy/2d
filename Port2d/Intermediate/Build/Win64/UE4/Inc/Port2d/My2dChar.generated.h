// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PORT2D_My2dChar_generated_h
#error "My2dChar.generated.h already included, missing '#pragma once' in My2dChar.h"
#endif
#define PORT2D_My2dChar_generated_h

#define Port2d_Source_Port2d_My2dChar_h_19_RPC_WRAPPERS \
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
	}


#define Port2d_Source_Port2d_My2dChar_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
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
	}


#define Port2d_Source_Port2d_My2dChar_h_19_EVENT_PARMS
#define Port2d_Source_Port2d_My2dChar_h_19_CALLBACK_WRAPPERS
#define Port2d_Source_Port2d_My2dChar_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMy2dChar(); \
	friend PORT2D_API class UClass* Z_Construct_UClass_AMy2dChar(); \
public: \
	DECLARE_CLASS(AMy2dChar, APaperCharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Port2d"), NO_API) \
	DECLARE_SERIALIZER(AMy2dChar) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Port2d_Source_Port2d_My2dChar_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAMy2dChar(); \
	friend PORT2D_API class UClass* Z_Construct_UClass_AMy2dChar(); \
public: \
	DECLARE_CLASS(AMy2dChar, APaperCharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Port2d"), NO_API) \
	DECLARE_SERIALIZER(AMy2dChar) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Port2d_Source_Port2d_My2dChar_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMy2dChar(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMy2dChar) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMy2dChar); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMy2dChar); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMy2dChar(AMy2dChar&&); \
	NO_API AMy2dChar(const AMy2dChar&); \
public:


#define Port2d_Source_Port2d_My2dChar_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMy2dChar(AMy2dChar&&); \
	NO_API AMy2dChar(const AMy2dChar&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMy2dChar); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMy2dChar); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMy2dChar)


#define Port2d_Source_Port2d_My2dChar_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SideViewCameraComponent() { return STRUCT_OFFSET(AMy2dChar, SideViewCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AMy2dChar, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__AnimState() { return STRUCT_OFFSET(AMy2dChar, AnimState); }


#define Port2d_Source_Port2d_My2dChar_h_16_PROLOG \
	Port2d_Source_Port2d_My2dChar_h_19_EVENT_PARMS


#define Port2d_Source_Port2d_My2dChar_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Port2d_Source_Port2d_My2dChar_h_19_PRIVATE_PROPERTY_OFFSET \
	Port2d_Source_Port2d_My2dChar_h_19_RPC_WRAPPERS \
	Port2d_Source_Port2d_My2dChar_h_19_CALLBACK_WRAPPERS \
	Port2d_Source_Port2d_My2dChar_h_19_INCLASS \
	Port2d_Source_Port2d_My2dChar_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Port2d_Source_Port2d_My2dChar_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Port2d_Source_Port2d_My2dChar_h_19_PRIVATE_PROPERTY_OFFSET \
	Port2d_Source_Port2d_My2dChar_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Port2d_Source_Port2d_My2dChar_h_19_CALLBACK_WRAPPERS \
	Port2d_Source_Port2d_My2dChar_h_19_INCLASS_NO_PURE_DECLS \
	Port2d_Source_Port2d_My2dChar_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Port2d_Source_Port2d_My2dChar_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
