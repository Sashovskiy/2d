// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Animation2DState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimation2DState() {}
// Cross Module References
	PORT2D_API UEnum* Z_Construct_UEnum_Port2d_EAnim2dState();
	UPackage* Z_Construct_UPackage__Script_Port2d();
// End Cross Module References
	static UEnum* EAnim2dState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Port2d_EAnim2dState, Z_Construct_UPackage__Script_Port2d(), TEXT("EAnim2dState"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAnim2dState(EAnim2dState_StaticEnum, TEXT("/Script/Port2d"), TEXT("EAnim2dState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Port2d_EAnim2dState_CRC() { return 1999913418U; }
	UEnum* Z_Construct_UEnum_Port2d_EAnim2dState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Port2d();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAnim2dState"), 0, Get_Z_Construct_UEnum_Port2d_EAnim2dState_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAnim2dState::A2D_Idle", (int64)EAnim2dState::A2D_Idle },
				{ "EAnim2dState::A2D_Walk", (int64)EAnim2dState::A2D_Walk },
				{ "EAnim2dState::A2D_Run", (int64)EAnim2dState::A2D_Run },
				{ "EAnim2dState::A2D_Charg", (int64)EAnim2dState::A2D_Charg },
				{ "EAnim2dState::A2D_Jump", (int64)EAnim2dState::A2D_Jump },
				{ "EAnim2dState::A2D_Fly", (int64)EAnim2dState::A2D_Fly },
				{ "EAnim2dState::A2D_Fall", (int64)EAnim2dState::A2D_Fall },
				{ "EAnim2dState::A2D_Land", (int64)EAnim2dState::A2D_Land },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "A2D_Charg.DisplayName", "Charg" },
				{ "A2D_Fall.DisplayName", "Fall" },
				{ "A2D_Fly.DisplayName", "Fly" },
				{ "A2D_Idle.DisplayName", "Idle" },
				{ "A2D_Jump.DisplayName", "Jump" },
				{ "A2D_Land.DisplayName", "Landing" },
				{ "A2D_Run.DisplayName", "Run" },
				{ "A2D_Walk.DisplayName", "Walk" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Animation2DState.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Port2d,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EAnim2dState",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EAnim2dState",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
