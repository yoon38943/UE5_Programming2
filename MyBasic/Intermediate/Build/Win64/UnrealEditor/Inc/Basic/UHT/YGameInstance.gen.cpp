// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Basic/YGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYGameInstance() {}

// Begin Cross Module References
BASIC_API UClass* Z_Construct_UClass_UYGameInstance();
BASIC_API UClass* Z_Construct_UClass_UYGameInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
UPackage* Z_Construct_UPackage__Script_Basic();
// End Cross Module References

// Begin Class UYGameInstance
void UYGameInstance::StaticRegisterNativesUYGameInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UYGameInstance);
UClass* Z_Construct_UClass_UYGameInstance_NoRegister()
{
	return UYGameInstance::StaticClass();
}
struct Z_Construct_UClass_UYGameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "YGameInstance.h" },
		{ "ModuleRelativePath", "YGameInstance.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UYGameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_Basic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UYGameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UYGameInstance_Statics::ClassParams = {
	&UYGameInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UYGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UYGameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UYGameInstance()
{
	if (!Z_Registration_Info_UClass_UYGameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UYGameInstance.OuterSingleton, Z_Construct_UClass_UYGameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UYGameInstance.OuterSingleton;
}
template<> BASIC_API UClass* StaticClass<UYGameInstance>()
{
	return UYGameInstance::StaticClass();
}
UYGameInstance::UYGameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UYGameInstance);
UYGameInstance::~UYGameInstance() {}
// End Class UYGameInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyBasic_Source_Basic_YGameInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UYGameInstance, UYGameInstance::StaticClass, TEXT("UYGameInstance"), &Z_Registration_Info_UClass_UYGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UYGameInstance), 927359766U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyBasic_Source_Basic_YGameInstance_h_3285644841(TEXT("/Script/Basic"),
	Z_CompiledInDeferFile_FID_MyBasic_Source_Basic_YGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyBasic_Source_Basic_YGameInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
