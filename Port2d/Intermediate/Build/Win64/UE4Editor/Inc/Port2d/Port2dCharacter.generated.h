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

#define Port2d_Source_Port2d_Port2dCharacter_h_22_RPC_WRAPPERS
#define Port2d_Source_Port2d_Port2dCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define Port2d_Source_Port2d_Port2dCharacter_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPort2dCharacter(); \
	friend PORT2D_API class UClass* Z_Construct_UClass_APort2dCharacter(); \
public: \
	DECLARE_CLASS(APort2dCharacter, APaperCharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Port2d"), NO_API) \
	DECLARE_SERIALIZER(APort2dCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Port2d_Source_Port2d_Port2dCharacter_h_22_INCLASS \
private: \
	static void StaticRegisterNativesAPort2dCharacter(); \
	friend PORT2D_API class UClass* Z_Construct_UClass_APort2dCharacter(); \
public: \
	DECLARE_CLASS(APort2dCharacter, APaperCharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Port2d"), NO_API) \
	DECLARE_SERIALIZER(APort2dCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Port2d_Source_Port2d_Port2dCharacter_h_22_STANDARD_CONSTRUCTORS \
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


#define Port2d_Source_Port2d_Port2dCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APort2dCharacter(APort2dCharacter&&); \
	NO_API APort2dCharacter(const APort2dCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APort2dCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APort2dCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APort2dCharacter)


#define Port2d_Source_Port2d_Port2dCharacter_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SideViewCameraComponent() { return STRUCT_OFFSET(APort2dCharacter, SideViewCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(APort2dCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__RunningAnimation() { return STRUCT_OFFSET(APort2dCharacter, RunningAnimation); } \
	FORCEINLINE static uint32 __PPO__IdleAnimation() { return STRUCT_OFFSET(APort2dCharacter, IdleAnimation); }


#define Port2d_Source_Port2d_Port2dCharacter_h_19_PROLOG
#define Port2d_Source_Port2d_Port2dCharacter_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Port2d_Source_Port2d_Port2dCharacter_h_22_PRIVATE_PROPERTY_OFFSET \
	Port2d_Source_Port2d_Port2dCharacter_h_22_RPC_WRAPPERS \
	Port2d_Source_Port2d_Port2dCharacter_h_22_INCLASS \
	Port2d_Source_Port2d_Port2dCharacter_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Port2d_Source_Port2d_Port2dCharacter_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Port2d_Source_Port2d_Port2dCharacter_h_22_PRIVATE_PROPERTY_OFFSET \
	Port2d_Source_Port2d_Port2dCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	Port2d_Source_Port2d_Port2dCharacter_h_22_INCLASS_NO_PURE_DECLS \
	Port2d_Source_Port2d_Port2dCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Port2d_Source_Port2d_Port2dCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
