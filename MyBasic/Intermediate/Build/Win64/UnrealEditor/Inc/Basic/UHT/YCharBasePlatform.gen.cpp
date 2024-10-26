// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Basic/Character/YCharBasePlatform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYCharBasePlatform() {}

// Begin Cross Module References
BASIC_API UClass* Z_Construct_UClass_AYCharBase();
BASIC_API UClass* Z_Construct_UClass_AYCharBasePlatform();
BASIC_API UClass* Z_Construct_UClass_AYCharBasePlatform_NoRegister();
UPackage* Z_Construct_UPackage__Script_Basic();
// End Cross Module References

// Begin Class AYCharBasePlatform Function SetGameEvent
struct Z_Construct_UFunction_AYCharBasePlatform_SetGameEvent_Statics
{
	struct YCharBasePlatform_eventSetGameEvent_Parms
	{
		int32 Type;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/YCharBasePlatform.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Type;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AYCharBasePlatform_SetGameEvent_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YCharBasePlatform_eventSetGameEvent_Parms, Type), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AYCharBasePlatform_SetGameEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AYCharBasePlatform_SetGameEvent_Statics::NewProp_Type,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AYCharBasePlatform_SetGameEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AYCharBasePlatform_SetGameEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AYCharBasePlatform, nullptr, "SetGameEvent", nullptr, nullptr, Z_Construct_UFunction_AYCharBasePlatform_SetGameEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AYCharBasePlatform_SetGameEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AYCharBasePlatform_SetGameEvent_Statics::YCharBasePlatform_eventSetGameEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AYCharBasePlatform_SetGameEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AYCharBasePlatform_SetGameEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AYCharBasePlatform_SetGameEvent_Statics::YCharBasePlatform_eventSetGameEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AYCharBasePlatform_SetGameEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AYCharBasePlatform_SetGameEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AYCharBasePlatform::execSetGameEvent)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Type);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGameEvent(Z_Param_Type);
	P_NATIVE_END;
}
// End Class AYCharBasePlatform Function SetGameEvent

// Begin Class AYCharBasePlatform
void AYCharBasePlatform::StaticRegisterNativesAYCharBasePlatform()
{
	UClass* Class = AYCharBasePlatform::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetGameEvent", &AYCharBasePlatform::execSetGameEvent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AYCharBasePlatform);
UClass* Z_Construct_UClass_AYCharBasePlatform_NoRegister()
{
	return AYCharBasePlatform::StaticClass();
}
struct Z_Construct_UClass_AYCharBasePlatform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/YCharBasePlatform.h" },
		{ "ModuleRelativePath", "Character/YCharBasePlatform.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AYCharBasePlatform_SetGameEvent, "SetGameEvent" }, // 2229140177
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AYCharBasePlatform>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AYCharBasePlatform_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AYCharBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Basic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AYCharBasePlatform_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AYCharBasePlatform_Statics::ClassParams = {
	&AYCharBasePlatform::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AYCharBasePlatform_Statics::Class_MetaDataParams), Z_Construct_UClass_AYCharBasePlatform_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AYCharBasePlatform()
{
	if (!Z_Registration_Info_UClass_AYCharBasePlatform.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AYCharBasePlatform.OuterSingleton, Z_Construct_UClass_AYCharBasePlatform_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AYCharBasePlatform.OuterSingleton;
}
template<> BASIC_API UClass* StaticClass<AYCharBasePlatform>()
{
	return AYCharBasePlatform::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AYCharBasePlatform);
AYCharBasePlatform::~AYCharBasePlatform() {}
// End Class AYCharBasePlatform

// Begin Registration
struct Z_CompiledInDeferFile_FID_My_UE5_Programming_MyBasic_Source_Basic_Character_YCharBasePlatform_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AYCharBasePlatform, AYCharBasePlatform::StaticClass, TEXT("AYCharBasePlatform"), &Z_Registration_Info_UClass_AYCharBasePlatform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AYCharBasePlatform), 1743299047U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_My_UE5_Programming_MyBasic_Source_Basic_Character_YCharBasePlatform_h_642138173(TEXT("/Script/Basic"),
	Z_CompiledInDeferFile_FID_My_UE5_Programming_MyBasic_Source_Basic_Character_YCharBasePlatform_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_My_UE5_Programming_MyBasic_Source_Basic_Character_YCharBasePlatform_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
