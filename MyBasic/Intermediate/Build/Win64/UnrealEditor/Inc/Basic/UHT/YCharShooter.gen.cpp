// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Basic/Character/YCharShooter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYCharShooter() {}

// Begin Cross Module References
BASIC_API UClass* Z_Construct_UClass_AGun_NoRegister();
BASIC_API UClass* Z_Construct_UClass_AYCharBase();
BASIC_API UClass* Z_Construct_UClass_AYCharShooter();
BASIC_API UClass* Z_Construct_UClass_AYCharShooter_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
UPackage* Z_Construct_UPackage__Script_Basic();
// End Cross Module References

// Begin Class AYCharShooter
void AYCharShooter::StaticRegisterNativesAYCharShooter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AYCharShooter);
UClass* Z_Construct_UClass_AYCharShooter_NoRegister()
{
	return AYCharShooter::StaticClass();
}
struct Z_Construct_UClass_AYCharShooter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/YCharShooter.h" },
		{ "ModuleRelativePath", "Character/YCharShooter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GunClass_MetaData[] = {
		{ "Category", "YCharShooter" },
		{ "ModuleRelativePath", "Character/YCharShooter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Gun_MetaData[] = {
		{ "ModuleRelativePath", "Character/YCharShooter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Shoot_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Character/YCharShooter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_GunClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Gun;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Shoot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AYCharShooter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AYCharShooter_Statics::NewProp_GunClass = { "GunClass", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AYCharShooter, GunClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AGun_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GunClass_MetaData), NewProp_GunClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AYCharShooter_Statics::NewProp_Gun = { "Gun", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AYCharShooter, Gun), Z_Construct_UClass_AGun_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Gun_MetaData), NewProp_Gun_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AYCharShooter_Statics::NewProp_IA_Shoot = { "IA_Shoot", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AYCharShooter, IA_Shoot), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Shoot_MetaData), NewProp_IA_Shoot_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AYCharShooter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYCharShooter_Statics::NewProp_GunClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYCharShooter_Statics::NewProp_Gun,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYCharShooter_Statics::NewProp_IA_Shoot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AYCharShooter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AYCharShooter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AYCharBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Basic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AYCharShooter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AYCharShooter_Statics::ClassParams = {
	&AYCharShooter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AYCharShooter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AYCharShooter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AYCharShooter_Statics::Class_MetaDataParams), Z_Construct_UClass_AYCharShooter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AYCharShooter()
{
	if (!Z_Registration_Info_UClass_AYCharShooter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AYCharShooter.OuterSingleton, Z_Construct_UClass_AYCharShooter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AYCharShooter.OuterSingleton;
}
template<> BASIC_API UClass* StaticClass<AYCharShooter>()
{
	return AYCharShooter::StaticClass();
}
AYCharShooter::AYCharShooter() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AYCharShooter);
AYCharShooter::~AYCharShooter() {}
// End Class AYCharShooter

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyBasic_Source_Basic_Character_YCharShooter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AYCharShooter, AYCharShooter::StaticClass, TEXT("AYCharShooter"), &Z_Registration_Info_UClass_AYCharShooter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AYCharShooter), 4278700040U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyBasic_Source_Basic_Character_YCharShooter_h_961233679(TEXT("/Script/Basic"),
	Z_CompiledInDeferFile_FID_MyBasic_Source_Basic_Character_YCharShooter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyBasic_Source_Basic_Character_YCharShooter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
