// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PublicContactPlugins/Public/PublicContasctInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePublicContasctInterface() {}
// Cross Module References
	PUBLICCONTACTPLUGINS_API UClass* Z_Construct_UClass_UPublicContasctInterface_NoRegister();
	PUBLICCONTACTPLUGINS_API UClass* Z_Construct_UClass_UPublicContasctInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_PublicContactPlugins();
// End Cross Module References
	void UPublicContasctInterface::StaticRegisterNativesUPublicContasctInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPublicContasctInterface);
	UClass* Z_Construct_UClass_UPublicContasctInterface_NoRegister()
	{
		return UPublicContasctInterface::StaticClass();
	}
	struct Z_Construct_UClass_UPublicContasctInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPublicContasctInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_PublicContactPlugins,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPublicContasctInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PublicContasctInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPublicContasctInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPublicContasctInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPublicContasctInterface_Statics::ClassParams = {
		&UPublicContasctInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPublicContasctInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPublicContasctInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPublicContasctInterface()
	{
		if (!Z_Registration_Info_UClass_UPublicContasctInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPublicContasctInterface.OuterSingleton, Z_Construct_UClass_UPublicContasctInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPublicContasctInterface.OuterSingleton;
	}
	template<> PUBLICCONTACTPLUGINS_API UClass* StaticClass<UPublicContasctInterface>()
	{
		return UPublicContasctInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPublicContasctInterface);
	struct Z_CompiledInDeferFile_FID_UE5TransformTest_Plugins_PublicContactPlugins_Source_PublicContactPlugins_Public_PublicContasctInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5TransformTest_Plugins_PublicContactPlugins_Source_PublicContactPlugins_Public_PublicContasctInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPublicContasctInterface, UPublicContasctInterface::StaticClass, TEXT("UPublicContasctInterface"), &Z_Registration_Info_UClass_UPublicContasctInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPublicContasctInterface), 2199997019U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5TransformTest_Plugins_PublicContactPlugins_Source_PublicContactPlugins_Public_PublicContasctInterface_h_1837612428(TEXT("/Script/PublicContactPlugins"),
		Z_CompiledInDeferFile_FID_UE5TransformTest_Plugins_PublicContactPlugins_Source_PublicContactPlugins_Public_PublicContasctInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5TransformTest_Plugins_PublicContactPlugins_Source_PublicContactPlugins_Public_PublicContasctInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
