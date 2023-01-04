// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PublicContactPlugins/Public/PublicContactManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePublicContactManager() {}
// Cross Module References
	PUBLICCONTACTPLUGINS_API UClass* Z_Construct_UClass_APublicContactManager_NoRegister();
	PUBLICCONTACTPLUGINS_API UClass* Z_Construct_UClass_APublicContactManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PublicContactPlugins();
// End Cross Module References
	void APublicContactManager::StaticRegisterNativesAPublicContactManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APublicContactManager);
	UClass* Z_Construct_UClass_APublicContactManager_NoRegister()
	{
		return APublicContactManager::StaticClass();
	}
	struct Z_Construct_UClass_APublicContactManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APublicContactManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PublicContactPlugins,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APublicContactManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PublicContactManager.h" },
		{ "ModuleRelativePath", "Public/PublicContactManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APublicContactManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APublicContactManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APublicContactManager_Statics::ClassParams = {
		&APublicContactManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APublicContactManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APublicContactManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APublicContactManager()
	{
		if (!Z_Registration_Info_UClass_APublicContactManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APublicContactManager.OuterSingleton, Z_Construct_UClass_APublicContactManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APublicContactManager.OuterSingleton;
	}
	template<> PUBLICCONTACTPLUGINS_API UClass* StaticClass<APublicContactManager>()
	{
		return APublicContactManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APublicContactManager);
	struct Z_CompiledInDeferFile_FID_UE5TransformTest_Plugins_PublicContactPlugins_Source_PublicContactPlugins_Public_PublicContactManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5TransformTest_Plugins_PublicContactPlugins_Source_PublicContactPlugins_Public_PublicContactManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APublicContactManager, APublicContactManager::StaticClass, TEXT("APublicContactManager"), &Z_Registration_Info_UClass_APublicContactManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APublicContactManager), 258143851U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5TransformTest_Plugins_PublicContactPlugins_Source_PublicContactPlugins_Public_PublicContactManager_h_418388739(TEXT("/Script/PublicContactPlugins"),
		Z_CompiledInDeferFile_FID_UE5TransformTest_Plugins_PublicContactPlugins_Source_PublicContactPlugins_Public_PublicContactManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5TransformTest_Plugins_PublicContactPlugins_Source_PublicContactPlugins_Public_PublicContactManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
