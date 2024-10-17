// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Basic/EventAndDelegate/DelegateListener.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDelegateListener() {}

// Begin Cross Module References
BASIC_API UClass* Z_Construct_UClass_ADelegateListener();
BASIC_API UClass* Z_Construct_UClass_ADelegateListener_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UPointLightComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Basic();
// End Cross Module References

// Begin Class ADelegateListener Function EnableLight
struct Z_Construct_UFunction_ADelegateListener_EnableLight_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EventAndDelegate/DelegateListener.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADelegateListener_EnableLight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADelegateListener, nullptr, "EnableLight", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADelegateListener_EnableLight_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADelegateListener_EnableLight_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADelegateListener_EnableLight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADelegateListener_EnableLight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADelegateListener::execEnableLight)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnableLight();
	P_NATIVE_END;
}
// End Class ADelegateListener Function EnableLight

// Begin Class ADelegateListener
void ADelegateListener::StaticRegisterNativesADelegateListener()
{
	UClass* Class = ADelegateListener::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EnableLight", &ADelegateListener::execEnableLight },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADelegateListener);
UClass* Z_Construct_UClass_ADelegateListener_NoRegister()
{
	return ADelegateListener::StaticClass();
}
struct Z_Construct_UClass_ADelegateListener_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EventAndDelegate/DelegateListener.h" },
		{ "ModuleRelativePath", "EventAndDelegate/DelegateListener.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointLight_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EventAndDelegate/DelegateListener.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PointLight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADelegateListener_EnableLight, "EnableLight" }, // 708348740
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADelegateListener>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADelegateListener_Statics::NewProp_PointLight = { "PointLight", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADelegateListener, PointLight), Z_Construct_UClass_UPointLightComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointLight_MetaData), NewProp_PointLight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADelegateListener_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADelegateListener_Statics::NewProp_PointLight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADelegateListener_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADelegateListener_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Basic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADelegateListener_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADelegateListener_Statics::ClassParams = {
	&ADelegateListener::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADelegateListener_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADelegateListener_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADelegateListener_Statics::Class_MetaDataParams), Z_Construct_UClass_ADelegateListener_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADelegateListener()
{
	if (!Z_Registration_Info_UClass_ADelegateListener.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADelegateListener.OuterSingleton, Z_Construct_UClass_ADelegateListener_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADelegateListener.OuterSingleton;
}
template<> BASIC_API UClass* StaticClass<ADelegateListener>()
{
	return ADelegateListener::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADelegateListener);
ADelegateListener::~ADelegateListener() {}
// End Class ADelegateListener

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyBasic_Source_Basic_EventAndDelegate_DelegateListener_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADelegateListener, ADelegateListener::StaticClass, TEXT("ADelegateListener"), &Z_Registration_Info_UClass_ADelegateListener, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADelegateListener), 1881117902U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyBasic_Source_Basic_EventAndDelegate_DelegateListener_h_462536423(TEXT("/Script/Basic"),
	Z_CompiledInDeferFile_FID_MyBasic_Source_Basic_EventAndDelegate_DelegateListener_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyBasic_Source_Basic_EventAndDelegate_DelegateListener_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
