// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstPersonGame/TimerIncrementBlueprint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimerIncrementBlueprint() {}
// Cross Module References
	FIRSTPERSONGAME_API UClass* Z_Construct_UClass_UTimerIncrementBlueprint_NoRegister();
	FIRSTPERSONGAME_API UClass* Z_Construct_UClass_UTimerIncrementBlueprint();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_FirstPersonGame();
// End Cross Module References
	DEFINE_FUNCTION(UTimerIncrementBlueprint::execIncrementTimer)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_time);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UTimerIncrementBlueprint::IncrementTimer(Z_Param_time);
		P_NATIVE_END;
	}
	void UTimerIncrementBlueprint::StaticRegisterNativesUTimerIncrementBlueprint()
	{
		UClass* Class = UTimerIncrementBlueprint::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IncrementTimer", &UTimerIncrementBlueprint::execIncrementTimer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTimerIncrementBlueprint_IncrementTimer_Statics
	{
		struct TimerIncrementBlueprint_eventIncrementTimer_Parms
		{
			int32 time;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_time;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UTimerIncrementBlueprint_IncrementTimer_Statics::NewProp_time = { "time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimerIncrementBlueprint_eventIncrementTimer_Parms, time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UTimerIncrementBlueprint_IncrementTimer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimerIncrementBlueprint_eventIncrementTimer_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimerIncrementBlueprint_IncrementTimer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimerIncrementBlueprint_IncrementTimer_Statics::NewProp_time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimerIncrementBlueprint_IncrementTimer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimerIncrementBlueprint_IncrementTimer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Time" },
		{ "CompactNodeTitle", "TimerIncr" },
		{ "DisplayName", "Timer Increment" },
		{ "ModuleRelativePath", "TimerIncrementBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimerIncrementBlueprint_IncrementTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimerIncrementBlueprint, nullptr, "IncrementTimer", nullptr, nullptr, sizeof(TimerIncrementBlueprint_eventIncrementTimer_Parms), Z_Construct_UFunction_UTimerIncrementBlueprint_IncrementTimer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimerIncrementBlueprint_IncrementTimer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimerIncrementBlueprint_IncrementTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimerIncrementBlueprint_IncrementTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimerIncrementBlueprint_IncrementTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimerIncrementBlueprint_IncrementTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTimerIncrementBlueprint_NoRegister()
	{
		return UTimerIncrementBlueprint::StaticClass();
	}
	struct Z_Construct_UClass_UTimerIncrementBlueprint_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTimerIncrementBlueprint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstPersonGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTimerIncrementBlueprint_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTimerIncrementBlueprint_IncrementTimer, "IncrementTimer" }, // 818255412
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimerIncrementBlueprint_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "TimerIncrementBlueprint.h" },
		{ "ModuleRelativePath", "TimerIncrementBlueprint.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTimerIncrementBlueprint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTimerIncrementBlueprint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTimerIncrementBlueprint_Statics::ClassParams = {
		&UTimerIncrementBlueprint::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTimerIncrementBlueprint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTimerIncrementBlueprint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTimerIncrementBlueprint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTimerIncrementBlueprint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTimerIncrementBlueprint, 2659795928);
	template<> FIRSTPERSONGAME_API UClass* StaticClass<UTimerIncrementBlueprint>()
	{
		return UTimerIncrementBlueprint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTimerIncrementBlueprint(Z_Construct_UClass_UTimerIncrementBlueprint, &UTimerIncrementBlueprint::StaticClass, TEXT("/Script/FirstPersonGame"), TEXT("UTimerIncrementBlueprint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTimerIncrementBlueprint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
