// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TANK_MainMenuWidget_generated_h
#error "MainMenuWidget.generated.h already included, missing '#pragma once' in MainMenuWidget.h"
#endif
#define TANK_MainMenuWidget_generated_h

#define FID_OfficeTank_Source_Tank_MainMenuWidget_h_10_DELEGATE \
static inline void FMainMenuDelegate_DelegateWrapper(const FMulticastScriptDelegate& MainMenuDelegate) \
{ \
	MainMenuDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_OfficeTank_Source_Tank_MainMenuWidget_h_19_SPARSE_DATA
#define FID_OfficeTank_Source_Tank_MainMenuWidget_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnQuitClicked); \
	DECLARE_FUNCTION(execOnNewGameClicked);


#define FID_OfficeTank_Source_Tank_MainMenuWidget_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnQuitClicked); \
	DECLARE_FUNCTION(execOnNewGameClicked);


#define FID_OfficeTank_Source_Tank_MainMenuWidget_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMainMenuWidget(); \
	friend struct Z_Construct_UClass_UMainMenuWidget_Statics; \
public: \
	DECLARE_CLASS(UMainMenuWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Tank"), NO_API) \
	DECLARE_SERIALIZER(UMainMenuWidget)


#define FID_OfficeTank_Source_Tank_MainMenuWidget_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUMainMenuWidget(); \
	friend struct Z_Construct_UClass_UMainMenuWidget_Statics; \
public: \
	DECLARE_CLASS(UMainMenuWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Tank"), NO_API) \
	DECLARE_SERIALIZER(UMainMenuWidget)


#define FID_OfficeTank_Source_Tank_MainMenuWidget_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMainMenuWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainMenuWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainMenuWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainMenuWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMainMenuWidget(UMainMenuWidget&&); \
	NO_API UMainMenuWidget(const UMainMenuWidget&); \
public:


#define FID_OfficeTank_Source_Tank_MainMenuWidget_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMainMenuWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMainMenuWidget(UMainMenuWidget&&); \
	NO_API UMainMenuWidget(const UMainMenuWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainMenuWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainMenuWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainMenuWidget)


#define FID_OfficeTank_Source_Tank_MainMenuWidget_h_16_PROLOG
#define FID_OfficeTank_Source_Tank_MainMenuWidget_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_OfficeTank_Source_Tank_MainMenuWidget_h_19_SPARSE_DATA \
	FID_OfficeTank_Source_Tank_MainMenuWidget_h_19_RPC_WRAPPERS \
	FID_OfficeTank_Source_Tank_MainMenuWidget_h_19_INCLASS \
	FID_OfficeTank_Source_Tank_MainMenuWidget_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_OfficeTank_Source_Tank_MainMenuWidget_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_OfficeTank_Source_Tank_MainMenuWidget_h_19_SPARSE_DATA \
	FID_OfficeTank_Source_Tank_MainMenuWidget_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_OfficeTank_Source_Tank_MainMenuWidget_h_19_INCLASS_NO_PURE_DECLS \
	FID_OfficeTank_Source_Tank_MainMenuWidget_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANK_API UClass* StaticClass<class UMainMenuWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_OfficeTank_Source_Tank_MainMenuWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
