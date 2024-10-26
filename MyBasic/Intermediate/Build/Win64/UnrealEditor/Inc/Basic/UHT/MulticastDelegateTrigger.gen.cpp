// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Basic/EventAndDelegate/MulticastDelegateTrigger.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMulticastDelegateTrigger() {}

// Begin Cross Module References
BASIC_API UClass* Z_Construct_UClass_AMulticastDelegateTrigger();
BASIC_API UClass* Z_Construct_UClass_AMulticastDelegateTrigger_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Basic();
// End Cross Module References

// Begin Class AMulticastDelegateTrigger Function NotifyActorBeginOverlap
struct Z_Construct_UFunction_AMulticastDelegateTrigger_NotifyActorBeginOverlap_Statics
{
	struct MulticastDelegateTrigger_eventNotifyActorBeginOverlap_Parms
	{
		AActor* OtherActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EventAndDelegate/MulticastDelegateTrigger.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMulticastDelegateTrigger_NotifyActorBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MulticastDelegateTrigger_eventNotifyActorBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMulticastDelegateTrigger_NotifyActorBeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMulticastDelegateTrigger_NotifyActorBeginOverlap_Statics::NewProp_OtherActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMulticastDelegateTrigger_NotifyActorBeginOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMulticastDelegateTrigger_NotifyActorBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMulticastDelegateTrigger, nullptr, "NotifyActorBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_AMulticastDelegateTrigger_NotifyActorBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMulticastDelegateTrigger_NotifyActorBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMulticastDelegateTrigger_NotifyActorBeginOverlap_Statics::MulticastDelegateTrigger_eventNotifyActorBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMulticastDelegateTrigger_NotifyActorBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMulticastDelegateTrigger_NotifyActorBeginOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMulticastDelegateTrigger_NotifyActorBeginOverlap_Statics::MulticastDelegateTrigger_eventNotifyActorBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMulticastDelegateTrigger_NotifyActorBeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMulticastDelegateTrigger_NotifyActorBeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMulticastDelegateTrigger::execNotifyActorBeginOverlap)
{
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NotifyActorBeginOverlap(Z_Param_OtherActor);
	P_NATIVE_END;
}
// End Class AMulticastDelegateTrigger Function NotifyActorBeginOverlap

// Begin Class AMulticastDelegateTrigger Function NotifyActorEndOverlap
struct Z_Construct_UFunction_AMulticastDelegateTrigger_NotifyActorEndOverlap_Statics
{
	struct MulticastDelegateTrigger_eventNotifyActorEndOverlap_Parms
	{
		AActor* OtherActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EventAndDelegate/MulticastDelegateTrigger.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMulticastDelegateTrigger_NotifyActorEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MulticastDelegateTrigger_eventNotifyActorEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMulticastDelegateTrigger_NotifyActorEndOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMulticastDelegateTrigger_NotifyActorEndOverlap_Statics::NewProp_OtherActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMulticastDelegateTrigger_NotifyActorEndOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMulticastDelegateTrigger_NotifyActorEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMulticastDelegateTrigger, nullptr, "NotifyActorEndOverlap", nullptr, nullptr, Z_Construct_UFunction_AMulticastDelegateTrigger_NotifyActorEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMulticastDelegateTrigger_NotifyActorEndOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMulticastDelegateTrigger_NotifyActorEndOverlap_Statics::MulticastDelegateTrigger_eventNotifyActorEndOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMulticastDelegateTrigger_NotifyActorEndOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMulticastDelegateTrigger_NotifyActorEndOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMulticastDelegateTrigger_NotifyActorEndOverlap_Statics::MulticastDelegateTrigger_eventNotifyActorEndOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMulticastDelegateTrigger_NotifyActorEndOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMulticastDelegateTrigger_NotifyActorEndOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMulticastDelegateTrigger::execNotifyActorEndOverlap)
{
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NotifyActorEndOverlap(Z_Param_OtherActor);
	P_NATIVE_END;
}
// End Class AMulticastDelegateTrigger Function NotifyActorEndOverlap

// Begin Class AMulticastDelegateTrigger
void AMulticastDelegateTrigger::StaticRegisterNativesAMulticastDelegateTrigger()
{
	UClass* Class = AMulticastDelegateTrigger::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "NotifyActorBeginOverlap", &AMulticastDelegateTrigger::execNotifyActorBeginOverlap },
		{ "NotifyActorEndOverlap", &AMulticastDelegateTrigger::execNotifyActorEndOverlap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMulticastDelegateTrigger);
UClass* Z_Construct_UClass_AMulticastDelegateTrigger_NoRegister()
{
	return AMulticastDelegateTrigger::StaticClass();
}
struct Z_Construct_UClass_AMulticastDelegateTrigger_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EventAndDelegate/MulticastDelegateTrigger.h" },
		{ "ModuleRelativePath", "EventAndDelegate/MulticastDelegateTrigger.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerZone_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EventAndDelegate/MulticastDelegateTrigger.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TriggerZone;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMulticastDelegateTrigger_NotifyActorBeginOverlap, "NotifyActorBeginOverlap" }, // 976800660
		{ &Z_Construct_UFunction_AMulticastDelegateTrigger_NotifyActorEndOverlap, "NotifyActorEndOverlap" }, // 2661716989
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMulticastDelegateTrigger>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMulticastDelegateTrigger_Statics::NewProp_TriggerZone = { "TriggerZone", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMulticastDelegateTrigger, TriggerZone), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerZone_MetaData), NewProp_TriggerZone_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMulticastDelegateTrigger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMulticastDelegateTrigger_Statics::NewProp_TriggerZone,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMulticastDelegateTrigger_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMulticastDelegateTrigger_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Basic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMulticastDelegateTrigger_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMulticastDelegateTrigger_Statics::ClassParams = {
	&AMulticastDelegateTrigger::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMulticastDelegateTrigger_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMulticastDelegateTrigger_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMulticastDelegateTrigger_Statics::Class_MetaDataParams), Z_Construct_UClass_AMulticastDelegateTrigger_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMulticastDelegateTrigger()
{
	if (!Z_Registration_Info_UClass_AMulticastDelegateTrigger.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMulticastDelegateTrigger.OuterSingleton, Z_Construct_UClass_AMulticastDelegateTrigger_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMulticastDelegateTrigger.OuterSingleton;
}
template<> BASIC_API UClass* StaticClass<AMulticastDelegateTrigger>()
{
	return AMulticastDelegateTrigger::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMulticastDelegateTrigger);
AMulticastDelegateTrigger::~AMulticastDelegateTrigger() {}
// End Class AMulticastDelegateTrigger

// Begin Registration
struct Z_CompiledInDeferFile_FID_My_UE5_Programming_MyBasic_Source_Basic_EventAndDelegate_MulticastDelegateTrigger_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMulticastDelegateTrigger, AMulticastDelegateTrigger::StaticClass, TEXT("AMulticastDelegateTrigger"), &Z_Registration_Info_UClass_AMulticastDelegateTrigger, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMulticastDelegateTrigger), 2222206298U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_My_UE5_Programming_MyBasic_Source_Basic_EventAndDelegate_MulticastDelegateTrigger_h_3037981676(TEXT("/Script/Basic"),
	Z_CompiledInDeferFile_FID_My_UE5_Programming_MyBasic_Source_Basic_EventAndDelegate_MulticastDelegateTrigger_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_My_UE5_Programming_MyBasic_Source_Basic_EventAndDelegate_MulticastDelegateTrigger_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
