// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopViewRPG_Unreal/Game/InGame/Character_InGame.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacter_InGame() {}
// Cross Module References
	TOPVIEWRPG_UNREAL_API UClass* Z_Construct_UClass_ACharacter_InGame_NoRegister();
	TOPVIEWRPG_UNREAL_API UClass* Z_Construct_UClass_ACharacter_InGame();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_TopViewRPG_Unreal();
// End Cross Module References
	void ACharacter_InGame::StaticRegisterNativesACharacter_InGame()
	{
	}
	UClass* Z_Construct_UClass_ACharacter_InGame_NoRegister()
	{
		return ACharacter_InGame::StaticClass();
	}
	struct Z_Construct_UClass_ACharacter_InGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACharacter_InGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_TopViewRPG_Unreal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter_InGame_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Game/InGame/Character_InGame.h" },
		{ "ModuleRelativePath", "Game/InGame/Character_InGame.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACharacter_InGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACharacter_InGame>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACharacter_InGame_Statics::ClassParams = {
		&ACharacter_InGame::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACharacter_InGame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_InGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACharacter_InGame()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACharacter_InGame_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACharacter_InGame, 3997436767);
	template<> TOPVIEWRPG_UNREAL_API UClass* StaticClass<ACharacter_InGame>()
	{
		return ACharacter_InGame::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACharacter_InGame(Z_Construct_UClass_ACharacter_InGame, &ACharacter_InGame::StaticClass, TEXT("/Script/TopViewRPG_Unreal"), TEXT("ACharacter_InGame"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACharacter_InGame);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
