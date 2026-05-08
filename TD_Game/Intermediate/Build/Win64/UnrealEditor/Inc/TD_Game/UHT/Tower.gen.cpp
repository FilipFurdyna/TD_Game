// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TD_Game/Tower.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeTower() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
TD_GAME_API UClass* Z_Construct_UClass_AEnemy_NoRegister();
TD_GAME_API UClass* Z_Construct_UClass_AProjectile_NoRegister();
TD_GAME_API UClass* Z_Construct_UClass_ATower();
TD_GAME_API UClass* Z_Construct_UClass_ATower_NoRegister();
UPackage* Z_Construct_UPackage__Script_TD_Game();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ATower Function getEnemies ***********************************************
struct Z_Construct_UFunction_ATower_getEnemies_Statics
{
	struct Tower_eventgetEnemies_Parms
	{
		TArray<AEnemy*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Tower.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function getEnemies constinit property declarations ****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function getEnemies constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function getEnemies Property Definitions ***************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATower_getEnemies_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AEnemy_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ATower_getEnemies_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Tower_eventgetEnemies_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATower_getEnemies_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATower_getEnemies_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATower_getEnemies_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATower_getEnemies_Statics::PropPointers) < 2048);
// ********** End Function getEnemies Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATower_getEnemies_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATower, nullptr, "getEnemies", 	Z_Construct_UFunction_ATower_getEnemies_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ATower_getEnemies_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ATower_getEnemies_Statics::Tower_eventgetEnemies_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATower_getEnemies_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATower_getEnemies_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATower_getEnemies_Statics::Tower_eventgetEnemies_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATower_getEnemies()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATower_getEnemies_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATower::execgetEnemies)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AEnemy*>*)Z_Param__Result=P_THIS->getEnemies();
	P_NATIVE_END;
}
// ********** End Class ATower Function getEnemies *************************************************

// ********** Begin Class ATower Function OnEnemyEnterRange ****************************************
struct Z_Construct_UFunction_ATower_OnEnemyEnterRange_Statics
{
	struct Tower_eventOnEnemyEnterRange_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Tower.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnEnemyEnterRange constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnEnemyEnterRange constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnEnemyEnterRange Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATower_OnEnemyEnterRange_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Tower_eventOnEnemyEnterRange_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATower_OnEnemyEnterRange_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Tower_eventOnEnemyEnterRange_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATower_OnEnemyEnterRange_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Tower_eventOnEnemyEnterRange_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATower_OnEnemyEnterRange_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Tower_eventOnEnemyEnterRange_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ATower_OnEnemyEnterRange_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((Tower_eventOnEnemyEnterRange_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATower_OnEnemyEnterRange_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Tower_eventOnEnemyEnterRange_Parms), &Z_Construct_UFunction_ATower_OnEnemyEnterRange_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATower_OnEnemyEnterRange_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Tower_eventOnEnemyEnterRange_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 222120718
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATower_OnEnemyEnterRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATower_OnEnemyEnterRange_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATower_OnEnemyEnterRange_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATower_OnEnemyEnterRange_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATower_OnEnemyEnterRange_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATower_OnEnemyEnterRange_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATower_OnEnemyEnterRange_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATower_OnEnemyEnterRange_Statics::PropPointers) < 2048);
// ********** End Function OnEnemyEnterRange Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATower_OnEnemyEnterRange_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATower, nullptr, "OnEnemyEnterRange", 	Z_Construct_UFunction_ATower_OnEnemyEnterRange_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ATower_OnEnemyEnterRange_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ATower_OnEnemyEnterRange_Statics::Tower_eventOnEnemyEnterRange_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATower_OnEnemyEnterRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATower_OnEnemyEnterRange_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATower_OnEnemyEnterRange_Statics::Tower_eventOnEnemyEnterRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATower_OnEnemyEnterRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATower_OnEnemyEnterRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATower::execOnEnemyEnterRange)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnEnemyEnterRange(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// ********** End Class ATower Function OnEnemyEnterRange ******************************************

// ********** Begin Class ATower Function OnEnemyExitRange *****************************************
struct Z_Construct_UFunction_ATower_OnEnemyExitRange_Statics
{
	struct Tower_eventOnEnemyExitRange_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Tower.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnEnemyExitRange constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnEnemyExitRange constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnEnemyExitRange Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATower_OnEnemyExitRange_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Tower_eventOnEnemyExitRange_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATower_OnEnemyExitRange_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Tower_eventOnEnemyExitRange_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATower_OnEnemyExitRange_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Tower_eventOnEnemyExitRange_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATower_OnEnemyExitRange_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Tower_eventOnEnemyExitRange_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATower_OnEnemyExitRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATower_OnEnemyExitRange_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATower_OnEnemyExitRange_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATower_OnEnemyExitRange_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATower_OnEnemyExitRange_Statics::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATower_OnEnemyExitRange_Statics::PropPointers) < 2048);
