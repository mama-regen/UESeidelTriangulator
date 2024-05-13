// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeidelTriangulator/Public/st_Shape.h"
#include "SeidelTriangulator/Public/st_Ring.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodest_Shape() {}
// Cross Module References
	SEIDELTRIANGULATOR_API UScriptStruct* Z_Construct_UScriptStruct_Fst_Ring();
	SEIDELTRIANGULATOR_API UScriptStruct* Z_Construct_UScriptStruct_Fst_Shape();
	UPackage* Z_Construct_UPackage__Script_SeidelTriangulator();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_st_Shape;
class UScriptStruct* Fst_Shape::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_st_Shape.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_st_Shape.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_Fst_Shape, (UObject*)Z_Construct_UPackage__Script_SeidelTriangulator(), TEXT("st_Shape"));
	}
	return Z_Registration_Info_UScriptStruct_st_Shape.OuterSingleton;
}
template<> SEIDELTRIANGULATOR_API UScriptStruct* StaticStruct<Fst_Shape>()
{
	return Fst_Shape::StaticStruct();
}
	struct Z_Construct_UScriptStruct_Fst_Shape_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Holes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Holes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Holes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_Fst_Shape_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/st_Shape.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_Fst_Shape_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<Fst_Shape>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_Fst_Shape_Statics::NewProp_Bounds_MetaData[] = {
		{ "Category", "st_Shape" },
		{ "ModuleRelativePath", "Public/st_Shape.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_Fst_Shape_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Fst_Shape, Bounds), Z_Construct_UScriptStruct_Fst_Ring, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_Fst_Shape_Statics::NewProp_Bounds_MetaData), Z_Construct_UScriptStruct_Fst_Shape_Statics::NewProp_Bounds_MetaData) }; // 4177252305
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_Fst_Shape_Statics::NewProp_Holes_Inner = { "Holes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_Fst_Ring, METADATA_PARAMS(0, nullptr) }; // 4177252305
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_Fst_Shape_Statics::NewProp_Holes_MetaData[] = {
		{ "Category", "st_Shape" },
		{ "ModuleRelativePath", "Public/st_Shape.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_Fst_Shape_Statics::NewProp_Holes = { "Holes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Fst_Shape, Holes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_Fst_Shape_Statics::NewProp_Holes_MetaData), Z_Construct_UScriptStruct_Fst_Shape_Statics::NewProp_Holes_MetaData) }; // 4177252305
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_Fst_Shape_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_Fst_Shape_Statics::NewProp_Bounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_Fst_Shape_Statics::NewProp_Holes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_Fst_Shape_Statics::NewProp_Holes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_Fst_Shape_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SeidelTriangulator,
		nullptr,
		&NewStructOps,
		"st_Shape",
		Z_Construct_UScriptStruct_Fst_Shape_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_Fst_Shape_Statics::PropPointers),
		sizeof(Fst_Shape),
		alignof(Fst_Shape),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_Fst_Shape_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_Fst_Shape_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_Fst_Shape_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_Fst_Shape()
	{
		if (!Z_Registration_Info_UScriptStruct_st_Shape.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_st_Shape.InnerSingleton, Z_Construct_UScriptStruct_Fst_Shape_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_st_Shape.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Unreal_PluginDev5_3_Plugins_SeidelTriangulator_Source_SeidelTriangulator_Public_st_Shape_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_PluginDev5_3_Plugins_SeidelTriangulator_Source_SeidelTriangulator_Public_st_Shape_h_Statics::ScriptStructInfo[] = {
		{ Fst_Shape::StaticStruct, Z_Construct_UScriptStruct_Fst_Shape_Statics::NewStructOps, TEXT("st_Shape"), &Z_Registration_Info_UScriptStruct_st_Shape, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(Fst_Shape), 3364498267U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_PluginDev5_3_Plugins_SeidelTriangulator_Source_SeidelTriangulator_Public_st_Shape_h_4288694741(TEXT("/Script/SeidelTriangulator"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Unreal_PluginDev5_3_Plugins_SeidelTriangulator_Source_SeidelTriangulator_Public_st_Shape_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_PluginDev5_3_Plugins_SeidelTriangulator_Source_SeidelTriangulator_Public_st_Shape_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
