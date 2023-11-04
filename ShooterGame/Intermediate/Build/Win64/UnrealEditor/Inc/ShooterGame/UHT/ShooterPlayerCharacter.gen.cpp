// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterGame/ShooterPlayerCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterPlayerCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterPlayerCharacter();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterPlayerCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ShooterGame();
// End Cross Module References
	void AShooterPlayerCharacter::StaticRegisterNativesAShooterPlayerCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShooterPlayerCharacter);
	UClass* Z_Construct_UClass_AShooterPlayerCharacter_NoRegister()
	{
		return AShooterPlayerCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AShooterPlayerCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShooterPlayerCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterPlayerCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ShooterPlayerCharacter.h" },
		{ "ModuleRelativePath", "ShooterPlayerCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShooterPlayerCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterPlayerCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AShooterPlayerCharacter_Statics::ClassParams = {
		&AShooterPlayerCharacter::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AShooterPlayerCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPlayerCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShooterPlayerCharacter()
	{
		if (!Z_Registration_Info_UClass_AShooterPlayerCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShooterPlayerCharacter.OuterSingleton, Z_Construct_UClass_AShooterPlayerCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AShooterPlayerCharacter.OuterSingleton;
	}
	template<> SHOOTERGAME_API UClass* StaticClass<AShooterPlayerCharacter>()
	{
		return AShooterPlayerCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterPlayerCharacter);
	AShooterPlayerCharacter::~AShooterPlayerCharacter() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Games_Shooter_Shooter_ShooterGame_Source_ShooterGame_ShooterPlayerCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Games_Shooter_Shooter_ShooterGame_Source_ShooterGame_ShooterPlayerCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AShooterPlayerCharacter, AShooterPlayerCharacter::StaticClass, TEXT("AShooterPlayerCharacter"), &Z_Registration_Info_UClass_AShooterPlayerCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShooterPlayerCharacter), 2652427519U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Games_Shooter_Shooter_ShooterGame_Source_ShooterGame_ShooterPlayerCharacter_h_627371701(TEXT("/Script/ShooterGame"),
		Z_CompiledInDeferFile_FID_Unreal_Games_Shooter_Shooter_ShooterGame_Source_ShooterGame_ShooterPlayerCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Games_Shooter_Shooter_ShooterGame_Source_ShooterGame_ShooterPlayerCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
