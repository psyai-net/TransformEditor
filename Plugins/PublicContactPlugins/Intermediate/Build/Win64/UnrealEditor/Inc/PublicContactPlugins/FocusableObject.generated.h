// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ATransformerPawn;
class USceneComponent;
#ifdef PUBLICCONTACTPLUGINS_FocusableObject_generated_h
#error "FocusableObject.generated.h already included, missing '#pragma once' in FocusableObject.h"
#endif
#define PUBLICCONTACTPLUGINS_FocusableObject_generated_h

#define FID_UE5TransformTest_Plugins_PublicContactPlugins_Source_PublicContactPlugins_Public_RuntimeTransformEditor_FocusableObject_h_13_SPARSE_DATA
#define FID_UE5TransformTest_Plugins_PublicContactPlugins_Source_PublicContactPlugins_Public_RuntimeTransformEditor_FocusableObject_h_13_RPC_WRAPPERS \
	virtual void OnNewTransformation_Implementation(ATransformerPawn* Caller, USceneComponent* Component, FTransform const& NewTransform, bool bComponentBased) {}; \
	virtual void Unfocus_Implementation(ATransformerPawn* Caller, USceneComponent* Component, bool bComponentBased) {}; \
	virtual void Focus_Implementation(ATransformerPawn* Caller, USceneComponent* Component, bool bComponentBased) {}; \
 \
	DECLARE_FUNCTION(execOnNewTransformation); \
	DECLARE_FUNCTION(execUnfocus); \
	DECLARE_FUNCTION(execFocus);


#define FID_UE5TransformTest_Plugins_PublicContactPlugins_Source_PublicContactPlugins_Public_RuntimeTransformEditor_FocusableObject_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnNewTransformation_Implementation(ATransformerPawn* Caller, USceneComponent* Component, FTransform const& NewTransform, bool bComponentBased) {}; \
	virtual void Unfocus_Implementation(ATransformerPawn* Caller, USceneComponent* Component, bool bComponentBased) {}; \
	virtual void Focus_Implementation(ATransformerPawn* Caller, USceneComponent* Component, bool bComponentBased) {}; \
 \
	DECLARE_FUNCTION(execOnNewTransformation); \
	DECLARE_FUNCTION(execUnfocus); \
	DECLARE_FUNCTION(execFocus);


#define FID_UE5TransformTest_Plugins_PublicContactPlugins_Source_PublicContactPlugins_Public_RuntimeTransformEditor_FocusableObject_h_13_EVENT_PARMS \
	struct FocusableObject_eventFocus_Parms \
	{ \
		ATransformerPawn* Caller; \
		USceneComponent* Component; \
		bool bComponentBased; \
	}; \
	struct FocusableObject_eventOnNewTransformation_Parms \
	{ \
		ATransformerPawn* Caller; \
		USceneComponent* Component; \
		FTransform NewTransform; \
		bool bComponentBased; \
	}; \
	struct FocusableObject_eventUnfocus_Parms \
	{ \
		ATransformerPawn* Caller; \
		USceneComponent* Component; \
		bool bComponentBased; \
	};


#define FID_UE5TransformTest_Plugins_PublicContactPlugins_Source_PublicContactPlugins_Public_RuntimeTransformEditor_FocusableObject_h_13_CALLBACK_WRAPPERS
#define FID_UE5TransformTest_Plugins_PublicContactPlugins_Source_PublicContactPlugins_Public_RuntimeTransformEditor_FocusableObject_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PUBLICCONTACTPLUGINS_API UFocusableObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFocusableObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PUBLICCONTACTPLUGINS_API, UFocusableObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFocusableObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PUBLICCONTACTPLUGINS_API UFocusableObject(UFocusableObject&&); \
	PUBLICCONTACTPLUGINS_API UFocusableObject(const UFocusableObject&); \
public:


#define FID_UE5TransformTest_Plugins_PublicContactPlugins_Source_PublicContactPlugins_Public_RuntimeTransformEditor_FocusableObject_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PUBLICCONTACTPLUGINS_API UFocusableObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PUBLICCONTACTPLUGINS_API UFocusableObject(UFocusableObject&&); \
	PUBLICCONTACTPLUGINS_API UFocusableObject(const UFocusableObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PUBLICCONTACTPLUGINS_API, UFocusableObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFocusableObject); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFocusableObject)


#define FID_UE5TransformTest_Plugins_PublicContactPlugins_Source_PublicContactPlugins_Public_RuntimeTransformEditor_FocusableObject_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUFocusableObject(); \
	friend struct Z_Construct_UClass_UFocusableObject_Statics; \
