// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Basic/Action/BaseEquippable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseEquippable() {}

// Begin Cross Module References
BASIC_API UClass* Z_Construct_UClass_ABaseEquippable();
BASIC_API UClass* Z_Construct_UClass_ABaseEquippable_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Basic();
// End Cross Module References

// Begin Class ABaseEquippable Function AttachActor
struct Z_Construct_UFunction_ABaseEquippable_AttachActor_Statics
{
	struct BaseEquippable_eventAttachActor_Parms
	{
		FName SocketName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ItemMesh" },
		{ "ModuleRelativePath", "Action/BaseEquippable.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ABaseEquippable_AttachActor_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseEquippable_eventAttachActor_Parms, SocketName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseEquippable_AttachActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEquippable_AttachActor_Statics::NewProp_SocketName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEquippable_AttachActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseEquippable_AttachActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseEquippable, nullptr, "AttachActor", nullptr, nullptr, Z_Construct_UFunction_ABaseEquippable_AttachActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEquippable_AttachActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseEquippable_AttachActor_Statics::BaseEquippable_eventAttachActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEquippable_AttachActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseEquippable_AttachActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABaseEquippable_AttachActor_Statics::BaseEquippable_eventAttachActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABaseEquippable_AttachActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseEquippable_AttachActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseEquippable::execAttachActor)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_SocketName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AttachActor(Z_Param_SocketName);
	P_NATIVE_END;
}
// End Class ABaseEquippable Function AttachActor

// Begin Class ABaseEquippable Function GetItemMesh
struct Z_Construct_UFunction_ABaseEquippable_GetItemMesh_Statics
{
	struct BaseEquippable_eventGetItemMesh_Parms
	{
		UPrimitiveComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ItemMesh" },
		{ "ModuleRelativePath", "Action/BaseEquippable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseEquippable_GetItemMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseEquippable_eventGetItemMesh_Parms, ReturnValue), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseEquippable_GetItemMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEquippable_GetItemMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEquippable_GetItemMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseEquippable_GetItemMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseEquippable, nullptr, "GetItemMesh", nullptr, nullptr, Z_Construct_UFunction_ABaseEquippable_GetItemMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEquippable_GetItemMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseEquippable_GetItemMesh_Statics::BaseEquippable_eventGetItemMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEquippable_GetItemMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseEquippable_GetItemMesh_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABaseEquippable_GetItemMesh_Statics::BaseEquippable_eventGetItemMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABaseEquippable_GetItemMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseEquippable_GetItemMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseEquippable::execGetItemMesh)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPrimitiveComponent**)Z_Param__Result=P_THIS->GetItemMesh();
	P_NATIVE_END;
}
// End Class ABaseEquippable Function GetItemMesh

// Begin Class ABaseEquippable Function OnEquipped
struct Z_Construct_UFunction_ABaseEquippable_OnEquipped_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Action/BaseEquippable.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseEquippable_OnEquipped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseEquippable, nullptr, "OnEquipped", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEquippable_OnEquipped_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseEquippable_OnEquipped_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABaseEquippable_OnEquipped()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseEquippable_OnEquipped_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseEquippable::execOnEquipped)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnEquipped();
	P_NATIVE_END;
}
// End Class ABaseEquippable Function OnEquipped

// Begin Class ABaseEquippable Function OnUnEquipped
struct Z_Construct_UFunction_ABaseEquippable_OnUnEquipped_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Action/BaseEquippable.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseEquippable_OnUnEquipped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseEquippable, nullptr, "OnUnEquipped", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEquippable_OnUnEquipped_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseEquippable_OnUnEquipped_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABaseEquippable_OnUnEquipped()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseEquippable_OnUnEquipped_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseEquippable::execOnUnEquipped)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnUnEquipped();
	P_NATIVE_END;
}
// End Class ABaseEquippable Function OnUnEquipped

// Begin Class ABaseEquippable
void ABaseEquippable::StaticRegisterNativesABaseEquippable()
{
	UClass* Class = ABaseEquippable::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AttachActor", &ABaseEquippable::execAttachActor },
		{ "GetItemMesh", &ABaseEquippable::execGetItemMesh },
		{ "OnEquipped", &ABaseEquippable::execOnEquipped },
		{ "OnUnEquipped", &ABaseEquippable::execOnUnEquipped },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseEquippable);
