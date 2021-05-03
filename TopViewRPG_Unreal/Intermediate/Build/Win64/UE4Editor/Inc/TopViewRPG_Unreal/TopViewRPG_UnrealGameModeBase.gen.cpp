// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopViewRPG_Unreal/TopViewRPG_UnrealGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTopViewRPG_UnrealGameModeBase() {}
// Cross Module References
	TOPVIEWRPG_UNREAL_API UClass* Z_Construct_UClass_ATopViewRPG_UnrealGameModeBase_NoRegister();
	TOPVIEWRPG_UNREAL_API UClass* Z_Construct_UClass_ATopViewRPG_UnrealGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TopViewRPG_Unreal();
// End Cross Module References
	void ATopViewRPG_UnrealGameModeBase::StaticRegisterNativesATopViewRPG_UnrealGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ATopViewRPG_UnrealGameModeBase_NoRegister()
	{
		return ATopViewRPG_UnrealGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ATopViewRPG_UnrealGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATopViewRPG_UnrealGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TopViewRPG_Unreal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopViewRPG_UnrealGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TopViewRPG_UnrealGameModeBase.h" },
		{ "ModuleRelativePath", "TopViewRPG_UnrealGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATopViewRPG_UnrealGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATopViewRPG_UnrealGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATopViewRPG_UnrealGameModeBase_Statics::ClassParams = {
		&ATopViewRPG_UnrealGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ATopViewRPG_UnrealGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATopViewRPG_UnrealGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATopViewRPG_UnrealGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATopViewRPG_UnrealGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATopViewRPG_UnrealGameModeBase, 1284640786);
	template<> TOPVIEWRPG_UNREAL_API UClass* StaticClass<ATopViewRPG_UnrealGameModeBase>()
	{
		return ATopViewRPG_UnrealGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATopViewRPG_UnrealGameModeBase(Z_Construct_UClass_ATopViewRPG_UnrealGameModeBase, &ATopViewRPG_UnrealGameModeBase::StaticClass, TEXT("/Script/TopViewRPG_Unreal"), TEXT("ATopViewRPG_UnrealGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATopViewRPG_UnrealGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
