// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Element_CharacterBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeElement_CharacterBase() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_AElement_CharacterBase();
	AURA_API UClass* Z_Construct_UClass_AElement_CharacterBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	void AElement_CharacterBase::StaticRegisterNativesAElement_CharacterBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AElement_CharacterBase);
	UClass* Z_Construct_UClass_AElement_CharacterBase_NoRegister()
	{
		return AElement_CharacterBase::StaticClass();
	}
	struct Z_Construct_UClass_AElement_CharacterBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weapon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Weapon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AElement_CharacterBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElement_CharacterBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Element_CharacterBase.h" },
		{ "ModuleRelativePath", "Element_CharacterBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElement_CharacterBase_Statics::NewProp_Weapon_MetaData[] = {
		{ "Category", "Combat" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Element_CharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AElement_CharacterBase_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0044000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AElement_CharacterBase, Weapon), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AElement_CharacterBase_Statics::NewProp_Weapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElement_CharacterBase_Statics::NewProp_Weapon_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AElement_CharacterBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElement_CharacterBase_Statics::NewProp_Weapon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AElement_CharacterBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AElement_CharacterBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AElement_CharacterBase_Statics::ClassParams = {
		&AElement_CharacterBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AElement_CharacterBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AElement_CharacterBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AElement_CharacterBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AElement_CharacterBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AElement_CharacterBase()
	{
		if (!Z_Registration_Info_UClass_AElement_CharacterBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AElement_CharacterBase.OuterSingleton, Z_Construct_UClass_AElement_CharacterBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AElement_CharacterBase.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<AElement_CharacterBase>()
	{
		return AElement_CharacterBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AElement_CharacterBase);
	AElement_CharacterBase::~AElement_CharacterBase() {}
	struct Z_CompiledInDeferFile_FID_Element_Magician_Aura_UE_Version_5_2_Aura_Source_Aura_Element_CharacterBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Element_Magician_Aura_UE_Version_5_2_Aura_Source_Aura_Element_CharacterBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AElement_CharacterBase, AElement_CharacterBase::StaticClass, TEXT("AElement_CharacterBase"), &Z_Registration_Info_UClass_AElement_CharacterBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AElement_CharacterBase), 2513873494U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Element_Magician_Aura_UE_Version_5_2_Aura_Source_Aura_Element_CharacterBase_h_1215331401(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Element_Magician_Aura_UE_Version_5_2_Aura_Source_Aura_Element_CharacterBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Element_Magician_Aura_UE_Version_5_2_Aura_Source_Aura_Element_CharacterBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
