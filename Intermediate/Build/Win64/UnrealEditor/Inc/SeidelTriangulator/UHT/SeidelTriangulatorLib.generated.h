// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SeidelTriangulatorLib.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct Fst_Ring;
struct Fst_Shape;
struct Fst_Triang;
#ifdef SEIDELTRIANGULATOR_SeidelTriangulatorLib_generated_h
#error "SeidelTriangulatorLib.generated.h already included, missing '#pragma once' in SeidelTriangulatorLib.h"
#endif
#define SEIDELTRIANGULATOR_SeidelTriangulatorLib_generated_h

#define FID_Unreal_PluginDev5_3_Plugins_SeidelTriangulator_Source_SeidelTriangulator_Public_SeidelTriangulatorLib_h_20_SPARSE_DATA
#define FID_Unreal_PluginDev5_3_Plugins_SeidelTriangulator_Source_SeidelTriangulator_Public_SeidelTriangulatorLib_h_20_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_PluginDev5_3_Plugins_SeidelTriangulator_Source_SeidelTriangulator_Public_SeidelTriangulatorLib_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_PluginDev5_3_Plugins_SeidelTriangulator_Source_SeidelTriangulator_Public_SeidelTriangulatorLib_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateShape); \
	DECLARE_FUNCTION(execCreateRing); \
	DECLARE_FUNCTION(execTriangulateShape);


#define FID_Unreal_PluginDev5_3_Plugins_SeidelTriangulator_Source_SeidelTriangulator_Public_SeidelTriangulatorLib_h_20_ACCESSORS
#define FID_Unreal_PluginDev5_3_Plugins_SeidelTriangulator_Source_SeidelTriangulator_Public_SeidelTriangulatorLib_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSeidelTriangulatorLib(); \
	friend struct Z_Construct_UClass_USeidelTriangulatorLib_Statics; \
public: \
	DECLARE_CLASS(USeidelTriangulatorLib, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SeidelTriangulator"), NO_API) \
	DECLARE_SERIALIZER(USeidelTriangulatorLib)


#define FID_Unreal_PluginDev5_3_Plugins_SeidelTriangulator_Source_SeidelTriangulator_Public_SeidelTriangulatorLib_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USeidelTriangulatorLib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USeidelTriangulatorLib(USeidelTriangulatorLib&&); \
	NO_API USeidelTriangulatorLib(const USeidelTriangulatorLib&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USeidelTriangulatorLib); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USeidelTriangulatorLib); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USeidelTriangulatorLib) \
	NO_API virtual ~USeidelTriangulatorLib();


#define FID_Unreal_PluginDev5_3_Plugins_SeidelTriangulator_Source_SeidelTriangulator_Public_SeidelTriangulatorLib_h_17_PROLOG
#define FID_Unreal_PluginDev5_3_Plugins_SeidelTriangulator_Source_SeidelTriangulator_Public_SeidelTriangulatorLib_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_PluginDev5_3_Plugins_SeidelTriangulator_Source_SeidelTriangulator_Public_SeidelTriangulatorLib_h_20_SPARSE_DATA \
	FID_Unreal_PluginDev5_3_Plugins_SeidelTriangulator_Source_SeidelTriangulator_Public_SeidelTriangulatorLib_h_20_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_PluginDev5_3_Plugins_SeidelTriangulator_Source_SeidelTriangulator_Public_SeidelTriangulatorLib_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_PluginDev5_3_Plugins_SeidelTriangulator_Source_SeidelTriangulator_Public_SeidelTriangulatorLib_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_PluginDev5_3_Plugins_SeidelTriangulator_Source_SeidelTriangulator_Public_SeidelTriangulatorLib_h_20_ACCESSORS \
	FID_Unreal_PluginDev5_3_Plugins_SeidelTriangulator_Source_SeidelTriangulator_Public_SeidelTriangulatorLib_h_20_INCLASS_NO_PURE_DECLS \
	FID_Unreal_PluginDev5_3_Plugins_SeidelTriangulator_Source_SeidelTriangulator_Public_SeidelTriangulatorLib_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEIDELTRIANGULATOR_API UClass* StaticClass<class USeidelTriangulatorLib>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_PluginDev5_3_Plugins_SeidelTriangulator_Source_SeidelTriangulator_Public_SeidelTriangulatorLib_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
