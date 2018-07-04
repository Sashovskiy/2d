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

#define Port2d_Source_Port2d_My2dChar_h_15_RPC_WRAPPERS
#define Port2d_Source_Port2d_My2dChar_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Port2d_Source_Port2d_My2dChar_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMy2dChar(); \
	friend PORT2D_API class UClass* Z_Construct_UClass_AMy2dChar(); \
public: \
	DECLARE_CLASS(AMy2dChar, APaperCharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Port2d"), NO_API) \
	DECLARE_SERIALIZER(AMy2dChar) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Port2d_Source_Port2d_My2dChar_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMy2dChar(); \
	friend PORT2D_API class UClass* Z_Construct_UClass_AMy2dChar(); \
public: \
	DECLARE_CLASS(AMy2dChar, APaperCharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Port2d"), NO_API) \
	DECLARE_SERIALIZER(AMy2dChar) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Port2d_Source_Port2d_My2dChar_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMy2dChar(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMy2dChar) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMy2dChar); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMy2dChar); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMy2dChar(AMy2dChar&&); \
	NO_API AMy2dChar(const AMy2dChar&); \
public:


#define Port2d_Source_Port2d_My2dChar_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMy2dChar(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMy2dChar(AMy2dChar&&); \
	NO_API AMy2dChar(const AMy2dChar&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMy2dChar); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMy2dChar); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMy2dChar)


#define Port2d_Source_Port2d_My2dChar_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RunningAnimation() { return STRUCT_OFFSET(AMy2dChar, RunningAnimation); } \
	FORCEINLINE static uint32 __PPO__IdleAnimation() { return STRUCT_OFFSET(AMy2dChar, IdleAnimation); }


#define Port2d_Source_Port2d_My2dChar_h_12_PROLOG
#define Port2d_Source_Port2d_My2dChar_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Port2d_Source_Port2d_My2dChar_h_15_PRIVATE_PROPERTY_OFFSET \
	Port2d_Source_Port2d_My2dChar_h_15_RPC_WRAPPERS \
	Port2d_Source_Port2d_My2dChar_h_15_INCLASS \
	Port2d_Source_Port2d_My2dChar_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Port2d_Source_Port2d_My2dChar_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Port2d_Source_Port2d_My2dChar_h_15_PRIVATE_PROPERTY_OFFSET \
	Port2d_Source_Port2d_My2dChar_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Port2d_Source_Port2d_My2dChar_h_15_INCLASS_NO_PURE_DECLS \
	Port2d_Source_Port2d_My2dChar_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Port2d_Source_Port2d_My2dChar_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
