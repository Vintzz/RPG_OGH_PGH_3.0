// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DESIGNER_DesignerSettings_generated_h
#error "DesignerSettings.generated.h already included, missing '#pragma once' in DesignerSettings.h"
#endif
#define DESIGNER_DesignerSettings_generated_h

#define HostProject_Plugins_Designer_Source_Designer_Public_DesignerSettings_h_65_GENERATED_BODY \
	friend DESIGNER_API class UScriptStruct* Z_Construct_UScriptStruct_FRandomMinMaxFloat(); \
	DESIGNER_API static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__RandomValue() { return STRUCT_OFFSET(FRandomMinMaxFloat, RandomValue); }


#define HostProject_Plugins_Designer_Source_Designer_Public_DesignerSettings_h_119_RPC_WRAPPERS
#define HostProject_Plugins_Designer_Source_Designer_Public_DesignerSettings_h_119_RPC_WRAPPERS_NO_PURE_DECLS
#define HostProject_Plugins_Designer_Source_Designer_Public_DesignerSettings_h_119_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDesignerSettings(); \
	friend DESIGNER_API class UClass* Z_Construct_UClass_UDesignerSettings(); \
public: \
	DECLARE_CLASS(UDesignerSettings, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Designer"), NO_API) \
	DECLARE_SERIALIZER(UDesignerSettings) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_Designer_Source_Designer_Public_DesignerSettings_h_119_INCLASS \
private: \
	static void StaticRegisterNativesUDesignerSettings(); \
	friend DESIGNER_API class UClass* Z_Construct_UClass_UDesignerSettings(); \
public: \
	DECLARE_CLASS(UDesignerSettings, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Designer"), NO_API) \
	DECLARE_SERIALIZER(UDesignerSettings) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_Designer_Source_Designer_Public_DesignerSettings_h_119_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDesignerSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDesignerSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDesignerSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDesignerSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDesignerSettings(UDesignerSettings&&); \
	NO_API UDesignerSettings(const UDesignerSettings&); \
public:


#define HostProject_Plugins_Designer_Source_Designer_Public_DesignerSettings_h_119_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDesignerSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDesignerSettings(UDesignerSettings&&); \
	NO_API UDesignerSettings(const UDesignerSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDesignerSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDesignerSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDesignerSettings)


#define HostProject_Plugins_Designer_Source_Designer_Public_DesignerSettings_h_119_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_Designer_Source_Designer_Public_DesignerSettings_h_116_PROLOG
#define HostProject_Plugins_Designer_Source_Designer_Public_DesignerSettings_h_119_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_Designer_Source_Designer_Public_DesignerSettings_h_119_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_Designer_Source_Designer_Public_DesignerSettings_h_119_RPC_WRAPPERS \
	HostProject_Plugins_Designer_Source_Designer_Public_DesignerSettings_h_119_INCLASS \
	HostProject_Plugins_Designer_Source_Designer_Public_DesignerSettings_h_119_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_Designer_Source_Designer_Public_DesignerSettings_h_119_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_Designer_Source_Designer_Public_DesignerSettings_h_119_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_Designer_Source_Designer_Public_DesignerSettings_h_119_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_Designer_Source_Designer_Public_DesignerSettings_h_119_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_Designer_Source_Designer_Public_DesignerSettings_h_119_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class DesignerSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_Designer_Source_Designer_Public_DesignerSettings_h


#define FOREACH_ENUM_EAXISTYPE(op) \
	op(EAxisType::None) \
	op(EAxisType::Forward) \
	op(EAxisType::Backward) \
	op(EAxisType::Right) \
	op(EAxisType::Left) \
	op(EAxisType::Up) \
	op(EAxisType::Down) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
