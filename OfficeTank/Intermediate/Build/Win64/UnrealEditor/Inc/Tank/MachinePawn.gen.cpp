// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tank/MachinePawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMachinePawn() {}
// Cross Module References
	TANK_API UClass* Z_Construct_UClass_AMachinePawn_NoRegister();
	TANK_API UClass* Z_Construct_UClass_AMachinePawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Tank();
	TANK_API UClass* Z_Construct_UClass_UHealthComponent_NoRegister();
	TANK_API UClass* Z_Construct_UClass_ACannon_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	TANK_API UClass* Z_Construct_UClass_UDamageTaker_NoRegister();
	TANK_API UClass* Z_Construct_UClass_UScorable_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMachinePawn::execDamageTaked)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DamageValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DamageTaked(Z_Param_DamageValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMachinePawn::execShowScore)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowScore(Z_Param_Value);
		P_NATIVE_END;
	}
	static FName NAME_AMachinePawn_TakeDamageEvent = FName(TEXT("TakeDamageEvent"));
	void AMachinePawn::TakeDamageEvent()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMachinePawn_TakeDamageEvent),NULL);
	}
	void AMachinePawn::StaticRegisterNativesAMachinePawn()
	{
		UClass* Class = AMachinePawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DamageTaked", &AMachinePawn::execDamageTaked },
			{ "ShowScore", &AMachinePawn::execShowScore },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMachinePawn_DamageTaked_Statics
	{
		struct MachinePawn_eventDamageTaked_Parms
		{
			float DamageValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMachinePawn_DamageTaked_Statics::NewProp_DamageValue = { "DamageValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MachinePawn_eventDamageTaked_Parms, DamageValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMachinePawn_DamageTaked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMachinePawn_DamageTaked_Statics::NewProp_DamageValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMachinePawn_DamageTaked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MachinePawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMachinePawn_DamageTaked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMachinePawn, nullptr, "DamageTaked", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMachinePawn_DamageTaked_Statics::MachinePawn_eventDamageTaked_Parms), Z_Construct_UFunction_AMachinePawn_DamageTaked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMachinePawn_DamageTaked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMachinePawn_DamageTaked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMachinePawn_DamageTaked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMachinePawn_DamageTaked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMachinePawn_DamageTaked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMachinePawn_ShowScore_Statics
	{
		struct MachinePawn_eventShowScore_Parms
		{
			float Value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMachinePawn_ShowScore_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MachinePawn_eventShowScore_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMachinePawn_ShowScore_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMachinePawn_ShowScore_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMachinePawn_ShowScore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MachinePawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMachinePawn_ShowScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMachinePawn, nullptr, "ShowScore", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMachinePawn_ShowScore_Statics::MachinePawn_eventShowScore_Parms), Z_Construct_UFunction_AMachinePawn_ShowScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMachinePawn_ShowScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMachinePawn_ShowScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMachinePawn_ShowScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMachinePawn_ShowScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMachinePawn_ShowScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMachinePawn_TakeDamageEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMachinePawn_TakeDamageEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MachinePawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMachinePawn_TakeDamageEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMachinePawn, nullptr, "TakeDamageEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMachinePawn_TakeDamageEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMachinePawn_TakeDamageEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMachinePawn_TakeDamageEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMachinePawn_TakeDamageEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMachinePawn);
	UClass* Z_Construct_UClass_AMachinePawn_NoRegister()
	{
		return AMachinePawn::StaticClass();
	}
	struct Z_Construct_UClass_AMachinePawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScoreValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScoreValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cannon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Cannon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioEffectDamaged_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioEffectDamaged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMachinePawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Tank,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMachinePawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMachinePawn_DamageTaked, "DamageTaked" }, // 230588454
		{ &Z_Construct_UFunction_AMachinePawn_ShowScore, "ShowScore" }, // 765721783
		{ &Z_Construct_UFunction_AMachinePawn_TakeDamageEvent, "TakeDamageEvent" }, // 1617272926
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMachinePawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MachinePawn.h" },
		{ "ModuleRelativePath", "MachinePawn.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMachinePawn_Statics::NewProp_ScoreValue_MetaData[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "MachinePawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMachinePawn_Statics::NewProp_ScoreValue = { "ScoreValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMachinePawn, ScoreValue), METADATA_PARAMS(Z_Construct_UClass_AMachinePawn_Statics::NewProp_ScoreValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMachinePawn_Statics::NewProp_ScoreValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMachinePawn_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Healh" },
		{ "ModuleRelativePath", "MachinePawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMachinePawn_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMachinePawn, Health), METADATA_PARAMS(Z_Construct_UClass_AMachinePawn_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMachinePawn_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMachinePawn_Statics::NewProp_HealthComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MachinePawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMachinePawn_Statics::NewProp_HealthComponent = { "HealthComponent", nullptr, (EPropertyFlags)0x00200800000b000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMachinePawn, HealthComponent), Z_Construct_UClass_UHealthComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMachinePawn_Statics::NewProp_HealthComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMachinePawn_Statics::NewProp_HealthComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMachinePawn_Statics::NewProp_Cannon_MetaData[] = {
		{ "ModuleRelativePath", "MachinePawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMachinePawn_Statics::NewProp_Cannon = { "Cannon", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMachinePawn, Cannon), Z_Construct_UClass_ACannon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMachinePawn_Statics::NewProp_Cannon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMachinePawn_Statics::NewProp_Cannon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMachinePawn_Statics::NewProp_AudioEffect_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "//Sounds\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MachinePawn.h" },
		{ "ToolTip", "Sounds" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMachinePawn_Statics::NewProp_AudioEffect = { "AudioEffect", nullptr, (EPropertyFlags)0x00200800000b000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMachinePawn, AudioEffect), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMachinePawn_Statics::NewProp_AudioEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMachinePawn_Statics::NewProp_AudioEffect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMachinePawn_Statics::NewProp_AudioEffectDamaged_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MachinePawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMachinePawn_Statics::NewProp_AudioEffectDamaged = { "AudioEffectDamaged", nullptr, (EPropertyFlags)0x00200800000b000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMachinePawn, AudioEffectDamaged), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMachinePawn_Statics::NewProp_AudioEffectDamaged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMachinePawn_Statics::NewProp_AudioEffectDamaged_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMachinePawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMachinePawn_Statics::NewProp_ScoreValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMachinePawn_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMachinePawn_Statics::NewProp_HealthComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMachinePawn_Statics::NewProp_Cannon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMachinePawn_Statics::NewProp_AudioEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMachinePawn_Statics::NewProp_AudioEffectDamaged,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AMachinePawn_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UDamageTaker_NoRegister, (int32)VTABLE_OFFSET(AMachinePawn, IDamageTaker), false },  // 4191389099
			{ Z_Construct_UClass_UScorable_NoRegister, (int32)VTABLE_OFFSET(AMachinePawn, IScorable), false },  // 1521670676
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMachinePawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMachinePawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMachinePawn_Statics::ClassParams = {
		&AMachinePawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMachinePawn_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMachinePawn_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMachinePawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMachinePawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMachinePawn()
	{
		if (!Z_Registration_Info_UClass_AMachinePawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMachinePawn.OuterSingleton, Z_Construct_UClass_AMachinePawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMachinePawn.OuterSingleton;
	}
	template<> TANK_API UClass* StaticClass<AMachinePawn>()
	{
		return AMachinePawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMachinePawn);
	struct Z_CompiledInDeferFile_FID_OfficeTank_Source_Tank_MachinePawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OfficeTank_Source_Tank_MachinePawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMachinePawn, AMachinePawn::StaticClass, TEXT("AMachinePawn"), &Z_Registration_Info_UClass_AMachinePawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMachinePawn), 1465500335U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OfficeTank_Source_Tank_MachinePawn_h_1692937629(TEXT("/Script/Tank"),
		Z_CompiledInDeferFile_FID_OfficeTank_Source_Tank_MachinePawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OfficeTank_Source_Tank_MachinePawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
