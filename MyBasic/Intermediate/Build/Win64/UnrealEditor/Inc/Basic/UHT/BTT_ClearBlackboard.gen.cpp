// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Basic/Shooting/BTT_ClearBlackboard.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTT_ClearBlackboard() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
BASIC_API UClass* Z_Construct_UClass_UBTT_ClearBlackboard();
BASIC_API UClass* Z_Construct_UClass_UBTT_ClearBlackboard_NoRegister();
UPackage* Z_Construct_UPackage__Script_Basic();
// End Cross Module References

// Begin Class UBTT_ClearBlackboard
void UBTT_ClearBlackboard::StaticRegisterNativesUBTT_ClearBlackboard()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTT_ClearBlackboard);
UClass* Z_Construct_UClass_UBTT_ClearBlackboard_NoRegister()
{
	return UBTT_ClearBlackboard::StaticClass();
}
struct Z_Construct_UClass_UBTT_ClearBlackboard_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Shooting/BTT_ClearBlackboard.h" },
		{ "ModuleRelativePath", "Shooting/BTT_ClearBlackboard.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTT_ClearBlackboard>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBTT_ClearBlackboard_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Basic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_ClearBlackboard_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTT_ClearBlackboard_Statics::ClassParams = {
	&UBTT_ClearBlackboard::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_ClearBlackboard_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTT_ClearBlackboard_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTT_ClearBlackboard()
{
	if (!Z_Registration_Info_UClass_UBTT_ClearBlackboard.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTT_ClearBlackboard.OuterSingleton, Z_Construct_UClass_UBTT_ClearBlackboard_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTT_ClearBlackboard.OuterSingleton;
}
template<> BASIC_API UClass* StaticClass<UBTT_ClearBlackboard>()
{
	return UBTT_ClearBlackboard::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTT_ClearBlackboard);
UBTT_ClearBlackboard::~UBTT_ClearBlackboard() {}
// End Class UBTT_ClearBlackboard

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyBasic_Source_Basic_Shooting_BTT_ClearBlackboard_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTT_ClearBlackboard, UBTT_ClearBlackboard::StaticClass, TEXT("UBTT_ClearBlackboard"), &Z_Registration_Info_UClass_UBTT_ClearBlackboard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTT_ClearBlackboard), 3098616315U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyBasic_Source_Basic_Shooting_BTT_ClearBlackboard_h_2665555203(TEXT("/Script/Basic"),
	Z_CompiledInDeferFile_FID_MyBasic_Source_Basic_Shooting_BTT_ClearBlackboard_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyBasic_Source_Basic_Shooting_BTT_ClearBlackboard_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
