// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Enemy_CharacterBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemy_CharacterBase() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_AElement_CharacterBase();
	AURA_API UClass* Z_Construct_UClass_AEnemy_CharacterBase();
	AURA_API UClass* Z_Construct_UClass_AEnemy_CharacterBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	void AEnemy_CharacterBase::StaticRegisterNativesAEnemy_CharacterBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemy_CharacterBase);
	UClass* Z_Construct_UClass_AEnemy_CharacterBase_NoRegister()
	{
		return AEnemy_CharacterBase::StaticClass();
	}
	struct Z_Construct_UClass_AEnemy_CharacterBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemy_CharacterBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AElement_CharacterBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_CharacterBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Enemy_CharacterBase.h" },
		{ "ModuleRelativePath", "Enemy_CharacterBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemy_CharacterBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemy_CharacterBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemy_CharacterBase_Statics::ClassParams = {
		&AEnemy_CharacterBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEnemy_CharacterBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_CharacterBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemy_CharacterBase()
	{
		if (!Z_Registration_Info_UClass_AEnemy_CharacterBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemy_CharacterBase.OuterSingleton, Z_Construct_UClass_AEnemy_CharacterBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEnemy_CharacterBase.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<AEnemy_CharacterBase>()
	{
		return AEnemy_CharacterBase::StaticClass();
	}
	AEnemy_CharacterBase::AEnemy_CharacterBase() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemy_CharacterBase);
	AEnemy_CharacterBase::~AEnemy_CharacterBase() {}
	struct Z_CompiledInDeferFile_FID_Element_Magician_Aura_UE_Version_5_2_Aura_Source_Aura_Enemy_CharacterBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Element_Magician_Aura_UE_Version_5_2_Aura_Source_Aura_Enemy_CharacterBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnemy_CharacterBase, AEnemy_CharacterBase::StaticClass, TEXT("AEnemy_CharacterBase"), &Z_Registration_Info_UClass_AEnemy_CharacterBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemy_CharacterBase), 3788159057U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Element_Magician_Aura_UE_Version_5_2_Aura_Source_Aura_Enemy_CharacterBase_h_1662956930(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Element_Magician_Aura_UE_Version_5_2_Aura_Source_Aura_Enemy_CharacterBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Element_Magician_Aura_UE_Version_5_2_Aura_Source_Aura_Enemy_CharacterBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
