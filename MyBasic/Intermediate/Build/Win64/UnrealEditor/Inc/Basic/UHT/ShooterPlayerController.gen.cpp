// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Basic/Shooting/ShooterPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterPlayerController() {}

// Begin Cross Module References
BASIC_API UClass* Z_Construct_UClass_AShooterPlayerController();
BASIC_API UClass* Z_Construct_UClass_AShooterPlayerController_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_Basic();
// End Cross Module References

// Begin Class AShooterPlayerController
void AShooterPlayerController::StaticRegisterNativesAShooterPlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShooterPlayerController);
UClass* Z_Construct_UClass_AShooterPlayerController_NoRegister()
{
	return AShooterPlayerController::StaticClass();
}
struct Z_Construct_UClass_AShooterPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Shooting/ShooterPlayerController.h" },
		{ "ModuleRelativePath", "Shooting/ShooterPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HUDClass_MetaData[] = {
		{ "Category", "ShooterPlayerController" },
		{ "ModuleRelativePath", "Shooting/ShooterPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WinScreenClass_MetaData[] = {
		{ "Category", "ShooterPlayerController" },
		{ "ModuleRelativePath", "Shooting/ShooterPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoseScreenClass_MetaData[] = {
		{ "Category", "ShooterPlayerController" },
		{ "ModuleRelativePath", "Shooting/ShooterPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RestartDelay_MetaData[] = {
		{ "Category", "ShooterPlayerController" },
		{ "ModuleRelativePath", "Shooting/ShooterPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_HUDClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WinScreenClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_LoseScreenClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RestartDelay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_HUDClass = { "HUDClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterPlayerController, HUDClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HUDClass_MetaData), NewProp_HUDClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_WinScreenClass = { "WinScreenClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterPlayerController, WinScreenClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WinScreenClass_MetaData), NewProp_WinScreenClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_LoseScreenClass = { "LoseScreenClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterPlayerController, LoseScreenClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoseScreenClass_MetaData), NewProp_LoseScreenClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_RestartDelay = { "RestartDelay", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterPlayerController, RestartDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RestartDelay_MetaData), NewProp_RestartDelay_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShooterPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_HUDClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_WinScreenClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_LoseScreenClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_RestartDelay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AShooterPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_Basic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AShooterPlayerController_Statics::ClassParams = {
	&AShooterPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AShooterPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AShooterPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AShooterPlayerController()
{
	if (!Z_Registration_Info_UClass_AShooterPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShooterPlayerController.OuterSingleton, Z_Construct_UClass_AShooterPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AShooterPlayerController.OuterSingleton;
}
template<> BASIC_API UClass* StaticClass<AShooterPlayerController>()
{
	return AShooterPlayerController::StaticClass();
}
AShooterPlayerController::AShooterPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterPlayerController);
AShooterPlayerController::~AShooterPlayerController() {}
// End Class AShooterPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_My_UE5_Programming_MyBasic_Source_Basic_Shooting_ShooterPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AShooterPlayerController, AShooterPlayerController::StaticClass, TEXT("AShooterPlayerController"), &Z_Registration_Info_UClass_AShooterPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShooterPlayerController), 3347251516U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_My_UE5_Programming_MyBasic_Source_Basic_Shooting_ShooterPlayerController_h_1796193263(TEXT("/Script/Basic"),
	Z_CompiledInDeferFile_FID_My_UE5_Programming_MyBasic_Source_Basic_Shooting_ShooterPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_My_UE5_Programming_MyBasic_Source_Basic_Shooting_ShooterPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
