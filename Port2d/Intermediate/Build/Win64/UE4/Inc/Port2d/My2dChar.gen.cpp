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
	PORT2D_API UFunction* Z_Construct_UFunction_AMy2dChar_BindFuckingFunc();
	PORT2D_API UFunction* Z_Construct_UFunction_AMy2dChar_BindFuckingFuncAA();
	PORT2D_API UFunction* Z_Construct_UFunction_AMy2dChar_FinshPlaying();
	PORT2D_API UFunction* Z_Construct_UFunction_AMy2dChar_FShit();
	PORT2D_API UEnum* Z_Construct_UEnum_Port2d_EAnim2dState();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	static FName NAME_AMy2dChar_BindFuckingFunc = FName(TEXT("BindFuckingFunc"));
	void AMy2dChar::BindFuckingFunc()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMy2dChar_BindFuckingFunc),NULL);
	}
	static FName NAME_AMy2dChar_BindFuckingFuncAA = FName(TEXT("BindFuckingFuncAA"));
	void AMy2dChar::BindFuckingFuncAA()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMy2dChar_BindFuckingFuncAA),NULL);
	}
	void AMy2dChar::StaticRegisterNativesAMy2dChar()
	{
		UClass* Class = AMy2dChar::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BindFuckingFunc", &AMy2dChar::execBindFuckingFunc },
			{ "BindFuckingFuncAA", &AMy2dChar::execBindFuckingFuncAA },
			{ "FinshPlaying", &AMy2dChar::execFinshPlaying },
			{ "FShit", &AMy2dChar::execFShit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AMy2dChar_BindFuckingFunc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "FuckingShit" },
				{ "ModuleRelativePath", "My2dChar.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AMy2dChar, "BindFuckingFunc", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C080C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AMy2dChar_BindFuckingFuncAA()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "FuckingShit" },
				{ "ModuleRelativePath", "My2dChar.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AMy2dChar, "BindFuckingFuncAA", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C080C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AMy2dChar_FinshPlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "My2dChar.h" },
				{ "ToolTip", "DECLARE_MULTICAST_DELEGATE(FinshPlaying)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AMy2dChar, "FinshPlaying", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AMy2dChar_FShit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "FuckingShit" },
				{ "ModuleRelativePath", "My2dChar.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AMy2dChar, "FShit", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
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
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AMy2dChar_BindFuckingFunc, "BindFuckingFunc" }, // 824255835
				{ &Z_Construct_UFunction_AMy2dChar_BindFuckingFuncAA, "BindFuckingFuncAA" }, // 963708437
				{ &Z_Construct_UFunction_AMy2dChar_FinshPlaying, "FinshPlaying" }, // 2873416841
				{ &Z_Construct_UFunction_AMy2dChar_FShit, "FShit" }, // 3835736649
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "My2dChar.h" },
				{ "ModuleRelativePath", "My2dChar.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimState_MetaData[] = {
				{ "Category", "My2dChar" },
				{ "ModuleRelativePath", "My2dChar.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AnimState = { UE4CodeGen_Private::EPropertyClass::Enum, "AnimState", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000020005, 1, nullptr, STRUCT_OFFSET(AMy2dChar, AnimState), Z_Construct_UEnum_Port2d_EAnim2dState, METADATA_PARAMS(NewProp_AnimState_MetaData, ARRAY_COUNT(NewProp_AnimState_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_AnimState_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Camera" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "My2dChar.h" },
				{ "ToolTip", "Camera boom positioning the camera beside the character" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom = { UE4CodeGen_Private::EPropertyClass::Object, "CameraBoom", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(AMy2dChar, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(NewProp_CameraBoom_MetaData, ARRAY_COUNT(NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SideViewCameraComponent_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Camera" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "My2dChar.h" },
				{ "ToolTip", "Side view camera" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SideViewCameraComponent = { UE4CodeGen_Private::EPropertyClass::Object, "SideViewCameraComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(AMy2dChar, SideViewCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(NewProp_SideViewCameraComponent_MetaData, ARRAY_COUNT(NewProp_SideViewCameraComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimState,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimState_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraBoom,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SideViewCameraComponent,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AMy2dChar>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AMy2dChar::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(AMy2dChar, 1867134848);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMy2dChar(Z_Construct_UClass_AMy2dChar, &AMy2dChar::StaticClass, TEXT("/Script/Port2d"), TEXT("AMy2dChar"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMy2dChar);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
