// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Basic/EventAndDelegate/MulticastDelegateParamListener.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMulticastDelegateParamListener() {}

// Begin Cross Module References
BASIC_API UClass* Z_Construct_UClass_AMulticastDelegateParamListener();
BASIC_API UClass* Z_Construct_UClass_AMulticastDelegateParamListener_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USpotLightComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Basic();
// End Cross Module References

// Begin Class AMulticastDelegateParamListener
void AMulticastDelegateParamListener::StaticRegisterNativesAMulticastDelegateParamListener()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMulticastDelegateParamListener);
UClass* Z_Construct_UClass_AMulticastDelegateParamListener_NoRegister()
{
	return AMulticastDelegateParamListener::StaticClass();
}
struct Z_Construct_UClass_AMulticastDelegateParamListener_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EventAndDelegate/MulticastDelegateParamListener.h" },
		{ "ModuleRelativePath", "EventAndDelegate/MulticastDelegateParamListener.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpotLight_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EventAndDelegate/MulticastDelegateParamListener.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpotLight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMulticastDelegateParamListener>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMulticastDelegateParamListener_Statics::NewProp_SpotLight = { "SpotLight", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMulticastDelegateParamListener, SpotLight), Z_Construct_UClass_USpotLightComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpotLight_MetaData), NewProp_SpotLight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMulticastDelegateParamListener_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMulticastDelegateParamListener_Statics::NewProp_SpotLight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMulticastDelegateParamListener_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMulticastDelegateParamListener_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Basic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMulticastDelegateParamListener_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMulticastDelegateParamListener_Statics::ClassParams = {
	&AMulticastDelegateParamListener::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMulticastDelegateParamListener_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMulticastDelegateParamListener_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMulticastDelegateParamListener_Statics::Class_MetaDataParams), Z_Construct_UClass_AMulticastDelegateParamListener_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMulticastDelegateParamListener()
{
	if (!Z_Registration_Info_UClass_AMulticastDelegateParamListener.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMulticastDelegateParamListener.OuterSingleton, Z_Construct_UClass_AMulticastDelegateParamListener_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMulticastDelegateParamListener.OuterSingleton;
}
template<> BASIC_API UClass* StaticClass<AMulticastDelegateParamListener>()
{
	return AMulticastDelegateParamListener::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMulticastDelegateParamListener);
AMulticastDelegateParamListener::~AMulticastDelegateParamListener() {}
// End Class AMulticastDelegateParamListener

// Begin Registration
struct Z_CompiledInDeferFile_FID_My_UE5_Programming_MyBasic_Source_Basic_EventAndDelegate_MulticastDelegateParamListener_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMulticastDelegateParamListener, AMulticastDelegateParamListener::StaticClass, TEXT("AMulticastDelegateParamListener"), &Z_Registration_Info_UClass_AMulticastDelegateParamListener, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMulticastDelegateParamListener), 1649248303U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_My_UE5_Programming_MyBasic_Source_Basic_EventAndDelegate_MulticastDelegateParamListener_h_1132742577(TEXT("/Script/Basic"),
	Z_CompiledInDeferFile_FID_My_UE5_Programming_MyBasic_Source_Basic_EventAndDelegate_MulticastDelegateParamListener_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_My_UE5_Programming_MyBasic_Source_Basic_EventAndDelegate_MulticastDelegateParamListener_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
