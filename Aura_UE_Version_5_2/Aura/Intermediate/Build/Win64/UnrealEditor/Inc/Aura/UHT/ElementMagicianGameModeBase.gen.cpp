// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/ElementMagicianGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeElementMagicianGameModeBase() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_AElementMagicianGameModeBase();
	AURA_API UClass* Z_Construct_UClass_AElementMagicianGameModeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	void AElementMagicianGameModeBase::StaticRegisterNativesAElementMagicianGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AElementMagicianGameModeBase);
	UClass* Z_Construct_UClass_AElementMagicianGameModeBase_NoRegister()
	{
		return AElementMagicianGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AElementMagicianGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AElementMagicianGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElementMagicianGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ElementMagicianGameModeBase.h" },
		{ "ModuleRelativePath", "ElementMagicianGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AElementMagicianGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AElementMagicianGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AElementMagicianGameModeBase_Statics::ClassParams = {
		&AElementMagicianGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AElementMagicianGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AElementMagicianGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AElementMagicianGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AElementMagicianGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AElementMagicianGameModeBase.OuterSingleton, Z_Construct_UClass_AElementMagicianGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AElementMagicianGameModeBase.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<AElementMagicianGameModeBase>()
	{
		return AElementMagicianGameModeBase::StaticClass();
	}
	AElementMagicianGameModeBase::AElementMagicianGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AElementMagicianGameModeBase);
	AElementMagicianGameModeBase::~AElementMagicianGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Element_Magician_Aura_UE_Version_5_2_Aura_Source_Aura_ElementMagicianGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Element_Magician_Aura_UE_Version_5_2_Aura_Source_Aura_ElementMagicianGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AElementMagicianGameModeBase, AElementMagicianGameModeBase::StaticClass, TEXT("AElementMagicianGameModeBase"), &Z_Registration_Info_UClass_AElementMagicianGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AElementMagicianGameModeBase), 2423962509U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Element_Magician_Aura_UE_Version_5_2_Aura_Source_Aura_ElementMagicianGameModeBase_h_2681587057(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Element_Magician_Aura_UE_Version_5_2_Aura_Source_Aura_ElementMagicianGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Element_Magician_Aura_UE_Version_5_2_Aura_Source_Aura_ElementMagicianGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
