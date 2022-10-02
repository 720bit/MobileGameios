// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Ketsy/KetsyGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKetsyGameModeBase() {}
// Cross Module References
	KETSY_API UClass* Z_Construct_UClass_AKetsyGameModeBase_NoRegister();
	KETSY_API UClass* Z_Construct_UClass_AKetsyGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Ketsy();
// End Cross Module References
	void AKetsyGameModeBase::StaticRegisterNativesAKetsyGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AKetsyGameModeBase);
	UClass* Z_Construct_UClass_AKetsyGameModeBase_NoRegister()
	{
		return AKetsyGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AKetsyGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKetsyGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Ketsy,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKetsyGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "KetsyGameModeBase.h" },
		{ "ModuleRelativePath", "KetsyGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKetsyGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKetsyGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AKetsyGameModeBase_Statics::ClassParams = {
		&AKetsyGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AKetsyGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AKetsyGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AKetsyGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AKetsyGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AKetsyGameModeBase.OuterSingleton, Z_Construct_UClass_AKetsyGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AKetsyGameModeBase.OuterSingleton;
	}
	template<> KETSY_API UClass* StaticClass<AKetsyGameModeBase>()
	{
		return AKetsyGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKetsyGameModeBase);
	struct Z_CompiledInDeferFile_FID_Ketsy_Source_Ketsy_KetsyGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Ketsy_Source_Ketsy_KetsyGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AKetsyGameModeBase, AKetsyGameModeBase::StaticClass, TEXT("AKetsyGameModeBase"), &Z_Registration_Info_UClass_AKetsyGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AKetsyGameModeBase), 2038909138U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Ketsy_Source_Ketsy_KetsyGameModeBase_h_3264607848(TEXT("/Script/Ketsy"),
		Z_CompiledInDeferFile_FID_Ketsy_Source_Ketsy_KetsyGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Ketsy_Source_Ketsy_KetsyGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
