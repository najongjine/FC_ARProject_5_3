// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARProject/ARProjectGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARProjectGameMode() {}
// Cross Module References
	ARPROJECT_API UClass* Z_Construct_UClass_AARProjectGameMode();
	ARPROJECT_API UClass* Z_Construct_UClass_AARProjectGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ARProject();
// End Cross Module References
	void AARProjectGameMode::StaticRegisterNativesAARProjectGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AARProjectGameMode);
	UClass* Z_Construct_UClass_AARProjectGameMode_NoRegister()
	{
		return AARProjectGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AARProjectGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AARProjectGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ARProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AARProjectGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARProjectGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ARProjectGameMode.h" },
		{ "ModuleRelativePath", "ARProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AARProjectGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AARProjectGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AARProjectGameMode_Statics::ClassParams = {
		&AARProjectGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AARProjectGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AARProjectGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AARProjectGameMode()
	{
		if (!Z_Registration_Info_UClass_AARProjectGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AARProjectGameMode.OuterSingleton, Z_Construct_UClass_AARProjectGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AARProjectGameMode.OuterSingleton;
	}
	template<> ARPROJECT_API UClass* StaticClass<AARProjectGameMode>()
	{
		return AARProjectGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AARProjectGameMode);
	AARProjectGameMode::~AARProjectGameMode() {}
	struct Z_CompiledInDeferFile_FID_Unreal_FC_ARProject_5_3_ARProject_Source_ARProject_ARProjectGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_FC_ARProject_5_3_ARProject_Source_ARProject_ARProjectGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AARProjectGameMode, AARProjectGameMode::StaticClass, TEXT("AARProjectGameMode"), &Z_Registration_Info_UClass_AARProjectGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AARProjectGameMode), 313846398U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_FC_ARProject_5_3_ARProject_Source_ARProject_ARProjectGameMode_h_1334224554(TEXT("/Script/ARProject"),
		Z_CompiledInDeferFile_FID_Unreal_FC_ARProject_5_3_ARProject_Source_ARProject_ARProjectGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_FC_ARProject_5_3_ARProject_Source_ARProject_ARProjectGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
