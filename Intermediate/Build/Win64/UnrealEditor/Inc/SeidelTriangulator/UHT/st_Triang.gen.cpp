// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeidelTriangulator/Public/st_Triang.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodest_Triang() {}
// Cross Module References
	SEIDELTRIANGULATOR_API UScriptStruct* Z_Construct_UScriptStruct_Fst_Triang();
	UPackage* Z_Construct_UPackage__Script_SeidelTriangulator();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_st_Triang;
class UScriptStruct* Fst_Triang::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_st_Triang.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_st_Triang.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_Fst_Triang, (UObject*)Z_Construct_UPackage__Script_SeidelTriangulator(), TEXT("st_Triang"));
	}
	return Z_Registration_Info_UScriptStruct_st_Triang.OuterSingleton;
}
template<> SEIDELTRIANGULATOR_API UScriptStruct* StaticStruct<Fst_Triang>()
{
	return Fst_Triang::StaticStruct();
}
	struct Z_Construct_UScriptStruct_Fst_Triang_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_P_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_P;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Q_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Q;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_R_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_R;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_Fst_Triang_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/st_Triang.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_Fst_Triang_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<Fst_Triang>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_Fst_Triang_Statics::NewProp_P_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "st_Triang" },
		{ "ModuleRelativePath", "Public/st_Triang.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_Fst_Triang_Statics::NewProp_P = { "P", nullptr, (EPropertyFlags)0x0040000000020815, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Fst_Triang, P), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_Fst_Triang_Statics::NewProp_P_MetaData), Z_Construct_UScriptStruct_Fst_Triang_Statics::NewProp_P_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_Fst_Triang_Statics::NewProp_Q_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "st_Triang" },
		{ "ModuleRelativePath", "Public/st_Triang.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_Fst_Triang_Statics::NewProp_Q = { "Q", nullptr, (EPropertyFlags)0x0040000000020815, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Fst_Triang, Q), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_Fst_Triang_Statics::NewProp_Q_MetaData), Z_Construct_UScriptStruct_Fst_Triang_Statics::NewProp_Q_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_Fst_Triang_Statics::NewProp_R_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "st_Triang" },
		{ "ModuleRelativePath", "Public/st_Triang.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_Fst_Triang_Statics::NewProp_R = { "R", nullptr, (EPropertyFlags)0x0040000000020815, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Fst_Triang, R), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_Fst_Triang_Statics::NewProp_R_MetaData), Z_Construct_UScriptStruct_Fst_Triang_Statics::NewProp_R_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_Fst_Triang_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_Fst_Triang_Statics::NewProp_P,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_Fst_Triang_Statics::NewProp_Q,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_Fst_Triang_Statics::NewProp_R,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_Fst_Triang_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SeidelTriangulator,
		nullptr,
		&NewStructOps,
		"st_Triang",
		Z_Construct_UScriptStruct_Fst_Triang_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_Fst_Triang_Statics::PropPointers),
		sizeof(Fst_Triang),
		alignof(Fst_Triang),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_Fst_Triang_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_Fst_Triang_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_Fst_Triang_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_Fst_Triang()
	{
		if (!Z_Registration_Info_UScriptStruct_st_Triang.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_st_Triang.InnerSingleton, Z_Construct_UScriptStruct_Fst_Triang_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_st_Triang.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Unreal_PluginDev5_3_Plugins_SeidelTriangulator_Source_SeidelTriangulator_Public_st_Triang_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_PluginDev5_3_Plugins_SeidelTriangulator_Source_SeidelTriangulator_Public_st_Triang_h_Statics::ScriptStructInfo[] = {
		{ Fst_Triang::StaticStruct, Z_Construct_UScriptStruct_Fst_Triang_Statics::NewStructOps, TEXT("st_Triang"), &Z_Registration_Info_UScriptStruct_st_Triang, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(Fst_Triang), 2867486117U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_PluginDev5_3_Plugins_SeidelTriangulator_Source_SeidelTriangulator_Public_st_Triang_h_2295277085(TEXT("/Script/SeidelTriangulator"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Unreal_PluginDev5_3_Plugins_SeidelTriangulator_Source_SeidelTriangulator_Public_st_Triang_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_PluginDev5_3_Plugins_SeidelTriangulator_Source_SeidelTriangulator_Public_st_Triang_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
