// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BanSungOFFLINE_CPlus/Enermy/Enermy_Boss.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnermy_Boss() {}

// Begin Cross Module References
BANSUNGOFFLINE_CPLUS_API UClass* Z_Construct_UClass_AEnermy();
BANSUNGOFFLINE_CPLUS_API UClass* Z_Construct_UClass_AEnermy_Boss();
BANSUNGOFFLINE_CPLUS_API UClass* Z_Construct_UClass_AEnermy_Boss_NoRegister();
UPackage* Z_Construct_UPackage__Script_BanSungOFFLINE_CPlus();
// End Cross Module References

// Begin Class AEnermy_Boss
void AEnermy_Boss::StaticRegisterNativesAEnermy_Boss()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnermy_Boss);
UClass* Z_Construct_UClass_AEnermy_Boss_NoRegister()
{
	return AEnermy_Boss::StaticClass();
}
struct Z_Construct_UClass_AEnermy_Boss_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Enermy/Enermy_Boss.h" },
		{ "ModuleRelativePath", "Enermy/Enermy_Boss.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnermy_Boss>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AEnermy_Boss_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AEnermy,
	(UObject* (*)())Z_Construct_UPackage__Script_BanSungOFFLINE_CPlus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnermy_Boss_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnermy_Boss_Statics::ClassParams = {
	&AEnermy_Boss::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnermy_Boss_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnermy_Boss_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnermy_Boss()
{
	if (!Z_Registration_Info_UClass_AEnermy_Boss.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnermy_Boss.OuterSingleton, Z_Construct_UClass_AEnermy_Boss_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnermy_Boss.OuterSingleton;
}
template<> BANSUNGOFFLINE_CPLUS_API UClass* StaticClass<AEnermy_Boss>()
{
	return AEnermy_Boss::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnermy_Boss);
AEnermy_Boss::~AEnermy_Boss() {}
// End Class AEnermy_Boss

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Newww_BanSungOFFLINE_CPlus_Source_BanSungOFFLINE_CPlus_Enermy_Enermy_Boss_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnermy_Boss, AEnermy_Boss::StaticClass, TEXT("AEnermy_Boss"), &Z_Registration_Info_UClass_AEnermy_Boss, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnermy_Boss), 3739843470U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Newww_BanSungOFFLINE_CPlus_Source_BanSungOFFLINE_CPlus_Enermy_Enermy_Boss_h_1059381261(TEXT("/Script/BanSungOFFLINE_CPlus"),
	Z_CompiledInDeferFile_FID_Unreal_Newww_BanSungOFFLINE_CPlus_Source_BanSungOFFLINE_CPlus_Enermy_Enermy_Boss_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Newww_BanSungOFFLINE_CPlus_Source_BanSungOFFLINE_CPlus_Enermy_Enermy_Boss_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
