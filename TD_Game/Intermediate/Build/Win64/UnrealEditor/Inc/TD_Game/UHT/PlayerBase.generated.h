// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerBase.h"

#ifdef TD_GAME_PlayerBase_generated_h
#error "PlayerBase.generated.h already included, missing '#pragma once' in PlayerBase.h"
#endif
#define TD_GAME_PlayerBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class APlayerBase **************************************************************
struct Z_Construct_UClass_APlayerBase_Statics;
TD_GAME_API UClass* Z_Construct_UClass_APlayerBase_NoRegister();

#define FID_Users_Filip_LC_Documents_GitHub_TD_Game_TD_Game_Source_TD_Game_PlayerBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerBase(); \
	friend struct ::Z_Construct_UClass_APlayerBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TD_GAME_API UClass* ::Z_Construct_UClass_APlayerBase_NoRegister(); \
public: \
	DECLARE_CLASS2(APlayerBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TD_Game"), Z_Construct_UClass_APlayerBase_NoRegister) \
	DECLARE_SERIALIZER(APlayerBase)


#define FID_Users_Filip_LC_Documents_GitHub_TD_Game_TD_Game_Source_TD_Game_PlayerBase_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	APlayerBase(APlayerBase&&) = delete; \
	APlayerBase(const APlayerBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerBase) \
	NO_API virtual ~APlayerBase();


#define FID_Users_Filip_LC_Documents_GitHub_TD_Game_TD_Game_Source_TD_Game_PlayerBase_h_9_PROLOG
#define FID_Users_Filip_LC_Documents_GitHub_TD_Game_TD_Game_Source_TD_Game_PlayerBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Filip_LC_Documents_GitHub_TD_Game_TD_Game_Source_TD_Game_PlayerBase_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_Filip_LC_Documents_GitHub_TD_Game_TD_Game_Source_TD_Game_PlayerBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APlayerBase;

// ********** End Class APlayerBase ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Filip_LC_Documents_GitHub_TD_Game_TD_Game_Source_TD_Game_PlayerBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
