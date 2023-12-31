// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterGame/ShooterGameGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterGameGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterGameGameModeBase();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterGameGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ShooterGame();
// End Cross Module References
	void AShooterGameGameModeBase::StaticRegisterNativesAShooterGameGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShooterGameGameModeBase);
	UClass* Z_Construct_UClass_AShooterGameGameModeBase_NoRegister()
	{
		return AShooterGameGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AShooterGameGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShooterGameGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterGameGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ShooterGameGameModeBase.h" },
		{ "ModuleRelativePath", "ShooterGameGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShooterGameGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterGameGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AShooterGameGameModeBase_Statics::ClassParams = {
		&AShooterGameGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AShooterGameGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterGameGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShooterGameGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AShooterGameGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShooterGameGameModeBase.OuterSingleton, Z_Construct_UClass_AShooterGameGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AShooterGameGameModeBase.OuterSingleton;
	}
	template<> SHOOTERGAME_API UClass* StaticClass<AShooterGameGameModeBase>()
	{
		return AShooterGameGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterGameGameModeBase);
	AShooterGameGameModeBase::~AShooterGameGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Games_Shooter_Shooter_ShooterGame_Source_ShooterGame_ShooterGameGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Games_Shooter_Shooter_ShooterGame_Source_ShooterGame_ShooterGameGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AShooterGameGameModeBase, AShooterGameGameModeBase::StaticClass, TEXT("AShooterGameGameModeBase"), &Z_Registration_Info_UClass_AShooterGameGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShooterGameGameModeBase), 648020329U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Games_Shooter_Shooter_ShooterGame_Source_ShooterGame_ShooterGameGameModeBase_h_2077773837(TEXT("/Script/ShooterGame"),
		Z_CompiledInDeferFile_FID_Unreal_Games_Shooter_Shooter_ShooterGame_Source_ShooterGame_ShooterGameGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Games_Shooter_Shooter_ShooterGame_Source_ShooterGame_ShooterGameGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
