// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Basic/EventAndDelegate/DelegateTrigger.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDelegateTrigger() {}

// Begin Cross Module References
BASIC_API UClass* Z_Construct_UClass_ADelegateTrigger();
BASIC_API UClass* Z_Construct_UClass_ADelegateTrigger_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Basic();
// End Cross Module References

// Begin Class ADelegateTrigger Function NotifyActorBeginOverlap
struct Z_Construct_UFunction_ADelegateTrigger_NotifyActorBeginOverlap_Statics
{
	struct DelegateTrigger_eventNotifyActorBeginOverlap_Parms
	{
		AActor* OtherActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EventAndDelegate/DelegateTrigger.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADelegateTrigger_NotifyActorBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DelegateTrigger_eventNotifyActorBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADelegateTrigger_NotifyActorBeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADelegateTrigger_NotifyActorBeginOverlap_Statics::NewProp_OtherActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADelegateTrigger_NotifyActorBeginOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADelegateTrigger_NotifyActorBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADelegateTrigger, nullptr, "NotifyActorBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_ADelegateTrigger_NotifyActorBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADelegateTrigger_NotifyActorBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADelegateTrigger_NotifyActorBeginOverlap_Statics::DelegateTrigger_eventNotifyActorBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADelegateTrigger_NotifyActorBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADelegateTrigger_NotifyActorBeginOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADelegateTrigger_NotifyActorBeginOverlap_Statics::DelegateTrigger_eventNotifyActorBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADelegateTrigger_NotifyActorBeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADelegateTrigger_NotifyActorBeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADelegateTrigger::execNotifyActorBeginOverlap)
{
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NotifyActorBeginOverlap(Z_Param_OtherActor);
	P_NATIVE_END;
}
// End Class ADelegateTrigger Function NotifyActorBeginOverlap

// Begin Class ADelegateTrigger Function NotifyActorEndOverlap
struct Z_Construct_UFunction_ADelegateTrigger_NotifyActorEndOverlap_Statics
{
	struct DelegateTrigger_eventNotifyActorEndOverlap_Parms
	{
		AActor* OtherActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EventAndDelegate/DelegateTrigger.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADelegateTrigger_NotifyActorEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DelegateTrigger_eventNotifyActorEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADelegateTrigger_NotifyActorEndOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADelegateTrigger_NotifyActorEndOverlap_Statics::NewProp_OtherActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADelegateTrigger_NotifyActorEndOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADelegateTrigger_NotifyActorEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADelegateTrigger, nullptr, "NotifyActorEndOverlap", nullptr, nullptr, Z_Construct_UFunction_ADelegateTrigger_NotifyActorEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADelegateTrigger_NotifyActorEndOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADelegateTrigger_NotifyActorEndOverlap_Statics::DelegateTrigger_eventNotifyActorEndOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADelegateTrigger_NotifyActorEndOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADelegateTrigger_NotifyActorEndOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADelegateTrigger_NotifyActorEndOverlap_Statics::DelegateTrigger_eventNotifyActorEndOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADelegateTrigger_NotifyActorEndOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADelegateTrigger_NotifyActorEndOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADelegateTrigger::execNotifyActorEndOverlap)
{
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NotifyActorEndOverlap(Z_Param_OtherActor);
	P_NATIVE_END;
}
// End Class ADelegateTrigger Function NotifyActorEndOverlap

// Begin Class ADelegateTrigger
void ADelegateTrigger::StaticRegisterNativesADelegateTrigger()
{
	UClass* Class = ADelegateTrigger::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "NotifyActorBeginOverlap", &ADelegateTrigger::execNotifyActorBeginOverlap },
		{ "NotifyActorEndOverlap", &ADelegateTrigger::execNotifyActorEndOverlap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADelegateTrigger);
UClass* Z_Construct_UClass_ADelegateTrigger_NoRegister()
{
	return ADelegateTrigger::StaticClass();
}
struct Z_Construct_UClass_ADelegateTrigger_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EventAndDelegate/DelegateTrigger.h" },
		{ "ModuleRelativePath", "EventAndDelegate/DelegateTrigger.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerZone_MetaData[] = {
		{ "Category", "DelegateTrigger" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EventAndDelegate/DelegateTrigger.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TriggerZone;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADelegateTrigger_NotifyActorBeginOverlap, "NotifyActorBeginOverlap" }, // 3769607694
		{ &Z_Construct_UFunction_ADelegateTrigger_NotifyActorEndOverlap, "NotifyActorEndOverlap" }, // 2912582717
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADelegateTrigger>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADelegateTrigger_Statics::NewProp_TriggerZone = { "TriggerZone", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADelegateTrigger, TriggerZone), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerZone_MetaData), NewProp_TriggerZone_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADelegateTrigger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADelegateTrigger_Statics::NewProp_TriggerZone,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADelegateTrigger_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADelegateTrigger_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Basic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADelegateTrigger_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADelegateTrigger_Statics::ClassParams = {
	&ADelegateTrigger::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADelegateTrigger_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADelegateTrigger_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADelegateTrigger_Statics::Class_MetaDataParams), Z_Construct_UClass_ADelegateTrigger_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADelegateTrigger()
{
	if (!Z_Registration_Info_UClass_ADelegateTrigger.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADelegateTrigger.OuterSingleton, Z_Construct_UClass_ADelegateTrigger_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADelegateTrigger.OuterSingleton;
}
template<> BASIC_API UClass* StaticClass<ADelegateTrigger>()
{
	return ADelegateTrigger::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADelegateTrigger);
ADelegateTrigger::~ADelegateTrigger() {}
// End Class ADelegateTrigger

// Begin Registration
struct Z_CompiledInDeferFile_FID_My_UE5_Programming_MyBasic_Source_Basic_EventAndDelegate_DelegateTrigger_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADelegateTrigger, ADelegateTrigger::StaticClass, TEXT("ADelegateTrigger"), &Z_Registration_Info_UClass_ADelegateTrigger, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADelegateTrigger), 142593048U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_My_UE5_Programming_MyBasic_Source_Basic_EventAndDelegate_DelegateTrigger_h_4279655213(TEXT("/Script/Basic"),
	Z_CompiledInDeferFile_FID_My_UE5_Programming_MyBasic_Source_Basic_EventAndDelegate_DelegateTrigger_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_My_UE5_Programming_MyBasic_Source_Basic_EventAndDelegate_DelegateTrigger_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
