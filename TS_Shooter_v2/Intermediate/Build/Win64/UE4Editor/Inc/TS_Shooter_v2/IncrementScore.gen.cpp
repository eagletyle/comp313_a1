// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TS_Shooter_v2/IncrementScore.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIncrementScore() {}
// Cross Module References
	TS_SHOOTER_V2_API UClass* Z_Construct_UClass_UIncrementScore_NoRegister();
	TS_SHOOTER_V2_API UClass* Z_Construct_UClass_UIncrementScore();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_TS_Shooter_v2();
// End Cross Module References
	void UIncrementScore::StaticRegisterNativesUIncrementScore()
	{
	}
	UClass* Z_Construct_UClass_UIncrementScore_NoRegister()
	{
		return UIncrementScore::StaticClass();
	}
	struct Z_Construct_UClass_UIncrementScore_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIncrementScore_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_TS_Shooter_v2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIncrementScore_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "IncrementScore.h" },
		{ "ModuleRelativePath", "IncrementScore.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIncrementScore_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIncrementScore>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIncrementScore_Statics::ClassParams = {
		&UIncrementScore::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIncrementScore_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIncrementScore_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIncrementScore()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIncrementScore_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIncrementScore, 680147802);
	template<> TS_SHOOTER_V2_API UClass* StaticClass<UIncrementScore>()
	{
		return UIncrementScore::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIncrementScore(Z_Construct_UClass_UIncrementScore, &UIncrementScore::StaticClass, TEXT("/Script/TS_Shooter_v2"), TEXT("UIncrementScore"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIncrementScore);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
