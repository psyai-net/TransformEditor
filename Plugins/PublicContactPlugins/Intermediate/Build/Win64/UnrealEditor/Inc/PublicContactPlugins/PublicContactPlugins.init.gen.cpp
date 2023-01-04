// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePublicContactPlugins_init() {}
	PUBLICCONTACTPLUGINS_API UFunction* Z_Construct_UDelegateFunction_PublicContactPlugins_GizmoStateChangedDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_PublicContactPlugins;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_PublicContactPlugins()
	{
		if (!Z_Registration_Info_UPackage__Script_PublicContactPlugins.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_PublicContactPlugins_GizmoStateChangedDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/PublicContactPlugins",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x1D115BAE,
				0x38D9C3B2,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_PublicContactPlugins.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_PublicContactPlugins.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_PublicContactPlugins(Z_Construct_UPackage__Script_PublicContactPlugins, TEXT("/Script/PublicContactPlugins"), Z_Registration_Info_UPackage__Script_PublicContactPlugins, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x1D115BAE, 0x38D9C3B2));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
