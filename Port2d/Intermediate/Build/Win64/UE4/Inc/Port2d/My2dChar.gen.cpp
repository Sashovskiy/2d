// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "My2dChar.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMy2dChar() {}
// Cross Module References
	PORT2D_API UClass* Z_Construct_UClass_AMy2dChar_NoRegister();
	PORT2D_API UClass* Z_Construct_UClass_AMy2dChar();
	PAPER2D_API UClass* Z_Construct_UClass_APaperCharacter();
	UPackage* Z_Construct_UPackage__Script_Port2d();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
// End Cross Module References
	void AMy2dChar::StaticRegisterNativesAMy2dChar()
	{
	}
	UClass* Z_Construct_UClass_AMy2dChar_NoRegister()
	{
		return AMy2dChar::StaticClass();
	}
	UClass* Z_Construct_UClass_AMy2dChar()
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
				{ "IncludePath", "My2dChar.h" },
				{ "ModuleRelativePath", "My2dChar.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdleAnimation_MetaData[] = {
				{ "Category", "Animations" },
				{ "ModuleRelativePath", "My2dChar.h" },
				{ "ToolTip", "The animation to play while idle (standing still)" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IdleAnimation = { UE4CodeGen_Private::EPropertyClass::Object, "IdleAnimation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, STRUCT_OFFSET(AMy2dChar, IdleAnimation), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(NewProp_IdleAnimation_MetaData, ARRAY_COUNT(NewProp_IdleAnimation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RunningAnimation_MetaData[] = {
				{ "Category", "Animations" },
				{ "ModuleRelativePath", "My2dChar.h" },
				{ "ToolTip", "The animation to play while running around" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RunningAnimation = { UE4CodeGen_Private::EPropertyClass::Object, "RunningAnimation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, STRUCT_OFFSET(AMy2dChar, RunningAnimation), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(NewProp_RunningAnimation_MetaData, ARRAY_COUNT(NewProp_RunningAnimation_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IdleAnimation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RunningAnimation,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AMy2dChar>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AMy2dChar::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMy2dChar, 1110669771);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMy2dChar(Z_Construct_UClass_AMy2dChar, &AMy2dChar::StaticClass, TEXT("/Script/Port2d"), TEXT("AMy2dChar"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMy2dChar);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
