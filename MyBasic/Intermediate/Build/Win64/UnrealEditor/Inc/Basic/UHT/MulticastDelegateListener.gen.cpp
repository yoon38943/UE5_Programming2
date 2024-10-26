// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Basic/EventAndDelegate/MulticastDelegateListener.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMulticastDelegateListener() {}

// Begin Cross Module References
BASIC_API UClass* Z_Construct_UClass_AMulticastDelegateListener();
BASIC_API UClass* Z_Construct_UClass_AMulticastDelegateListener_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UPointLightComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Basic();
// End Cross Module References

// Begin Class AMulticastDelegateListener Function ToggleLight
struct Z_Construct_UFunction_AMulticastDelegateListener_ToggleLight_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EventAndDelegate/MulticastDelegateListener.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMulticastDelegateListener_ToggleLight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMulticastDelegateListener, nullptr, "ToggleLight", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMulticastDelegateListener_ToggleLight_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMulticastDelegateListener_ToggleLight_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMulticastDelegateListener_ToggleLight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMulticastDelegateListener_ToggleLight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMulticastDelegateListener::execToggleLight)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ToggleLight();
	P_NATIVE_END;
}
// End Class AMulticastDelegateListener Function ToggleLight

// Begin Class AMulticastDelegateListener
void AMulticastDelegateListener::StaticRegisterNativesAMulticastDelegateListener()
{
	UClass* Class = AMulticastDelegateListener::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ToggleLight", &AMulticastDelegateListener::execToggleLight },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMulticastDelegateListener);
UClass* Z_Construct_UClass_AMulticastDelegateListener_NoRegister()
{
	return AMulticastDelegateListener::StaticClass();
}
struct Z_Construct_UClass_AMulticastDelegateListener_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EventAndDelegate/MulticastDelegateListener.h" },
		{ "ModuleRelativePath", "EventAndDelegate/MulticastDelegateListener.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointLight_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EventAndDelegate/MulticastDelegateListener.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PointLight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMulticastDelegateListener_ToggleLight, "ToggleLight" }, // 621566218
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMulticastDelegateListener>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMulticastDelegateListener_Statics::NewProp_PointLight = { "PointLight", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMulticastDelegateListener, PointLight), Z_Construct_UClass_UPointLightComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointLight_MetaData), NewProp_PointLight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMulticastDelegateListener_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMulticastDelegateListener_Statics::NewProp_PointLight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMulticastDelegateListener_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMulticastDelegateListener_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Basic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMulticastDelegateListener_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMulticastDelegateListener_Statics::ClassParams = {
	&AMulticastDelegateListener::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMulticastDelegateListener_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMulticastDelegateListener_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMulticastDelegateListener_Statics::Class_MetaDataParams), Z_Construct_UClass_AMulticastDelegateListener_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMulticastDelegateListener()
{
	if (!Z_Registration_Info_UClass_AMulticastDelegateListener.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMulticastDelegateListener.OuterSingleton, Z_Construct_UClass_AMulticastDelegateListener_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMulticastDelegateListener.OuterSingleton;
}
template<> BASIC_API UClass* StaticClass<AMulticastDelegateListener>()
{
	return AMulticastDelegateListener::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMulticastDelegateListener);
AMulticastDelegateListener::~AMulticastDelegateListener() {}
// End Class AMulticastDelegateListener

// Begin Registration
struct Z_CompiledInDeferFile_FID_My_UE5_Programming_MyBasic_Source_Basic_EventAndDelegate_MulticastDelegateListener_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMulticastDelegateListener, AMulticastDelegateListener::StaticClass, TEXT("AMulticastDelegateListener"), &Z_Registration_Info_UClass_AMulticastDelegateListener, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMulticastDelegateListener), 1805885259U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_My_UE5_Programming_MyBasic_Source_Basic_EventAndDelegate_MulticastDelegateListener_h_2833207313(TEXT("/Script/Basic"),
	Z_CompiledInDeferFile_FID_My_UE5_Programming_MyBasic_Source_Basic_EventAndDelegate_MulticastDelegateListener_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_My_UE5_Programming_MyBasic_Source_Basic_EventAndDelegate_MulticastDelegateListener_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
