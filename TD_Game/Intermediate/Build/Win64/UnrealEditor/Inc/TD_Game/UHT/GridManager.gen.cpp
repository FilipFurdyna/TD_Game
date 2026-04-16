// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TD_Game/GridManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeGridManager() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
TD_GAME_API UClass* Z_Construct_UClass_AGridManager();
TD_GAME_API UClass* Z_Construct_UClass_AGridManager_NoRegister();
TD_GAME_API UEnum* Z_Construct_UEnum_TD_Game_ECornerType();
UPackage* Z_Construct_UPackage__Script_TD_Game();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ECornerType ***************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECornerType;
static UEnum* ECornerType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECornerType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECornerType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TD_Game_ECornerType, (UObject*)Z_Construct_UPackage__Script_TD_Game(), TEXT("ECornerType"));
	}
	return Z_Registration_Info_UEnum_ECornerType.OuterSingleton;
}
template<> TD_GAME_NON_ATTRIBUTED_API UEnum* StaticEnum<ECornerType>()
{
	return ECornerType_StaticEnum();
}
struct Z_Construct_UEnum_TD_Game_ECornerType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Corner.DisplayName", "Corner" },
		{ "Corner.Name", "ECornerType::Corner" },
		{ "ModuleRelativePath", "GridManager.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "ECornerType::None" },
		{ "Side.DisplayName", "Side" },
		{ "Side.Name", "ECornerType::Side" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECornerType::None", (int64)ECornerType::None },
		{ "ECornerType::Corner", (int64)ECornerType::Corner },
		{ "ECornerType::Side", (int64)ECornerType::Side },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_TD_Game_ECornerType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TD_Game_ECornerType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_TD_Game,
	nullptr,
	"ECornerType",
	"ECornerType",
	Z_Construct_UEnum_TD_Game_ECornerType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_TD_Game_ECornerType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TD_Game_ECornerType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TD_Game_ECornerType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_TD_Game_ECornerType()
{
	if (!Z_Registration_Info_UEnum_ECornerType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECornerType.InnerSingleton, Z_Construct_UEnum_TD_Game_ECornerType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECornerType.InnerSingleton;
}
// ********** End Enum ECornerType *****************************************************************

// ********** Begin Class AGridManager Function HighlightTile **************************************
struct Z_Construct_UFunction_AGridManager_HighlightTile_Statics
{
	struct GridManager_eventHighlightTile_Parms
	{
		FVector location;
		FIntPoint ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GridManager.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HighlightTile constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HighlightTile constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HighlightTile Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridManager_HighlightTile_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventHighlightTile_Parms, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridManager_HighlightTile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventHighlightTile_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_HighlightTile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_HighlightTile_Statics::NewProp_location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_HighlightTile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_HighlightTile_Statics::PropPointers) < 2048);
// ********** End Function HighlightTile Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_HighlightTile_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "HighlightTile", 	Z_Construct_UFunction_AGridManager_HighlightTile_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_HighlightTile_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AGridManager_HighlightTile_Statics::GridManager_eventHighlightTile_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_HighlightTile_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_HighlightTile_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridManager_HighlightTile_Statics::GridManager_eventHighlightTile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridManager_HighlightTile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_HighlightTile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execHighlightTile)
{
	P_GET_STRUCT(FVector,Z_Param_location);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntPoint*)Z_Param__Result=P_THIS->HighlightTile(Z_Param_location);
	P_NATIVE_END;
}
// ********** End Class AGridManager Function HighlightTile ****************************************

// ********** Begin Class AGridManager Function PlaceIsland ****************************************
struct Z_Construct_UFunction_AGridManager_PlaceIsland_Statics
{
	struct GridManager_eventPlaceIsland_Parms
	{
		FVector location;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GridManager.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function PlaceIsland constinit property declarations ***************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_location;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PlaceIsland constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PlaceIsland Property Definitions **************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridManager_PlaceIsland_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventPlaceIsland_Parms, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_PlaceIsland_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_PlaceIsland_Statics::NewProp_location,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_PlaceIsland_Statics::PropPointers) < 2048);
// ********** End Function PlaceIsland Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_PlaceIsland_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "PlaceIsland", 	Z_Construct_UFunction_AGridManager_PlaceIsland_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_PlaceIsland_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AGridManager_PlaceIsland_Statics::GridManager_eventPlaceIsland_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_PlaceIsland_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_PlaceIsland_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridManager_PlaceIsland_Statics::GridManager_eventPlaceIsland_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridManager_PlaceIsland()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_PlaceIsland_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execPlaceIsland)
{
	P_GET_STRUCT(FVector,Z_Param_location);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlaceIsland(Z_Param_location);
	P_NATIVE_END;
}
// ********** End Class AGridManager Function PlaceIsland ******************************************

// ********** Begin Class AGridManager *************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AGridManager;
UClass* AGridManager::GetPrivateStaticClass()
{
	using TClass = AGridManager;
	if (!Z_Registration_Info_UClass_AGridManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("GridManager"),
			Z_Registration_Info_UClass_AGridManager.InnerSingleton,
			StaticRegisterNativesAGridManager,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AGridManager.InnerSingleton;
}
UClass* Z_Construct_UClass_AGridManager_NoRegister()
{
	return AGridManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AGridManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GridManager.h" },
		{ "ModuleRelativePath", "GridManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_tileSize_MetaData[] = {
		{ "Category", "GridManager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// n of tiles in NxN grid\n" },
#endif
		{ "ModuleRelativePath", "GridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "n of tiles in NxN grid" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_cornerMeshes_MetaData[] = {
		{ "Category", "GridManager" },
		{ "ModuleRelativePath", "GridManager.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AGridManager constinit property declarations *****************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_tileSize;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_cornerMeshes_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_cornerMeshes_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_cornerMeshes_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_cornerMeshes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AGridManager constinit property declarations *******************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("HighlightTile"), .Pointer = &AGridManager::execHighlightTile },
		{ .NameUTF8 = UTF8TEXT("PlaceIsland"), .Pointer = &AGridManager::execPlaceIsland },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGridManager_HighlightTile, "HighlightTile" }, // 1775494235
		{ &Z_Construct_UFunction_AGridManager_PlaceIsland, "PlaceIsland" }, // 941849847
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGridManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AGridManager_Statics

// ********** Begin Class AGridManager Property Definitions ****************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_tileSize = { "tileSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridManager, tileSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_tileSize_MetaData), NewProp_tileSize_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_cornerMeshes_ValueProp = { "cornerMeshes", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_cornerMeshes_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_cornerMeshes_Key_KeyProp = { "cornerMeshes_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_TD_Game_ECornerType, METADATA_PARAMS(0, nullptr) }; // 499888474
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_cornerMeshes = { "cornerMeshes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridManager, cornerMeshes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_cornerMeshes_MetaData), NewProp_cornerMeshes_MetaData) }; // 499888474
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGridManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_tileSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_cornerMeshes_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_cornerMeshes_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_cornerMeshes_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_cornerMeshes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGridManager_Statics::PropPointers) < 2048);
// ********** End Class AGridManager Property Definitions ******************************************
UObject* (*const Z_Construct_UClass_AGridManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_TD_Game,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGridManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGridManager_Statics::ClassParams = {
	&AGridManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AGridManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AGridManager_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGridManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AGridManager_Statics::Class_MetaDataParams)
};
void AGridManager::StaticRegisterNativesAGridManager()
{
	UClass* Class = AGridManager::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_AGridManager_Statics::Funcs));
}
UClass* Z_Construct_UClass_AGridManager()
{
	if (!Z_Registration_Info_UClass_AGridManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGridManager.OuterSingleton, Z_Construct_UClass_AGridManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGridManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AGridManager);
AGridManager::~AGridManager() {}
// ********** End Class AGridManager ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Deus_Volt_Documents_GitHub_TD_Game_TD_Game_Source_TD_Game_GridManager_h__Script_TD_Game_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECornerType_StaticEnum, TEXT("ECornerType"), &Z_Registration_Info_UEnum_ECornerType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 499888474U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGridManager, AGridManager::StaticClass, TEXT("AGridManager"), &Z_Registration_Info_UClass_AGridManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGridManager), 520500862U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Deus_Volt_Documents_GitHub_TD_Game_TD_Game_Source_TD_Game_GridManager_h__Script_TD_Game_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Deus_Volt_Documents_GitHub_TD_Game_TD_Game_Source_TD_Game_GridManager_h__Script_TD_Game_1326351078{
	TEXT("/Script/TD_Game"),
	Z_CompiledInDeferFile_FID_Users_Deus_Volt_Documents_GitHub_TD_Game_TD_Game_Source_TD_Game_GridManager_h__Script_TD_Game_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Deus_Volt_Documents_GitHub_TD_Game_TD_Game_Source_TD_Game_GridManager_h__Script_TD_Game_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Deus_Volt_Documents_GitHub_TD_Game_TD_Game_Source_TD_Game_GridManager_h__Script_TD_Game_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Deus_Volt_Documents_GitHub_TD_Game_TD_Game_Source_TD_Game_GridManager_h__Script_TD_Game_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
