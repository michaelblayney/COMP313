// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstPersonGame/FirstPersonGameHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirstPersonGameHUD() {}
// Cross Module References
	FIRSTPERSONGAME_API UClass* Z_Construct_UClass_AFirstPersonGameHUD_NoRegister();
	FIRSTPERSONGAME_API UClass* Z_Construct_UClass_AFirstPersonGameHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_FirstPersonGame();
// End Cross Module References
	void AFirstPersonGameHUD::StaticRegisterNativesAFirstPersonGameHUD()
	{
	}
	UClass* Z_Construct_UClass_AFirstPersonGameHUD_NoRegister()
	{
		return AFirstPersonGameHUD::StaticClass();
	}
	struct Z_Construct_UClass_AFirstPersonGameHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFirstPersonGameHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstPersonGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonGameHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "FirstPersonGameHUD.h" },
		{ "ModuleRelativePath", "FirstPersonGameHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFirstPersonGameHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFirstPersonGameHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFirstPersonGameHUD_Statics::ClassParams = {
		&AFirstPersonGameHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFirstPersonGameHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonGameHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFirstPersonGameHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFirstPersonGameHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFirstPersonGameHUD, 1125539316);
	template<> FIRSTPERSONGAME_API UClass* StaticClass<AFirstPersonGameHUD>()
	{
		return AFirstPersonGameHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFirstPersonGameHUD(Z_Construct_UClass_AFirstPersonGameHUD, &AFirstPersonGameHUD::StaticClass, TEXT("/Script/FirstPersonGame"), TEXT("AFirstPersonGameHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFirstPersonGameHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
