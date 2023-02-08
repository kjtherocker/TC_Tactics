// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/FloorEnum.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloorEnum() {}
// Cross Module References
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EFloorEventStates();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
	DESENTINTOATLANTIS_API UFunction* Z_Construct_UDelegateFunction_DesentIntoAtlantis_FloorEventHasBeenTriggered__DelegateSignature();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	DESENTINTOATLANTIS_API UFunction* Z_Construct_UDelegateFunction_DesentIntoAtlantis_TriggerNextEventStage__DelegateSignature();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FFloorData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EFloorIdentifier();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EDialogueTriggers();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_ETutorialTriggers();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FFloorEventData();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EDataTableClasses();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EViews();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FTutorialData();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFloorEventStates;
	static UEnum* EFloorEventStates_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFloorEventStates.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFloorEventStates.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DesentIntoAtlantis_EFloorEventStates, Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("EFloorEventStates"));
		}
		return Z_Registration_Info_UEnum_EFloorEventStates.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UEnum* StaticEnum<EFloorEventStates>()
	{
		return EFloorEventStates_StaticEnum();
	}
	struct Z_Construct_UEnum_DesentIntoAtlantis_EFloorEventStates_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DesentIntoAtlantis_EFloorEventStates_Statics::Enumerators[] = {
		{ "EFloorEventStates::None", (int64)EFloorEventStates::None },
		{ "EFloorEventStates::DialogueOnStart", (int64)EFloorEventStates::DialogueOnStart },
		{ "EFloorEventStates::TutorialOnStart", (int64)EFloorEventStates::TutorialOnStart },
		{ "EFloorEventStates::Combat", (int64)EFloorEventStates::Combat },
		{ "EFloorEventStates::Levelup", (int64)EFloorEventStates::Levelup },
		{ "EFloorEventStates::DialogueOnEnd", (int64)EFloorEventStates::DialogueOnEnd },
		{ "EFloorEventStates::TutorialOnEnd", (int64)EFloorEventStates::TutorialOnEnd },
		{ "EFloorEventStates::Completed", (int64)EFloorEventStates::Completed },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DesentIntoAtlantis_EFloorEventStates_Statics::Enum_MetaDataParams[] = {
		{ "Combat.Name", "EFloorEventStates::Combat" },
		{ "Completed.Name", "EFloorEventStates::Completed" },
		{ "DialogueOnEnd.Name", "EFloorEventStates::DialogueOnEnd" },
		{ "DialogueOnStart.Name", "EFloorEventStates::DialogueOnStart" },
		{ "Levelup.Name", "EFloorEventStates::Levelup" },
		{ "ModuleRelativePath", "Public/FloorEnum.h" },
		{ "None.Name", "EFloorEventStates::None" },
		{ "TutorialOnEnd.Name", "EFloorEventStates::TutorialOnEnd" },
		{ "TutorialOnStart.Name", "EFloorEventStates::TutorialOnStart" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DesentIntoAtlantis_EFloorEventStates_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		nullptr,
		"EFloorEventStates",
		"EFloorEventStates",
		Z_Construct_UEnum_DesentIntoAtlantis_EFloorEventStates_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_EFloorEventStates_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DesentIntoAtlantis_EFloorEventStates_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_EFloorEventStates_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EFloorEventStates()
	{
		if (!Z_Registration_Info_UEnum_EFloorEventStates.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFloorEventStates.InnerSingleton, Z_Construct_UEnum_DesentIntoAtlantis_EFloorEventStates_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFloorEventStates.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_DesentIntoAtlantis_FloorEventHasBeenTriggered__DelegateSignature_Statics
	{
		struct _Script_DesentIntoAtlantis_eventFloorEventHasBeenTriggered_Parms
		{
			FVector2D aPositionInGrid;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_aPositionInGrid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_DesentIntoAtlantis_FloorEventHasBeenTriggered__DelegateSignature_Statics::NewProp_aPositionInGrid = { "aPositionInGrid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DesentIntoAtlantis_eventFloorEventHasBeenTriggered_Parms, aPositionInGrid), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DesentIntoAtlantis_FloorEventHasBeenTriggered__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DesentIntoAtlantis_FloorEventHasBeenTriggered__DelegateSignature_Statics::NewProp_aPositionInGrid,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DesentIntoAtlantis_FloorEventHasBeenTriggered__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FloorEnum.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DesentIntoAtlantis_FloorEventHasBeenTriggered__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DesentIntoAtlantis, nullptr, "FloorEventHasBeenTriggered__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_DesentIntoAtlantis_FloorEventHasBeenTriggered__DelegateSignature_Statics::_Script_DesentIntoAtlantis_eventFloorEventHasBeenTriggered_Parms), Z_Construct_UDelegateFunction_DesentIntoAtlantis_FloorEventHasBeenTriggered__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DesentIntoAtlantis_FloorEventHasBeenTriggered__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DesentIntoAtlantis_FloorEventHasBeenTriggered__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DesentIntoAtlantis_FloorEventHasBeenTriggered__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DesentIntoAtlantis_FloorEventHasBeenTriggered__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DesentIntoAtlantis_FloorEventHasBeenTriggered__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_DesentIntoAtlantis_TriggerNextEventStage__DelegateSignature_Statics
	{
		struct _Script_DesentIntoAtlantis_eventTriggerNextEventStage_Parms
		{
			EFloorEventStates aFloorEventStates;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_aFloorEventStates_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_aFloorEventStates;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_DesentIntoAtlantis_TriggerNextEventStage__DelegateSignature_Statics::NewProp_aFloorEventStates_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_DesentIntoAtlantis_TriggerNextEventStage__DelegateSignature_Statics::NewProp_aFloorEventStates = { "aFloorEventStates", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DesentIntoAtlantis_eventTriggerNextEventStage_Parms, aFloorEventStates), Z_Construct_UEnum_DesentIntoAtlantis_EFloorEventStates, METADATA_PARAMS(nullptr, 0) }; // 2475026128
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DesentIntoAtlantis_TriggerNextEventStage__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DesentIntoAtlantis_TriggerNextEventStage__DelegateSignature_Statics::NewProp_aFloorEventStates_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DesentIntoAtlantis_TriggerNextEventStage__DelegateSignature_Statics::NewProp_aFloorEventStates,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DesentIntoAtlantis_TriggerNextEventStage__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FloorEnum.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DesentIntoAtlantis_TriggerNextEventStage__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DesentIntoAtlantis, nullptr, "TriggerNextEventStage__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_DesentIntoAtlantis_TriggerNextEventStage__DelegateSignature_Statics::_Script_DesentIntoAtlantis_eventTriggerNextEventStage_Parms), Z_Construct_UDelegateFunction_DesentIntoAtlantis_TriggerNextEventStage__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DesentIntoAtlantis_TriggerNextEventStage__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DesentIntoAtlantis_TriggerNextEventStage__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DesentIntoAtlantis_TriggerNextEventStage__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DesentIntoAtlantis_TriggerNextEventStage__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DesentIntoAtlantis_TriggerNextEventStage__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}

static_assert(std::is_polymorphic<FFloorData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FFloorData cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FloorData;
class UScriptStruct* FFloorData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FloorData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FloorData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFloorData, Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("FloorData"));
	}
	return Z_Registration_Info_UScriptStruct_FloorData.OuterSingleton;
}
template<> DESENTINTOATLANTIS_API UScriptStruct* StaticStruct<FFloorData>()
{
	return FFloorData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFloorData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_floorBlueprint_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_floorBlueprint_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_floorBlueprint;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_floorIdentifier_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_floorIdentifier_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_floorIdentifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_startPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_startPosition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloorData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FloorEnum.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFloorData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFloorData>();
	}
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FFloorData_Statics::NewProp_floorBlueprint_Inner = { "floorBlueprint", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloorData_Statics::NewProp_floorBlueprint_MetaData[] = {
		{ "Category", "FloorData" },
		{ "ModuleRelativePath", "Public/FloorEnum.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFloorData_Statics::NewProp_floorBlueprint = { "floorBlueprint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFloorData, floorBlueprint), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFloorData_Statics::NewProp_floorBlueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloorData_Statics::NewProp_floorBlueprint_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FFloorData_Statics::NewProp_floorIdentifier_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloorData_Statics::NewProp_floorIdentifier_MetaData[] = {
		{ "Category", "FloorData" },
		{ "ModuleRelativePath", "Public/FloorEnum.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFloorData_Statics::NewProp_floorIdentifier = { "floorIdentifier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFloorData, floorIdentifier), Z_Construct_UEnum_DesentIntoAtlantis_EFloorIdentifier, METADATA_PARAMS(Z_Construct_UScriptStruct_FFloorData_Statics::NewProp_floorIdentifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloorData_Statics::NewProp_floorIdentifier_MetaData)) }; // 3166737195
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloorData_Statics::NewProp_startPosition_MetaData[] = {
		{ "Category", "FloorData" },
		{ "ModuleRelativePath", "Public/FloorEnum.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFloorData_Statics::NewProp_startPosition = { "startPosition", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFloorData, startPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FFloorData_Statics::NewProp_startPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloorData_Statics::NewProp_startPosition_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFloorData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloorData_Statics::NewProp_floorBlueprint_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloorData_Statics::NewProp_floorBlueprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloorData_Statics::NewProp_floorIdentifier_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloorData_Statics::NewProp_floorIdentifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloorData_Statics::NewProp_startPosition,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFloorData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"FloorData",
		sizeof(FFloorData),
		alignof(FFloorData),
		Z_Construct_UScriptStruct_FFloorData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloorData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFloorData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloorData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFloorData()
	{
		if (!Z_Registration_Info_UScriptStruct_FloorData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FloorData.InnerSingleton, Z_Construct_UScriptStruct_FFloorData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FloorData.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDialogueTriggers;
	static UEnum* EDialogueTriggers_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDialogueTriggers.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDialogueTriggers.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DesentIntoAtlantis_EDialogueTriggers, Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("EDialogueTriggers"));
		}
		return Z_Registration_Info_UEnum_EDialogueTriggers.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UEnum* StaticEnum<EDialogueTriggers>()
	{
		return EDialogueTriggers_StaticEnum();
	}
	struct Z_Construct_UEnum_DesentIntoAtlantis_EDialogueTriggers_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DesentIntoAtlantis_EDialogueTriggers_Statics::Enumerators[] = {
		{ "EDialogueTriggers::None", (int64)EDialogueTriggers::None },
		{ "EDialogueTriggers::StartGame", (int64)EDialogueTriggers::StartGame },
		{ "EDialogueTriggers::Combat1Start", (int64)EDialogueTriggers::Combat1Start },
		{ "EDialogueTriggers::Combat1End", (int64)EDialogueTriggers::Combat1End },
		{ "EDialogueTriggers::ArdusJoin", (int64)EDialogueTriggers::ArdusJoin },
		{ "EDialogueTriggers::SeresFightStart", (int64)EDialogueTriggers::SeresFightStart },
		{ "EDialogueTriggers::SeresFightEnd", (int64)EDialogueTriggers::SeresFightEnd },
		{ "EDialogueTriggers::FinalBossStart", (int64)EDialogueTriggers::FinalBossStart },
		{ "EDialogueTriggers::FinalBossEnd", (int64)EDialogueTriggers::FinalBossEnd },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DesentIntoAtlantis_EDialogueTriggers_Statics::Enum_MetaDataParams[] = {
		{ "ArdusJoin.Name", "EDialogueTriggers::ArdusJoin" },
		{ "Combat1End.Name", "EDialogueTriggers::Combat1End" },
		{ "Combat1Start.Name", "EDialogueTriggers::Combat1Start" },
		{ "FinalBossEnd.Name", "EDialogueTriggers::FinalBossEnd" },
		{ "FinalBossStart.Name", "EDialogueTriggers::FinalBossStart" },
		{ "ModuleRelativePath", "Public/FloorEnum.h" },
		{ "None.Name", "EDialogueTriggers::None" },
		{ "SeresFightEnd.Name", "EDialogueTriggers::SeresFightEnd" },
		{ "SeresFightStart.Name", "EDialogueTriggers::SeresFightStart" },
		{ "StartGame.Name", "EDialogueTriggers::StartGame" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DesentIntoAtlantis_EDialogueTriggers_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		nullptr,
		"EDialogueTriggers",
		"EDialogueTriggers",
		Z_Construct_UEnum_DesentIntoAtlantis_EDialogueTriggers_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_EDialogueTriggers_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DesentIntoAtlantis_EDialogueTriggers_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_EDialogueTriggers_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EDialogueTriggers()
	{
		if (!Z_Registration_Info_UEnum_EDialogueTriggers.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDialogueTriggers.InnerSingleton, Z_Construct_UEnum_DesentIntoAtlantis_EDialogueTriggers_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDialogueTriggers.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETutorialTriggers;
	static UEnum* ETutorialTriggers_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETutorialTriggers.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETutorialTriggers.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DesentIntoAtlantis_ETutorialTriggers, Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("ETutorialTriggers"));
		}
		return Z_Registration_Info_UEnum_ETutorialTriggers.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UEnum* StaticEnum<ETutorialTriggers>()
	{
		return ETutorialTriggers_StaticEnum();
	}
	struct Z_Construct_UEnum_DesentIntoAtlantis_ETutorialTriggers_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DesentIntoAtlantis_ETutorialTriggers_Statics::Enumerators[] = {
		{ "ETutorialTriggers::None", (int64)ETutorialTriggers::None },
		{ "ETutorialTriggers::Combat1Start", (int64)ETutorialTriggers::Combat1Start },
		{ "ETutorialTriggers::Combat1End", (int64)ETutorialTriggers::Combat1End },
		{ "ETutorialTriggers::ArdusJoin", (int64)ETutorialTriggers::ArdusJoin },
		{ "ETutorialTriggers::Combat3End", (int64)ETutorialTriggers::Combat3End },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DesentIntoAtlantis_ETutorialTriggers_Statics::Enum_MetaDataParams[] = {
		{ "ArdusJoin.Name", "ETutorialTriggers::ArdusJoin" },
		{ "Combat1End.Name", "ETutorialTriggers::Combat1End" },
		{ "Combat1Start.Name", "ETutorialTriggers::Combat1Start" },
		{ "Combat3End.Name", "ETutorialTriggers::Combat3End" },
		{ "ModuleRelativePath", "Public/FloorEnum.h" },
		{ "None.Name", "ETutorialTriggers::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DesentIntoAtlantis_ETutorialTriggers_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		nullptr,
		"ETutorialTriggers",
		"ETutorialTriggers",
		Z_Construct_UEnum_DesentIntoAtlantis_ETutorialTriggers_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_ETutorialTriggers_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DesentIntoAtlantis_ETutorialTriggers_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_ETutorialTriggers_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DesentIntoAtlantis_ETutorialTriggers()
	{
		if (!Z_Registration_Info_UEnum_ETutorialTriggers.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETutorialTriggers.InnerSingleton, Z_Construct_UEnum_DesentIntoAtlantis_ETutorialTriggers_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETutorialTriggers.InnerSingleton;
	}

static_assert(std::is_polymorphic<FFloorEventData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FFloorEventData cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FloorEventData;
class UScriptStruct* FFloorEventData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FloorEventData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FloorEventData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFloorEventData, Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("FloorEventData"));
	}
	return Z_Registration_Info_UScriptStruct_FloorEventData.OuterSingleton;
}
template<> DESENTINTOATLANTIS_API UScriptStruct* StaticStruct<FFloorEventData>()
{
	return FFloorEventData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFloorEventData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_floorIdentifier_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_floorIdentifier_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_floorIdentifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_positionInGrid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_positionInGrid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_enemyGroupName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_enemyGroupName;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_tutorialTriggerOnStart_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_tutorialTriggerOnStart_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_tutorialTriggerOnStart;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_tutorialTriggerOnEnd_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_tutorialTriggerOnEnd_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_tutorialTriggerOnEnd;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_dialogueTriggerOnStart_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_dialogueTriggerOnStart_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_dialogueTriggerOnStart;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_dialogueTriggerOnEnd_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_dialogueTriggerOnEnd_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_dialogueTriggerOnEnd;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_partyMemberGainedOnEnd_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_partyMemberGainedOnEnd_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_partyMemberGainedOnEnd;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_viewPushedOnEnd_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_viewPushedOnEnd_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_viewPushedOnEnd;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloorEventData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FloorEnum.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFloorEventData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFloorEventData>();
	}
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_floorIdentifier_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_floorIdentifier_MetaData[] = {
		{ "Category", "FloorEventData" },
		{ "ModuleRelativePath", "Public/FloorEnum.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_floorIdentifier = { "floorIdentifier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFloorEventData, floorIdentifier), Z_Construct_UEnum_DesentIntoAtlantis_EFloorIdentifier, METADATA_PARAMS(Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_floorIdentifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_floorIdentifier_MetaData)) }; // 3166737195
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_positionInGrid_MetaData[] = {
		{ "Category", "FloorEventData" },
		{ "ModuleRelativePath", "Public/FloorEnum.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_positionInGrid = { "positionInGrid", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFloorEventData, positionInGrid), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_positionInGrid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_positionInGrid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_enemyGroupName_MetaData[] = {
		{ "Category", "FloorEventData" },
		{ "ModuleRelativePath", "Public/FloorEnum.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_enemyGroupName = { "enemyGroupName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFloorEventData, enemyGroupName), METADATA_PARAMS(Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_enemyGroupName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_enemyGroupName_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_tutorialTriggerOnStart_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_tutorialTriggerOnStart_MetaData[] = {
		{ "Category", "FloorEventData" },
		{ "ModuleRelativePath", "Public/FloorEnum.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_tutorialTriggerOnStart = { "tutorialTriggerOnStart", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFloorEventData, tutorialTriggerOnStart), Z_Construct_UEnum_DesentIntoAtlantis_ETutorialTriggers, METADATA_PARAMS(Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_tutorialTriggerOnStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_tutorialTriggerOnStart_MetaData)) }; // 4028792989
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_tutorialTriggerOnEnd_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_tutorialTriggerOnEnd_MetaData[] = {
		{ "Category", "FloorEventData" },
		{ "ModuleRelativePath", "Public/FloorEnum.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_tutorialTriggerOnEnd = { "tutorialTriggerOnEnd", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFloorEventData, tutorialTriggerOnEnd), Z_Construct_UEnum_DesentIntoAtlantis_ETutorialTriggers, METADATA_PARAMS(Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_tutorialTriggerOnEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_tutorialTriggerOnEnd_MetaData)) }; // 4028792989
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_dialogueTriggerOnStart_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_dialogueTriggerOnStart_MetaData[] = {
		{ "Category", "FloorEventData" },
		{ "ModuleRelativePath", "Public/FloorEnum.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_dialogueTriggerOnStart = { "dialogueTriggerOnStart", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFloorEventData, dialogueTriggerOnStart), Z_Construct_UEnum_DesentIntoAtlantis_EDialogueTriggers, METADATA_PARAMS(Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_dialogueTriggerOnStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_dialogueTriggerOnStart_MetaData)) }; // 3835709850
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_dialogueTriggerOnEnd_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_dialogueTriggerOnEnd_MetaData[] = {
		{ "Category", "FloorEventData" },
		{ "ModuleRelativePath", "Public/FloorEnum.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_dialogueTriggerOnEnd = { "dialogueTriggerOnEnd", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFloorEventData, dialogueTriggerOnEnd), Z_Construct_UEnum_DesentIntoAtlantis_EDialogueTriggers, METADATA_PARAMS(Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_dialogueTriggerOnEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_dialogueTriggerOnEnd_MetaData)) }; // 3835709850
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_partyMemberGainedOnEnd_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_partyMemberGainedOnEnd_MetaData[] = {
		{ "Category", "FloorEventData" },
		{ "ModuleRelativePath", "Public/FloorEnum.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_partyMemberGainedOnEnd = { "partyMemberGainedOnEnd", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFloorEventData, partyMemberGainedOnEnd), Z_Construct_UEnum_DesentIntoAtlantis_EDataTableClasses, METADATA_PARAMS(Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_partyMemberGainedOnEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_partyMemberGainedOnEnd_MetaData)) }; // 916432985
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_viewPushedOnEnd_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_viewPushedOnEnd_MetaData[] = {
		{ "Category", "FloorEventData" },
		{ "ModuleRelativePath", "Public/FloorEnum.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_viewPushedOnEnd = { "viewPushedOnEnd", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFloorEventData, viewPushedOnEnd), Z_Construct_UEnum_DesentIntoAtlantis_EViews, METADATA_PARAMS(Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_viewPushedOnEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_viewPushedOnEnd_MetaData)) }; // 3315017103
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFloorEventData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_floorIdentifier_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_floorIdentifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_positionInGrid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_enemyGroupName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_tutorialTriggerOnStart_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_tutorialTriggerOnStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_tutorialTriggerOnEnd_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_tutorialTriggerOnEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_dialogueTriggerOnStart_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_dialogueTriggerOnStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_dialogueTriggerOnEnd_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_dialogueTriggerOnEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_partyMemberGainedOnEnd_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_partyMemberGainedOnEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_viewPushedOnEnd_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_viewPushedOnEnd,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFloorEventData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"FloorEventData",
		sizeof(FFloorEventData),
		alignof(FFloorEventData),
		Z_Construct_UScriptStruct_FFloorEventData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloorEventData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFloorEventData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloorEventData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFloorEventData()
	{
		if (!Z_Registration_Info_UScriptStruct_FloorEventData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FloorEventData.InnerSingleton, Z_Construct_UScriptStruct_FFloorEventData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FloorEventData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FTutorialData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FTutorialData cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TutorialData;
class UScriptStruct* FTutorialData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TutorialData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TutorialData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTutorialData, Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("TutorialData"));
	}
	return Z_Registration_Info_UScriptStruct_TutorialData.OuterSingleton;
}
template<> DESENTINTOATLANTIS_API UScriptStruct* StaticStruct<FTutorialData>()
{
	return FTutorialData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTutorialData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_tutorialTrigger_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_tutorialTrigger_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_tutorialTrigger;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_classTitle_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_classTitle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_characterName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_characterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_classDescription_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_classDescription;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bulletPoint1_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_bulletPoint1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bulletPoint2_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_bulletPoint2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bulletPoint3_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_bulletPoint3;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_characterPortrait_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_characterPortrait;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FloorEnum.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTutorialData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTutorialData>();
	}
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_tutorialTrigger_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_tutorialTrigger_MetaData[] = {
		{ "Category", "TutorialData" },
		{ "ModuleRelativePath", "Public/FloorEnum.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_tutorialTrigger = { "tutorialTrigger", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTutorialData, tutorialTrigger), Z_Construct_UEnum_DesentIntoAtlantis_ETutorialTriggers, METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_tutorialTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_tutorialTrigger_MetaData)) }; // 4028792989
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_classTitle_MetaData[] = {
		{ "Category", "TutorialData" },
		{ "ModuleRelativePath", "Public/FloorEnum.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_classTitle = { "classTitle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTutorialData, classTitle), METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_classTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_classTitle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_characterName_MetaData[] = {
		{ "Category", "TutorialData" },
		{ "ModuleRelativePath", "Public/FloorEnum.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_characterName = { "characterName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTutorialData, characterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_characterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_characterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_classDescription_MetaData[] = {
		{ "Category", "TutorialData" },
		{ "ModuleRelativePath", "Public/FloorEnum.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_classDescription = { "classDescription", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTutorialData, classDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_classDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_classDescription_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_bulletPoint1_MetaData[] = {
		{ "Category", "TutorialData" },
		{ "ModuleRelativePath", "Public/FloorEnum.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_bulletPoint1 = { "bulletPoint1", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTutorialData, bulletPoint1), METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_bulletPoint1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_bulletPoint1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_bulletPoint2_MetaData[] = {
		{ "Category", "TutorialData" },
		{ "ModuleRelativePath", "Public/FloorEnum.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_bulletPoint2 = { "bulletPoint2", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTutorialData, bulletPoint2), METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_bulletPoint2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_bulletPoint2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_bulletPoint3_MetaData[] = {
		{ "Category", "TutorialData" },
		{ "ModuleRelativePath", "Public/FloorEnum.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_bulletPoint3 = { "bulletPoint3", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTutorialData, bulletPoint3), METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_bulletPoint3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_bulletPoint3_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_characterPortrait_MetaData[] = {
		{ "Category", "TutorialData" },
		{ "ModuleRelativePath", "Public/FloorEnum.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_characterPortrait = { "characterPortrait", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTutorialData, characterPortrait), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_characterPortrait_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_characterPortrait_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTutorialData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_tutorialTrigger_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_tutorialTrigger,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_classTitle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_characterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_classDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_bulletPoint1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_bulletPoint2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_bulletPoint3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_characterPortrait,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTutorialData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"TutorialData",
		sizeof(FTutorialData),
		alignof(FTutorialData),
		Z_Construct_UScriptStruct_FTutorialData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTutorialData()
	{
		if (!Z_Registration_Info_UScriptStruct_TutorialData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TutorialData.InnerSingleton, Z_Construct_UScriptStruct_FTutorialData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TutorialData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorEnum_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorEnum_h_Statics::EnumInfo[] = {
		{ EFloorEventStates_StaticEnum, TEXT("EFloorEventStates"), &Z_Registration_Info_UEnum_EFloorEventStates, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2475026128U) },
		{ EDialogueTriggers_StaticEnum, TEXT("EDialogueTriggers"), &Z_Registration_Info_UEnum_EDialogueTriggers, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3835709850U) },
		{ ETutorialTriggers_StaticEnum, TEXT("ETutorialTriggers"), &Z_Registration_Info_UEnum_ETutorialTriggers, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4028792989U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorEnum_h_Statics::ScriptStructInfo[] = {
		{ FFloorData::StaticStruct, Z_Construct_UScriptStruct_FFloorData_Statics::NewStructOps, TEXT("FloorData"), &Z_Registration_Info_UScriptStruct_FloorData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFloorData), 1519163134U) },
		{ FFloorEventData::StaticStruct, Z_Construct_UScriptStruct_FFloorEventData_Statics::NewStructOps, TEXT("FloorEventData"), &Z_Registration_Info_UScriptStruct_FloorEventData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFloorEventData), 2380252017U) },
		{ FTutorialData::StaticStruct, Z_Construct_UScriptStruct_FTutorialData_Statics::NewStructOps, TEXT("TutorialData"), &Z_Registration_Info_UScriptStruct_TutorialData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTutorialData), 2681244502U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorEnum_h_1139424525(TEXT("/Script/DesentIntoAtlantis"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorEnum_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorEnum_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorEnum_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorEnum_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
