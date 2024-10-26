// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Basic/Action/YCharActionAnimInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYCharActionAnimInstance() {}

// Begin Cross Module References
BASIC_API UClass* Z_Construct_UClass_UYCharActionAnimInstance();
BASIC_API UClass* Z_Construct_UClass_UYCharActionAnimInstance_NoRegister();
BASIC_API UClass* Z_Construct_UClass_UYCharBase_AnimInstance();
UPackage* Z_Construct_UPackage__Script_Basic();
// End Cross Module References

// Begin Class UYCharActionAnimInstance
void UYCharActionAnimInstance::StaticRegisterNativesUYCharActionAnimInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UYCharActionAnimInstance);
UClass* Z_Construct_UClass_UYCharActionAnimInstance_NoRegister()
{
	return UYCharActionAnimInstance::StaticClass();
}
struct Z_Construct_UClass_UYCharActionAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Action/YCharActionAnimInstance.h" },
		{ "ModuleRelativePath", "Action/YCharActionAnimInstance.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYCharActionAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UYCharActionAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UYCharBase_AnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_Basic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UYCharActionAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UYCharActionAnimInstance_Statics::ClassParams = {
	&UYCharActionAnimInstance::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UYCharActionAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UYCharActionAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UYCharActionAnimInstance()
{
	if (!Z_Registration_Info_UClass_UYCharActionAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UYCharActionAnimInstance.OuterSingleton, Z_Construct_UClass_UYCharActionAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UYCharActionAnimInstance.OuterSingleton;
}
template<> BASIC_API UClass* StaticClass<UYCharActionAnimInstance>()
{
	return UYCharActionAnimInstance::StaticClass();
}
UYCharActionAnimInstance::UYCharActionAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UYCharActionAnimInstance);
UYCharActionAnimInstance::~UYCharActionAnimInstance() {}
// End Class UYCharActionAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_My_UE5_Programming_MyBasic_Source_Basic_Action_YCharActionAnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UYCharActionAnimInstance, UYCharActionAnimInstance::StaticClass, TEXT("UYCharActionAnimInstance"), &Z_Registration_Info_UClass_UYCharActionAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UYCharActionAnimInstance), 2306839720U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_My_UE5_Programming_MyBasic_Source_Basic_Action_YCharActionAnimInstance_h_2401237676(TEXT("/Script/Basic"),
	Z_CompiledInDeferFile_FID_My_UE5_Programming_MyBasic_Source_Basic_Action_YCharActionAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_My_UE5_Programming_MyBasic_Source_Basic_Action_YCharActionAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
