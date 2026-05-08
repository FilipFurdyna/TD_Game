// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TD_Game/PlayerBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePlayerBase() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
TD_GAME_API UClass* Z_Construct_UClass_APlayerBase();
TD_GAME_API UClass* Z_Construct_UClass_APlayerBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_TD_Game();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APlayerBase **************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_APlayerBase;
UClass* APlayerBase::GetPrivateStaticClass()
{
	using TClass = APlayerBase;
	if (!Z_Registration_Info_UClass_APlayerBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PlayerBase"),
			Z_Registration_Info_UClass_APlayerBase.InnerSingleton,
			StaticRegisterNativesAPlayerBase,
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
	return Z_Registration_Info_UClass_APlayerBase.InnerSingleton;
}
UClass* Z_Construct_UClass_APlayerBase_NoRegister()
{
	return APlayerBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APlayerBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PlayerBase.h" },
		{ "ModuleRelativePath", "PlayerBase.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class APlayerBase constinit property declarations ******************************
// ********** End Class APlayerBase constinit property declarations ********************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_APlayerBase_Statics
UObject* (*const Z_Construct_UClass_APlayerBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_TD_Game,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerBase_Statics::ClassParams = {
	&APlayerBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerBase_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerBase_Statics::Class_MetaDataParams)
};
void APlayerBase::StaticRegisterNativesAPlayerBase()
{
}
UClass* Z_Construct_UClass_APlayerBase()
{
	if (!Z_Registration_Info_UClass_APlayerBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerBase.OuterSingleton, Z_Construct_UClass_APlayerBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlayerBase.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, APlayerBase);
APlayerBase::~APlayerBase() {}
// ********** End Class APlayerBase ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Filip_LC_Documents_GitHub_TD_Game_TD_Game_Source_TD_Game_PlayerBase_h__Script_TD_Game_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlayerBase, APlayerBase::StaticClass, TEXT("APlayerBase"), &Z_Registration_Info_UClass_APlayerBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerBase), 1544728155U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Filip_LC_Documents_GitHub_TD_Game_TD_Game_Source_TD_Game_PlayerBase_h__Script_TD_Game_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Filip_LC_Documents_GitHub_TD_Game_TD_Game_Source_TD_Game_PlayerBase_h__Script_TD_Game_2857606636{
	TEXT("/Script/TD_Game"),
	Z_CompiledInDeferFile_FID_Users_Filip_LC_Documents_GitHub_TD_Game_TD_Game_Source_TD_Game_PlayerBase_h__Script_TD_Game_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Filip_LC_Documents_GitHub_TD_Game_TD_Game_Source_TD_Game_PlayerBase_h__Script_TD_Game_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
