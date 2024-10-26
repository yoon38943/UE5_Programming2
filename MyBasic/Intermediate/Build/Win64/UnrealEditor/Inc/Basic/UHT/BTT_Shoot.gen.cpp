// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Basic/Shooting/BTT_Shoot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTT_Shoot() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
BASIC_API UClass* Z_Construct_UClass_UBTT_Shoot();
BASIC_API UClass* Z_Construct_UClass_UBTT_Shoot_NoRegister();
UPackage* Z_Construct_UPackage__Script_Basic();
// End Cross Module References

// Begin Class UBTT_Shoot
void UBTT_Shoot::StaticRegisterNativesUBTT_Shoot()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTT_Shoot);
UClass* Z_Construct_UClass_UBTT_Shoot_NoRegister()
{
	return UBTT_Shoot::StaticClass();
}
struct Z_Construct_UClass_UBTT_Shoot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Shooting/BTT_Shoot.h" },
		{ "ModuleRelativePath", "Shooting/BTT_Shoot.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTT_Shoot>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBTT_Shoot_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_Basic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_Shoot_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTT_Shoot_Statics::ClassParams = {
	&UBTT_Shoot::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_Shoot_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTT_Shoot_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTT_Shoot()
{
	if (!Z_Registration_Info_UClass_UBTT_Shoot.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTT_Shoot.OuterSingleton, Z_Construct_UClass_UBTT_Shoot_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTT_Shoot.OuterSingleton;
}
template<> BASIC_API UClass* StaticClass<UBTT_Shoot>()
{
	return UBTT_Shoot::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTT_Shoot);
UBTT_Shoot::~UBTT_Shoot() {}
// End Class UBTT_Shoot

// Begin Registration
struct Z_CompiledInDeferFile_FID_My_UE5_Programming_MyBasic_Source_Basic_Shooting_BTT_Shoot_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTT_Shoot, UBTT_Shoot::StaticClass, TEXT("UBTT_Shoot"), &Z_Registration_Info_UClass_UBTT_Shoot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTT_Shoot), 2543867500U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_My_UE5_Programming_MyBasic_Source_Basic_Shooting_BTT_Shoot_h_3421016100(TEXT("/Script/Basic"),
	Z_CompiledInDeferFile_FID_My_UE5_Programming_MyBasic_Source_Basic_Shooting_BTT_Shoot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_My_UE5_Programming_MyBasic_Source_Basic_Shooting_BTT_Shoot_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
