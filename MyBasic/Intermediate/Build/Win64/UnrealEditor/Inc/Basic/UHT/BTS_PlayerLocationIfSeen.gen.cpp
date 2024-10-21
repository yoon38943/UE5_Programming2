// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Basic/Shooting/BTS_PlayerLocationIfSeen.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTS_PlayerLocationIfSeen() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTService_BlackboardBase();
BASIC_API UClass* Z_Construct_UClass_UBTS_PlayerLocationIfSeen();
BASIC_API UClass* Z_Construct_UClass_UBTS_PlayerLocationIfSeen_NoRegister();
UPackage* Z_Construct_UPackage__Script_Basic();
// End Cross Module References

// Begin Class UBTS_PlayerLocationIfSeen
void UBTS_PlayerLocationIfSeen::StaticRegisterNativesUBTS_PlayerLocationIfSeen()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTS_PlayerLocationIfSeen);
UClass* Z_Construct_UClass_UBTS_PlayerLocationIfSeen_NoRegister()
{
	return UBTS_PlayerLocationIfSeen::StaticClass();
}
struct Z_Construct_UClass_UBTS_PlayerLocationIfSeen_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Shooting/BTS_PlayerLocationIfSeen.h" },
		{ "ModuleRelativePath", "Shooting/BTS_PlayerLocationIfSeen.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTS_PlayerLocationIfSeen>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBTS_PlayerLocationIfSeen_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTService_BlackboardBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Basic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTS_PlayerLocationIfSeen_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTS_PlayerLocationIfSeen_Statics::ClassParams = {
	&UBTS_PlayerLocationIfSeen::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTS_PlayerLocationIfSeen_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTS_PlayerLocationIfSeen_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTS_PlayerLocationIfSeen()
{
	if (!Z_Registration_Info_UClass_UBTS_PlayerLocationIfSeen.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTS_PlayerLocationIfSeen.OuterSingleton, Z_Construct_UClass_UBTS_PlayerLocationIfSeen_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTS_PlayerLocationIfSeen.OuterSingleton;
}
template<> BASIC_API UClass* StaticClass<UBTS_PlayerLocationIfSeen>()
{
	return UBTS_PlayerLocationIfSeen::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTS_PlayerLocationIfSeen);
UBTS_PlayerLocationIfSeen::~UBTS_PlayerLocationIfSeen() {}
// End Class UBTS_PlayerLocationIfSeen

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyBasic_Source_Basic_Shooting_BTS_PlayerLocationIfSeen_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTS_PlayerLocationIfSeen, UBTS_PlayerLocationIfSeen::StaticClass, TEXT("UBTS_PlayerLocationIfSeen"), &Z_Registration_Info_UClass_UBTS_PlayerLocationIfSeen, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTS_PlayerLocationIfSeen), 3986259300U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyBasic_Source_Basic_Shooting_BTS_PlayerLocationIfSeen_h_2061939236(TEXT("/Script/Basic"),
	Z_CompiledInDeferFile_FID_MyBasic_Source_Basic_Shooting_BTS_PlayerLocationIfSeen_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyBasic_Source_Basic_Shooting_BTS_PlayerLocationIfSeen_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
