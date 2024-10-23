// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BanSungOFFLINE_CPlus/Projectiles/Projectiles_Rifle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectiles_Rifle() {}

// Begin Cross Module References
BANSUNGOFFLINE_CPLUS_API UClass* Z_Construct_UClass_AProjectiles();
BANSUNGOFFLINE_CPLUS_API UClass* Z_Construct_UClass_AProjectiles_Rifle();
BANSUNGOFFLINE_CPLUS_API UClass* Z_Construct_UClass_AProjectiles_Rifle_NoRegister();
UPackage* Z_Construct_UPackage__Script_BanSungOFFLINE_CPlus();
// End Cross Module References

// Begin Class AProjectiles_Rifle
void AProjectiles_Rifle::StaticRegisterNativesAProjectiles_Rifle()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProjectiles_Rifle);
UClass* Z_Construct_UClass_AProjectiles_Rifle_NoRegister()
{
	return AProjectiles_Rifle::StaticClass();
}
struct Z_Construct_UClass_AProjectiles_Rifle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Projectiles/Projectiles_Rifle.h" },
		{ "ModuleRelativePath", "Projectiles/Projectiles_Rifle.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectiles_Rifle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AProjectiles_Rifle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AProjectiles,
	(UObject* (*)())Z_Construct_UPackage__Script_BanSungOFFLINE_CPlus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectiles_Rifle_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProjectiles_Rifle_Statics::ClassParams = {
	&AProjectiles_Rifle::StaticClass,
	"Engine",
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectiles_Rifle_Statics::Class_MetaDataParams), Z_Construct_UClass_AProjectiles_Rifle_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AProjectiles_Rifle()
{
	if (!Z_Registration_Info_UClass_AProjectiles_Rifle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProjectiles_Rifle.OuterSingleton, Z_Construct_UClass_AProjectiles_Rifle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProjectiles_Rifle.OuterSingleton;
}
template<> BANSUNGOFFLINE_CPLUS_API UClass* StaticClass<AProjectiles_Rifle>()
{
	return AProjectiles_Rifle::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectiles_Rifle);
AProjectiles_Rifle::~AProjectiles_Rifle() {}
// End Class AProjectiles_Rifle

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_TQPhuuuuu_Desktop_GitHubNew_Unreal_Newww_BanSungOFFLINE_CPlus_Source_BanSungOFFLINE_CPlus_Projectiles_Projectiles_Rifle_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProjectiles_Rifle, AProjectiles_Rifle::StaticClass, TEXT("AProjectiles_Rifle"), &Z_Registration_Info_UClass_AProjectiles_Rifle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProjectiles_Rifle), 359121910U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_TQPhuuuuu_Desktop_GitHubNew_Unreal_Newww_BanSungOFFLINE_CPlus_Source_BanSungOFFLINE_CPlus_Projectiles_Projectiles_Rifle_h_2747816215(TEXT("/Script/BanSungOFFLINE_CPlus"),
	Z_CompiledInDeferFile_FID_Users_TQPhuuuuu_Desktop_GitHubNew_Unreal_Newww_BanSungOFFLINE_CPlus_Source_BanSungOFFLINE_CPlus_Projectiles_Projectiles_Rifle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_TQPhuuuuu_Desktop_GitHubNew_Unreal_Newww_BanSungOFFLINE_CPlus_Source_BanSungOFFLINE_CPlus_Projectiles_Projectiles_Rifle_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
