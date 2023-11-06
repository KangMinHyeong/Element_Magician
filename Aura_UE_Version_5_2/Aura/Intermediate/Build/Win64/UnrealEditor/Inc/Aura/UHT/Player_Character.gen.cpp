// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Player_Character.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayer_Character() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_AElement_CharacterBase();
	AURA_API UClass* Z_Construct_UClass_APlayer_Character();
	AURA_API UClass* Z_Construct_UClass_APlayer_Character_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	void APlayer_Character::StaticRegisterNativesAPlayer_Character()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayer_Character);
	UClass* Z_Construct_UClass_APlayer_Character_NoRegister()
	{
		return APlayer_Character::StaticClass();
	}
	struct Z_Construct_UClass_APlayer_Character_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayer_Character_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AElement_CharacterBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer_Character_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player_Character.h" },
		{ "ModuleRelativePath", "Player_Character.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer_Character_Statics::NewProp_SpringArm_MetaData[] = {
		{ "Category", "Player_Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player_Character.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayer_Character_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayer_Character, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayer_Character_Statics::NewProp_SpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayer_Character_Statics::NewProp_SpringArm_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer_Character_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "Player_Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player_Character.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayer_Character_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayer_Character, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayer_Character_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayer_Character_Statics::NewProp_Camera_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayer_Character_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer_Character_Statics::NewProp_SpringArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer_Character_Statics::NewProp_Camera,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayer_Character_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayer_Character>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayer_Character_Statics::ClassParams = {
		&APlayer_Character::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APlayer_Character_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APlayer_Character_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayer_Character_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayer_Character_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayer_Character()
	{
		if (!Z_Registration_Info_UClass_APlayer_Character.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayer_Character.OuterSingleton, Z_Construct_UClass_APlayer_Character_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlayer_Character.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<APlayer_Character>()
	{
		return APlayer_Character::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayer_Character);
	APlayer_Character::~APlayer_Character() {}
	struct Z_CompiledInDeferFile_FID_Element_Magician_Aura_UE_Version_5_2_Aura_Source_Aura_Player_Character_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Element_Magician_Aura_UE_Version_5_2_Aura_Source_Aura_Player_Character_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlayer_Character, APlayer_Character::StaticClass, TEXT("APlayer_Character"), &Z_Registration_Info_UClass_APlayer_Character, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayer_Character), 2572165587U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Element_Magician_Aura_UE_Version_5_2_Aura_Source_Aura_Player_Character_h_3442117040(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Element_Magician_Aura_UE_Version_5_2_Aura_Source_Aura_Player_Character_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Element_Magician_Aura_UE_Version_5_2_Aura_Source_Aura_Player_Character_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
