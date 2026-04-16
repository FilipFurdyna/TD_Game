// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GridManager.h"

#ifdef TD_GAME_GridManager_generated_h
#error "GridManager.generated.h already included, missing '#pragma once' in GridManager.h"
#endif
#define TD_GAME_GridManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AGridManager *************************************************************
#define FID_Users_Deus_Volt_Documents_GitHub_TD_Game_TD_Game_Source_TD_Game_GridManager_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPlaceIsland); \
	DECLARE_FUNCTION(execHighlightTile);


struct Z_Construct_UClass_AGridManager_Statics;
TD_GAME_API UClass* Z_Construct_UClass_AGridManager_NoRegister();

#define FID_Users_Deus_Volt_Documents_GitHub_TD_Game_TD_Game_Source_TD_Game_GridManager_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGridManager(); \
	friend struct ::Z_Construct_UClass_AGridManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TD_GAME_API UClass* ::Z_Construct_UClass_AGridManager_NoRegister(); \
public: \
	DECLARE_CLASS2(AGridManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TD_Game"), Z_Construct_UClass_AGridManager_NoRegister) \
	DECLARE_SERIALIZER(AGridManager)


#define FID_Users_Deus_Volt_Documents_GitHub_TD_Game_TD_Game_Source_TD_Game_GridManager_h_26_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AGridManager(AGridManager&&) = delete; \
	AGridManager(const AGridManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGridManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGridManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGridManager) \
	NO_API virtual ~AGridManager();


#define FID_Users_Deus_Volt_Documents_GitHub_TD_Game_TD_Game_Source_TD_Game_GridManager_h_23_PROLOG
#define FID_Users_Deus_Volt_Documents_GitHub_TD_Game_TD_Game_Source_TD_Game_GridManager_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Deus_Volt_Documents_GitHub_TD_Game_TD_Game_Source_TD_Game_GridManager_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Deus_Volt_Documents_GitHub_TD_Game_TD_Game_Source_TD_Game_GridManager_h_26_INCLASS_NO_PURE_DECLS \
	FID_Users_Deus_Volt_Documents_GitHub_TD_Game_TD_Game_Source_TD_Game_GridManager_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AGridManager;

// ********** End Class AGridManager ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Deus_Volt_Documents_GitHub_TD_Game_TD_Game_Source_TD_Game_GridManager_h

// ********** Begin Enum ECornerType ***************************************************************
#define FOREACH_ENUM_ECORNERTYPE(op) \
	op(ECornerType::None) \
	op(ECornerType::Corner) \
	op(ECornerType::Side) 

enum class ECornerType : uint8;
template<> struct TIsUEnumClass<ECornerType> { enum { Value = true }; };
template<> TD_GAME_NON_ATTRIBUTED_API UEnum* StaticEnum<ECornerType>();
// ********** End Enum ECornerType *****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
