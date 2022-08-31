// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tank/MyHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyHUD() {}
// Cross Module References
	TANK_API UEnum* Z_Construct_UEnum_Tank_EWidgetID();
	UPackage* Z_Construct_UPackage__Script_Tank();
	TANK_API UClass* Z_Construct_UClass_AMyHUD_NoRegister();
	TANK_API UClass* Z_Construct_UClass_AMyHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWidgetID;
	static UEnum* EWidgetID_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWidgetID.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWidgetID.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Tank_EWidgetID, Z_Construct_UPackage__Script_Tank(), TEXT("EWidgetID"));
		}
		return Z_Registration_Info_UEnum_EWidgetID.OuterSingleton;
	}
	template<> TANK_API UEnum* StaticEnum<EWidgetID>()
	{
		return EWidgetID_StaticEnum();
	}
	struct Z_Construct_UEnum_Tank_EWidgetID_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Tank_EWidgetID_Statics::Enumerators[] = {
		{ "EWidgetID::None", (int64)EWidgetID::None },
		{ "EWidgetID::WidPause", (int64)EWidgetID::WidPause },
		{ "EWidgetID::WidHealthBar", (int64)EWidgetID::WidHealthBar },
		{ "EWidgetID::WidMainMenu", (int64)EWidgetID::WidMainMenu },
		{ "EWidgetID::WidDeath", (int64)EWidgetID::WidDeath },
		{ "EWidgetID::WidInventory", (int64)EWidgetID::WidInventory },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Tank_EWidgetID_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "MyHUD.h" },
		{ "None.Comment", "/**\n * \n */" },
		{ "None.Name", "EWidgetID::None" },
		{ "WidDeath.Comment", "/**\n * \n */" },
		{ "WidDeath.Name", "EWidgetID::WidDeath" },
		{ "WidHealthBar.Comment", "/**\n * \n */" },
		{ "WidHealthBar.Name", "EWidgetID::WidHealthBar" },
		{ "WidInventory.Comment", "/**\n * \n */" },
		{ "WidInventory.Name", "EWidgetID::WidInventory" },
		{ "WidMainMenu.Comment", "/**\n * \n */" },
		{ "WidMainMenu.Name", "EWidgetID::WidMainMenu" },
		{ "WidPause.Comment", "/**\n * \n */" },
		{ "WidPause.Name", "EWidgetID::WidPause" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Tank_EWidgetID_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Tank,
		nullptr,
		"EWidgetID",
		"EWidgetID",
		Z_Construct_UEnum_Tank_EWidgetID_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Tank_EWidgetID_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Tank_EWidgetID_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Tank_EWidgetID_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Tank_EWidgetID()
	{
		if (!Z_Registration_Info_UEnum_EWidgetID.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWidgetID.InnerSingleton, Z_Construct_UEnum_Tank_EWidgetID_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWidgetID.InnerSingleton;
	}
	DEFINE_FUNCTION(AMyHUD::execGetCurrentWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUserWidget**)Z_Param__Result=P_THIS->GetCurrentWidget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyHUD::execHideWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideWidget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyHUD::execShowWidget)
	{
		P_GET_ENUM(EWidgetID,Z_Param_WidgetID);
		P_GET_PROPERTY(FIntProperty,Z_Param_ZOrder);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUserWidget**)Z_Param__Result=P_THIS->ShowWidget(EWidgetID(Z_Param_WidgetID),Z_Param_ZOrder);
		P_NATIVE_END;
	}
	void AMyHUD::StaticRegisterNativesAMyHUD()
	{
		UClass* Class = AMyHUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentWidget", &AMyHUD::execGetCurrentWidget },
			{ "HideWidget", &AMyHUD::execHideWidget },
			{ "ShowWidget", &AMyHUD::execShowWidget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyHUD_GetCurrentWidget_Statics
	{
		struct MyHUD_eventGetCurrentWidget_Parms
		{
			UUserWidget* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyHUD_GetCurrentWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyHUD_GetCurrentWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyHUD_eventGetCurrentWidget_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMyHUD_GetCurrentWidget_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyHUD_GetCurrentWidget_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyHUD_GetCurrentWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyHUD_GetCurrentWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyHUD_GetCurrentWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyHUD.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyHUD_GetCurrentWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyHUD, nullptr, "GetCurrentWidget", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMyHUD_GetCurrentWidget_Statics::MyHUD_eventGetCurrentWidget_Parms), Z_Construct_UFunction_AMyHUD_GetCurrentWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyHUD_GetCurrentWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyHUD_GetCurrentWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyHUD_GetCurrentWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyHUD_GetCurrentWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyHUD_GetCurrentWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyHUD_HideWidget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyHUD_HideWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyHUD.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyHUD_HideWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyHUD, nullptr, "HideWidget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyHUD_HideWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyHUD_HideWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyHUD_HideWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyHUD_HideWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyHUD_ShowWidget_Statics
	{
		struct MyHUD_eventShowWidget_Parms
		{
			EWidgetID WidgetID;
			int32 ZOrder;
			UUserWidget* ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_WidgetID_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetID_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_WidgetID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZOrder_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ZOrder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMyHUD_ShowWidget_Statics::NewProp_WidgetID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyHUD_ShowWidget_Statics::NewProp_WidgetID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AMyHUD_ShowWidget_Statics::NewProp_WidgetID = { "WidgetID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyHUD_eventShowWidget_Parms, WidgetID), Z_Construct_UEnum_Tank_EWidgetID, METADATA_PARAMS(Z_Construct_UFunction_AMyHUD_ShowWidget_Statics::NewProp_WidgetID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyHUD_ShowWidget_Statics::NewProp_WidgetID_MetaData)) }; // 1932690228
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyHUD_ShowWidget_Statics::NewProp_ZOrder_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyHUD_ShowWidget_Statics::NewProp_ZOrder = { "ZOrder", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyHUD_eventShowWidget_Parms, ZOrder), METADATA_PARAMS(Z_Construct_UFunction_AMyHUD_ShowWidget_Statics::NewProp_ZOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyHUD_ShowWidget_Statics::NewProp_ZOrder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyHUD_ShowWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyHUD_ShowWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyHUD_eventShowWidget_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMyHUD_ShowWidget_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyHUD_ShowWidget_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyHUD_ShowWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyHUD_ShowWidget_Statics::NewProp_WidgetID_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyHUD_ShowWidget_Statics::NewProp_WidgetID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyHUD_ShowWidget_Statics::NewProp_ZOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyHUD_ShowWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyHUD_ShowWidget_Statics::Function_MetaDataParams[] = {
		{ "CPP_Default_ZOrder", "0" },
		{ "ModuleRelativePath", "MyHUD.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyHUD_ShowWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyHUD, nullptr, "ShowWidget", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMyHUD_ShowWidget_Statics::MyHUD_eventShowWidget_Parms), Z_Construct_UFunction_AMyHUD_ShowWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyHUD_ShowWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyHUD_ShowWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyHUD_ShowWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyHUD_ShowWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyHUD_ShowWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyHUD);
	UClass* Z_Construct_UClass_AMyHUD_NoRegister()
	{
		return AMyHUD::StaticClass();
	}
	struct Z_Construct_UClass_AMyHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetClasses_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_WidgetClasses_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_WidgetClasses_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetClasses_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_WidgetClasses;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Tank,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyHUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyHUD_GetCurrentWidget, "GetCurrentWidget" }, // 3162113931
		{ &Z_Construct_UFunction_AMyHUD_HideWidget, "HideWidget" }, // 660069302
		{ &Z_Construct_UFunction_AMyHUD_ShowWidget, "ShowWidget" }, // 2857259216
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "MyHUD.h" },
		{ "ModuleRelativePath", "MyHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyHUD_Statics::NewProp_WidgetClasses_ValueProp = { "WidgetClasses", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMyHUD_Statics::NewProp_WidgetClasses_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMyHUD_Statics::NewProp_WidgetClasses_Key_KeyProp = { "WidgetClasses_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Tank_EWidgetID, METADATA_PARAMS(nullptr, 0) }; // 1932690228
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyHUD_Statics::NewProp_WidgetClasses_MetaData[] = {
		{ "Category", "MyHUD" },
		{ "ModuleRelativePath", "MyHUD.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AMyHUD_Statics::NewProp_WidgetClasses = { "WidgetClasses", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyHUD, WidgetClasses), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMyHUD_Statics::NewProp_WidgetClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyHUD_Statics::NewProp_WidgetClasses_MetaData)) }; // 1932690228
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyHUD_Statics::NewProp_CurrentWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyHUD_Statics::NewProp_CurrentWidget = { "CurrentWidget", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyHUD, CurrentWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyHUD_Statics::NewProp_CurrentWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyHUD_Statics::NewProp_CurrentWidget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyHUD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyHUD_Statics::NewProp_WidgetClasses_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyHUD_Statics::NewProp_WidgetClasses_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyHUD_Statics::NewProp_WidgetClasses_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyHUD_Statics::NewProp_WidgetClasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyHUD_Statics::NewProp_CurrentWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyHUD_Statics::ClassParams = {
		&AMyHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyHUD_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMyHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyHUD()
	{
		if (!Z_Registration_Info_UClass_AMyHUD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyHUD.OuterSingleton, Z_Construct_UClass_AMyHUD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyHUD.OuterSingleton;
	}
	template<> TANK_API UClass* StaticClass<AMyHUD>()
	{
		return AMyHUD::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyHUD);
	struct Z_CompiledInDeferFile_FID_OfficeTank_Source_Tank_MyHUD_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OfficeTank_Source_Tank_MyHUD_h_Statics::EnumInfo[] = {
		{ EWidgetID_StaticEnum, TEXT("EWidgetID"), &Z_Registration_Info_UEnum_EWidgetID, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1932690228U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OfficeTank_Source_Tank_MyHUD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyHUD, AMyHUD::StaticClass, TEXT("AMyHUD"), &Z_Registration_Info_UClass_AMyHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyHUD), 994664262U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OfficeTank_Source_Tank_MyHUD_h_1178131196(TEXT("/Script/Tank"),
		Z_CompiledInDeferFile_FID_OfficeTank_Source_Tank_MyHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OfficeTank_Source_Tank_MyHUD_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_OfficeTank_Source_Tank_MyHUD_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OfficeTank_Source_Tank_MyHUD_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
