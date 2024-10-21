// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BanSungOFFLINE_CPlus/Enermy/Enermy_Zombie.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnermy_Zombie() {}

// Begin Cross Module References
BANSUNGOFFLINE_CPLUS_API UClass* Z_Construct_UClass_AEnermy();
BANSUNGOFFLINE_CPLUS_API UClass* Z_Construct_UClass_AEnermy_Zombie();
BANSUNGOFFLINE_CPLUS_API UClass* Z_Construct_UClass_AEnermy_Zombie_NoRegister();
UPackage* Z_Construct_UPackage__Script_BanSungOFFLINE_CPlus();
// End Cross Module References

// Begin Class AEnermy_Zombie
void AEnermy_Zombie::StaticRegisterNativesAEnermy_Zombie()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnermy_Zombie);
UClass* Z_Construct_UClass_AEnermy_Zombie_NoRegister()
{
	return AEnermy_Zombie::StaticClass();
}
struct Z_Construct_UClass_AEnermy_Zombie_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Enermy/Enermy_Zombie.h" },
		{ "ModuleRelativePath", "Enermy/Enermy_Zombie.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnermy_Zombie>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AEnermy_Zombie_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AEnermy,
	(UObject* (*)())Z_Construct_UPackage__Script_BanSungOFFLINE_CPlus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnermy_Zombie_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnermy_Zombie_Statics::ClassParams = {
	&AEnermy_Zombie::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnermy_Zombie_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnermy_Zombie_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnermy_Zombie()
{
	if (!Z_Registration_Info_UClass_AEnermy_Zombie.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnermy_Zombie.OuterSingleton, Z_Construct_UClass_AEnermy_Zombie_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnermy_Zombie.OuterSingleton;
}
template<> BANSUNGOFFLINE_CPLUS_API UClass* StaticClass<AEnermy_Zombie>()
{
	return AEnermy_Zombie::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnermy_Zombie);
AEnermy_Zombie::~AEnermy_Zombie() {}
// End Class AEnermy_Zombie

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Newww_BanSungOFFLINE_CPlus_Source_BanSungOFFLINE_CPlus_Enermy_Enermy_Zombie_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnermy_Zombie, AEnermy_Zombie::StaticClass, TEXT("AEnermy_Zombie"), &Z_Registration_Info_UClass_AEnermy_Zombie, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnermy_Zombie), 1778890503U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Newww_BanSungOFFLINE_CPlus_Source_BanSungOFFLINE_CPlus_Enermy_Enermy_Zombie_h_3518798087(TEXT("/Script/BanSungOFFLINE_CPlus"),
	Z_CompiledInDeferFile_FID_Unreal_Newww_BanSungOFFLINE_CPlus_Source_BanSungOFFLINE_CPlus_Enermy_Enermy_Zombie_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Newww_BanSungOFFLINE_CPlus_Source_BanSungOFFLINE_CPlus_Enermy_Enermy_Zombie_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
