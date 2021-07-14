// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRSTPERSONGAME_FirstPersonGameCharacter_generated_h
#error "FirstPersonGameCharacter.generated.h already included, missing '#pragma once' in FirstPersonGameCharacter.h"
#endif
#define FIRSTPERSONGAME_FirstPersonGameCharacter_generated_h

#define FirstPersonGame_Source_FirstPersonGame_FirstPersonGameCharacter_h_20_SPARSE_DATA
#define FirstPersonGame_Source_FirstPersonGame_FirstPersonGameCharacter_h_20_RPC_WRAPPERS
#define FirstPersonGame_Source_FirstPersonGame_FirstPersonGameCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define FirstPersonGame_Source_FirstPersonGame_FirstPersonGameCharacter_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFirstPersonGameCharacter(); \
	friend struct Z_Construct_UClass_AFirstPersonGameCharacter_Statics; \
public: \
	DECLARE_CLASS(AFirstPersonGameCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstPersonGame"), NO_API) \
	DECLARE_SERIALIZER(AFirstPersonGameCharacter)


#define FirstPersonGame_Source_FirstPersonGame_FirstPersonGameCharacter_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAFirstPersonGameCharacter(); \
	friend struct Z_Construct_UClass_AFirstPersonGameCharacter_Statics; \
public: \
	DECLARE_CLASS(AFirstPersonGameCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstPersonGame"), NO_API) \
	DECLARE_SERIALIZER(AFirstPersonGameCharacter)


#define FirstPersonGame_Source_FirstPersonGame_FirstPersonGameCharacter_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFirstPersonGameCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFirstPersonGameCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstPersonGameCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstPersonGameCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirstPersonGameCharacter(AFirstPersonGameCharacter&&); \
	NO_API AFirstPersonGameCharacter(const AFirstPersonGameCharacter&); \
public:


#define FirstPersonGame_Source_FirstPersonGame_FirstPersonGameCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirstPersonGameCharacter(AFirstPersonGameCharacter&&); \
	NO_API AFirstPersonGameCharacter(const AFirstPersonGameCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstPersonGameCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstPersonGameCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFirstPersonGameCharacter)


#define FirstPersonGame_Source_FirstPersonGame_FirstPersonGameCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AFirstPersonGameCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AFirstPersonGameCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AFirstPersonGameCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AFirstPersonGameCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AFirstPersonGameCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AFirstPersonGameCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AFirstPersonGameCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AFirstPersonGameCharacter, L_MotionController); }


#define FirstPersonGame_Source_FirstPersonGame_FirstPersonGameCharacter_h_17_PROLOG
#define FirstPersonGame_Source_FirstPersonGame_FirstPersonGameCharacter_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstPersonGame_Source_FirstPersonGame_FirstPersonGameCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	FirstPersonGame_Source_FirstPersonGame_FirstPersonGameCharacter_h_20_SPARSE_DATA \
	FirstPersonGame_Source_FirstPersonGame_FirstPersonGameCharacter_h_20_RPC_WRAPPERS \
	FirstPersonGame_Source_FirstPersonGame_FirstPersonGameCharacter_h_20_INCLASS \
	FirstPersonGame_Source_FirstPersonGame_FirstPersonGameCharacter_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FirstPersonGame_Source_FirstPersonGame_FirstPersonGameCharacter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstPersonGame_Source_FirstPersonGame_FirstPersonGameCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	FirstPersonGame_Source_FirstPersonGame_FirstPersonGameCharacter_h_20_SPARSE_DATA \
	FirstPersonGame_Source_FirstPersonGame_FirstPersonGameCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FirstPersonGame_Source_FirstPersonGame_FirstPersonGameCharacter_h_20_INCLASS_NO_PURE_DECLS \
	FirstPersonGame_Source_FirstPersonGame_FirstPersonGameCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTPERSONGAME_API UClass* StaticClass<class AFirstPersonGameCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FirstPersonGame_Source_FirstPersonGame_FirstPersonGameCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
