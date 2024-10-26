// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Basic/Action/YCharAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYCharAction() {}

// Begin Cross Module References
BASIC_API UClass* Z_Construct_UClass_AYCharAction();
BASIC_API UClass* Z_Construct_UClass_AYCharAction_NoRegister();
BASIC_API UClass* Z_Construct_UClass_AYCharBase();
UPackage* Z_Construct_UPackage__Script_Basic();
// End Cross Module References

// Begin Class AYCharAction
void AYCharAction::StaticRegisterNativesAYCharAction()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AYCharAction);
UClass* Z_Construct_UClass_AYCharAction_NoRegister()
{
	return AYCharAction::StaticClass();
}
struct Z_Construct_UClass_AYCharAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Action/YCharAction.h" },
		{ "ModuleRelativePath", "Action/YCharAction.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AYCharAction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AYCharAction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AYCharBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Basic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AYCharAction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AYCharAction_Statics::ClassParams = {
	&AYCharAction::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AYCharAction_Statics::Class_MetaDataParams), Z_Construct_UClass_AYCharAction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AYCharAction()
{
	if (!Z_Registration_Info_UClass_AYCharAction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AYCharAction.OuterSingleton, Z_Construct_UClass_AYCharAction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AYCharAction.OuterSingleton;
}
template<> BASIC_API UClass* StaticClass<AYCharAction>()
{
	return AYCharAction::StaticClass();
}
AYCharAction::AYCharAction() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AYCharAction);
AYCharAction::~AYCharAction() {}
// End Class AYCharAction

// Begin Registration
struct Z_CompiledInDeferFile_FID_My_UE5_Programming_MyBasic_Source_Basic_Action_YCharAction_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AYCharAction, AYCharAction::StaticClass, TEXT("AYCharAction"), &Z_Registration_Info_UClass_AYCharAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AYCharAction), 2144950965U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_My_UE5_Programming_MyBasic_Source_Basic_Action_YCharAction_h_2717701307(TEXT("/Script/Basic"),
	Z_CompiledInDeferFile_FID_My_UE5_Programming_MyBasic_Source_Basic_Action_YCharAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_My_UE5_Programming_MyBasic_Source_Basic_Action_YCharAction_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
