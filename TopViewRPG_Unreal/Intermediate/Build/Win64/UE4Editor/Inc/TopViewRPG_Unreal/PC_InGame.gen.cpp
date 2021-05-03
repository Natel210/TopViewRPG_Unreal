// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopViewRPG_Unreal/Game/InGame/PC_InGame.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePC_InGame() {}
// Cross Module References
	TOPVIEWRPG_UNREAL_API UClass* Z_Construct_UClass_APC_InGame_NoRegister();
	TOPVIEWRPG_UNREAL_API UClass* Z_Construct_UClass_APC_InGame();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_TopViewRPG_Unreal();
// End Cross Module References
	void APC_InGame::StaticRegisterNativesAPC_InGame()
	{
	}
	UClass* Z_Construct_UClass_APC_InGame_NoRegister()
	{
		return APC_InGame::StaticClass();
	}
	struct Z_Construct_UClass_APC_InGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APC_InGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_TopViewRPG_Unreal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APC_InGame_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Game/InGame/PC_InGame.h" },
		{ "ModuleRelativePath", "Game/InGame/PC_InGame.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APC_InGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APC_InGame>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APC_InGame_Statics::ClassParams = {
		&APC_InGame::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_APC_InGame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APC_InGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APC_InGame()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APC_InGame_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APC_InGame, 1994404873);
	template<> TOPVIEWRPG_UNREAL_API UClass* StaticClass<APC_InGame>()
	{
		return APC_InGame::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APC_InGame(Z_Construct_UClass_APC_InGame, &APC_InGame::StaticClass, TEXT("/Script/TopViewRPG_Unreal"), TEXT("APC_InGame"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APC_InGame);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
