// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeidelTriangulator/Public/SeidelTriangulatorLib.h"
#include "SeidelTriangulator/Public/st_Ring.h"
#include "SeidelTriangulator/Public/st_Shape.h"
#include "SeidelTriangulator/Public/st_Triang.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSeidelTriangulatorLib() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	SEIDELTRIANGULATOR_API UClass* Z_Construct_UClass_USeidelTriangulatorLib();
	SEIDELTRIANGULATOR_API UClass* Z_Construct_UClass_USeidelTriangulatorLib_NoRegister();
	SEIDELTRIANGULATOR_API UScriptStruct* Z_Construct_UScriptStruct_Fst_Ring();
	SEIDELTRIANGULATOR_API UScriptStruct* Z_Construct_UScriptStruct_Fst_Shape();
	SEIDELTRIANGULATOR_API UScriptStruct* Z_Construct_UScriptStruct_Fst_Triang();
	UPackage* Z_Construct_UPackage__Script_SeidelTriangulator();
// End Cross Module References
	DEFINE_FUNCTION(USeidelTriangulatorLib::execCreateShape)
	{
		P_GET_STRUCT(Fst_Ring,Z_Param_Bounds);
		P_GET_TARRAY(Fst_Ring,Z_Param_Holes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(Fst_Shape*)Z_Param__Result=USeidelTriangulatorLib::CreateShape(Z_Param_Bounds,Z_Param_Holes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USeidelTriangulatorLib::execCreateRing)
	{
		P_GET_TARRAY(FVector2D,Z_Param_points);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(Fst_Ring*)Z_Param__Result=USeidelTriangulatorLib::CreateRing(Z_Param_points);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USeidelTriangulatorLib::execTriangulateShape)
	{
		P_GET_STRUCT(Fst_Shape,Z_Param_shape);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<Fst_Triang>*)Z_Param__Result=USeidelTriangulatorLib::TriangulateShape(Z_Param_shape);
		P_NATIVE_END;
	}
	void USeidelTriangulatorLib::StaticRegisterNativesUSeidelTriangulatorLib()
	{
		UClass* Class = USeidelTriangulatorLib::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateRing", &USeidelTriangulatorLib::execCreateRing },
			{ "CreateShape", &USeidelTriangulatorLib::execCreateShape },
			{ "TriangulateShape", &USeidelTriangulatorLib::execTriangulateShape },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USeidelTriangulatorLib_CreateRing_Statics
	{
		struct SeidelTriangulatorLib_eventCreateRing_Parms
		{
			TArray<FVector2D> points;
			Fst_Ring ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_points_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_points;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USeidelTriangulatorLib_CreateRing_Statics::NewProp_points_Inner = { "points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USeidelTriangulatorLib_CreateRing_Statics::NewProp_points = { "points", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SeidelTriangulatorLib_eventCreateRing_Parms, points), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USeidelTriangulatorLib_CreateRing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SeidelTriangulatorLib_eventCreateRing_Parms, ReturnValue), Z_Construct_UScriptStruct_Fst_Ring, METADATA_PARAMS(0, nullptr) }; // 4177252305
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USeidelTriangulatorLib_CreateRing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USeidelTriangulatorLib_CreateRing_Statics::NewProp_points_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USeidelTriangulatorLib_CreateRing_Statics::NewProp_points,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USeidelTriangulatorLib_CreateRing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USeidelTriangulatorLib_CreateRing_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "Create Ring" },
		{ "Keywords", "Seidel Triangulation Ring" },
		{ "ModuleRelativePath", "Public/SeidelTriangulatorLib.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USeidelTriangulatorLib_CreateRing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USeidelTriangulatorLib, nullptr, "CreateRing", nullptr, nullptr, Z_Construct_UFunction_USeidelTriangulatorLib_CreateRing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USeidelTriangulatorLib_CreateRing_Statics::PropPointers), sizeof(Z_Construct_UFunction_USeidelTriangulatorLib_CreateRing_Statics::SeidelTriangulatorLib_eventCreateRing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USeidelTriangulatorLib_CreateRing_Statics::Function_MetaDataParams), Z_Construct_UFunction_USeidelTriangulatorLib_CreateRing_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USeidelTriangulatorLib_CreateRing_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USeidelTriangulatorLib_CreateRing_Statics::SeidelTriangulatorLib_eventCreateRing_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USeidelTriangulatorLib_CreateRing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USeidelTriangulatorLib_CreateRing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USeidelTriangulatorLib_CreateShape_Statics
	{
		struct SeidelTriangulatorLib_eventCreateShape_Parms
		{
			Fst_Ring Bounds;
			TArray<Fst_Ring> Holes;
			Fst_Shape ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Holes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Holes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USeidelTriangulatorLib_CreateShape_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SeidelTriangulatorLib_eventCreateShape_Parms, Bounds), Z_Construct_UScriptStruct_Fst_Ring, METADATA_PARAMS(0, nullptr) }; // 4177252305
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USeidelTriangulatorLib_CreateShape_Statics::NewProp_Holes_Inner = { "Holes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_Fst_Ring, METADATA_PARAMS(0, nullptr) }; // 4177252305
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USeidelTriangulatorLib_CreateShape_Statics::NewProp_Holes = { "Holes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SeidelTriangulatorLib_eventCreateShape_Parms, Holes), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 4177252305
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USeidelTriangulatorLib_CreateShape_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SeidelTriangulatorLib_eventCreateShape_Parms, ReturnValue), Z_Construct_UScriptStruct_Fst_Shape, METADATA_PARAMS(0, nullptr) }; // 3364498267
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USeidelTriangulatorLib_CreateShape_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USeidelTriangulatorLib_CreateShape_Statics::NewProp_Bounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USeidelTriangulatorLib_CreateShape_Statics::NewProp_Holes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USeidelTriangulatorLib_CreateShape_Statics::NewProp_Holes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USeidelTriangulatorLib_CreateShape_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USeidelTriangulatorLib_CreateShape_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "Create Shape" },
		{ "Keywords", "Seidel Triangulation Shape" },
		{ "ModuleRelativePath", "Public/SeidelTriangulatorLib.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USeidelTriangulatorLib_CreateShape_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USeidelTriangulatorLib, nullptr, "CreateShape", nullptr, nullptr, Z_Construct_UFunction_USeidelTriangulatorLib_CreateShape_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USeidelTriangulatorLib_CreateShape_Statics::PropPointers), sizeof(Z_Construct_UFunction_USeidelTriangulatorLib_CreateShape_Statics::SeidelTriangulatorLib_eventCreateShape_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USeidelTriangulatorLib_CreateShape_Statics::Function_MetaDataParams), Z_Construct_UFunction_USeidelTriangulatorLib_CreateShape_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USeidelTriangulatorLib_CreateShape_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USeidelTriangulatorLib_CreateShape_Statics::SeidelTriangulatorLib_eventCreateShape_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USeidelTriangulatorLib_CreateShape()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USeidelTriangulatorLib_CreateShape_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USeidelTriangulatorLib_TriangulateShape_Statics
	{
		struct SeidelTriangulatorLib_eventTriangulateShape_Parms
		{
			Fst_Shape shape;
			TArray<Fst_Triang> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_shape;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USeidelTriangulatorLib_TriangulateShape_Statics::NewProp_shape = { "shape", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SeidelTriangulatorLib_eventTriangulateShape_Parms, shape), Z_Construct_UScriptStruct_Fst_Shape, METADATA_PARAMS(0, nullptr) }; // 3364498267
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USeidelTriangulatorLib_TriangulateShape_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_Fst_Triang, METADATA_PARAMS(0, nullptr) }; // 2867486117
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USeidelTriangulatorLib_TriangulateShape_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SeidelTriangulatorLib_eventTriangulateShape_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2867486117
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USeidelTriangulatorLib_TriangulateShape_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USeidelTriangulatorLib_TriangulateShape_Statics::NewProp_shape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USeidelTriangulatorLib_TriangulateShape_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USeidelTriangulatorLib_TriangulateShape_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USeidelTriangulatorLib_TriangulateShape_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "Triangulate Shape" },
		{ "Keywords", "Seidel Triangulation Shape" },
		{ "ModuleRelativePath", "Public/SeidelTriangulatorLib.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USeidelTriangulatorLib_TriangulateShape_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USeidelTriangulatorLib, nullptr, "TriangulateShape", nullptr, nullptr, Z_Construct_UFunction_USeidelTriangulatorLib_TriangulateShape_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USeidelTriangulatorLib_TriangulateShape_Statics::PropPointers), sizeof(Z_Construct_UFunction_USeidelTriangulatorLib_TriangulateShape_Statics::SeidelTriangulatorLib_eventTriangulateShape_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USeidelTriangulatorLib_TriangulateShape_Statics::Function_MetaDataParams), Z_Construct_UFunction_USeidelTriangulatorLib_TriangulateShape_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USeidelTriangulatorLib_TriangulateShape_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USeidelTriangulatorLib_TriangulateShape_Statics::SeidelTriangulatorLib_eventTriangulateShape_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USeidelTriangulatorLib_TriangulateShape()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USeidelTriangulatorLib_TriangulateShape_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USeidelTriangulatorLib);
	UClass* Z_Construct_UClass_USeidelTriangulatorLib_NoRegister()
	{
		return USeidelTriangulatorLib::StaticClass();
	}
	struct Z_Construct_UClass_USeidelTriangulatorLib_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USeidelTriangulatorLib_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SeidelTriangulator,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USeidelTriangulatorLib_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USeidelTriangulatorLib_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USeidelTriangulatorLib_CreateRing, "CreateRing" }, // 1963070378
		{ &Z_Construct_UFunction_USeidelTriangulatorLib_CreateShape, "CreateShape" }, // 1559485
		{ &Z_Construct_UFunction_USeidelTriangulatorLib_TriangulateShape, "TriangulateShape" }, // 4228640791
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USeidelTriangulatorLib_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USeidelTriangulatorLib_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SeidelTriangulatorLib.h" },
		{ "ModuleRelativePath", "Public/SeidelTriangulatorLib.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USeidelTriangulatorLib_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USeidelTriangulatorLib>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USeidelTriangulatorLib_Statics::ClassParams = {
		&USeidelTriangulatorLib::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USeidelTriangulatorLib_Statics::Class_MetaDataParams), Z_Construct_UClass_USeidelTriangulatorLib_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_USeidelTriangulatorLib()
	{
		if (!Z_Registration_Info_UClass_USeidelTriangulatorLib.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USeidelTriangulatorLib.OuterSingleton, Z_Construct_UClass_USeidelTriangulatorLib_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USeidelTriangulatorLib.OuterSingleton;
	}
	template<> SEIDELTRIANGULATOR_API UClass* StaticClass<USeidelTriangulatorLib>()
	{
		return USeidelTriangulatorLib::StaticClass();
	}
	USeidelTriangulatorLib::USeidelTriangulatorLib(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USeidelTriangulatorLib);
	USeidelTriangulatorLib::~USeidelTriangulatorLib() {}
	struct Z_CompiledInDeferFile_FID_Unreal_PluginDev5_3_Plugins_SeidelTriangulator_Source_SeidelTriangulator_Public_SeidelTriangulatorLib_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_PluginDev5_3_Plugins_SeidelTriangulator_Source_SeidelTriangulator_Public_SeidelTriangulatorLib_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USeidelTriangulatorLib, USeidelTriangulatorLib::StaticClass, TEXT("USeidelTriangulatorLib"), &Z_Registration_Info_UClass_USeidelTriangulatorLib, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USeidelTriangulatorLib), 3986941439U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_PluginDev5_3_Plugins_SeidelTriangulator_Source_SeidelTriangulator_Public_SeidelTriangulatorLib_h_3890646684(TEXT("/Script/SeidelTriangulator"),
		Z_CompiledInDeferFile_FID_Unreal_PluginDev5_3_Plugins_SeidelTriangulator_Source_SeidelTriangulator_Public_SeidelTriangulatorLib_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_PluginDev5_3_Plugins_SeidelTriangulator_Source_SeidelTriangulator_Public_SeidelTriangulatorLib_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