public: \
	DECLARE_CLASS(UFocusableObject, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/PublicContactPlugins"), PUBLICCONTACTPLUGINS_API) \
	DECLARE_SERIALIZER(UFocusableObject)


#define FID_UE5TransformTest_Plugins_PublicContactPlugins_Source_PublicContactPlugins_Public_RuntimeTransformEditor_FocusableObject_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_UE5TransformTest_Plugins_PublicContactPlugins_Source_PublicContactPlugins_Public_RuntimeTransformEditor_FocusableObject_h_13_GENERATED_UINTERFACE_BODY() \
	FID_UE5TransformTest_Plugins_PublicContactPlugins_Source_PublicContactPlugins_Public_RuntimeTransformEditor_FocusableObject_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UE5TransformTest_Plugins_PublicContactPlugins_Source_PublicContactPlugins_Public_RuntimeTransformEditor_FocusableObject_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_UE5TransformTest_Plugins_PublicContactPlugins_Source_PublicContactPlugins_Public_RuntimeTransformEditor_FocusableObject_h_13_GENERATED_UINTERFACE_BODY() \
	FID_UE5TransformTest_Plugins_PublicContactPlugins_Source_PublicContactPlugins_Public_RuntimeTransformEditor_FocusableObject_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UE5TransformTest_Plugins_PublicContactPlugins_Source_PublicContactPlugins_Public_RuntimeTransformEditor_FocusableObject_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IFocusableObject() {} \
public: \
	typedef UFocusableObject UClassType; \
	typedef IFocusableObject ThisClass; \
	static void Execute_Focus(UObject* O, ATransformerPawn* Caller, USceneComponent* Component, bool bComponentBased); \
	static void Execute_OnNewTransformation(UObject* O, ATransformerPawn* Caller, USceneComponent* Component, FTransform const& NewTransform, bool bComponentBased); \
	static void Execute_Unfocus(UObject* O, ATransformerPawn* Caller, USceneComponent* Component, bool bComponentBased); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_UE5TransformTest_Plugins_PublicContactPlugins_Source_PublicContactPlugins_Public_RuntimeTransformEditor_FocusableObject_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IFocusableObject() {} \
public: \
	typedef UFocusableObject UClassType; \
	typedef IFocusableObject ThisClass; \
	static void Execute_Focus(UObject* O, ATransformerPawn* Caller, USceneComponent* Component, bool bComponentBased); \
	static void Execute_OnNewTransformation(UObject* O, ATransformerPawn* Caller, USceneComponent* Component, FTransform const& NewTransform, bool bComponentBased); \
	static void Execute_Unfocus(UObject* O, ATransformerPawn* Caller, USceneComponent* Component, bool bComponentBased); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_UE5TransformTest_Plugins_PublicContactPlugins_Source_PublicContactPlugins_Public_RuntimeTransformEditor_FocusableObject_h_10_PROLOG \
	FID_UE5TransformTest_Plugins_PublicContactPlugins_Source_PublicContactPlugins_Public_RuntimeTransformEditor_FocusableObject_h_13_EVENT_PARMS


#define FID_UE5TransformTest_Plugins_PublicContactPlugins_Source_PublicContactPlugins_Public_RuntimeTransformEditor_FocusableObject_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5TransformTest_Plugins_PublicContactPlugins_Source_PublicContactPlugins_Public_RuntimeTransformEditor_FocusableObject_h_13_SPARSE_DATA \
	FID_UE5TransformTest_Plugins_PublicContactPlugins_Source_PublicContactPlugins_Public_RuntimeTransformEditor_FocusableObject_h_13_RPC_WRAPPERS \
	FID_UE5TransformTest_Plugins_PublicContactPlugins_Source_PublicContactPlugins_Public_RuntimeTransformEditor_FocusableObject_h_13_CALLBACK_WRAPPERS \
	FID_UE5TransformTest_Plugins_PublicContactPlugins_Source_PublicContactPlugins_Public_RuntimeTransformEditor_FocusableObject_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UE5TransformTest_Plugins_PublicContactPlugins_Source_PublicContactPlugins_Public_RuntimeTransformEditor_FocusableObject_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5TransformTest_Plugins_PublicContactPlugins_Source_PublicContactPlugins_Public_RuntimeTransformEditor_FocusableObject_h_13_SPARSE_DATA \
	FID_UE5TransformTest_Plugins_PublicContactPlugins_Source_PublicContactPlugins_Public_RuntimeTransformEditor_FocusableObject_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5TransformTest_Plugins_PublicContactPlugins_Source_PublicContactPlugins_Public_RuntimeTransformEditor_FocusableObject_h_13_CALLBACK_WRAPPERS \
	FID_UE5TransformTest_Plugins_PublicContactPlugins_Source_PublicContactPlugins_Public_RuntimeTransformEditor_FocusableObject_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PUBLICCONTACTPLUGINS_API UClass* StaticClass<class UFocusableObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5TransformTest_Plugins_PublicContactPlugins_Source_PublicContactPlugins_Public_RuntimeTransformEditor_FocusableObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
