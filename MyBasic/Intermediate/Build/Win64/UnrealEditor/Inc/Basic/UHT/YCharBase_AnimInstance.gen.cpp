// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Basic/Character/YCharBase_AnimInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYCharBase_AnimInstance() {}

// Begin Cross Module References
BASIC_API UClass* Z_Construct_UClass_AYCharBase_NoRegister();
BASIC_API UClass* Z_Construct_UClass_UYCharBase_AnimInstance();
BASIC_API UClass* Z_Construct_UClass_UYCharBase_AnimInstance_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Basic();
// End Cross Module References

// Begin Class UYCharBase_AnimInstance
void UYCharBase_AnimInstance::StaticRegisterNativesUYCharBase_AnimInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UYCharBase_AnimInstance);
UClass* Z_Construct_UClass_UYCharBase_AnimInstance_NoRegister()
{
	return UYCharBase_AnimInstance::StaticClass();
}
struct Z_Construct_UClass_UYCharBase_AnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Character/YCharBase_AnimInstance.h" },
		{ "ModuleRelativePath", "Character/YCharBase_AnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YCharBase_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Character/YCharBase_AnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YCharMovementComponent_MetaData[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe6\xbc\xb1\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/YCharBase_AnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe6\xbc\xb1\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YCharVelocity_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Character/YCharBase_AnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YCharSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Character/YCharBase_AnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YShouldMove_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Character/YCharBase_AnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YCharIsFalling_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Character/YCharBase_AnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_YCharBase;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_YCharMovementComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_YCharVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_YCharSpeed;
	static void NewProp_YShouldMove_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_YShouldMove;
	static void NewProp_YCharIsFalling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_YCharIsFalling;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYCharBase_AnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UYCharBase_AnimInstance_Statics::NewProp_YCharBase = { "YCharBase", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UYCharBase_AnimInstance, YCharBase), Z_Construct_UClass_AYCharBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YCharBase_MetaData), NewProp_YCharBase_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UYCharBase_AnimInstance_Statics::NewProp_YCharMovementComponent = { "YCharMovementComponent", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UYCharBase_AnimInstance, YCharMovementComponent), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YCharMovementComponent_MetaData), NewProp_YCharMovementComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UYCharBase_AnimInstance_Statics::NewProp_YCharVelocity = { "YCharVelocity", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UYCharBase_AnimInstance, YCharVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YCharVelocity_MetaData), NewProp_YCharVelocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UYCharBase_AnimInstance_Statics::NewProp_YCharSpeed = { "YCharSpeed", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UYCharBase_AnimInstance, YCharSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YCharSpeed_MetaData), NewProp_YCharSpeed_MetaData) };
void Z_Construct_UClass_UYCharBase_AnimInstance_Statics::NewProp_YShouldMove_SetBit(void* Obj)
{
	((UYCharBase_AnimInstance*)Obj)->YShouldMove = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UYCharBase_AnimInstance_Statics::NewProp_YShouldMove = { "YShouldMove", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UYCharBase_AnimInstance), &Z_Construct_UClass_UYCharBase_AnimInstance_Statics::NewProp_YShouldMove_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YShouldMove_MetaData), NewProp_YShouldMove_MetaData) };
void Z_Construct_UClass_UYCharBase_AnimInstance_Statics::NewProp_YCharIsFalling_SetBit(void* Obj)
{
	((UYCharBase_AnimInstance*)Obj)->YCharIsFalling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UYCharBase_AnimInstance_Statics::NewProp_YCharIsFalling = { "YCharIsFalling", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UYCharBase_AnimInstance), &Z_Construct_UClass_UYCharBase_AnimInstance_Statics::NewProp_YCharIsFalling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YCharIsFalling_MetaData), NewProp_YCharIsFalling_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UYCharBase_AnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYCharBase_AnimInstance_Statics::NewProp_YCharBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYCharBase_AnimInstance_Statics::NewProp_YCharMovementComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYCharBase_AnimInstance_Statics::NewProp_YCharVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYCharBase_AnimInstance_Statics::NewProp_YCharSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYCharBase_AnimInstance_Statics::NewProp_YShouldMove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYCharBase_AnimInstance_Statics::NewProp_YCharIsFalling,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UYCharBase_AnimInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UYCharBase_AnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_Basic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UYCharBase_AnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UYCharBase_AnimInstance_Statics::ClassParams = {
	&UYCharBase_AnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UYCharBase_AnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UYCharBase_AnimInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UYCharBase_AnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UYCharBase_AnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UYCharBase_AnimInstance()
{
	if (!Z_Registration_Info_UClass_UYCharBase_AnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UYCharBase_AnimInstance.OuterSingleton, Z_Construct_UClass_UYCharBase_AnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UYCharBase_AnimInstance.OuterSingleton;
}
template<> BASIC_API UClass* StaticClass<UYCharBase_AnimInstance>()
{
	return UYCharBase_AnimInstance::StaticClass();
}
UYCharBase_AnimInstance::UYCharBase_AnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UYCharBase_AnimInstance);
UYCharBase_AnimInstance::~UYCharBase_AnimInstance() {}
// End Class UYCharBase_AnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_My_UE5_Programming_MyBasic_Source_Basic_Character_YCharBase_AnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UYCharBase_AnimInstance, UYCharBase_AnimInstance::StaticClass, TEXT("UYCharBase_AnimInstance"), &Z_Registration_Info_UClass_UYCharBase_AnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UYCharBase_AnimInstance), 1813010206U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_My_UE5_Programming_MyBasic_Source_Basic_Character_YCharBase_AnimInstance_h_235150485(TEXT("/Script/Basic"),
	Z_CompiledInDeferFile_FID_My_UE5_Programming_MyBasic_Source_Basic_Character_YCharBase_AnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_My_UE5_Programming_MyBasic_Source_Basic_Character_YCharBase_AnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
