// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TS_Shooter_v2/IncrementGameScore.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIncrementGameScore() {}
// Cross Module References
	TS_SHOOTER_V2_API UClass* Z_Construct_UClass_UIncrementGameScore_NoRegister();
	TS_SHOOTER_V2_API UClass* Z_Construct_UClass_UIncrementGameScore();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_TS_Shooter_v2();
// End Cross Module References
	DEFINE_FUNCTION(UIncrementGameScore::execGetIncrementGameScore)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_input);
		P_GET_PROPERTY(FIntProperty,Z_Param_currentScore);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UIncrementGameScore::GetIncrementGameScore(Z_Param_input,Z_Param_currentScore);
		P_NATIVE_END;
	}
	void UIncrementGameScore::StaticRegisterNativesUIncrementGameScore()
	{
		UClass* Class = UIncrementGameScore::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetIncrementGameScore", &UIncrementGameScore::execGetIncrementGameScore },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIncrementGameScore_GetIncrementGameScore_Statics
	{
		struct IncrementGameScore_eventGetIncrementGameScore_Parms
		{
			int32 input;
			int32 currentScore;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_currentScore;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_input;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIncrementGameScore_GetIncrementGameScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IncrementGameScore_eventGetIncrementGameScore_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIncrementGameScore_GetIncrementGameScore_Statics::NewProp_currentScore = { "currentScore", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IncrementGameScore_eventGetIncrementGameScore_Parms, currentScore), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIncrementGameScore_GetIncrementGameScore_Statics::NewProp_input = { "input", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IncrementGameScore_eventGetIncrementGameScore_Parms, input), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIncrementGameScore_GetIncrementGameScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIncrementGameScore_GetIncrementGameScore_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIncrementGameScore_GetIncrementGameScore_Statics::NewProp_currentScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIncrementGameScore_GetIncrementGameScore_Statics::NewProp_input,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIncrementGameScore_GetIncrementGameScore_Statics::Function_MetaDataParams[] = {
		{ "Category", "General Parameters" },
		{ "CompactNodeTitle", "IncrementGameScore" },
		{ "DisplayName", "IncrementGameScore" },
		{ "ModuleRelativePath", "IncrementGameScore.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIncrementGameScore_GetIncrementGameScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIncrementGameScore, nullptr, "GetIncrementGameScore", nullptr, nullptr, sizeof(IncrementGameScore_eventGetIncrementGameScore_Parms), Z_Construct_UFunction_UIncrementGameScore_GetIncrementGameScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIncrementGameScore_GetIncrementGameScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIncrementGameScore_GetIncrementGameScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIncrementGameScore_GetIncrementGameScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIncrementGameScore_GetIncrementGameScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIncrementGameScore_GetIncrementGameScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UIncrementGameScore_NoRegister()
	{
		return UIncrementGameScore::StaticClass();
	}
	struct Z_Construct_UClass_UIncrementGameScore_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIncrementGameScore_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_TS_Shooter_v2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIncrementGameScore_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIncrementGameScore_GetIncrementGameScore, "GetIncrementGameScore" }, // 72081087
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIncrementGameScore_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "IncrementGameScore.h" },
		{ "ModuleRelativePath", "IncrementGameScore.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIncrementGameScore_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIncrementGameScore>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIncrementGameScore_Statics::ClassParams = {
		&UIncrementGameScore::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UIncrementGameScore_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIncrementGameScore_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIncrementGameScore()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIncrementGameScore_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIncrementGameScore, 3900066276);
	template<> TS_SHOOTER_V2_API UClass* StaticClass<UIncrementGameScore>()
	{
		return UIncrementGameScore::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIncrementGameScore(Z_Construct_UClass_UIncrementGameScore, &UIncrementGameScore::StaticClass, TEXT("/Script/TS_Shooter_v2"), TEXT("UIncrementGameScore"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIncrementGameScore);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
