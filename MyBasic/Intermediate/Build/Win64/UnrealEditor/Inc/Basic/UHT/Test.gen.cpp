// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Basic/Test.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTest() {}

// Begin Cross Module References
BASIC_API UClass* Z_Construct_UClass_ATest();
BASIC_API UClass* Z_Construct_UClass_ATest_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_Basic();
// End Cross Module References

// Begin Class ATest
void ATest::StaticRegisterNativesATest()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATest);
UClass* Z_Construct_UClass_ATest_NoRegister()
{
	return ATest::StaticClass();
}
struct Z_Construct_UClass_ATest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Test.h" },
		{ "ModuleRelativePath", "Test.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TempVal1_MetaData[] = {
		{ "Category", "Test" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd 6\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Test.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd 6\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TempVal3_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Test.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TempVal2_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Test.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TempVal4_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Test.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TempVal5_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Test.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TempVal6_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Test.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RunningTime_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Test.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Amplitude_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Test.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeConstant_MetaData[] = {
		{ "Category", "Test" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Test.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TempVal1;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TempVal3;
	static void NewProp_TempVal2_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_TempVal2;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TempVal4;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TempVal5;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TempVal6;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RunningTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amplitude;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeConstant;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATest>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATest_Statics::NewProp_TempVal1 = { "TempVal1", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATest, TempVal1), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TempVal1_MetaData), NewProp_TempVal1_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATest_Statics::NewProp_TempVal3 = { "TempVal3", nullptr, (EPropertyFlags)0x0010000000000801, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATest, TempVal3), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TempVal3_MetaData), NewProp_TempVal3_MetaData) };
void Z_Construct_UClass_ATest_Statics::NewProp_TempVal2_SetBit(void* Obj)
{
	((ATest*)Obj)->TempVal2 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATest_Statics::NewProp_TempVal2 = { "TempVal2", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATest), &Z_Construct_UClass_ATest_Statics::NewProp_TempVal2_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TempVal2_MetaData), NewProp_TempVal2_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATest_Statics::NewProp_TempVal4 = { "TempVal4", nullptr, (EPropertyFlags)0x0010000000030001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATest, TempVal4), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TempVal4_MetaData), NewProp_TempVal4_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATest_Statics::NewProp_TempVal5 = { "TempVal5", nullptr, (EPropertyFlags)0x0010000000020801, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATest, TempVal5), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TempVal5_MetaData), NewProp_TempVal5_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATest_Statics::NewProp_TempVal6 = { "TempVal6", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATest, TempVal6), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TempVal6_MetaData), NewProp_TempVal6_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATest_Statics::NewProp_RunningTime = { "RunningTime", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATest, RunningTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RunningTime_MetaData), NewProp_RunningTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATest_Statics::NewProp_Amplitude = { "Amplitude", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATest, Amplitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Amplitude_MetaData), NewProp_Amplitude_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATest_Statics::NewProp_TimeConstant = { "TimeConstant", nullptr, (EPropertyFlags)0x0040000000000801, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATest, TimeConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeConstant_MetaData), NewProp_TimeConstant_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATest_Statics::NewProp_TempVal1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATest_Statics::NewProp_TempVal3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATest_Statics::NewProp_TempVal2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATest_Statics::NewProp_TempVal4,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATest_Statics::NewProp_TempVal5,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATest_Statics::NewProp_TempVal6,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATest_Statics::NewProp_RunningTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATest_Statics::NewProp_Amplitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATest_Statics::NewProp_TimeConstant,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATest_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATest_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Basic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATest_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATest_Statics::ClassParams = {
	&ATest::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ATest_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ATest_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATest_Statics::Class_MetaDataParams), Z_Construct_UClass_ATest_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATest()
{
	if (!Z_Registration_Info_UClass_ATest.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATest.OuterSingleton, Z_Construct_UClass_ATest_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATest.OuterSingleton;
}
template<> BASIC_API UClass* StaticClass<ATest>()
{
	return ATest::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATest);
ATest::~ATest() {}
// End Class ATest

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyBasic_Source_Basic_Test_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATest, ATest::StaticClass, TEXT("ATest"), &Z_Registration_Info_UClass_ATest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATest), 1916995011U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyBasic_Source_Basic_Test_h_524593974(TEXT("/Script/Basic"),
	Z_CompiledInDeferFile_FID_MyBasic_Source_Basic_Test_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyBasic_Source_Basic_Test_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
