// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tank/TurretSpawnerWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTurretSpawnerWidget() {}
// Cross Module References
	TANK_API UClass* Z_Construct_UClass_UTurretSpawnerWidget_NoRegister();
	TANK_API UClass* Z_Construct_UClass_UTurretSpawnerWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Tank();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
// End Cross Module References
	void UTurretSpawnerWidget::StaticRegisterNativesUTurretSpawnerWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTurretSpawnerWidget);
	UClass* Z_Construct_UClass_UTurretSpawnerWidget_NoRegister()
	{
		return UTurretSpawnerWidget::StaticClass();
	}
	struct Z_Construct_UClass_UTurretSpawnerWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextTurretSlot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TextTurretSlot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextTuretName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TextTuretName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorBeenSpawned_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActorBeenSpawned;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserPlayerController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UserPlayerController;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTurretSpawnerWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Tank,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTurretSpawnerWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "TurretSpawnerWidget.h" },
		{ "ModuleRelativePath", "TurretSpawnerWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTurretSpawnerWidget_Statics::NewProp_TextTurretSlot_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "TurretSpawnerWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TurretSpawnerWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTurretSpawnerWidget_Statics::NewProp_TextTurretSlot = { "TextTurretSlot", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTurretSpawnerWidget, TextTurretSlot), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTurretSpawnerWidget_Statics::NewProp_TextTurretSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTurretSpawnerWidget_Statics::NewProp_TextTurretSlot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTurretSpawnerWidget_Statics::NewProp_TextTuretName_MetaData[] = {
		{ "Category", "TurretSpawnerWidget" },
		{ "ModuleRelativePath", "TurretSpawnerWidget.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTurretSpawnerWidget_Statics::NewProp_TextTuretName = { "TextTuretName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTurretSpawnerWidget, TextTuretName), METADATA_PARAMS(Z_Construct_UClass_UTurretSpawnerWidget_Statics::NewProp_TextTuretName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTurretSpawnerWidget_Statics::NewProp_TextTuretName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTurretSpawnerWidget_Statics::NewProp_SpawnedActor_MetaData[] = {
		{ "ModuleRelativePath", "TurretSpawnerWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTurretSpawnerWidget_Statics::NewProp_SpawnedActor = { "SpawnedActor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTurretSpawnerWidget, SpawnedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTurretSpawnerWidget_Statics::NewProp_SpawnedActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTurretSpawnerWidget_Statics::NewProp_SpawnedActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTurretSpawnerWidget_Statics::NewProp_ActorBeenSpawned_MetaData[] = {
		{ "Category", "TurretSpawnerWidget" },
		{ "ModuleRelativePath", "TurretSpawnerWidget.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTurretSpawnerWidget_Statics::NewProp_ActorBeenSpawned = { "ActorBeenSpawned", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTurretSpawnerWidget, ActorBeenSpawned), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UTurretSpawnerWidget_Statics::NewProp_ActorBeenSpawned_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTurretSpawnerWidget_Statics::NewProp_ActorBeenSpawned_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTurretSpawnerWidget_Statics::NewProp_UserPlayerController_MetaData[] = {
		{ "ModuleRelativePath", "TurretSpawnerWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTurretSpawnerWidget_Statics::NewProp_UserPlayerController = { "UserPlayerController", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTurretSpawnerWidget, UserPlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTurretSpawnerWidget_Statics::NewProp_UserPlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTurretSpawnerWidget_Statics::NewProp_UserPlayerController_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTurretSpawnerWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurretSpawnerWidget_Statics::NewProp_TextTurretSlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurretSpawnerWidget_Statics::NewProp_TextTuretName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurretSpawnerWidget_Statics::NewProp_SpawnedActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurretSpawnerWidget_Statics::NewProp_ActorBeenSpawned,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurretSpawnerWidget_Statics::NewProp_UserPlayerController,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTurretSpawnerWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTurretSpawnerWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTurretSpawnerWidget_Statics::ClassParams = {
		&UTurretSpawnerWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTurretSpawnerWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTurretSpawnerWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTurretSpawnerWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTurretSpawnerWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTurretSpawnerWidget()
	{
		if (!Z_Registration_Info_UClass_UTurretSpawnerWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTurretSpawnerWidget.OuterSingleton, Z_Construct_UClass_UTurretSpawnerWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTurretSpawnerWidget.OuterSingleton;
	}
	template<> TANK_API UClass* StaticClass<UTurretSpawnerWidget>()
	{
		return UTurretSpawnerWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTurretSpawnerWidget);
	struct Z_CompiledInDeferFile_FID_OfficeTank_Source_Tank_TurretSpawnerWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OfficeTank_Source_Tank_TurretSpawnerWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTurretSpawnerWidget, UTurretSpawnerWidget::StaticClass, TEXT("UTurretSpawnerWidget"), &Z_Registration_Info_UClass_UTurretSpawnerWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTurretSpawnerWidget), 527652702U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OfficeTank_Source_Tank_TurretSpawnerWidget_h_926728010(TEXT("/Script/Tank"),
		Z_CompiledInDeferFile_FID_OfficeTank_Source_Tank_TurretSpawnerWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OfficeTank_Source_Tank_TurretSpawnerWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
