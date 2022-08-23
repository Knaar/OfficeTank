// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUserWidget;
enum class EWidgetID : uint8;
#ifdef TANK_MyHUD_generated_h
#error "MyHUD.generated.h already included, missing '#pragma once' in MyHUD.h"
#endif
#define TANK_MyHUD_generated_h

#define FID_OfficeTank_Source_Tank_MyHUD_h_25_SPARSE_DATA
#define FID_OfficeTank_Source_Tank_MyHUD_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentWidget); \
	DECLARE_FUNCTION(execHideWidget); \
	DECLARE_FUNCTION(execShowWidget);


#define FID_OfficeTank_Source_Tank_MyHUD_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentWidget); \
	DECLARE_FUNCTION(execHideWidget); \
	DECLARE_FUNCTION(execShowWidget);


#define FID_OfficeTank_Source_Tank_MyHUD_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyHUD(); \
	friend struct Z_Construct_UClass_AMyHUD_Statics; \
public: \
	DECLARE_CLASS(AMyHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tank"), NO_API) \
	DECLARE_SERIALIZER(AMyHUD)


#define FID_OfficeTank_Source_Tank_MyHUD_h_25_INCLASS \
private: \
	static void StaticRegisterNativesAMyHUD(); \
	friend struct Z_Construct_UClass_AMyHUD_Statics; \
public: \
	DECLARE_CLASS(AMyHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tank"), NO_API) \
	DECLARE_SERIALIZER(AMyHUD)


#define FID_OfficeTank_Source_Tank_MyHUD_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyHUD(AMyHUD&&); \
	NO_API AMyHUD(const AMyHUD&); \
public:


#define FID_OfficeTank_Source_Tank_MyHUD_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyHUD(AMyHUD&&); \
	NO_API AMyHUD(const AMyHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyHUD)


#define FID_OfficeTank_Source_Tank_MyHUD_h_22_PROLOG
#define FID_OfficeTank_Source_Tank_MyHUD_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_OfficeTank_Source_Tank_MyHUD_h_25_SPARSE_DATA \
	FID_OfficeTank_Source_Tank_MyHUD_h_25_RPC_WRAPPERS \
	FID_OfficeTank_Source_Tank_MyHUD_h_25_INCLASS \
	FID_OfficeTank_Source_Tank_MyHUD_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_OfficeTank_Source_Tank_MyHUD_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_OfficeTank_Source_Tank_MyHUD_h_25_SPARSE_DATA \
	FID_OfficeTank_Source_Tank_MyHUD_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_OfficeTank_Source_Tank_MyHUD_h_25_INCLASS_NO_PURE_DECLS \
	FID_OfficeTank_Source_Tank_MyHUD_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANK_API UClass* StaticClass<class AMyHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_OfficeTank_Source_Tank_MyHUD_h


#define FOREACH_ENUM_EWIDGETID(op) \
	op(EWidgetID::None) \
	op(EWidgetID::WidMainMenu) \
	op(EWidgetID::WidDeath) 

enum class EWidgetID : uint8;
template<> TANK_API UEnum* StaticEnum<EWidgetID>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
