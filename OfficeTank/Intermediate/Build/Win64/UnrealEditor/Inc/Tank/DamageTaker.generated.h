// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TANK_DamageTaker_generated_h
#error "DamageTaker.generated.h already included, missing '#pragma once' in DamageTaker.h"
#endif
#define TANK_DamageTaker_generated_h

#define FID_OfficeTank_Source_Tank_DamageTaker_h_14_SPARSE_DATA
#define FID_OfficeTank_Source_Tank_DamageTaker_h_14_RPC_WRAPPERS
#define FID_OfficeTank_Source_Tank_DamageTaker_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_OfficeTank_Source_Tank_DamageTaker_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TANK_API UDamageTaker(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDamageTaker) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TANK_API, UDamageTaker); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDamageTaker); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TANK_API UDamageTaker(UDamageTaker&&); \
	TANK_API UDamageTaker(const UDamageTaker&); \
public:


#define FID_OfficeTank_Source_Tank_DamageTaker_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TANK_API UDamageTaker(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TANK_API UDamageTaker(UDamageTaker&&); \
	TANK_API UDamageTaker(const UDamageTaker&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TANK_API, UDamageTaker); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDamageTaker); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDamageTaker)


#define FID_OfficeTank_Source_Tank_DamageTaker_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDamageTaker(); \
	friend struct Z_Construct_UClass_UDamageTaker_Statics; \
public: \
	DECLARE_CLASS(UDamageTaker, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Tank"), TANK_API) \
	DECLARE_SERIALIZER(UDamageTaker)


#define FID_OfficeTank_Source_Tank_DamageTaker_h_14_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_OfficeTank_Source_Tank_DamageTaker_h_14_GENERATED_UINTERFACE_BODY() \
	FID_OfficeTank_Source_Tank_DamageTaker_h_14_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_OfficeTank_Source_Tank_DamageTaker_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_OfficeTank_Source_Tank_DamageTaker_h_14_GENERATED_UINTERFACE_BODY() \
	FID_OfficeTank_Source_Tank_DamageTaker_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_OfficeTank_Source_Tank_DamageTaker_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDamageTaker() {} \
public: \
	typedef UDamageTaker UClassType; \
	typedef IDamageTaker ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_OfficeTank_Source_Tank_DamageTaker_h_14_INCLASS_IINTERFACE \
protected: \
	virtual ~IDamageTaker() {} \
public: \
	typedef UDamageTaker UClassType; \
	typedef IDamageTaker ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_OfficeTank_Source_Tank_DamageTaker_h_11_PROLOG
#define FID_OfficeTank_Source_Tank_DamageTaker_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_OfficeTank_Source_Tank_DamageTaker_h_14_SPARSE_DATA \
	FID_OfficeTank_Source_Tank_DamageTaker_h_14_RPC_WRAPPERS \
	FID_OfficeTank_Source_Tank_DamageTaker_h_14_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_OfficeTank_Source_Tank_DamageTaker_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_OfficeTank_Source_Tank_DamageTaker_h_14_SPARSE_DATA \
	FID_OfficeTank_Source_Tank_DamageTaker_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_OfficeTank_Source_Tank_DamageTaker_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANK_API UClass* StaticClass<class UDamageTaker>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_OfficeTank_Source_Tank_DamageTaker_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
