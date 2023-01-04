// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ETransformationType : uint8;
enum class ETransformationDomain : uint8;
class USceneComponent;
#ifdef PUBLICCONTACTPLUGINS_BaseGizmo_generated_h
#error "BaseGizmo.generated.h already included, missing '#pragma once' in BaseGizmo.h"
#endif
#define PUBLICCONTACTPLUGINS_BaseGizmo_generated_h

#define FID_UE5TransformTest_Plugins_PublicContactPlugins_Source_PublicContactPlugins_Public_RuntimeTransformEditor_Gizmos_BaseGizmo_h_10_DELEGATE \
struct _Script_PublicContactPlugins_eventGizmoStateChangedDelegate_Parms \
{ \
	ETransformationType GizmoType; \
	bool bTransformInProgress; \
	ETransformationDomain CurrentDomain; \
}; \
static inline void FGizmoStateChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& GizmoStateChangedDelegate, ETransformationType GizmoType, bool bTransformInProgress, ETransformationDomain CurrentDomain) \
{ \
	_Script_PublicContactPlugins_eventGizmoStateChangedDelegate_Parms Parms; \
	Parms.GizmoType=GizmoType; \
	Parms.bTransformInProgress=bTransformInProgress ? true : false; \
	Parms.CurrentDomain=CurrentDomain; \
	GizmoStateChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UE5TransformTest_Plugins_PublicContactPlugins_Source_PublicContactPlugins_Public_RuntimeTransformEditor_Gizmos_BaseGizmo_h_15_SPARSE_DATA
#define FID_UE5TransformTest_Plugins_PublicContactPlugins_Source_PublicContactPlugins_Public_RuntimeTransformEditor_Gizmos_BaseGizmo_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetTransformProgressState); \
	DECLARE_FUNCTION(execSetTransformProgressState); \
	DECLARE_FUNCTION(execRegisterDomainComponent); \
	DECLARE_FUNCTION(execGetTransformationDomain);


#define FID_UE5TransformTest_Plugins_PublicContactPlugins_Source_PublicContactPlugins_Public_RuntimeTransformEditor_Gizmos_BaseGizmo_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTransformProgressState); \
	DECLARE_FUNCTION(execSetTransformProgressState); \
	DECLARE_FUNCTION(execRegisterDomainComponent); \
	DECLARE_FUNCTION(execGetTransformationDomain);


#define FID_UE5TransformTest_Plugins_PublicContactPlugins_Source_PublicContactPlugins_Public_RuntimeTransformEditor_Gizmos_BaseGizmo_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseGizmo(); \
	friend struct Z_Construct_UClass_ABaseGizmo_Statics; \
public: \
	DECLARE_CLASS(ABaseGizmo, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PublicContactPlugins"), NO_API) \
	DECLARE_SERIALIZER(ABaseGizmo)


#define FID_UE5TransformTest_Plugins_PublicContactPlugins_Source_PublicContactPlugins_Public_RuntimeTransformEditor_Gizmos_BaseGizmo_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABaseGizmo(); \
	friend struct Z_Construct_UClass_ABaseGizmo_Statics; \
public: \
	DECLARE_CLASS(ABaseGizmo, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PublicContactPlugins"), NO_API) \
	DECLARE_SERIALIZER(ABaseGizmo)


#define FID_UE5TransformTest_Plugins_PublicContactPlugins_Source_PublicContactPlugins_Public_RuntimeTransformEditor_Gizmos_BaseGizmo_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseGizmo(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseGizmo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseGizmo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseGizmo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseGizmo(ABaseGizmo&&); \
	NO_API ABaseGizmo(const ABaseGizmo&); \
public:


#define FID_UE5TransformTest_Plugins_PublicContactPlugins_Source_PublicContactPlugins_Public_RuntimeTransformEditor_Gizmos_BaseGizmo_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseGizmo(ABaseGizmo&&); \
	NO_API ABaseGizmo(const ABaseGizmo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseGizmo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseGizmo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseGizmo)


#define FID_UE5TransformTest_Plugins_PublicContactPlugins_Source_PublicContactPlugins_Public_RuntimeTransformEditor_Gizmos_BaseGizmo_h_12_PROLOG
#define FID_UE5TransformTest_Plugins_PublicContactPlugins_Source_PublicContactPlugins_Public_RuntimeTransformEditor_Gizmos_BaseGizmo_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5TransformTest_Plugins_PublicContactPlugins_Source_PublicContactPlugins_Public_RuntimeTransformEditor_Gizmos_BaseGizmo_h_15_SPARSE_DATA \
	FID_UE5TransformTest_Plugins_PublicContactPlugins_Source_PublicContactPlugins_Public_RuntimeTransformEditor_Gizmos_BaseGizmo_h_15_RPC_WRAPPERS \
	FID_UE5TransformTest_Plugins_PublicContactPlugins_Source_PublicContactPlugins_Public_RuntimeTransformEditor_Gizmos_BaseGizmo_h_15_INCLASS \
	FID_UE5TransformTest_Plugins_PublicContactPlugins_Source_PublicContactPlugins_Public_RuntimeTransformEditor_Gizmos_BaseGizmo_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UE5TransformTest_Plugins_PublicContactPlugins_Source_PublicContactPlugins_Public_RuntimeTransformEditor_Gizmos_BaseGizmo_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5TransformTest_Plugins_PublicContactPlugins_Source_PublicContactPlugins_Public_RuntimeTransformEditor_Gizmos_BaseGizmo_h_15_SPARSE_DATA \
	FID_UE5TransformTest_Plugins_PublicContactPlugins_Source_PublicContactPlugins_Public_RuntimeTransformEditor_Gizmos_BaseGizmo_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5TransformTest_Plugins_PublicContactPlugins_Source_PublicContactPlugins_Public_RuntimeTransformEditor_Gizmos_BaseGizmo_h_15_INCLASS_NO_PURE_DECLS \
	FID_UE5TransformTest_Plugins_PublicContactPlugins_Source_PublicContactPlugins_Public_RuntimeTransformEditor_Gizmos_BaseGizmo_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PUBLICCONTACTPLUGINS_API UClass* StaticClass<class ABaseGizmo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5TransformTest_Plugins_PublicContactPlugins_Source_PublicContactPlugins_Public_RuntimeTransformEditor_Gizmos_BaseGizmo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
