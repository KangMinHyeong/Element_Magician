// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Element_PlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeElement_PlayerController() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_AElement_PlayerController();
	AURA_API UClass* Z_Construct_UClass_AElement_PlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	void AElement_PlayerController::StaticRegisterNativesAElement_PlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AElement_PlayerController);
	UClass* Z_Construct_UClass_AElement_PlayerController_NoRegister()
	{
		return AElement_PlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AElement_PlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IMC_Move_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_IMC_Move;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IA_Move_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_IA_Move;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AElement_PlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElement_PlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Element_PlayerController.h" },
		{ "ModuleRelativePath", "Element_PlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElement_PlayerController_Statics::NewProp_IMC_Move_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Element_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AElement_PlayerController_Statics::NewProp_IMC_Move = { "IMC_Move", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AElement_PlayerController, IMC_Move), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AElement_PlayerController_Statics::NewProp_IMC_Move_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElement_PlayerController_Statics::NewProp_IMC_Move_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElement_PlayerController_Statics::NewProp_IA_Move_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Element_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AElement_PlayerController_Statics::NewProp_IA_Move = { "IA_Move", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AElement_PlayerController, IA_Move), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AElement_PlayerController_Statics::NewProp_IA_Move_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElement_PlayerController_Statics::NewProp_IA_Move_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AElement_PlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElement_PlayerController_Statics::NewProp_IMC_Move,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElement_PlayerController_Statics::NewProp_IA_Move,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AElement_PlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AElement_PlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AElement_PlayerController_Statics::ClassParams = {
		&AElement_PlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AElement_PlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AElement_PlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AElement_PlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AElement_PlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AElement_PlayerController()
	{
		if (!Z_Registration_Info_UClass_AElement_PlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AElement_PlayerController.OuterSingleton, Z_Construct_UClass_AElement_PlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AElement_PlayerController.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<AElement_PlayerController>()
	{
		return AElement_PlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AElement_PlayerController);
	AElement_PlayerController::~AElement_PlayerController() {}
	struct Z_CompiledInDeferFile_FID_Element_Magician_Aura_UE_Version_5_2_Aura_Source_Aura_Element_PlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Element_Magician_Aura_UE_Version_5_2_Aura_Source_Aura_Element_PlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AElement_PlayerController, AElement_PlayerController::StaticClass, TEXT("AElement_PlayerController"), &Z_Registration_Info_UClass_AElement_PlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AElement_PlayerController), 413809477U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Element_Magician_Aura_UE_Version_5_2_Aura_Source_Aura_Element_PlayerController_h_189071666(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Element_Magician_Aura_UE_Version_5_2_Aura_Source_Aura_Element_PlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Element_Magician_Aura_UE_Version_5_2_Aura_Source_Aura_Element_PlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
