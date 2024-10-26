// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Basic/EventAndDelegate/EventTrigger.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEventTrigger() {}

// Begin Cross Module References
BASIC_API UClass* Z_Construct_UClass_AEventTrigger();
BASIC_API UClass* Z_Construct_UClass_AEventTrigger_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_Basic();
// End Cross Module References

// Begin Class AEventTrigger Function NotifyActorBeginOverlap
struct Z_Construct_UFunction_AEventTrigger_NotifyActorBeginOverlap_Statics
{
	struct EventTrigger_eventNotifyActorBeginOverlap_Parms
	{
		AActor* OtherActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// UFUCNTION() \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb8\xef\xbf\xbd \xef\xbf\xbd\xdf\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "EventAndDelegate/EventTrigger.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UFUCNTION() \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb8\xef\xbf\xbd \xef\xbf\xbd\xdf\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEventTrigger_NotifyActorBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EventTrigger_eventNotifyActorBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEventTrigger_NotifyActorBeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEventTrigger_NotifyActorBeginOverlap_Statics::NewProp_OtherActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEventTrigger_NotifyActorBeginOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEventTrigger_NotifyActorBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEventTrigger, nullptr, "NotifyActorBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_AEventTrigger_NotifyActorBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEventTrigger_NotifyActorBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEventTrigger_NotifyActorBeginOverlap_Statics::EventTrigger_eventNotifyActorBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEventTrigger_NotifyActorBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEventTrigger_NotifyActorBeginOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AEventTrigger_NotifyActorBeginOverlap_Statics::EventTrigger_eventNotifyActorBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEventTrigger_NotifyActorBeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEventTrigger_NotifyActorBeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEventTrigger::execNotifyActorBeginOverlap)
{
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NotifyActorBeginOverlap(Z_Param_OtherActor);
	P_NATIVE_END;
}
// End Class AEventTrigger Function NotifyActorBeginOverlap

// Begin Class AEventTrigger Function NotifyActorEndOverlap
struct Z_Construct_UFunction_AEventTrigger_NotifyActorEndOverlap_Statics
{
	struct EventTrigger_eventNotifyActorEndOverlap_Parms
	{
		AActor* OtherActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EventAndDelegate/EventTrigger.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEventTrigger_NotifyActorEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EventTrigger_eventNotifyActorEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEventTrigger_NotifyActorEndOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEventTrigger_NotifyActorEndOverlap_Statics::NewProp_OtherActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEventTrigger_NotifyActorEndOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEventTrigger_NotifyActorEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEventTrigger, nullptr, "NotifyActorEndOverlap", nullptr, nullptr, Z_Construct_UFunction_AEventTrigger_NotifyActorEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEventTrigger_NotifyActorEndOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEventTrigger_NotifyActorEndOverlap_Statics::EventTrigger_eventNotifyActorEndOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEventTrigger_NotifyActorEndOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEventTrigger_NotifyActorEndOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AEventTrigger_NotifyActorEndOverlap_Statics::EventTrigger_eventNotifyActorEndOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEventTrigger_NotifyActorEndOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEventTrigger_NotifyActorEndOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEventTrigger::execNotifyActorEndOverlap)
{
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NotifyActorEndOverlap(Z_Param_OtherActor);
	P_NATIVE_END;
}
// End Class AEventTrigger Function NotifyActorEndOverlap

// Begin Class AEventTrigger
void AEventTrigger::StaticRegisterNativesAEventTrigger()
{
	UClass* Class = AEventTrigger::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "NotifyActorBeginOverlap", &AEventTrigger::execNotifyActorBeginOverlap },
		{ "NotifyActorEndOverlap", &AEventTrigger::execNotifyActorEndOverlap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEventTrigger);
UClass* Z_Construct_UClass_AEventTrigger_NoRegister()
{
	return AEventTrigger::StaticClass();
}
struct Z_Construct_UClass_AEventTrigger_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EventAndDelegate/EventTrigger.h" },
		{ "ModuleRelativePath", "EventAndDelegate/EventTrigger.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AEventTrigger_NotifyActorBeginOverlap, "NotifyActorBeginOverlap" }, // 1298424801
		{ &Z_Construct_UFunction_AEventTrigger_NotifyActorEndOverlap, "NotifyActorEndOverlap" }, // 3750801999
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEventTrigger>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AEventTrigger_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Basic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEventTrigger_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEventTrigger_Statics::ClassParams = {
	&AEventTrigger::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEventTrigger_Statics::Class_MetaDataParams), Z_Construct_UClass_AEventTrigger_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEventTrigger()
{
	if (!Z_Registration_Info_UClass_AEventTrigger.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEventTrigger.OuterSingleton, Z_Construct_UClass_AEventTrigger_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEventTrigger.OuterSingleton;
}
template<> BASIC_API UClass* StaticClass<AEventTrigger>()
{
	return AEventTrigger::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEventTrigger);
AEventTrigger::~AEventTrigger() {}
// End Class AEventTrigger

// Begin Registration
struct Z_CompiledInDeferFile_FID_My_UE5_Programming_MyBasic_Source_Basic_EventAndDelegate_EventTrigger_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEventTrigger, AEventTrigger::StaticClass, TEXT("AEventTrigger"), &Z_Registration_Info_UClass_AEventTrigger, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEventTrigger), 2247791053U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_My_UE5_Programming_MyBasic_Source_Basic_EventAndDelegate_EventTrigger_h_2496094161(TEXT("/Script/Basic"),
	Z_CompiledInDeferFile_FID_My_UE5_Programming_MyBasic_Source_Basic_EventAndDelegate_EventTrigger_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_My_UE5_Programming_MyBasic_Source_Basic_EventAndDelegate_EventTrigger_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
