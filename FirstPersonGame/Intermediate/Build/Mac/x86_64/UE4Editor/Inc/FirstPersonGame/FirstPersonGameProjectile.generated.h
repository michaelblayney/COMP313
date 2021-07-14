// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef FIRSTPERSONGAME_FirstPersonGameProjectile_generated_h
#error "FirstPersonGameProjectile.generated.h already included, missing '#pragma once' in FirstPersonGameProjectile.h"
#endif
#define FIRSTPERSONGAME_FirstPersonGameProjectile_generated_h

#define FirstPersonGame_Source_FirstPersonGame_FirstPersonGameProjectile_h_15_SPARSE_DATA
#define FirstPersonGame_Source_FirstPersonGame_FirstPersonGameProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FirstPersonGame_Source_FirstPersonGame_FirstPersonGameProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FirstPersonGame_Source_FirstPersonGame_FirstPersonGameProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFirstPersonGameProjectile(); \
	friend struct Z_Construct_UClass_AFirstPersonGameProjectile_Statics; \
public: \
	DECLARE_CLASS(AFirstPersonGameProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstPersonGame"), NO_API) \
	DECLARE_SERIALIZER(AFirstPersonGameProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FirstPersonGame_Source_FirstPersonGame_FirstPersonGameProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAFirstPersonGameProjectile(); \
	friend struct Z_Construct_UClass_AFirstPersonGameProjectile_Statics; \
public: \
	DECLARE_CLASS(AFirstPersonGameProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstPersonGame"), NO_API) \
	DECLARE_SERIALIZER(AFirstPersonGameProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FirstPersonGame_Source_FirstPersonGame_FirstPersonGameProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFirstPersonGameProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFirstPersonGameProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstPersonGameProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstPersonGameProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirstPersonGameProjectile(AFirstPersonGameProjectile&&); \
	NO_API AFirstPersonGameProjectile(const AFirstPersonGameProjectile&); \
public:


#define FirstPersonGame_Source_FirstPersonGame_FirstPersonGameProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirstPersonGameProjectile(AFirstPersonGameProjectile&&); \
	NO_API AFirstPersonGameProjectile(const AFirstPersonGameProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstPersonGameProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstPersonGameProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFirstPersonGameProjectile)


#define FirstPersonGame_Source_FirstPersonGame_FirstPersonGameProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AFirstPersonGameProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AFirstPersonGameProjectile, ProjectileMovement); }


#define FirstPersonGame_Source_FirstPersonGame_FirstPersonGameProjectile_h_12_PROLOG
#define FirstPersonGame_Source_FirstPersonGame_FirstPersonGameProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstPersonGame_Source_FirstPersonGame_FirstPersonGameProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FirstPersonGame_Source_FirstPersonGame_FirstPersonGameProjectile_h_15_SPARSE_DATA \
	FirstPersonGame_Source_FirstPersonGame_FirstPersonGameProjectile_h_15_RPC_WRAPPERS \
	FirstPersonGame_Source_FirstPersonGame_FirstPersonGameProjectile_h_15_INCLASS \
	FirstPersonGame_Source_FirstPersonGame_FirstPersonGameProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FirstPersonGame_Source_FirstPersonGame_FirstPersonGameProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstPersonGame_Source_FirstPersonGame_FirstPersonGameProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FirstPersonGame_Source_FirstPersonGame_FirstPersonGameProjectile_h_15_SPARSE_DATA \
	FirstPersonGame_Source_FirstPersonGame_FirstPersonGameProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FirstPersonGame_Source_FirstPersonGame_FirstPersonGameProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FirstPersonGame_Source_FirstPersonGame_FirstPersonGameProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTPERSONGAME_API UClass* StaticClass<class AFirstPersonGameProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FirstPersonGame_Source_FirstPersonGame_FirstPersonGameProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
