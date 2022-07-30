// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MICKE_mickeGameModeBase_generated_h
#error "mickeGameModeBase.generated.h already included, missing '#pragma once' in mickeGameModeBase.h"
#endif
#define MICKE_mickeGameModeBase_generated_h

#define micke_Source_micke_mickeGameModeBase_h_15_SPARSE_DATA
#define micke_Source_micke_mickeGameModeBase_h_15_RPC_WRAPPERS
#define micke_Source_micke_mickeGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define micke_Source_micke_mickeGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAmickeGameModeBase(); \
	friend struct Z_Construct_UClass_AmickeGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AmickeGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/micke"), NO_API) \
	DECLARE_SERIALIZER(AmickeGameModeBase)


#define micke_Source_micke_mickeGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAmickeGameModeBase(); \
	friend struct Z_Construct_UClass_AmickeGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AmickeGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/micke"), NO_API) \
	DECLARE_SERIALIZER(AmickeGameModeBase)


#define micke_Source_micke_mickeGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AmickeGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AmickeGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AmickeGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AmickeGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AmickeGameModeBase(AmickeGameModeBase&&); \
	NO_API AmickeGameModeBase(const AmickeGameModeBase&); \
public:


#define micke_Source_micke_mickeGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AmickeGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AmickeGameModeBase(AmickeGameModeBase&&); \
	NO_API AmickeGameModeBase(const AmickeGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AmickeGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AmickeGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AmickeGameModeBase)


#define micke_Source_micke_mickeGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET
#define micke_Source_micke_mickeGameModeBase_h_12_PROLOG
#define micke_Source_micke_mickeGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	micke_Source_micke_mickeGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	micke_Source_micke_mickeGameModeBase_h_15_SPARSE_DATA \
	micke_Source_micke_mickeGameModeBase_h_15_RPC_WRAPPERS \
	micke_Source_micke_mickeGameModeBase_h_15_INCLASS \
	micke_Source_micke_mickeGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define micke_Source_micke_mickeGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	micke_Source_micke_mickeGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	micke_Source_micke_mickeGameModeBase_h_15_SPARSE_DATA \
	micke_Source_micke_mickeGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	micke_Source_micke_mickeGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	micke_Source_micke_mickeGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MICKE_API UClass* StaticClass<class AmickeGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID micke_Source_micke_mickeGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
