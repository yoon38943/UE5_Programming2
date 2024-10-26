// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Basic/Shooting/ShooterAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterAIController() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
BASIC_API UClass* Z_Construct_UClass_AShooterAIController();
BASIC_API UClass* Z_Construct_UClass_AShooterAIController_NoRegister();
UPackage* Z_Construct_UPackage__Script_Basic();
// End Cross Module References

// Begin Class AShooterAIController
void AShooterAIController::StaticRegisterNativesAShooterAIController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShooterAIController);
UClass* Z_Construct_UClass_AShooterAIController_NoRegister()
{
	return AShooterAIController::StaticClass();
}
struct Z_Construct_UClass_AShooterAIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Shooting/ShooterAIController.h" },
		{ "ModuleRelativePath", "Shooting/ShooterAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemyBT_MetaData[] = {
		{ "Category", "ShooterAIController" },
		{ "ModuleRelativePath", "Shooting/ShooterAIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemyBT;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterAIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterAIController_Statics::NewProp_EnemyBT = { "EnemyBT", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterAIController, EnemyBT), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemyBT_MetaData), NewProp_EnemyBT_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShooterAIController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterAIController_Statics::NewProp_EnemyBT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterAIController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AShooterAIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_Basic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterAIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AShooterAIController_Statics::ClassParams = {
	&AShooterAIController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AShooterAIController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AShooterAIController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_AShooterAIController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AShooterAIController()
{
	if (!Z_Registration_Info_UClass_AShooterAIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShooterAIController.OuterSingleton, Z_Construct_UClass_AShooterAIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AShooterAIController.OuterSingleton;
}
template<> BASIC_API UClass* StaticClass<AShooterAIController>()
{
	return AShooterAIController::StaticClass();
}
AShooterAIController::AShooterAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterAIController);
AShooterAIController::~AShooterAIController() {}
// End Class AShooterAIController

// Begin Registration
struct Z_CompiledInDeferFile_FID_My_UE5_Programming_MyBasic_Source_Basic_Shooting_ShooterAIController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AShooterAIController, AShooterAIController::StaticClass, TEXT("AShooterAIController"), &Z_Registration_Info_UClass_AShooterAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShooterAIController), 544342912U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_My_UE5_Programming_MyBasic_Source_Basic_Shooting_ShooterAIController_h_2289832721(TEXT("/Script/Basic"),
	Z_CompiledInDeferFile_FID_My_UE5_Programming_MyBasic_Source_Basic_Shooting_ShooterAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_My_UE5_Programming_MyBasic_Source_Basic_Shooting_ShooterAIController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
