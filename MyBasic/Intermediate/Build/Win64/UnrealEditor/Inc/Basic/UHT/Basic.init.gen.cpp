// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasic_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Basic;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Basic()
	{
		if (!Z_Registration_Info_UPackage__Script_Basic.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Basic",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xF39C725D,
				0x355E9581,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Basic.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Basic.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Basic(Z_Construct_UPackage__Script_Basic, TEXT("/Script/Basic"), Z_Registration_Info_UPackage__Script_Basic, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xF39C725D, 0x355E9581));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
