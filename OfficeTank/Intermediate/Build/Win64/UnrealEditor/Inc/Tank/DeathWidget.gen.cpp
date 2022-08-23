// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tank/Widgets/DeathWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeathWidget() {}
// Cross Module References
	TANK_API UClass* Z_Construct_UClass_UDeathWidget_NoRegister();
	TANK_API UClass* Z_Construct_UClass_UDeathWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Tank();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
// End Cross Module References
	void UDeathWidget::StaticRegisterNativesUDeathWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDeathWidget);
	UClass* Z_Construct_UClass_UDeathWidget_NoRegister()
	{
		return UDeathWidget::StaticClass();
	}
	struct Z_Construct_UClass_UDeathWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeathImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DeathImage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDeathWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Tank,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeathWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/DeathWidget.h" },
		{ "ModuleRelativePath", "Widgets/DeathWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeathWidget_Statics::NewProp_DeathImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "DeathWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widgets/DeathWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDeathWidget_Statics::NewProp_DeathImage = { "DeathImage", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDeathWidget, DeathImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDeathWidget_Statics::NewProp_DeathImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDeathWidget_Statics::NewProp_DeathImage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDeathWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeathWidget_Statics::NewProp_DeathImage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDeathWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDeathWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDeathWidget_Statics::ClassParams = {
		&UDeathWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDeathWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDeathWidget_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDeathWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDeathWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDeathWidget()
	{
		if (!Z_Registration_Info_UClass_UDeathWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDeathWidget.OuterSingleton, Z_Construct_UClass_UDeathWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDeathWidget.OuterSingleton;
	}
	template<> TANK_API UClass* StaticClass<UDeathWidget>()
	{
		return UDeathWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDeathWidget);
	struct Z_CompiledInDeferFile_FID_OfficeTank_Source_Tank_Widgets_DeathWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OfficeTank_Source_Tank_Widgets_DeathWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDeathWidget, UDeathWidget::StaticClass, TEXT("UDeathWidget"), &Z_Registration_Info_UClass_UDeathWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDeathWidget), 3464161038U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OfficeTank_Source_Tank_Widgets_DeathWidget_h_566231937(TEXT("/Script/Tank"),
		Z_CompiledInDeferFile_FID_OfficeTank_Source_Tank_Widgets_DeathWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OfficeTank_Source_Tank_Widgets_DeathWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
