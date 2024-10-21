// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BanSungOFFLINE_CPlus/Enermy/Enermy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnermy() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UPawnSensingComponent_NoRegister();
BANSUNGOFFLINE_CPLUS_API UClass* Z_Construct_UClass_AEnermy();
BANSUNGOFFLINE_CPLUS_API UClass* Z_Construct_UClass_AEnermy_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_BanSungOFFLINE_CPlus();
// End Cross Module References

// Begin Class AEnermy
void AEnermy::StaticRegisterNativesAEnermy()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnermy);
UClass* Z_Construct_UClass_AEnermy_NoRegister()
{
	return AEnermy::StaticClass();
}
struct Z_Construct_UClass_AEnermy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Enermy/Enermy.h" },
		{ "ModuleRelativePath", "Enermy/Enermy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PawnSensingComponent_MetaData[] = {
		{ "Category", "AI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enermy/Enermy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereComponent_MetaData[] = {
		{ "Category", "Enermy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enermy/Enermy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeathAnimation_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Enermy/Enermy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackDistance_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Enermy/Enermy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackAnimation_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Enermy/Enermy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[] = {
		{ "Category", "Gun Properties" },
		{ "ModuleRelativePath", "Enermy/Enermy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "Gun Properties" },
		{ "ModuleRelativePath", "Enermy/Enermy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "Gun Properties" },
		{ "ModuleRelativePath", "Enermy/Enermy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PawnSensingComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DeathAnimation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackDistance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackAnimation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Type;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnermy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnermy_Statics::NewProp_PawnSensingComponent = { "PawnSensingComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnermy, PawnSensingComponent), Z_Construct_UClass_UPawnSensingComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PawnSensingComponent_MetaData), NewProp_PawnSensingComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnermy_Statics::NewProp_SphereComponent = { "SphereComponent", nullptr, (EPropertyFlags)0x002008000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnermy, SphereComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereComponent_MetaData), NewProp_SphereComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnermy_Statics::NewProp_DeathAnimation = { "DeathAnimation", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnermy, DeathAnimation), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeathAnimation_MetaData), NewProp_DeathAnimation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnermy_Statics::NewProp_AttackDistance = { "AttackDistance", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnermy, AttackDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackDistance_MetaData), NewProp_AttackDistance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnermy_Statics::NewProp_AttackAnimation = { "AttackAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnermy, AttackAnimation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackAnimation_MetaData), NewProp_AttackAnimation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnermy_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnermy, Damage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Damage_MetaData), NewProp_Damage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnermy_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnermy, Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AEnermy_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnermy, Type), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnermy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnermy_Statics::NewProp_PawnSensingComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnermy_Statics::NewProp_SphereComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnermy_Statics::NewProp_DeathAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnermy_Statics::NewProp_AttackDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnermy_Statics::NewProp_AttackAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnermy_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnermy_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnermy_Statics::NewProp_Type,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnermy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEnermy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_BanSungOFFLINE_CPlus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnermy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnermy_Statics::ClassParams = {
	&AEnermy::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AEnermy_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AEnermy_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnermy_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnermy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnermy()
{
	if (!Z_Registration_Info_UClass_AEnermy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnermy.OuterSingleton, Z_Construct_UClass_AEnermy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnermy.OuterSingleton;
}
template<> BANSUNGOFFLINE_CPLUS_API UClass* StaticClass<AEnermy>()
{
	return AEnermy::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnermy);
AEnermy::~AEnermy() {}
// End Class AEnermy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Newww_BanSungOFFLINE_CPlus_Source_BanSungOFFLINE_CPlus_Enermy_Enermy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnermy, AEnermy::StaticClass, TEXT("AEnermy"), &Z_Registration_Info_UClass_AEnermy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnermy), 3242445007U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Newww_BanSungOFFLINE_CPlus_Source_BanSungOFFLINE_CPlus_Enermy_Enermy_h_2536419314(TEXT("/Script/BanSungOFFLINE_CPlus"),
	Z_CompiledInDeferFile_FID_Unreal_Newww_BanSungOFFLINE_CPlus_Source_BanSungOFFLINE_CPlus_Enermy_Enermy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Newww_BanSungOFFLINE_CPlus_Source_BanSungOFFLINE_CPlus_Enermy_Enermy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
