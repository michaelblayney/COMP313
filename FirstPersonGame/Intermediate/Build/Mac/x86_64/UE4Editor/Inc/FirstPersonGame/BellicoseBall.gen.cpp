// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstPersonGame/BellicoseBall.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBellicoseBall() {}
// Cross Module References
	FIRSTPERSONGAME_API UClass* Z_Construct_UClass_ABellicoseBall_NoRegister();
	FIRSTPERSONGAME_API UClass* Z_Construct_UClass_ABellicoseBall();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_FirstPersonGame();
// End Cross Module References
	static FName NAME_ABellicoseBall_MoveToPlayer = FName(TEXT("MoveToPlayer"));
	void ABellicoseBall::MoveToPlayer()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABellicoseBall_MoveToPlayer),NULL);
	}
	void ABellicoseBall::StaticRegisterNativesABellicoseBall()
	{
	}
	struct Z_Construct_UFunction_ABellicoseBall_MoveToPlayer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABellicoseBall_MoveToPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Move" },
		{ "ModuleRelativePath", "BellicoseBall.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABellicoseBall_MoveToPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABellicoseBall, nullptr, "MoveToPlayer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABellicoseBall_MoveToPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABellicoseBall_MoveToPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABellicoseBall_MoveToPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABellicoseBall_MoveToPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABellicoseBall_NoRegister()
	{
		return ABellicoseBall::StaticClass();
	}
	struct Z_Construct_UClass_ABellicoseBall_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABellicoseBall_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstPersonGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABellicoseBall_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABellicoseBall_MoveToPlayer, "MoveToPlayer" }, // 2029915251
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABellicoseBall_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BellicoseBall.h" },
		{ "ModuleRelativePath", "BellicoseBall.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABellicoseBall_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABellicoseBall>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABellicoseBall_Statics::ClassParams = {
		&ABellicoseBall::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABellicoseBall_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABellicoseBall_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABellicoseBall()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABellicoseBall_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABellicoseBall, 131188746);
	template<> FIRSTPERSONGAME_API UClass* StaticClass<ABellicoseBall>()
	{
		return ABellicoseBall::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABellicoseBall(Z_Construct_UClass_ABellicoseBall, &ABellicoseBall::StaticClass, TEXT("/Script/FirstPersonGame"), TEXT("ABellicoseBall"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABellicoseBall);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
