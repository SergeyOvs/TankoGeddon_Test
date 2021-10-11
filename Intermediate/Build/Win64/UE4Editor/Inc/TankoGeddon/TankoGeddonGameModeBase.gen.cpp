// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TankoGeddon/TankoGeddonGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTankoGeddonGameModeBase() {}
// Cross Module References
	TANKOGEDDON_API UClass* Z_Construct_UClass_ATankoGeddonGameModeBase_NoRegister();
	TANKOGEDDON_API UClass* Z_Construct_UClass_ATankoGeddonGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TankoGeddon();
// End Cross Module References
	void ATankoGeddonGameModeBase::StaticRegisterNativesATankoGeddonGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ATankoGeddonGameModeBase_NoRegister()
	{
		return ATankoGeddonGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ATankoGeddonGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATankoGeddonGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TankoGeddon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankoGeddonGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TankoGeddonGameModeBase.h" },
		{ "ModuleRelativePath", "TankoGeddonGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATankoGeddonGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATankoGeddonGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATankoGeddonGameModeBase_Statics::ClassParams = {
		&ATankoGeddonGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ATankoGeddonGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATankoGeddonGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATankoGeddonGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATankoGeddonGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATankoGeddonGameModeBase, 3578171893);
	template<> TANKOGEDDON_API UClass* StaticClass<ATankoGeddonGameModeBase>()
	{
		return ATankoGeddonGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATankoGeddonGameModeBase(Z_Construct_UClass_ATankoGeddonGameModeBase, &ATankoGeddonGameModeBase::StaticClass, TEXT("/Script/TankoGeddon"), TEXT("ATankoGeddonGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATankoGeddonGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
