// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TD_Game/TowersManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeTowersManager() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
TD_GAME_API UClass* Z_Construct_UClass_ATower_NoRegister();
TD_GAME_API UClass* Z_Construct_UClass_ATowersManager();
TD_GAME_API UClass* Z_Construct_UClass_ATowersManager_NoRegister();
TD_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FTowerData();
UPackage* Z_Construct_UPackage__Script_TD_Game();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FTowerData ********************************************************
struct Z_Construct_UScriptStruct_FTowerData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FTowerData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FTowerData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "TowersManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TowerClass_MetaData[] = {
		{ "Category", "TowerData" },
		{ "ModuleRelativePath", "TowersManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_icon_MetaData[] = {
		{ "Category", "TowerData" },
		{ "ModuleRelativePath", "TowersManager.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FTowerData constinit property declarations ************************
	static const UECodeGen_Private::FClassPropertyParams NewProp_TowerClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_icon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FTowerData constinit property declarations **************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTowerData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FTowerData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FTowerData;
class UScriptStruct* FTowerData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FTowerData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FTowerData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTowerData, (UObject*)Z_Construct_UPackage__Script_TD_Game(), TEXT("TowerData"));
	}
	return Z_Registration_Info_UScriptStruct_FTowerData.OuterSingleton;
	}

