// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Basic/Fountain.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFountain() {}

// Begin Cross Module References
BASIC_API UClass* Z_Construct_UClass_AFountain();
BASIC_API UClass* Z_Construct_UClass_AFountain_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPointLightComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_URotatingMovementComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Basic();
// End Cross Module References

// Begin Class AFountain
void AFountain::StaticRegisterNativesAFountain()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFountain);
UClass* Z_Construct_UClass_AFountain_NoRegister()
{
	return AFountain::StaticClass();
}
struct Z_Construct_UClass_AFountain_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Fountain.h" },
		{ "ModuleRelativePath", "Fountain.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Body_MetaData[] = {
		{ "Category", "Fountain" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Fountain.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Water_MetaData[] = {
		{ "Category", "Fountain" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// calss\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd5\xbf\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xbf\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe6\xbc\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xcd\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Fountain.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "calss\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd5\xbf\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xbf\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe6\xbc\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xcd\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Light_MetaData[] = {
		{ "Category", "Fountain" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Fountain.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Splash_MetaData[] = {
		{ "Category", "Fountain" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Fountain.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Movement_MetaData[] = {
		{ "Category", "Fountain" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Fountain.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Body;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Water;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Light;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Splash;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Movement;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFountain>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFountain_Statics::NewProp_Body = { "Body", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFountain, Body), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Body_MetaData), NewProp_Body_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFountain_Statics::NewProp_Water = { "Water", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFountain, Water), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Water_MetaData), NewProp_Water_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFountain_Statics::NewProp_Light = { "Light", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFountain, Light), Z_Construct_UClass_UPointLightComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Light_MetaData), NewProp_Light_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFountain_Statics::NewProp_Splash = { "Splash", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFountain, Splash), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Splash_MetaData), NewProp_Splash_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFountain_Statics::NewProp_Movement = { "Movement", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFountain, Movement), Z_Construct_UClass_URotatingMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Movement_MetaData), NewProp_Movement_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFountain_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFountain_Statics::NewProp_Body,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFountain_Statics::NewProp_Water,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFountain_Statics::NewProp_Light,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFountain_Statics::NewProp_Splash,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFountain_Statics::NewProp_Movement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFountain_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFountain_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Basic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFountain_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFountain_Statics::ClassParams = {
	&AFountain::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AFountain_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AFountain_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFountain_Statics::Class_MetaDataParams), Z_Construct_UClass_AFountain_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFountain()
{
	if (!Z_Registration_Info_UClass_AFountain.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFountain.OuterSingleton, Z_Construct_UClass_AFountain_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFountain.OuterSingleton;
}
template<> BASIC_API UClass* StaticClass<AFountain>()
{
	return AFountain::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFountain);
AFountain::~AFountain() {}
// End Class AFountain

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyBasic_Source_Basic_Fountain_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFountain, AFountain::StaticClass, TEXT("AFountain"), &Z_Registration_Info_UClass_AFountain, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFountain), 3301356954U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyBasic_Source_Basic_Fountain_h_1114102077(TEXT("/Script/Basic"),
	Z_CompiledInDeferFile_FID_MyBasic_Source_Basic_Fountain_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyBasic_Source_Basic_Fountain_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
