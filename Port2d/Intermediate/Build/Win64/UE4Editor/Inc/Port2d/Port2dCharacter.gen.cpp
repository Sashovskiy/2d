// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Port2dCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePort2dCharacter() {}
// Cross Module References
	PORT2D_API UClass* Z_Construct_UClass_APort2dCharacter_NoRegister();
	PORT2D_API UClass* Z_Construct_UClass_APort2dCharacter();
	PAPER2D_API UClass* Z_Construct_UClass_APaperCharacter();
	UPackage* Z_Construct_UPackage__Script_Port2d();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void APort2dCharacter::StaticRegisterNativesAPort2dCharacter()
	{
	}
	UClass* Z_Construct_UClass_APort2dCharacter_NoRegister()
	{
		return APort2dCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_APort2dCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APaperCharacter,
				(UObject* (*)())Z_Construct_UPackage__Script_Port2d,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "Port2dCharacter.h" },
				{ "ModuleRelativePath", "Port2dCharacter.h" },
				{ "ToolTip", "This class is the default character for Port2d, and it is responsible for all\nphysical interaction between the player and the world.\n\nThe capsule component (inherited from ACharacter) handles collision with the world\nThe CharacterMovementComponent (inherited from ACharacter) handles movement of the collision capsule\nThe Sprite component (inherited from APaperCharacter) handles the visuals" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpAnimation_MetaData[] = {
				{ "Category", "Animations" },
				{ "ModuleRelativePath", "Port2dCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JumpAnimation = { UE4CodeGen_Private::EPropertyClass::Object, "JumpAnimation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, STRUCT_OFFSET(APort2dCharacter, JumpAnimation), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(NewProp_JumpAnimation_MetaData, ARRAY_COUNT(NewProp_JumpAnimation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReadyAnimation_MetaData[] = {
				{ "Category", "Animations" },
				{ "ModuleRelativePath", "Port2dCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReadyAnimation = { UE4CodeGen_Private::EPropertyClass::Object, "ReadyAnimation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, STRUCT_OFFSET(APort2dCharacter, ReadyAnimation), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(NewProp_ReadyAnimation_MetaData, ARRAY_COUNT(NewProp_ReadyAnimation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdleAnimation_MetaData[] = {
				{ "Category", "Animations" },
				{ "ModuleRelativePath", "Port2dCharacter.h" },
				{ "ToolTip", "The animation to play while idle (standing still)" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IdleAnimation = { UE4CodeGen_Private::EPropertyClass::Object, "IdleAnimation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, STRUCT_OFFSET(APort2dCharacter, IdleAnimation), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(NewProp_IdleAnimation_MetaData, ARRAY_COUNT(NewProp_IdleAnimation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RunningAnimation_MetaData[] = {
				{ "Category", "Animations" },
				{ "ModuleRelativePath", "Port2dCharacter.h" },
				{ "ToolTip", "The animation to play while running around" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RunningAnimation = { UE4CodeGen_Private::EPropertyClass::Object, "RunningAnimation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, STRUCT_OFFSET(APort2dCharacter, RunningAnimation), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(NewProp_RunningAnimation_MetaData, ARRAY_COUNT(NewProp_RunningAnimation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Camera" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Port2dCharacter.h" },
				{ "ToolTip", "Camera boom positioning the camera beside the character" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom = { UE4CodeGen_Private::EPropertyClass::Object, "CameraBoom", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(APort2dCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(NewProp_CameraBoom_MetaData, ARRAY_COUNT(NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SideViewCameraComponent_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Camera" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Port2dCharacter.h" },
				{ "ToolTip", "Side view camera" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SideViewCameraComponent = { UE4CodeGen_Private::EPropertyClass::Object, "SideViewCameraComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(APort2dCharacter, SideViewCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(NewProp_SideViewCameraComponent_MetaData, ARRAY_COUNT(NewProp_SideViewCameraComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_JumpAnimation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReadyAnimation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IdleAnimation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RunningAnimation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraBoom,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SideViewCameraComponent,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<APort2dCharacter>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&APort2dCharacter::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APort2dCharacter, 2164602771);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APort2dCharacter(Z_Construct_UClass_APort2dCharacter, &APort2dCharacter::StaticClass, TEXT("/Script/Port2d"), TEXT("APort2dCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APort2dCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
