// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/DesignerSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDesignerSettings() {}
// Cross Module References
	DESIGNER_API UEnum* Z_Construct_UEnum_Designer_EAxisType();
	UPackage* Z_Construct_UPackage__Script_Designer();
	DESIGNER_API UScriptStruct* Z_Construct_UScriptStruct_FRandomMinMaxFloat();
	DESIGNER_API UClass* Z_Construct_UClass_UDesignerSettings_NoRegister();
	DESIGNER_API UClass* Z_Construct_UClass_UDesignerSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	static UEnum* EAxisType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Designer_EAxisType, Z_Construct_UPackage__Script_Designer(), TEXT("EAxisType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAxisType(EAxisType_StaticEnum, TEXT("/Script/Designer"), TEXT("EAxisType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Designer_EAxisType_CRC() { return 1977196979U; }
	UEnum* Z_Construct_UEnum_Designer_EAxisType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Designer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAxisType"), 0, Get_Z_Construct_UEnum_Designer_EAxisType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAxisType::None", (int64)EAxisType::None },
				{ "EAxisType::Forward", (int64)EAxisType::Forward },
				{ "EAxisType::Backward", (int64)EAxisType::Backward },
				{ "EAxisType::Right", (int64)EAxisType::Right },
				{ "EAxisType::Left", (int64)EAxisType::Left },
				{ "EAxisType::Up", (int64)EAxisType::Up },
				{ "EAxisType::Down", (int64)EAxisType::Down },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Backward.DisplayName", "Backward (-X)" },
				{ "Backward.ToolTip", "The backward vector" },
				{ "Down.DisplayName", "Down (-Z)" },
				{ "Down.ToolTip", "The down vector" },
				{ "Forward.DisplayName", "Forward (+X)" },
				{ "Forward.ToolTip", "The forward vector" },
				{ "Left.DisplayName", "Left (-Y)" },
				{ "Left.ToolTip", "The left vector" },
				{ "ModuleRelativePath", "Public/DesignerSettings.h" },
				{ "None.DisplayName", "None" },
				{ "None.ToolTip", "None" },
				{ "Right.DisplayName", "Right (+Y)" },
				{ "Right.ToolTip", "The right vector" },
				{ "Up.DisplayName", "Up (+Z)" },
				{ "Up.ToolTip", "The up vector" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Designer,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EAxisType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EAxisType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FRandomMinMaxFloat::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DESIGNER_API uint32 Get_Z_Construct_UScriptStruct_FRandomMinMaxFloat_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRandomMinMaxFloat, Z_Construct_UPackage__Script_Designer(), TEXT("RandomMinMaxFloat"), sizeof(FRandomMinMaxFloat), Get_Z_Construct_UScriptStruct_FRandomMinMaxFloat_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRandomMinMaxFloat(FRandomMinMaxFloat::StaticStruct, TEXT("/Script/Designer"), TEXT("RandomMinMaxFloat"), false, nullptr, nullptr);
static struct FScriptStruct_Designer_StaticRegisterNativesFRandomMinMaxFloat
{
	FScriptStruct_Designer_StaticRegisterNativesFRandomMinMaxFloat()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RandomMinMaxFloat")),new UScriptStruct::TCppStructOps<FRandomMinMaxFloat>);
	}
} ScriptStruct_Designer_StaticRegisterNativesFRandomMinMaxFloat;
	UScriptStruct* Z_Construct_UScriptStruct_FRandomMinMaxFloat()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRandomMinMaxFloat_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Designer();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RandomMinMaxFloat"), sizeof(FRandomMinMaxFloat), Get_Z_Construct_UScriptStruct_FRandomMinMaxFloat_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/DesignerSettings.h" },
				{ "ToolTip", "A random float within a min max range\nOption for randomly negating the value" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRandomMinMaxFloat>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomValue_MetaData[] = {
				{ "ModuleRelativePath", "Public/DesignerSettings.h" },
				{ "ToolTip", "The randomly generated value" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RandomValue = { UE4CodeGen_Private::EPropertyClass::Float, "RandomValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FRandomMinMaxFloat, RandomValue), METADATA_PARAMS(NewProp_RandomValue_MetaData, ARRAY_COUNT(NewProp_RandomValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRandomlyNegateValue_MetaData[] = {
				{ "Category", "RandomMinMaxFloat" },
				{ "ModuleRelativePath", "Public/DesignerSettings.h" },
				{ "ToolTip", "Is this value allowed to randomly flip the sign of the generated value?\ni.e. if Min = 30 and Max = 30 the outcome can be either 30 or -30 when this is set to true" },
			};
#endif
			auto NewProp_bRandomlyNegateValue_SetBit = [](void* Obj){ ((FRandomMinMaxFloat*)Obj)->bRandomlyNegateValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRandomlyNegateValue = { UE4CodeGen_Private::EPropertyClass::Bool, "bRandomlyNegateValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FRandomMinMaxFloat), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRandomlyNegateValue_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRandomlyNegateValue_MetaData, ARRAY_COUNT(NewProp_bRandomlyNegateValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[] = {
				{ "Category", "RandomMinMaxFloat" },
				{ "ModuleRelativePath", "Public/DesignerSettings.h" },
				{ "ToolTip", "The maximum value" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Max = { UE4CodeGen_Private::EPropertyClass::Float, "Max", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FRandomMinMaxFloat, Max), METADATA_PARAMS(NewProp_Max_MetaData, ARRAY_COUNT(NewProp_Max_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[] = {
				{ "Category", "RandomMinMaxFloat" },
				{ "ModuleRelativePath", "Public/DesignerSettings.h" },
				{ "ToolTip", "The minimal value" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Min = { UE4CodeGen_Private::EPropertyClass::Float, "Min", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FRandomMinMaxFloat, Min), METADATA_PARAMS(NewProp_Min_MetaData, ARRAY_COUNT(NewProp_Min_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RandomValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRandomlyNegateValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Max,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Min,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Designer,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"RandomMinMaxFloat",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FRandomMinMaxFloat),
				alignof(FRandomMinMaxFloat),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRandomMinMaxFloat_CRC() { return 2943039920U; }
	void UDesignerSettings::StaticRegisterNativesUDesignerSettings()
	{
	}
	UClass* Z_Construct_UClass_UDesignerSettings_NoRegister()
	{
		return UDesignerSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_UDesignerSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_Designer,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "DesignerSettings.h" },
				{ "ModuleRelativePath", "Public/DesignerSettings.h" },
				{ "ToolTip", "The settings shown the in editor mode details panel" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomScaleZ_MetaData[] = {
				{ "Category", "SpawnSettings" },
				{ "EditCondition", "bApplyRandomScale" },
				{ "ModuleRelativePath", "Public/DesignerSettings.h" },
				{ "ToolTip", "Random scale for z axis" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RandomScaleZ = { UE4CodeGen_Private::EPropertyClass::Struct, "RandomScaleZ", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000400000001, 1, nullptr, STRUCT_OFFSET(UDesignerSettings, RandomScaleZ), Z_Construct_UScriptStruct_FRandomMinMaxFloat, METADATA_PARAMS(NewProp_RandomScaleZ_MetaData, ARRAY_COUNT(NewProp_RandomScaleZ_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomScaleY_MetaData[] = {
				{ "Category", "SpawnSettings" },
				{ "EditCondition", "bApplyRandomScale" },
				{ "ModuleRelativePath", "Public/DesignerSettings.h" },
				{ "ToolTip", "Random scale for y axis" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RandomScaleY = { UE4CodeGen_Private::EPropertyClass::Struct, "RandomScaleY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000400000001, 1, nullptr, STRUCT_OFFSET(UDesignerSettings, RandomScaleY), Z_Construct_UScriptStruct_FRandomMinMaxFloat, METADATA_PARAMS(NewProp_RandomScaleY_MetaData, ARRAY_COUNT(NewProp_RandomScaleY_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomScaleX_MetaData[] = {
				{ "Category", "SpawnSettings" },
				{ "EditCondition", "bApplyRandomScale" },
				{ "ModuleRelativePath", "Public/DesignerSettings.h" },
				{ "ToolTip", "Random scale for x axis" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RandomScaleX = { UE4CodeGen_Private::EPropertyClass::Struct, "RandomScaleX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000400000001, 1, nullptr, STRUCT_OFFSET(UDesignerSettings, RandomScaleX), Z_Construct_UScriptStruct_FRandomMinMaxFloat, METADATA_PARAMS(NewProp_RandomScaleX_MetaData, ARRAY_COUNT(NewProp_RandomScaleX_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bApplyRandomScale_MetaData[] = {
				{ "Category", "SpawnSettings" },
				{ "ModuleRelativePath", "Public/DesignerSettings.h" },
				{ "ToolTip", "Randomly scale the mesh" },
			};
#endif
			auto NewProp_bApplyRandomScale_SetBit = [](void* Obj){ ((UDesignerSettings*)Obj)->bApplyRandomScale = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bApplyRandomScale = { UE4CodeGen_Private::EPropertyClass::Bool, "bApplyRandomScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000400000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UDesignerSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bApplyRandomScale_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bApplyRandomScale_MetaData, ARRAY_COUNT(NewProp_bApplyRandomScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bScaleBoundsTowardsCursor_MetaData[] = {
				{ "Category", "SpawnSettings" },
				{ "ModuleRelativePath", "Public/DesignerSettings.h" },
				{ "ToolTip", "Scale the bounds of the mesh towards the cursor location" },
			};
#endif
			auto NewProp_bScaleBoundsTowardsCursor_SetBit = [](void* Obj){ ((UDesignerSettings*)Obj)->bScaleBoundsTowardsCursor = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bScaleBoundsTowardsCursor = { UE4CodeGen_Private::EPropertyClass::Bool, "bScaleBoundsTowardsCursor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000400000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UDesignerSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bScaleBoundsTowardsCursor_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bScaleBoundsTowardsCursor_MetaData, ARRAY_COUNT(NewProp_bScaleBoundsTowardsCursor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomRotationZ_MetaData[] = {
				{ "Category", "SpawnSettings" },
				{ "EditCondition", "bApplyRandomRotation" },
				{ "ModuleRelativePath", "Public/DesignerSettings.h" },
				{ "ToolTip", "Random rotation offset applied to z axis the rotation matrix on spawn" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RandomRotationZ = { UE4CodeGen_Private::EPropertyClass::Struct, "RandomRotationZ", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000400000001, 1, nullptr, STRUCT_OFFSET(UDesignerSettings, RandomRotationZ), Z_Construct_UScriptStruct_FRandomMinMaxFloat, METADATA_PARAMS(NewProp_RandomRotationZ_MetaData, ARRAY_COUNT(NewProp_RandomRotationZ_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomRotationY_MetaData[] = {
				{ "Category", "SpawnSettings" },
				{ "EditCondition", "bApplyRandomRotation" },
				{ "ModuleRelativePath", "Public/DesignerSettings.h" },
				{ "ToolTip", "Random rotation offset applied to the y axis rotation matrix on spawn" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RandomRotationY = { UE4CodeGen_Private::EPropertyClass::Struct, "RandomRotationY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000400000001, 1, nullptr, STRUCT_OFFSET(UDesignerSettings, RandomRotationY), Z_Construct_UScriptStruct_FRandomMinMaxFloat, METADATA_PARAMS(NewProp_RandomRotationY_MetaData, ARRAY_COUNT(NewProp_RandomRotationY_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomRotationX_MetaData[] = {
				{ "Category", "SpawnSettings" },
				{ "EditCondition", "bApplyRandomRotation" },
				{ "ModuleRelativePath", "Public/DesignerSettings.h" },
				{ "ToolTip", "Random rotation offset applied to the x axis rotation matrix on spawn" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RandomRotationX = { UE4CodeGen_Private::EPropertyClass::Struct, "RandomRotationX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000400000001, 1, nullptr, STRUCT_OFFSET(UDesignerSettings, RandomRotationX), Z_Construct_UScriptStruct_FRandomMinMaxFloat, METADATA_PARAMS(NewProp_RandomRotationX_MetaData, ARRAY_COUNT(NewProp_RandomRotationX_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bApplyRandomRotation_MetaData[] = {
				{ "Category", "SpawnSettings" },
				{ "ModuleRelativePath", "Public/DesignerSettings.h" },
				{ "ToolTip", "Randomly rotates the mesh" },
			};
#endif
			auto NewProp_bApplyRandomRotation_SetBit = [](void* Obj){ ((UDesignerSettings*)Obj)->bApplyRandomRotation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bApplyRandomRotation = { UE4CodeGen_Private::EPropertyClass::Bool, "bApplyRandomRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000400000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UDesignerSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bApplyRandomRotation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bApplyRandomRotation_MetaData, ARRAY_COUNT(NewProp_bApplyRandomRotation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSnapToGridRotationZ_MetaData[] = {
				{ "Category", "SpawnSettings" },
				{ "ModuleRelativePath", "Public/DesignerSettings.h" },
				{ "ToolTip", "Is the rotation z axis snapped to the grid set in the viewport grid settings" },
			};
#endif
			auto NewProp_bSnapToGridRotationZ_SetBit = [](void* Obj){ ((UDesignerSettings*)Obj)->bSnapToGridRotationZ = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSnapToGridRotationZ = { UE4CodeGen_Private::EPropertyClass::Bool, "bSnapToGridRotationZ", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000400000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UDesignerSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSnapToGridRotationZ_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSnapToGridRotationZ_MetaData, ARRAY_COUNT(NewProp_bSnapToGridRotationZ_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSnapToGridRotationY_MetaData[] = {
				{ "Category", "SpawnSettings" },
				{ "ModuleRelativePath", "Public/DesignerSettings.h" },
				{ "ToolTip", "Is the rotation y axis snapped to the grid set in the viewport grid settings" },
			};
#endif
			auto NewProp_bSnapToGridRotationY_SetBit = [](void* Obj){ ((UDesignerSettings*)Obj)->bSnapToGridRotationY = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSnapToGridRotationY = { UE4CodeGen_Private::EPropertyClass::Bool, "bSnapToGridRotationY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000400000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UDesignerSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSnapToGridRotationY_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSnapToGridRotationY_MetaData, ARRAY_COUNT(NewProp_bSnapToGridRotationY_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSnapToGridRotationX_MetaData[] = {
				{ "Category", "SpawnSettings" },
				{ "ModuleRelativePath", "Public/DesignerSettings.h" },
				{ "ToolTip", "Is the rotation x axis snapped to the grid set in the viewport grid settings" },
			};
#endif
			auto NewProp_bSnapToGridRotationX_SetBit = [](void* Obj){ ((UDesignerSettings*)Obj)->bSnapToGridRotationX = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSnapToGridRotationX = { UE4CodeGen_Private::EPropertyClass::Bool, "bSnapToGridRotationX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000400000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UDesignerSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSnapToGridRotationX_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSnapToGridRotationX_MetaData, ARRAY_COUNT(NewProp_bSnapToGridRotationX_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisToAlignWithCursor_MetaData[] = {
				{ "Category", "SpawnSettings" },
				{ "ModuleRelativePath", "Public/DesignerSettings.h" },
				{ "ToolTip", "Actor axis vector to align with the cursor direction" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AxisToAlignWithCursor = { UE4CodeGen_Private::EPropertyClass::Enum, "AxisToAlignWithCursor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000400000001, 1, nullptr, STRUCT_OFFSET(UDesignerSettings, AxisToAlignWithCursor), Z_Construct_UEnum_Designer_EAxisType, METADATA_PARAMS(NewProp_AxisToAlignWithCursor_MetaData, ARRAY_COUNT(NewProp_AxisToAlignWithCursor_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_AxisToAlignWithCursor_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisToAlignWithNormal_MetaData[] = {
				{ "Category", "SpawnSettings" },
				{ "ModuleRelativePath", "Public/DesignerSettings.h" },
				{ "ToolTip", "Actor axis vector to align with the hit surface direction" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AxisToAlignWithNormal = { UE4CodeGen_Private::EPropertyClass::Enum, "AxisToAlignWithNormal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000400000001, 1, nullptr, STRUCT_OFFSET(UDesignerSettings, AxisToAlignWithNormal), Z_Construct_UEnum_Designer_EAxisType, METADATA_PARAMS(NewProp_AxisToAlignWithNormal_MetaData, ARRAY_COUNT(NewProp_AxisToAlignWithNormal_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_AxisToAlignWithNormal_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldLocationOffset_MetaData[] = {
				{ "Category", "SpawnSettings" },
				{ "ModuleRelativePath", "Public/DesignerSettings.h" },
				{ "ToolTip", "The spawn rotation offset in world space" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldLocationOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "WorldLocationOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000400000001, 1, nullptr, STRUCT_OFFSET(UDesignerSettings, WorldLocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_WorldLocationOffset_MetaData, ARRAY_COUNT(NewProp_WorldLocationOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelativeLocationOffset_MetaData[] = {
				{ "Category", "SpawnSettings" },
				{ "ModuleRelativePath", "Public/DesignerSettings.h" },
				{ "ToolTip", "The spawn location offset in relative space" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelativeLocationOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "RelativeLocationOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000400000001, 1, nullptr, STRUCT_OFFSET(UDesignerSettings, RelativeLocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_RelativeLocationOffset_MetaData, ARRAY_COUNT(NewProp_RelativeLocationOffset_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RandomScaleZ,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RandomScaleY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RandomScaleX,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bApplyRandomScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bScaleBoundsTowardsCursor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RandomRotationZ,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RandomRotationY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RandomRotationX,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bApplyRandomRotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSnapToGridRotationZ,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSnapToGridRotationY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSnapToGridRotationX,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AxisToAlignWithCursor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AxisToAlignWithCursor_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AxisToAlignWithNormal,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AxisToAlignWithNormal_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldLocationOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RelativeLocationOffset,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UDesignerSettings>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UDesignerSettings::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
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
	IMPLEMENT_CLASS(UDesignerSettings, 350244691);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDesignerSettings(Z_Construct_UClass_UDesignerSettings, &UDesignerSettings::StaticClass, TEXT("/Script/Designer"), TEXT("UDesignerSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDesignerSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
