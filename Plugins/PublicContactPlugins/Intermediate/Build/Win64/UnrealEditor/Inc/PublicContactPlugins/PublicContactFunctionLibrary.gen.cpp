// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PublicContactPlugins/Public/PublicContactFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePublicContactFunctionLibrary() {}
// Cross Module References
	PUBLICCONTACTPLUGINS_API UClass* Z_Construct_UClass_UPublicContactFunctionLibrary_NoRegister();
	PUBLICCONTACTPLUGINS_API UClass* Z_Construct_UClass_UPublicContactFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_PublicContactPlugins();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPublicContactFunctionLibrary::execTestFunction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UPublicContactFunctionLibrary::TestFunction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPublicContactFunctionLibrary::execSetHiddenHomeWidget)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_UBOOL(Z_Param_bSetHidden);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPublicContactFunctionLibrary::SetHiddenHomeWidget(Z_Param_WorldContextObject,Z_Param_bSetHidden);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPublicContactFunctionLibrary::execSetControllerDefaultPawn)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(APawn,Z_Param_Pawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPublicContactFunctionLibrary::SetControllerDefaultPawn(Z_Param_WorldContextObject,Z_Param_Pawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPublicContactFunctionLibrary::execAddWidgetToHome)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UUserWidget,Z_Param_WidgetRef);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPublicContactFunctionLibrary::AddWidgetToHome(Z_Param_WorldContextObject,Z_Param_WidgetRef);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPublicContactFunctionLibrary::execSwitchCharacter)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_CharacterName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPublicContactFunctionLibrary::SwitchCharacter(Z_Param_WorldContextObject,Z_Param_CharacterName);
		P_NATIVE_END;
	}
	void UPublicContactFunctionLibrary::StaticRegisterNativesUPublicContactFunctionLibrary()
	{
		UClass* Class = UPublicContactFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddWidgetToHome", &UPublicContactFunctionLibrary::execAddWidgetToHome },
			{ "SetControllerDefaultPawn", &UPublicContactFunctionLibrary::execSetControllerDefaultPawn },
			{ "SetHiddenHomeWidget", &UPublicContactFunctionLibrary::execSetHiddenHomeWidget },
			{ "SwitchCharacter", &UPublicContactFunctionLibrary::execSwitchCharacter },
			{ "TestFunction", &UPublicContactFunctionLibrary::execTestFunction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPublicContactFunctionLibrary_AddWidgetToHome_Statics
	{
		struct PublicContactFunctionLibrary_eventAddWidgetToHome_Parms
		{
			const UObject* WorldContextObject;
			UUserWidget* WidgetRef;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetRef_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPublicContactFunctionLibrary_AddWidgetToHome_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPublicContactFunctionLibrary_AddWidgetToHome_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PublicContactFunctionLibrary_eventAddWidgetToHome_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPublicContactFunctionLibrary_AddWidgetToHome_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPublicContactFunctionLibrary_AddWidgetToHome_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPublicContactFunctionLibrary_AddWidgetToHome_Statics::NewProp_WidgetRef_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPublicContactFunctionLibrary_AddWidgetToHome_Statics::NewProp_WidgetRef = { "WidgetRef", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PublicContactFunctionLibrary_eventAddWidgetToHome_Parms, WidgetRef), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPublicContactFunctionLibrary_AddWidgetToHome_Statics::NewProp_WidgetRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPublicContactFunctionLibrary_AddWidgetToHome_Statics::NewProp_WidgetRef_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPublicContactFunctionLibrary_AddWidgetToHome_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPublicContactFunctionLibrary_AddWidgetToHome_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPublicContactFunctionLibrary_AddWidgetToHome_Statics::NewProp_WidgetRef,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPublicContactFunctionLibrary_AddWidgetToHome_Statics::Function_MetaDataParams[] = {
		{ "Category", "PublicContact" },
		{ "Comment", "//\xe5\x9c\xa8\xe4\xb8\xbb\xe9\xa1\xb5\xe9\x9d\xa2\xe6\xb7\xbb\xe5\x8a\xa0\xe8\x87\xaa\xe5\xb7\xb1\xe7\x9a\x84UMG\n" },
		{ "ModuleRelativePath", "Public/PublicContactFunctionLibrary.h" },
		{ "ToolTip", "\xe5\x9c\xa8\xe4\xb8\xbb\xe9\xa1\xb5\xe9\x9d\xa2\xe6\xb7\xbb\xe5\x8a\xa0\xe8\x87\xaa\xe5\xb7\xb1\xe7\x9a\x84UMG" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPublicContactFunctionLibrary_AddWidgetToHome_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPublicContactFunctionLibrary, nullptr, "AddWidgetToHome", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPublicContactFunctionLibrary_AddWidgetToHome_Statics::PublicContactFunctionLibrary_eventAddWidgetToHome_Parms), Z_Construct_UFunction_UPublicContactFunctionLibrary_AddWidgetToHome_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPublicContactFunctionLibrary_AddWidgetToHome_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPublicContactFunctionLibrary_AddWidgetToHome_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPublicContactFunctionLibrary_AddWidgetToHome_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPublicContactFunctionLibrary_AddWidgetToHome()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPublicContactFunctionLibrary_AddWidgetToHome_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPublicContactFunctionLibrary_SetControllerDefaultPawn_Statics
	{
		struct PublicContactFunctionLibrary_eventSetControllerDefaultPawn_Parms
		{
			const UObject* WorldContextObject;
			APawn* Pawn;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPublicContactFunctionLibrary_SetControllerDefaultPawn_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPublicContactFunctionLibrary_SetControllerDefaultPawn_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PublicContactFunctionLibrary_eventSetControllerDefaultPawn_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPublicContactFunctionLibrary_SetControllerDefaultPawn_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPublicContactFunctionLibrary_SetControllerDefaultPawn_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPublicContactFunctionLibrary_SetControllerDefaultPawn_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PublicContactFunctionLibrary_eventSetControllerDefaultPawn_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPublicContactFunctionLibrary_SetControllerDefaultPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPublicContactFunctionLibrary_SetControllerDefaultPawn_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPublicContactFunctionLibrary_SetControllerDefaultPawn_Statics::NewProp_Pawn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPublicContactFunctionLibrary_SetControllerDefaultPawn_Statics::Function_MetaDataParams[] = {
		{ "Category", "PublicContact" },
		{ "Comment", "//\xe5\x88\x87\xe6\x8d\xa2\xe6\x8e\xa7\xe5\x88\xb6\xe5\x99\xa8\xe9\xbb\x98\xe8\xae\xa4\xe6\x8e\xa7\xe5\x88\xb6\xe7\x9a\x84pawn\n" },
		{ "ModuleRelativePath", "Public/PublicContactFunctionLibrary.h" },
		{ "ToolTip", "\xe5\x88\x87\xe6\x8d\xa2\xe6\x8e\xa7\xe5\x88\xb6\xe5\x99\xa8\xe9\xbb\x98\xe8\xae\xa4\xe6\x8e\xa7\xe5\x88\xb6\xe7\x9a\x84pawn" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPublicContactFunctionLibrary_SetControllerDefaultPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPublicContactFunctionLibrary, nullptr, "SetControllerDefaultPawn", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPublicContactFunctionLibrary_SetControllerDefaultPawn_Statics::PublicContactFunctionLibrary_eventSetControllerDefaultPawn_Parms), Z_Construct_UFunction_UPublicContactFunctionLibrary_SetControllerDefaultPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPublicContactFunctionLibrary_SetControllerDefaultPawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPublicContactFunctionLibrary_SetControllerDefaultPawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPublicContactFunctionLibrary_SetControllerDefaultPawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPublicContactFunctionLibrary_SetControllerDefaultPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPublicContactFunctionLibrary_SetControllerDefaultPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPublicContactFunctionLibrary_SetHiddenHomeWidget_Statics
	{
		struct PublicContactFunctionLibrary_eventSetHiddenHomeWidget_Parms
		{
			const UObject* WorldContextObject;
			bool bSetHidden;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_bSetHidden_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetHidden;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPublicContactFunctionLibrary_SetHiddenHomeWidget_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPublicContactFunctionLibrary_SetHiddenHomeWidget_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PublicContactFunctionLibrary_eventSetHiddenHomeWidget_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPublicContactFunctionLibrary_SetHiddenHomeWidget_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPublicContactFunctionLibrary_SetHiddenHomeWidget_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UPublicContactFunctionLibrary_SetHiddenHomeWidget_Statics::NewProp_bSetHidden_SetBit(void* Obj)
	{
		((PublicContactFunctionLibrary_eventSetHiddenHomeWidget_Parms*)Obj)->bSetHidden = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPublicContactFunctionLibrary_SetHiddenHomeWidget_Statics::NewProp_bSetHidden = { "bSetHidden", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PublicContactFunctionLibrary_eventSetHiddenHomeWidget_Parms), &Z_Construct_UFunction_UPublicContactFunctionLibrary_SetHiddenHomeWidget_Statics::NewProp_bSetHidden_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPublicContactFunctionLibrary_SetHiddenHomeWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPublicContactFunctionLibrary_SetHiddenHomeWidget_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPublicContactFunctionLibrary_SetHiddenHomeWidget_Statics::NewProp_bSetHidden,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPublicContactFunctionLibrary_SetHiddenHomeWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "PublicContact" },
		{ "Comment", "//\xe9\x9a\x90\xe8\x97\x8f\xe4\xb8\xbb\xe7\x95\x8c\xe9\x9d\xa2\xe7\x9a\x84UMG\n" },
		{ "ModuleRelativePath", "Public/PublicContactFunctionLibrary.h" },
		{ "ToolTip", "\xe9\x9a\x90\xe8\x97\x8f\xe4\xb8\xbb\xe7\x95\x8c\xe9\x9d\xa2\xe7\x9a\x84UMG" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPublicContactFunctionLibrary_SetHiddenHomeWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPublicContactFunctionLibrary, nullptr, "SetHiddenHomeWidget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPublicContactFunctionLibrary_SetHiddenHomeWidget_Statics::PublicContactFunctionLibrary_eventSetHiddenHomeWidget_Parms), Z_Construct_UFunction_UPublicContactFunctionLibrary_SetHiddenHomeWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPublicContactFunctionLibrary_SetHiddenHomeWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPublicContactFunctionLibrary_SetHiddenHomeWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPublicContactFunctionLibrary_SetHiddenHomeWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPublicContactFunctionLibrary_SetHiddenHomeWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPublicContactFunctionLibrary_SetHiddenHomeWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPublicContactFunctionLibrary_SwitchCharacter_Statics
	{
		struct PublicContactFunctionLibrary_eventSwitchCharacter_Parms
		{
			const UObject* WorldContextObject;
			FString CharacterName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CharacterName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPublicContactFunctionLibrary_SwitchCharacter_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPublicContactFunctionLibrary_SwitchCharacter_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PublicContactFunctionLibrary_eventSwitchCharacter_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPublicContactFunctionLibrary_SwitchCharacter_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPublicContactFunctionLibrary_SwitchCharacter_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPublicContactFunctionLibrary_SwitchCharacter_Statics::NewProp_CharacterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPublicContactFunctionLibrary_SwitchCharacter_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PublicContactFunctionLibrary_eventSwitchCharacter_Parms, CharacterName), METADATA_PARAMS(Z_Construct_UFunction_UPublicContactFunctionLibrary_SwitchCharacter_Statics::NewProp_CharacterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPublicContactFunctionLibrary_SwitchCharacter_Statics::NewProp_CharacterName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPublicContactFunctionLibrary_SwitchCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPublicContactFunctionLibrary_SwitchCharacter_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPublicContactFunctionLibrary_SwitchCharacter_Statics::NewProp_CharacterName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPublicContactFunctionLibrary_SwitchCharacter_Statics::Function_MetaDataParams[] = {
		{ "Category", "PublicContact" },
		{ "Comment", "//\xe5\xaf\xb9\xe5\xa4\x96\xe5\x88\x87\xe6\x8d\xa2\xe8\xa7\x92\xe8\x89\xb2\xe6\x97\xb6\xe8\xb0\x83\xe7\x94\xa8\xef\xbc\x8c\xe4\xbc\xa0\xe5\x85\xa5\xe9\x9c\x80\xe8\xa6\x81\xe5\x88\x87\xe6\x8d\xa2\xe7\x9a\x84\xe8\xa7\x92\xe8\x89\xb2\xe5\x90\x8d\n" },
		{ "ModuleRelativePath", "Public/PublicContactFunctionLibrary.h" },
		{ "ToolTip", "\xe5\xaf\xb9\xe5\xa4\x96\xe5\x88\x87\xe6\x8d\xa2\xe8\xa7\x92\xe8\x89\xb2\xe6\x97\xb6\xe8\xb0\x83\xe7\x94\xa8\xef\xbc\x8c\xe4\xbc\xa0\xe5\x85\xa5\xe9\x9c\x80\xe8\xa6\x81\xe5\x88\x87\xe6\x8d\xa2\xe7\x9a\x84\xe8\xa7\x92\xe8\x89\xb2\xe5\x90\x8d" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPublicContactFunctionLibrary_SwitchCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPublicContactFunctionLibrary, nullptr, "SwitchCharacter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPublicContactFunctionLibrary_SwitchCharacter_Statics::PublicContactFunctionLibrary_eventSwitchCharacter_Parms), Z_Construct_UFunction_UPublicContactFunctionLibrary_SwitchCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPublicContactFunctionLibrary_SwitchCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPublicContactFunctionLibrary_SwitchCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPublicContactFunctionLibrary_SwitchCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPublicContactFunctionLibrary_SwitchCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPublicContactFunctionLibrary_SwitchCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPublicContactFunctionLibrary_TestFunction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPublicContactFunctionLibrary_TestFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "PublicContact" },
		{ "Comment", "//Test\n" },
		{ "ModuleRelativePath", "Public/PublicContactFunctionLibrary.h" },
		{ "ToolTip", "Test" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPublicContactFunctionLibrary_TestFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPublicContactFunctionLibrary, nullptr, "TestFunction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPublicContactFunctionLibrary_TestFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPublicContactFunctionLibrary_TestFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPublicContactFunctionLibrary_TestFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPublicContactFunctionLibrary_TestFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPublicContactFunctionLibrary);
	UClass* Z_Construct_UClass_UPublicContactFunctionLibrary_NoRegister()
	{
		return UPublicContactFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UPublicContactFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPublicContactFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_PublicContactPlugins,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPublicContactFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPublicContactFunctionLibrary_AddWidgetToHome, "AddWidgetToHome" }, // 2606236388
		{ &Z_Construct_UFunction_UPublicContactFunctionLibrary_SetControllerDefaultPawn, "SetControllerDefaultPawn" }, // 194594317
		{ &Z_Construct_UFunction_UPublicContactFunctionLibrary_SetHiddenHomeWidget, "SetHiddenHomeWidget" }, // 3165709832
		{ &Z_Construct_UFunction_UPublicContactFunctionLibrary_SwitchCharacter, "SwitchCharacter" }, // 3270893599
		{ &Z_Construct_UFunction_UPublicContactFunctionLibrary_TestFunction, "TestFunction" }, // 1770913140
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPublicContactFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "PublicContactFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/PublicContactFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPublicContactFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPublicContactFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPublicContactFunctionLibrary_Statics::ClassParams = {
		&UPublicContactFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPublicContactFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPublicContactFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPublicContactFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UPublicContactFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPublicContactFunctionLibrary.OuterSingleton, Z_Construct_UClass_UPublicContactFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPublicContactFunctionLibrary.OuterSingleton;
	}
	template<> PUBLICCONTACTPLUGINS_API UClass* StaticClass<UPublicContactFunctionLibrary>()
	{
		return UPublicContactFunctionLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPublicContactFunctionLibrary);
	struct Z_CompiledInDeferFile_FID_UE5TransformTest_Plugins_PublicContactPlugins_Source_PublicContactPlugins_Public_PublicContactFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5TransformTest_Plugins_PublicContactPlugins_Source_PublicContactPlugins_Public_PublicContactFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPublicContactFunctionLibrary, UPublicContactFunctionLibrary::StaticClass, TEXT("UPublicContactFunctionLibrary"), &Z_Registration_Info_UClass_UPublicContactFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPublicContactFunctionLibrary), 807943843U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5TransformTest_Plugins_PublicContactPlugins_Source_PublicContactPlugins_Public_PublicContactFunctionLibrary_h_238579825(TEXT("/Script/PublicContactPlugins"),
		Z_CompiledInDeferFile_FID_UE5TransformTest_Plugins_PublicContactPlugins_Source_PublicContactPlugins_Public_PublicContactFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5TransformTest_Plugins_PublicContactPlugins_Source_PublicContactPlugins_Public_PublicContactFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
