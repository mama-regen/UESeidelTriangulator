// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeidelTriangulator/Public/st_Ring.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodest_Ring() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	SEIDELTRIANGULATOR_API UScriptStruct* Z_Construct_UScriptStruct_Fst_Ring();
	UPackage* Z_Construct_UPackage__Script_SeidelTriangulator();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_st_Ring;
class UScriptStruct* Fst_Ring::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_st_Ring.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_st_Ring.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_Fst_Ring, (UObject*)Z_Construct_UPackage__Script_SeidelTriangulator(), TEXT("st_Ring"));
	}
	return Z_Registration_Info_UScriptStruct_st_Ring.OuterSingleton;
}
template<> SEIDELTRIANGULATOR_API UScriptStruct* StaticStruct<Fst_Ring>()
{
	return Fst_Ring::StaticStruct();
}
	struct Z_Construct_UScriptStruct_Fst_Ring_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_Fst_Ring_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/st_Ring.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_Fst_Ring_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<Fst_Ring>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_Fst_Ring_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_Fst_Ring_Statics::NewProp_Points_MetaData[] = {
		{ "Category", "st_Ring" },
		{ "ModuleRelativePath", "Public/st_Ring.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_Fst_Ring_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Fst_Ring, Points), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_Fst_Ring_Statics::NewProp_Points_MetaData), Z_Construct_UScriptStruct_Fst_Ring_Statics::NewProp_Points_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_Fst_Ring_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_Fst_Ring_Statics::NewProp_Points_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_Fst_Ring_Statics::NewProp_Points,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_Fst_Ring_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SeidelTriangulator,
		nullptr,
		&NewStructOps,
		"st_Ring",
		Z_Construct_UScriptStruct_Fst_Ring_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_Fst_Ring_Statics::PropPointers),
		sizeof(Fst_Ring),
		alignof(Fst_Ring),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_Fst_Ring_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_Fst_Ring_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_Fst_Ring_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_Fst_Ring()
	{
		if (!Z_Registration_Info_UScriptStruct_st_Ring.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_st_Ring.InnerSingleton, Z_Construct_UScriptStruct_Fst_Ring_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_st_Ring.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Unreal_PluginDev5_3_Plugins_SeidelTriangulator_Source_SeidelTriangulator_Public_st_Ring_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_PluginDev5_3_Plugins_SeidelTriangulator_Source_SeidelTriangulator_Public_st_Ring_h_Statics::ScriptStructInfo[] = {
		{ Fst_Ring::StaticStruct, Z_Construct_UScriptStruct_Fst_Ring_Statics::NewStructOps, TEXT("st_Ring"), &Z_Registration_Info_UScriptStruct_st_Ring, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(Fst_Ring), 4177252305U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_PluginDev5_3_Plugins_SeidelTriangulator_Source_SeidelTriangulator_Public_st_Ring_h_3254475799(TEXT("/Script/SeidelTriangulator"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Unreal_PluginDev5_3_Plugins_SeidelTriangulator_Source_SeidelTriangulator_Public_st_Ring_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_PluginDev5_3_Plugins_SeidelTriangulator_Source_SeidelTriangulator_Public_st_Ring_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
