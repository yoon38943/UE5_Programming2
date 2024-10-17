// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Basic/EventAndDelegate/DelegateParamListener.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDelegateParamListener() {}

// Begin Cross Module References
BASIC_API UClass* Z_Construct_UClass_ADelegateParamListener();
BASIC_API UClass* Z_Construct_UClass_ADelegateParamListener_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USpotLightComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Basic();
// End Cross Module References

// Begin Class ADelegateParamListener Function SetLightColor
struct Z_Construct_UFunction_ADelegateParamListener_SetLightColor_Statics
{
	struct DelegateParamListener_eventSetLightColor_Parms
	{
		FLinearColor LightColor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EventAndDelegate/DelegateParamListener.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LightColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADelegateParamListener_SetLightColor_Statics::NewProp_LightColor = { "LightColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DelegateParamListener_eventSetLightColor_Parms, LightColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADelegateParamListener_SetLightColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADelegateParamListener_SetLightColor_Statics::NewProp_LightColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADelegateParamListener_SetLightColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADelegateParamListener_SetLightColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADelegateParamListener, nullptr, "SetLightColor", nullptr, nullptr, Z_Construct_UFunction_ADelegateParamListener_SetLightColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADelegateParamListener_SetLightColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADelegateParamListener_SetLightColor_Statics::DelegateParamListener_eventSetLightColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADelegateParamListener_SetLightColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADelegateParamListener_SetLightColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADelegateParamListener_SetLightColor_Statics::DelegateParamListener_eventSetLightColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADelegateParamListener_SetLightColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADelegateParamListener_SetLightColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADelegateParamListener::execSetLightColor)
{
	P_GET_STRUCT(FLinearColor,Z_Param_LightColor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLightColor(Z_Param_LightColor);
	P_NATIVE_END;
}
// End Class ADelegateParamListener Function SetLightColor

// Begin Class ADelegateParamListener Function SetLightColorAndRotate
struct Z_Construct_UFunction_ADelegateParamListener_SetLightColorAndRotate_Statics
{
	struct DelegateParamListener_eventSetLightColorAndRotate_Parms
	{
		FLinearColor LightColor;
		int32 Speed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EventAndDelegate/DelegateParamListener.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LightColor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADelegateParamListener_SetLightColorAndRotate_Statics::NewProp_LightColor = { "LightColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DelegateParamListener_eventSetLightColorAndRotate_Parms, LightColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADelegateParamListener_SetLightColorAndRotate_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DelegateParamListener_eventSetLightColorAndRotate_Parms, Speed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADelegateParamListener_SetLightColorAndRotate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADelegateParamListener_SetLightColorAndRotate_Statics::NewProp_LightColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADelegateParamListener_SetLightColorAndRotate_Statics::NewProp_Speed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADelegateParamListener_SetLightColorAndRotate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADelegateParamListener_SetLightColorAndRotate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADelegateParamListener, nullptr, "SetLightColorAndRotate", nullptr, nullptr, Z_Construct_UFunction_ADelegateParamListener_SetLightColorAndRotate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADelegateParamListener_SetLightColorAndRotate_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADelegateParamListener_SetLightColorAndRotate_Statics::DelegateParamListener_eventSetLightColorAndRotate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADelegateParamListener_SetLightColorAndRotate_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADelegateParamListener_SetLightColorAndRotate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADelegateParamListener_SetLightColorAndRotate_Statics::DelegateParamListener_eventSetLightColorAndRotate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADelegateParamListener_SetLightColorAndRotate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADelegateParamListener_SetLightColorAndRotate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADelegateParamListener::execSetLightColorAndRotate)
{
	P_GET_STRUCT(FLinearColor,Z_Param_LightColor);
	P_GET_PROPERTY(FIntProperty,Z_Param_Speed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLightColorAndRotate(Z_Param_LightColor,Z_Param_Speed);
	P_NATIVE_END;
}
// End Class ADelegateParamListener Function SetLightColorAndRotate

// Begin Class ADelegateParamListener
void ADelegateParamListener::StaticRegisterNativesADelegateParamListener()
{
	UClass* Class = ADelegateParamListener::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetLightColor", &ADelegateParamListener::execSetLightColor },
		{ "SetLightColorAndRotate", &ADelegateParamListener::execSetLightColorAndRotate },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADelegateParamListener);
UClass* Z_Construct_UClass_ADelegateParamListener_NoRegister()
{
	return ADelegateParamListener::StaticClass();
}
struct Z_Construct_UClass_ADelegateParamListener_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EventAndDelegate/DelegateParamListener.h" },
		{ "ModuleRelativePath", "EventAndDelegate/DelegateParamListener.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpotLight_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EventAndDelegate/DelegateParamListener.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpotLight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADelegateParamListener_SetLightColor, "SetLightColor" }, // 3553143174
		{ &Z_Construct_UFunction_ADelegateParamListener_SetLightColorAndRotate, "SetLightColorAndRotate" }, // 2475116670
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADelegateParamListener>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADelegateParamListener_Statics::NewProp_SpotLight = { "SpotLight", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADelegateParamListener, SpotLight), Z_Construct_UClass_USpotLightComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpotLight_MetaData), NewProp_SpotLight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADelegateParamListener_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADelegateParamListener_Statics::NewProp_SpotLight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADelegateParamListener_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADelegateParamListener_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Basic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADelegateParamListener_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADelegateParamListener_Statics::ClassParams = {
	&ADelegateParamListener::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADelegateParamListener_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADelegateParamListener_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADelegateParamListener_Statics::Class_MetaDataParams), Z_Construct_UClass_ADelegateParamListener_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADelegateParamListener()
{
	if (!Z_Registration_Info_UClass_ADelegateParamListener.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADelegateParamListener.OuterSingleton, Z_Construct_UClass_ADelegateParamListener_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADelegateParamListener.OuterSingleton;
}
template<> BASIC_API UClass* StaticClass<ADelegateParamListener>()
{
	return ADelegateParamListener::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADelegateParamListener);
ADelegateParamListener::~ADelegateParamListener() {}
// End Class ADelegateParamListener

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyBasic_Source_Basic_EventAndDelegate_DelegateParamListener_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADelegateParamListener, ADelegateParamListener::StaticClass, TEXT("ADelegateParamListener"), &Z_Registration_Info_UClass_ADelegateParamListener, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADelegateParamListener), 301854081U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyBasic_Source_Basic_EventAndDelegate_DelegateParamListener_h_3987310075(TEXT("/Script/Basic"),
	Z_CompiledInDeferFile_FID_MyBasic_Source_Basic_EventAndDelegate_DelegateParamListener_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyBasic_Source_Basic_EventAndDelegate_DelegateParamListener_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
