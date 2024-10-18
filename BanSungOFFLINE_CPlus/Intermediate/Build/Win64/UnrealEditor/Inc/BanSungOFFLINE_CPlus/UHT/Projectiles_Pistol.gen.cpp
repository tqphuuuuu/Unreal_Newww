// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BanSungOFFLINE_CPlus/Projectiles/Projectiles_Pistol.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectiles_Pistol() {}

// Begin Cross Module References
BANSUNGOFFLINE_CPLUS_API UClass* Z_Construct_UClass_AProjectiles();
BANSUNGOFFLINE_CPLUS_API UClass* Z_Construct_UClass_AProjectiles_Pistol();
BANSUNGOFFLINE_CPLUS_API UClass* Z_Construct_UClass_AProjectiles_Pistol_NoRegister();
UPackage* Z_Construct_UPackage__Script_BanSungOFFLINE_CPlus();
// End Cross Module References

// Begin Class AProjectiles_Pistol
void AProjectiles_Pistol::StaticRegisterNativesAProjectiles_Pistol()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProjectiles_Pistol);
UClass* Z_Construct_UClass_AProjectiles_Pistol_NoRegister()
{
	return AProjectiles_Pistol::StaticClass();
}
struct Z_Construct_UClass_AProjectiles_Pistol_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Projectiles/Projectiles_Pistol.h" },
		{ "ModuleRelativePath", "Projectiles/Projectiles_Pistol.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectiles_Pistol>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AProjectiles_Pistol_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AProjectiles,
	(UObject* (*)())Z_Construct_UPackage__Script_BanSungOFFLINE_CPlus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectiles_Pistol_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProjectiles_Pistol_Statics::ClassParams = {
	&AProjectiles_Pistol::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectiles_Pistol_Statics::Class_MetaDataParams), Z_Construct_UClass_AProjectiles_Pistol_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AProjectiles_Pistol()
{
	if (!Z_Registration_Info_UClass_AProjectiles_Pistol.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProjectiles_Pistol.OuterSingleton, Z_Construct_UClass_AProjectiles_Pistol_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProjectiles_Pistol.OuterSingleton;
}
template<> BANSUNGOFFLINE_CPLUS_API UClass* StaticClass<AProjectiles_Pistol>()
{
	return AProjectiles_Pistol::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectiles_Pistol);
AProjectiles_Pistol::~AProjectiles_Pistol() {}
// End Class AProjectiles_Pistol

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Newww_BanSungOFFLINE_CPlus_Source_BanSungOFFLINE_CPlus_Projectiles_Projectiles_Pistol_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProjectiles_Pistol, AProjectiles_Pistol::StaticClass, TEXT("AProjectiles_Pistol"), &Z_Registration_Info_UClass_AProjectiles_Pistol, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProjectiles_Pistol), 313747283U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Newww_BanSungOFFLINE_CPlus_Source_BanSungOFFLINE_CPlus_Projectiles_Projectiles_Pistol_h_2586969265(TEXT("/Script/BanSungOFFLINE_CPlus"),
	Z_CompiledInDeferFile_FID_Unreal_Newww_BanSungOFFLINE_CPlus_Source_BanSungOFFLINE_CPlus_Projectiles_Projectiles_Pistol_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Newww_BanSungOFFLINE_CPlus_Source_BanSungOFFLINE_CPlus_Projectiles_Projectiles_Pistol_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
