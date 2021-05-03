// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopViewRPG_Unreal/Game/InGame/GM_InGame.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGM_InGame() {}
// Cross Module References
	TOPVIEWRPG_UNREAL_API UClass* Z_Construct_UClass_AGM_InGame_NoRegister();
	TOPVIEWRPG_UNREAL_API UClass* Z_Construct_UClass_AGM_InGame();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TopViewRPG_Unreal();
// End Cross Module References
	void AGM_InGame::StaticRegisterNativesAGM_InGame()
	{
	}
	UClass* Z_Construct_UClass_AGM_InGame_NoRegister()
	{
		return AGM_InGame::StaticClass();
	}
	struct Z_Construct_UClass_AGM_InGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGM_InGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TopViewRPG_Unreal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGM_InGame_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Game/InGame/GM_InGame.h" },
		{ "ModuleRelativePath", "Game/InGame/GM_InGame.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGM_InGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGM_InGame>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGM_InGame_Statics::ClassParams = {
		&AGM_InGame::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGM_InGame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGM_InGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGM_InGame()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGM_InGame_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGM_InGame, 1102809817);
	template<> TOPVIEWRPG_UNREAL_API UClass* StaticClass<AGM_InGame>()
	{
		return AGM_InGame::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGM_InGame(Z_Construct_UClass_AGM_InGame, &AGM_InGame::StaticClass, TEXT("/Script/TopViewRPG_Unreal"), TEXT("AGM_InGame"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGM_InGame);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