UClass* Z_Construct_UClass_ABaseEquippable_NoRegister()
{
	return ABaseEquippable::StaticClass();
}
struct Z_Construct_UClass_ABaseEquippable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Action/BaseEquippable.h" },
		{ "ModuleRelativePath", "Action/BaseEquippable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemSkeletalMesh_MetaData[] = {
		{ "Category", "BaseEquippable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Action/BaseEquippable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemStaticMesh_MetaData[] = {
		{ "Category", "BaseEquippable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Action/BaseEquippable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsEquipped_MetaData[] = {
		{ "Category", "BaseEquippable" },
		{ "ModuleRelativePath", "Action/BaseEquippable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachSocketName_MetaData[] = {
		{ "Category", "BaseEquippable" },
		{ "ModuleRelativePath", "Action/BaseEquippable.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemSkeletalMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemStaticMesh;
	static void NewProp_IsEquipped_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsEquipped;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AttachSocketName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseEquippable_AttachActor, "AttachActor" }, // 2556347883
		{ &Z_Construct_UFunction_ABaseEquippable_GetItemMesh, "GetItemMesh" }, // 2018011583
		{ &Z_Construct_UFunction_ABaseEquippable_OnEquipped, "OnEquipped" }, // 2526438600
		{ &Z_Construct_UFunction_ABaseEquippable_OnUnEquipped, "OnUnEquipped" }, // 1388047663
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseEquippable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseEquippable_Statics::NewProp_ItemSkeletalMesh = { "ItemSkeletalMesh", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseEquippable, ItemSkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemSkeletalMesh_MetaData), NewProp_ItemSkeletalMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseEquippable_Statics::NewProp_ItemStaticMesh = { "ItemStaticMesh", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseEquippable, ItemStaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemStaticMesh_MetaData), NewProp_ItemStaticMesh_MetaData) };
void Z_Construct_UClass_ABaseEquippable_Statics::NewProp_IsEquipped_SetBit(void* Obj)
{
	((ABaseEquippable*)Obj)->IsEquipped = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseEquippable_Statics::NewProp_IsEquipped = { "IsEquipped", nullptr, (EPropertyFlags)0x0040000000030001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABaseEquippable), &Z_Construct_UClass_ABaseEquippable_Statics::NewProp_IsEquipped_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsEquipped_MetaData), NewProp_IsEquipped_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ABaseEquippable_Statics::NewProp_AttachSocketName = { "AttachSocketName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseEquippable, AttachSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachSocketName_MetaData), NewProp_AttachSocketName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseEquippable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEquippable_Statics::NewProp_ItemSkeletalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEquippable_Statics::NewProp_ItemStaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEquippable_Statics::NewProp_IsEquipped,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEquippable_Statics::NewProp_AttachSocketName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEquippable_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABaseEquippable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Basic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEquippable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseEquippable_Statics::ClassParams = {
	&ABaseEquippable::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABaseEquippable_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEquippable_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEquippable_Statics::Class_MetaDataParams), Z_Construct_UClass_ABaseEquippable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABaseEquippable()
{
	if (!Z_Registration_Info_UClass_ABaseEquippable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseEquippable.OuterSingleton, Z_Construct_UClass_ABaseEquippable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABaseEquippable.OuterSingleton;
}
template<> BASIC_API UClass* StaticClass<ABaseEquippable>()
{
	return ABaseEquippable::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseEquippable);
ABaseEquippable::~ABaseEquippable() {}
// End Class ABaseEquippable

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyBasic_Source_Basic_Action_BaseEquippable_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABaseEquippable, ABaseEquippable::StaticClass, TEXT("ABaseEquippable"), &Z_Registration_Info_UClass_ABaseEquippable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseEquippable), 1110128410U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyBasic_Source_Basic_Action_BaseEquippable_h_1312050620(TEXT("/Script/Basic"),
	Z_CompiledInDeferFile_FID_MyBasic_Source_Basic_Action_BaseEquippable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyBasic_Source_Basic_Action_BaseEquippable_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
