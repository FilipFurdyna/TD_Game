// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTD_Game_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_TD_Game;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_TD_Game()
	{
		if (!Z_Registration_Info_UPackage__Script_TD_Game.OuterSingleton)
		{
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/TD_Game",
			nullptr,
			0,
			PKG_CompiledIn | 0x00000000,
			0xEF50BCBB,
			0x78C8118F,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_TD_Game.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_TD_Game.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_TD_Game(Z_Construct_UPackage__Script_TD_Game, TEXT("/Script/TD_Game"), Z_Registration_Info_UPackage__Script_TD_Game, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xEF50BCBB, 0x78C8118F));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