// ********** Begin ScriptStruct FTowerData Property Definitions ***********************************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FTowerData_Statics::NewProp_TowerClass = { "TowerClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTowerData, TowerClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_ATower_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TowerClass_MetaData), NewProp_TowerClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTowerData_Statics::NewProp_icon = { "icon", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTowerData, icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_icon_MetaData), NewProp_icon_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTowerData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTowerData_Statics::NewProp_TowerClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTowerData_Statics::NewProp_icon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTowerData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FTowerData Property Definitions *************************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTowerData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TD_Game,
	nullptr,
	&NewStructOps,
	"TowerData",
	Z_Construct_UScriptStruct_FTowerData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTowerData_Statics::PropPointers),
	sizeof(FTowerData),
	alignof(FTowerData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTowerData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTowerData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTowerData()
{
	if (!Z_Registration_Info_UScriptStruct_FTowerData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FTowerData.InnerSingleton, Z_Construct_UScriptStruct_FTowerData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FTowerData.InnerSingleton);
}
// ********** End ScriptStruct FTowerData **********************************************************

// ********** Begin Class ATowersManager Function placeTower ***************************************
struct Z_Construct_UFunction_ATowersManager_placeTower_Statics
{
	struct TowersManager_eventplaceTower_Parms
	{
		FVector location;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TowersManager.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function placeTower constinit property declarations ****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_location;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function placeTower constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function placeTower Property Definitions ***************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATowersManager_placeTower_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TowersManager_eventplaceTower_Parms, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATowersManager_placeTower_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATowersManager_placeTower_Statics::NewProp_location,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATowersManager_placeTower_Statics::PropPointers) < 2048);
// ********** End Function placeTower Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATowersManager_placeTower_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATowersManager, nullptr, "placeTower", 	Z_Construct_UFunction_ATowersManager_placeTower_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ATowersManager_placeTower_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ATowersManager_placeTower_Statics::TowersManager_eventplaceTower_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATowersManager_placeTower_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATowersManager_placeTower_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATowersManager_placeTower_Statics::TowersManager_eventplaceTower_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATowersManager_placeTower()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATowersManager_placeTower_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATowersManager::execplaceTower)
{
	P_GET_STRUCT(FVector,Z_Param_location);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->placeTower(Z_Param_location);
	P_NATIVE_END;
}
// ********** End Class ATowersManager Function placeTower *****************************************

// ********** Begin Class ATowersManager Function selectTower **************************************
struct Z_Construct_UFunction_ATowersManager_selectTower_Statics
{
	struct TowersManager_eventselectTower_Parms
	{
		int32 towerIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TowersManager.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function selectTower constinit property declarations ***************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_towerIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function selectTower constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function selectTower Property Definitions **************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATowersManager_selectTower_Statics::NewProp_towerIndex = { "towerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TowersManager_eventselectTower_Parms, towerIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATowersManager_selectTower_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATowersManager_selectTower_Statics::NewProp_towerIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATowersManager_selectTower_Statics::PropPointers) < 2048);
// ********** End Function selectTower Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATowersManager_selectTower_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATowersManager, nullptr, "selectTower", 	Z_Construct_UFunction_ATowersManager_selectTower_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ATowersManager_selectTower_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ATowersManager_selectTower_Statics::TowersManager_eventselectTower_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATowersManager_selectTower_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATowersManager_selectTower_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATowersManager_selectTower_Statics::TowersManager_eventselectTower_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATowersManager_selectTower()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATowersManager_selectTower_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATowersManager::execselectTower)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_towerIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->selectTower(Z_Param_towerIndex);
	P_NATIVE_END;
}
// ********** End Class ATowersManager Function selectTower ****************************************

// ********** Begin Class ATowersManager Function showGhostTower ***********************************
struct Z_Construct_UFunction_ATowersManager_showGhostTower_Statics
{
	struct TowersManager_eventshowGhostTower_Parms
	{
		FVector location;
		FIntPoint ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TowersManager.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function showGhostTower constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function showGhostTower constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function showGhostTower Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATowersManager_showGhostTower_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TowersManager_eventshowGhostTower_Parms, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATowersManager_showGhostTower_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TowersManager_eventshowGhostTower_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATowersManager_showGhostTower_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATowersManager_showGhostTower_Statics::NewProp_location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATowersManager_showGhostTower_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATowersManager_showGhostTower_Statics::PropPointers) < 2048);
// ********** End Function showGhostTower Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATowersManager_showGhostTower_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATowersManager, nullptr, "showGhostTower", 	Z_Construct_UFunction_ATowersManager_showGhostTower_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ATowersManager_showGhostTower_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ATowersManager_showGhostTower_Statics::TowersManager_eventshowGhostTower_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATowersManager_showGhostTower_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATowersManager_showGhostTower_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATowersManager_showGhostTower_Statics::TowersManager_eventshowGhostTower_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATowersManager_showGhostTower()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATowersManager_showGhostTower_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATowersManager::execshowGhostTower)
{
	P_GET_STRUCT(FVector,Z_Param_location);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntPoint*)Z_Param__Result=P_THIS->showGhostTower(Z_Param_location);
	P_NATIVE_END;
}
// ********** End Class ATowersManager Function showGhostTower *************************************

// ********** Begin Class ATowersManager ***********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ATowersManager;
UClass* ATowersManager::GetPrivateStaticClass()
{
	using TClass = ATowersManager;
	if (!Z_Registration_Info_UClass_ATowersManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("TowersManager"),
			Z_Registration_Info_UClass_ATowersManager.InnerSingleton,
			StaticRegisterNativesATowersManager,
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
	return Z_Registration_Info_UClass_ATowersManager.InnerSingleton;
}
UClass* Z_Construct_UClass_ATowersManager_NoRegister()
{
	return ATowersManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATowersManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TowersManager.h" },
		{ "ModuleRelativePath", "TowersManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GhostTowerMeshAsset_MetaData[] = {
		{ "Category", "TowersManager" },
		{ "ModuleRelativePath", "TowersManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GhostTowerMesh_MetaData[] = {
		{ "Category", "TowersManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TowersManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValidMaterial_MetaData[] = {
		{ "Category", "TowersManager" },
		{ "ModuleRelativePath", "TowersManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InvalidMaterial_MetaData[] = {
		{ "Category", "TowersManager" },
		{ "ModuleRelativePath", "TowersManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_towersDeck_MetaData[] = {
		{ "Category", "TowersManager" },
		{ "ModuleRelativePath", "TowersManager.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ATowersManager constinit property declarations ***************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GhostTowerMeshAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GhostTowerMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ValidMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InvalidMaterial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_towersDeck_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_towersDeck;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ATowersManager constinit property declarations *****************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("placeTower"), .Pointer = &ATowersManager::execplaceTower },
		{ .NameUTF8 = UTF8TEXT("selectTower"), .Pointer = &ATowersManager::execselectTower },
		{ .NameUTF8 = UTF8TEXT("showGhostTower"), .Pointer = &ATowersManager::execshowGhostTower },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATowersManager_placeTower, "placeTower" }, // 1360783074
		{ &Z_Construct_UFunction_ATowersManager_selectTower, "selectTower" }, // 1860852923
		{ &Z_Construct_UFunction_ATowersManager_showGhostTower, "showGhostTower" }, // 3943169487
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATowersManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ATowersManager_Statics

// ********** Begin Class ATowersManager Property Definitions **************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATowersManager_Statics::NewProp_GhostTowerMeshAsset = { "GhostTowerMeshAsset", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATowersManager, GhostTowerMeshAsset), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GhostTowerMeshAsset_MetaData), NewProp_GhostTowerMeshAsset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATowersManager_Statics::NewProp_GhostTowerMesh = { "GhostTowerMesh", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATowersManager, GhostTowerMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GhostTowerMesh_MetaData), NewProp_GhostTowerMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATowersManager_Statics::NewProp_ValidMaterial = { "ValidMaterial", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATowersManager, ValidMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValidMaterial_MetaData), NewProp_ValidMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATowersManager_Statics::NewProp_InvalidMaterial = { "InvalidMaterial", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATowersManager, InvalidMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InvalidMaterial_MetaData), NewProp_InvalidMaterial_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATowersManager_Statics::NewProp_towersDeck_Inner = { "towersDeck", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTowerData, METADATA_PARAMS(0, nullptr) }; // 3853931495
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATowersManager_Statics::NewProp_towersDeck = { "towersDeck", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATowersManager, towersDeck), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_towersDeck_MetaData), NewProp_towersDeck_MetaData) }; // 3853931495
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATowersManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATowersManager_Statics::NewProp_GhostTowerMeshAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATowersManager_Statics::NewProp_GhostTowerMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATowersManager_Statics::NewProp_ValidMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATowersManager_Statics::NewProp_InvalidMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATowersManager_Statics::NewProp_towersDeck_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATowersManager_Statics::NewProp_towersDeck,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATowersManager_Statics::PropPointers) < 2048);
// ********** End Class ATowersManager Property Definitions ****************************************
UObject* (*const Z_Construct_UClass_ATowersManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_TD_Game,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATowersManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATowersManager_Statics::ClassParams = {
	&ATowersManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ATowersManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ATowersManager_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATowersManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ATowersManager_Statics::Class_MetaDataParams)
};
void ATowersManager::StaticRegisterNativesATowersManager()
{
	UClass* Class = ATowersManager::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_ATowersManager_Statics::Funcs));
}
UClass* Z_Construct_UClass_ATowersManager()
{
	if (!Z_Registration_Info_UClass_ATowersManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATowersManager.OuterSingleton, Z_Construct_UClass_ATowersManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATowersManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ATowersManager);
ATowersManager::~ATowersManager() {}
// ********** End Class ATowersManager *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Filip_LC_Documents_GitHub_TD_Game_TD_Game_Source_TD_Game_TowersManager_h__Script_TD_Game_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTowerData::StaticStruct, Z_Construct_UScriptStruct_FTowerData_Statics::NewStructOps, TEXT("TowerData"),&Z_Registration_Info_UScriptStruct_FTowerData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTowerData), 3853931495U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATowersManager, ATowersManager::StaticClass, TEXT("ATowersManager"), &Z_Registration_Info_UClass_ATowersManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATowersManager), 1838799716U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Filip_LC_Documents_GitHub_TD_Game_TD_Game_Source_TD_Game_TowersManager_h__Script_TD_Game_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Filip_LC_Documents_GitHub_TD_Game_TD_Game_Source_TD_Game_TowersManager_h__Script_TD_Game_2965903090{
	TEXT("/Script/TD_Game"),
	Z_CompiledInDeferFile_FID_Users_Filip_LC_Documents_GitHub_TD_Game_TD_Game_Source_TD_Game_TowersManager_h__Script_TD_Game_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Filip_LC_Documents_GitHub_TD_Game_TD_Game_Source_TD_Game_TowersManager_h__Script_TD_Game_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_Filip_LC_Documents_GitHub_TD_Game_TD_Game_Source_TD_Game_TowersManager_h__Script_TD_Game_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Filip_LC_Documents_GitHub_TD_Game_TD_Game_Source_TD_Game_TowersManager_h__Script_TD_Game_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
