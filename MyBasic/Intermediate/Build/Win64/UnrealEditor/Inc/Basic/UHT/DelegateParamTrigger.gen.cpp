// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Basic/EventAndDelegate/DelegateParamTrigger.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDelegateParamTrigger() {}

// Begin Cross Module References
BASIC_API UClass* Z_Construct_UClass_ADelegateParamTrigger();
BASIC_API UClass* Z_Construct_UClass_ADelegateParamTrigger_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Basic();
// End Cross Module References

// Begin Class ADelegateParamTrigger Function NotifyActorBeginOverlap
struct Z_Construct_UFunction_ADelegateParamTrigger_NotifyActorBeginOverlap_Statics
{
	struct DelegateParamTrigger_eventNotifyActorBeginOverlap_Parms
	{
		AActor* OtherActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EventAndDelegate/DelegateParamTrigger.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADelegateParamTrigger_NotifyActorBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DelegateParamTrigger_eventNotifyActorBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADelegateParamTrigger_NotifyActorBeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADelegateParamTrigger_NotifyActorBeginOverlap_Statics::NewProp_OtherActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADelegateParamTrigger_NotifyActorBeginOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADelegateParamTrigger_NotifyActorBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADelegateParamTrigger, nullptr, "NotifyActorBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_ADelegateParamTrigger_NotifyActorBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADelegateParamTrigger_NotifyActorBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADelegateParamTrigger_NotifyActorBeginOverlap_Statics::DelegateParamTrigger_eventNotifyActorBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADelegateParamTrigger_NotifyActorBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADelegateParamTrigger_NotifyActorBeginOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADelegateParamTrigger_NotifyActorBeginOverlap_Statics::DelegateParamTrigger_eventNotifyActorBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADelegateParamTrigger_NotifyActorBeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADelegateParamTrigger_NotifyActorBeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADelegateParamTrigger::execNotifyActorBeginOverlap)
{
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NotifyActorBeginOverlap(Z_Param_OtherActor);
	P_NATIVE_END;
}
// End Class ADelegateParamTrigger Function NotifyActorBeginOverlap

// Begin Class ADelegateParamTrigger Function NotifyActorEndOverlap
struct Z_Construct_UFunction_ADelegateParamTrigger_NotifyActorEndOverlap_Statics
{
	struct DelegateParamTrigger_eventNotifyActorEndOverlap_Parms
	{
		AActor* OtherActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EventAndDelegate/DelegateParamTrigger.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADelegateParamTrigger_NotifyActorEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DelegateParamTrigger_eventNotifyActorEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADelegateParamTrigger_NotifyActorEndOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADelegateParamTrigger_NotifyActorEndOverlap_Statics::NewProp_OtherActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADelegateParamTrigger_NotifyActorEndOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADelegateParamTrigger_NotifyActorEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADelegateParamTrigger, nullptr, "NotifyActorEndOverlap", nullptr, nullptr, Z_Construct_UFunction_ADelegateParamTrigger_NotifyActorEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADelegateParamTrigger_NotifyActorEndOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADelegateParamTrigger_NotifyActorEndOverlap_Statics::DelegateParamTrigger_eventNotifyActorEndOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADelegateParamTrigger_NotifyActorEndOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADelegateParamTrigger_NotifyActorEndOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADelegateParamTrigger_NotifyActorEndOverlap_Statics::DelegateParamTrigger_eventNotifyActorEndOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADelegateParamTrigger_NotifyActorEndOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADelegateParamTrigger_NotifyActorEndOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADelegateParamTrigger::execNotifyActorEndOverlap)
{
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NotifyActorEndOverlap(Z_Param_OtherActor);
	P_NATIVE_END;
}
// End Class ADelegateParamTrigger Function NotifyActorEndOverlap

// Begin Class ADelegateParamTrigger
void ADelegateParamTrigger::StaticRegisterNativesADelegateParamTrigger()
{
	UClass* Class = ADelegateParamTrigger::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "NotifyActorBeginOverlap", &ADelegateParamTrigger::execNotifyActorBeginOverlap },
		{ "NotifyActorEndOverlap", &ADelegateParamTrigger::execNotifyActorEndOverlap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADelegateParamTrigger);
UClass* Z_Construct_UClass_ADelegateParamTrigger_NoRegister()
{
	return ADelegateParamTrigger::StaticClass();
}
struct Z_Construct_UClass_ADelegateParamTrigger_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EventAndDelegate/DelegateParamTrigger.h" },
		{ "ModuleRelativePath", "EventAndDelegate/DelegateParamTrigger.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerZone_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EventAndDelegate/DelegateParamTrigger.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightColor_MetaData[] = {
		{ "Category", "DelegateParamTrigger" },
		{ "ModuleRelativePath", "EventAndDelegate/DelegateParamTrigger.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotateSpeed_MetaData[] = {
		{ "Category", "DelegateParamTrigger" },
		{ "ModuleRelativePath", "EventAndDelegate/DelegateParamTrigger.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TriggerZone;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LightColor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RotateSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADelegateParamTrigger_NotifyActorBeginOverlap, "NotifyActorBeginOverlap" }, // 662013947
		{ &Z_Construct_UFunction_ADelegateParamTrigger_NotifyActorEndOverlap, "NotifyActorEndOverlap" }, // 1972573135
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADelegateParamTrigger>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADelegateParamTrigger_Statics::NewProp_TriggerZone = { "TriggerZone", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADelegateParamTrigger, TriggerZone), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerZone_MetaData), NewProp_TriggerZone_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADelegateParamTrigger_Statics::NewProp_LightColor = { "LightColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADelegateParamTrigger, LightColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightColor_MetaData), NewProp_LightColor_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADelegateParamTrigger_Statics::NewProp_RotateSpeed = { "RotateSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADelegateParamTrigger, RotateSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotateSpeed_MetaData), NewProp_RotateSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADelegateParamTrigger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADelegateParamTrigger_Statics::NewProp_TriggerZone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADelegateParamTrigger_Statics::NewProp_LightColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADelegateParamTrigger_Statics::NewProp_RotateSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADelegateParamTrigger_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADelegateParamTrigger_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Basic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADelegateParamTrigger_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADelegateParamTrigger_Statics::ClassParams = {
	&ADelegateParamTrigger::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADelegateParamTrigger_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADelegateParamTrigger_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADelegateParamTrigger_Statics::Class_MetaDataParams), Z_Construct_UClass_ADelegateParamTrigger_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADelegateParamTrigger()
{
	if (!Z_Registration_Info_UClass_ADelegateParamTrigger.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADelegateParamTrigger.OuterSingleton, Z_Construct_UClass_ADelegateParamTrigger_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADelegateParamTrigger.OuterSingleton;
}
template<> BASIC_API UClass* StaticClass<ADelegateParamTrigger>()
{
	return ADelegateParamTrigger::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADelegateParamTrigger);
ADelegateParamTrigger::~ADelegateParamTrigger() {}
// End Class ADelegateParamTrigger

// Begin Registration
struct Z_CompiledInDeferFile_FID_My_UE5_Programming_MyBasic_Source_Basic_EventAndDelegate_DelegateParamTrigger_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADelegateParamTrigger, ADelegateParamTrigger::StaticClass, TEXT("ADelegateParamTrigger"), &Z_Registration_Info_UClass_ADelegateParamTrigger, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADelegateParamTrigger), 1158933039U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_My_UE5_Programming_MyBasic_Source_Basic_EventAndDelegate_DelegateParamTrigger_h_3529262002(TEXT("/Script/Basic"),
	Z_CompiledInDeferFile_FID_My_UE5_Programming_MyBasic_Source_Basic_EventAndDelegate_DelegateParamTrigger_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_My_UE5_Programming_MyBasic_Source_Basic_EventAndDelegate_DelegateParamTrigger_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