// ********** End Function OnEnemyExitRange Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATower_OnEnemyExitRange_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATower, nullptr, "OnEnemyExitRange", 	Z_Construct_UFunction_ATower_OnEnemyExitRange_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ATower_OnEnemyExitRange_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ATower_OnEnemyExitRange_Statics::Tower_eventOnEnemyExitRange_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATower_OnEnemyExitRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATower_OnEnemyExitRange_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATower_OnEnemyExitRange_Statics::Tower_eventOnEnemyExitRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATower_OnEnemyExitRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATower_OnEnemyExitRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATower::execOnEnemyExitRange)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnEnemyExitRange(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
	P_NATIVE_END;
}
// ********** End Class ATower Function OnEnemyExitRange *******************************************

// ********** Begin Class ATower *******************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ATower;
UClass* ATower::GetPrivateStaticClass()
{
	using TClass = ATower;
	if (!Z_Registration_Info_UClass_ATower.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("Tower"),
			Z_Registration_Info_UClass_ATower.InnerSingleton,
			StaticRegisterNativesATower,
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
	return Z_Registration_Info_UClass_ATower.InnerSingleton;
}
UClass* Z_Construct_UClass_ATower_NoRegister()
{
	return ATower::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATower_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tower.h" },
		{ "ModuleRelativePath", "Tower.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "Tower" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Tower.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangeSphere_MetaData[] = {
		{ "Category", "Tower" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Tower.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Tower.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireRate_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Tower.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_baseDamage_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Tower.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Tower.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ATower constinit property declarations ***********************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RangeSphere;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Range;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FireRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_baseDamage;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ATower constinit property declarations *************************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("getEnemies"), .Pointer = &ATower::execgetEnemies },
		{ .NameUTF8 = UTF8TEXT("OnEnemyEnterRange"), .Pointer = &ATower::execOnEnemyEnterRange },
		{ .NameUTF8 = UTF8TEXT("OnEnemyExitRange"), .Pointer = &ATower::execOnEnemyExitRange },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATower_getEnemies, "getEnemies" }, // 2317996819
		{ &Z_Construct_UFunction_ATower_OnEnemyEnterRange, "OnEnemyEnterRange" }, // 1374877233
		{ &Z_Construct_UFunction_ATower_OnEnemyExitRange, "OnEnemyExitRange" }, // 311076448
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATower>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ATower_Statics

// ********** Begin Class ATower Property Definitions **********************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATower_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATower, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATower_Statics::NewProp_RangeSphere = { "RangeSphere", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATower, RangeSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangeSphere_MetaData), NewProp_RangeSphere_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATower_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATower, Range), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Range_MetaData), NewProp_Range_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATower_Statics::NewProp_FireRate = { "FireRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATower, FireRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireRate_MetaData), NewProp_FireRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATower_Statics::NewProp_baseDamage = { "baseDamage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATower, baseDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_baseDamage_MetaData), NewProp_baseDamage_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATower_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATower, ProjectileClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_AProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileClass_MetaData), NewProp_ProjectileClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATower_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATower_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATower_Statics::NewProp_RangeSphere,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATower_Statics::NewProp_Range,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATower_Statics::NewProp_FireRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATower_Statics::NewProp_baseDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATower_Statics::NewProp_ProjectileClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATower_Statics::PropPointers) < 2048);
// ********** End Class ATower Property Definitions ************************************************
UObject* (*const Z_Construct_UClass_ATower_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_TD_Game,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATower_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATower_Statics::ClassParams = {
	&ATower::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ATower_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ATower_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATower_Statics::Class_MetaDataParams), Z_Construct_UClass_ATower_Statics::Class_MetaDataParams)
};
void ATower::StaticRegisterNativesATower()
{
	UClass* Class = ATower::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_ATower_Statics::Funcs));
}
UClass* Z_Construct_UClass_ATower()
{
	if (!Z_Registration_Info_UClass_ATower.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATower.OuterSingleton, Z_Construct_UClass_ATower_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATower.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ATower);
ATower::~ATower() {}
// ********** End Class ATower *********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Filip_LC_Documents_GitHub_TD_Game_TD_Game_Source_TD_Game_Tower_h__Script_TD_Game_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATower, ATower::StaticClass, TEXT("ATower"), &Z_Registration_Info_UClass_ATower, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATower), 69030325U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Filip_LC_Documents_GitHub_TD_Game_TD_Game_Source_TD_Game_Tower_h__Script_TD_Game_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Filip_LC_Documents_GitHub_TD_Game_TD_Game_Source_TD_Game_Tower_h__Script_TD_Game_2917027277{
	TEXT("/Script/TD_Game"),
	Z_CompiledInDeferFile_FID_Users_Filip_LC_Documents_GitHub_TD_Game_TD_Game_Source_TD_Game_Tower_h__Script_TD_Game_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Filip_LC_Documents_GitHub_TD_Game_TD_Game_Source_TD_Game_Tower_h__Script_TD_Game_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
