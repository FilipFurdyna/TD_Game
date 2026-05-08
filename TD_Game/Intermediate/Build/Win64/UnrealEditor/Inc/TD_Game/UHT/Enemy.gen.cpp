// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TD_Game/Enemy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeEnemy() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
TD_GAME_API UClass* Z_Construct_UClass_AEnemy();
TD_GAME_API UClass* Z_Construct_UClass_AEnemy_NoRegister();
UPackage* Z_Construct_UPackage__Script_TD_Game();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AEnemy Function takeDamage ***********************************************
struct Z_Construct_UFunction_AEnemy_takeDamage_Statics
{
	struct Enemy_eventtakeDamage_Parms
	{
		float DamageAmount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Damage Handling\n" },
#endif
		{ "ModuleRelativePath", "Enemy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Damage Handling" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function takeDamage constinit property declarations ****************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function takeDamage constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function takeDamage Property Definitions ***************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEnemy_takeDamage_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Enemy_eventtakeDamage_Parms, DamageAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemy_takeDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemy_takeDamage_Statics::NewProp_DamageAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_takeDamage_Statics::PropPointers) < 2048);
// ********** End Function takeDamage Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemy_takeDamage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEnemy, nullptr, "takeDamage", 	Z_Construct_UFunction_AEnemy_takeDamage_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_takeDamage_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AEnemy_takeDamage_Statics::Enemy_eventtakeDamage_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_takeDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemy_takeDamage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AEnemy_takeDamage_Statics::Enemy_eventtakeDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnemy_takeDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemy_takeDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemy::exectakeDamage)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DamageAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->takeDamage(Z_Param_DamageAmount);
	P_NATIVE_END;
}
// ********** End Class AEnemy Function takeDamage *************************************************

// ********** Begin Class AEnemy *******************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AEnemy;
UClass* AEnemy::GetPrivateStaticClass()
{
	using TClass = AEnemy;
	if (!Z_Registration_Info_UClass_AEnemy.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("Enemy"),
			Z_Registration_Info_UClass_AEnemy.InnerSingleton,
			StaticRegisterNativesAEnemy,
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
	return Z_Registration_Info_UClass_AEnemy.InnerSingleton;
}
UClass* Z_Construct_UClass_AEnemy_NoRegister()
{
	return AEnemy::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AEnemy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Enemy.h" },
		{ "ModuleRelativePath", "Enemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_maxHealth_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Enemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_currentHealth_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Enemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_movingSpeed_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Enemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GoalActor_MetaData[] = {
		{ "Category", "AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Path Targeting\n" },
#endif
		{ "ModuleRelativePath", "Enemy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Path Targeting" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class AEnemy constinit property declarations ***********************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_maxHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_currentHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_movingSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GoalActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AEnemy constinit property declarations *************************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("takeDamage"), .Pointer = &AEnemy::exectakeDamage },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemy_takeDamage, "takeDamage" }, // 672071797
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AEnemy_Statics

// ********** Begin Class AEnemy Property Definitions **********************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemy_Statics::NewProp_maxHealth = { "maxHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemy, maxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_maxHealth_MetaData), NewProp_maxHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemy_Statics::NewProp_currentHealth = { "currentHealth", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemy, currentHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_currentHealth_MetaData), NewProp_currentHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemy_Statics::NewProp_movingSpeed = { "movingSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemy, movingSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_movingSpeed_MetaData), NewProp_movingSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_Statics::NewProp_GoalActor = { "GoalActor", nullptr, (EPropertyFlags)0x0010000000000801, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemy, GoalActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GoalActor_MetaData), NewProp_GoalActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Statics::NewProp_maxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Statics::NewProp_currentHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Statics::NewProp_movingSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Statics::NewProp_GoalActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::PropPointers) < 2048);
// ********** End Class AEnemy Property Definitions ************************************************
UObject* (*const Z_Construct_UClass_AEnemy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_TD_Game,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemy_Statics::ClassParams = {
	&AEnemy::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AEnemy_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemy_Statics::Class_MetaDataParams)
};
void AEnemy::StaticRegisterNativesAEnemy()
{
	UClass* Class = AEnemy::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_AEnemy_Statics::Funcs));
}
UClass* Z_Construct_UClass_AEnemy()
{
	if (!Z_Registration_Info_UClass_AEnemy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemy.OuterSingleton, Z_Construct_UClass_AEnemy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemy.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AEnemy);
AEnemy::~AEnemy() {}
// ********** End Class AEnemy *********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Filip_LC_Documents_GitHub_TD_Game_TD_Game_Source_TD_Game_Enemy_h__Script_TD_Game_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemy, AEnemy::StaticClass, TEXT("AEnemy"), &Z_Registration_Info_UClass_AEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemy), 3877454185U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Filip_LC_Documents_GitHub_TD_Game_TD_Game_Source_TD_Game_Enemy_h__Script_TD_Game_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Filip_LC_Documents_GitHub_TD_Game_TD_Game_Source_TD_Game_Enemy_h__Script_TD_Game_358901540{
	TEXT("/Script/TD_Game"),
	Z_CompiledInDeferFile_FID_Users_Filip_LC_Documents_GitHub_TD_Game_TD_Game_Source_TD_Game_Enemy_h__Script_TD_Game_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Filip_LC_Documents_GitHub_TD_Game_TD_Game_Source_TD_Game_Enemy_h__Script_TD_Game_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
