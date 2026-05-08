// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TowersManager.h"

#ifdef TD_GAME_TowersManager_generated_h
#error "TowersManager.generated.h already included, missing '#pragma once' in TowersManager.h"
#endif
#define TD_GAME_TowersManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FTowerData ********************************************************
struct Z_Construct_UScriptStruct_FTowerData_Statics;
#define FID_Users_Filip_LC_Documents_GitHub_TD_Game_TD_Game_Source_TD_Game_TowersManager_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTowerData_Statics; \
	TD_GAME_API static class UScriptStruct* StaticStruct();


struct FTowerData;
// ********** End ScriptStruct FTowerData **********************************************************

// ********** Begin Class ATowersManager ***********************************************************
#define FID_Users_Filip_LC_Documents_GitHub_TD_Game_TD_Game_Source_TD_Game_TowersManager_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execshowGhostTower); \
	DECLARE_FUNCTION(execplaceTower); \
	DECLARE_FUNCTION(execselectTower);


struct Z_Construct_UClass_ATowersManager_Statics;
TD_GAME_API UClass* Z_Construct_UClass_ATowersManager_NoRegister();

#define FID_Users_Filip_LC_Documents_GitHub_TD_Game_TD_Game_Source_TD_Game_TowersManager_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATowersManager(); \
	friend struct ::Z_Construct_UClass_ATowersManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TD_GAME_API UClass* ::Z_Construct_UClass_ATowersManager_NoRegister(); \
public: \
	DECLARE_CLASS2(ATowersManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TD_Game"), Z_Construct_UClass_ATowersManager_NoRegister) \
	DECLARE_SERIALIZER(ATowersManager)


#define FID_Users_Filip_LC_Documents_GitHub_TD_Game_TD_Game_Source_TD_Game_TowersManager_h_26_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ATowersManager(ATowersManager&&) = delete; \
	ATowersManager(const ATowersManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATowersManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATowersManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATowersManager) \
	NO_API virtual ~ATowersManager();


#define FID_Users_Filip_LC_Documents_GitHub_TD_Game_TD_Game_Source_TD_Game_TowersManager_h_23_PROLOG
#define FID_Users_Filip_LC_Documents_GitHub_TD_Game_TD_Game_Source_TD_Game_TowersManager_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Filip_LC_Documents_GitHub_TD_Game_TD_Game_Source_TD_Game_TowersManager_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Filip_LC_Documents_GitHub_TD_Game_TD_Game_Source_TD_Game_TowersManager_h_26_INCLASS_NO_PURE_DECLS \
	FID_Users_Filip_LC_Documents_GitHub_TD_Game_TD_Game_Source_TD_Game_TowersManager_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ATowersManager;

// ********** End Class ATowersManager *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Filip_LC_Documents_GitHub_TD_Game_TD_Game_Source_TD_Game_TowersManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
