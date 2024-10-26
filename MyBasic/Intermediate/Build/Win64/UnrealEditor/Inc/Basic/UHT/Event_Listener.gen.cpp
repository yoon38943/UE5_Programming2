// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Basic/EventAndDelegate/Event_Listener.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEvent_Listener() {}

// Begin Cross Module References
BASIC_API UClass* Z_Construct_UClass_AEvent_Listener();
BASIC_API UClass* Z_Construct_UClass_AEvent_Listener_NoRegister();
BASIC_API UClass* Z_Construct_UClass_AEventTrigger_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Basic();
// End Cross Module References

// Begin Class AEvent_Listener Function OnEvent1Triggered
struct Z_Construct_UFunction_AEvent_Listener_OnEvent1Triggered_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EventAndDelegate/Event_Listener.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEvent_Listener_OnEvent1Triggered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEvent_Listener, nullptr, "OnEvent1Triggered", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEvent_Listener_OnEvent1Triggered_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEvent_Listener_OnEvent1Triggered_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AEvent_Listener_OnEvent1Triggered()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEvent_Listener_OnEvent1Triggered_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEvent_Listener::execOnEvent1Triggered)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnEvent1Triggered();
	P_NATIVE_END;
}
// End Class AEvent_Listener Function OnEvent1Triggered

// Begin Class AEvent_Listener Function OnEvent2Triggered
struct Z_Construct_UFunction_AEvent_Listener_OnEvent2Triggered_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EventAndDelegate/Event_Listener.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEvent_Listener_OnEvent2Triggered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEvent_Listener, nullptr, "OnEvent2Triggered", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEvent_Listener_OnEvent2Triggered_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEvent_Listener_OnEvent2Triggered_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AEvent_Listener_OnEvent2Triggered()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEvent_Listener_OnEvent2Triggered_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEvent_Listener::execOnEvent2Triggered)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnEvent2Triggered();
	P_NATIVE_END;
}
// End Class AEvent_Listener Function OnEvent2Triggered

// Begin Class AEvent_Listener
void AEvent_Listener::StaticRegisterNativesAEvent_Listener()
{
	UClass* Class = AEvent_Listener::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnEvent1Triggered", &AEvent_Listener::execOnEvent1Triggered },
		{ "OnEvent2Triggered", &AEvent_Listener::execOnEvent2Triggered },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEvent_Listener);
UClass* Z_Construct_UClass_AEvent_Listener_NoRegister()
{
	return AEvent_Listener::StaticClass();
}
struct Z_Construct_UClass_AEvent_Listener_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EventAndDelegate/Event_Listener.h" },
		{ "ModuleRelativePath", "EventAndDelegate/Event_Listener.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestMesh_MetaData[] = {
		{ "Category", "Event_Listener" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EventAndDelegate/Event_Listener.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventTriggerObj_MetaData[] = {
		{ "Category", "Event_Listener" },
		{ "ModuleRelativePath", "EventAndDelegate/Event_Listener.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TestMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EventTriggerObj;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AEvent_Listener_OnEvent1Triggered, "OnEvent1Triggered" }, // 2216306142
		{ &Z_Construct_UFunction_AEvent_Listener_OnEvent2Triggered, "OnEvent2Triggered" }, // 508426263
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEvent_Listener>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEvent_Listener_Statics::NewProp_TestMesh = { "TestMesh", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEvent_Listener, TestMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestMesh_MetaData), NewProp_TestMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEvent_Listener_Statics::NewProp_EventTriggerObj = { "EventTriggerObj", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEvent_Listener, EventTriggerObj), Z_Construct_UClass_AEventTrigger_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTriggerObj_MetaData), NewProp_EventTriggerObj_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEvent_Listener_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEvent_Listener_Statics::NewProp_TestMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEvent_Listener_Statics::NewProp_EventTriggerObj,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEvent_Listener_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEvent_Listener_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Basic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEvent_Listener_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEvent_Listener_Statics::ClassParams = {
	&AEvent_Listener::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AEvent_Listener_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AEvent_Listener_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEvent_Listener_Statics::Class_MetaDataParams), Z_Construct_UClass_AEvent_Listener_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEvent_Listener()
{
	if (!Z_Registration_Info_UClass_AEvent_Listener.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEvent_Listener.OuterSingleton, Z_Construct_UClass_AEvent_Listener_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEvent_Listener.OuterSingleton;
}
template<> BASIC_API UClass* StaticClass<AEvent_Listener>()
{
	return AEvent_Listener::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEvent_Listener);
AEvent_Listener::~AEvent_Listener() {}
// End Class AEvent_Listener

// Begin Registration
struct Z_CompiledInDeferFile_FID_My_UE5_Programming_MyBasic_Source_Basic_EventAndDelegate_Event_Listener_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEvent_Listener, AEvent_Listener::StaticClass, TEXT("AEvent_Listener"), &Z_Registration_Info_UClass_AEvent_Listener, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEvent_Listener), 674939599U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_My_UE5_Programming_MyBasic_Source_Basic_EventAndDelegate_Event_Listener_h_2472898736(TEXT("/Script/Basic"),
	Z_CompiledInDeferFile_FID_My_UE5_Programming_MyBasic_Source_Basic_EventAndDelegate_Event_Listener_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_My_UE5_Programming_MyBasic_Source_Basic_EventAndDelegate_Event_Listener_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
