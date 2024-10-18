// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BanSungOFFLINE_CPlus/Weapon/Weapon_Pistol.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeapon_Pistol() {}

// Begin Cross Module References
BANSUNGOFFLINE_CPLUS_API UClass* Z_Construct_UClass_AWeapon();
BANSUNGOFFLINE_CPLUS_API UClass* Z_Construct_UClass_AWeapon_Pistol();
BANSUNGOFFLINE_CPLUS_API UClass* Z_Construct_UClass_AWeapon_Pistol_NoRegister();
UPackage* Z_Construct_UPackage__Script_BanSungOFFLINE_CPlus();
// End Cross Module References

// Begin Class AWeapon_Pistol
void AWeapon_Pistol::StaticRegisterNativesAWeapon_Pistol()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWeapon_Pistol);
UClass* Z_Construct_UClass_AWeapon_Pistol_NoRegister()
{
	return AWeapon_Pistol::StaticClass();
}
struct Z_Construct_UClass_AWeapon_Pistol_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Weapon/Weapon_Pistol.h" },
		{ "ModuleRelativePath", "Weapon/Weapon_Pistol.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeapon_Pistol>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AWeapon_Pistol_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AWeapon,
	(UObject* (*)())Z_Construct_UPackage__Script_BanSungOFFLINE_CPlus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Pistol_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWeapon_Pistol_Statics::ClassParams = {
	&AWeapon_Pistol::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Pistol_Statics::Class_MetaDataParams), Z_Construct_UClass_AWeapon_Pistol_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWeapon_Pistol()
{
	if (!Z_Registration_Info_UClass_AWeapon_Pistol.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWeapon_Pistol.OuterSingleton, Z_Construct_UClass_AWeapon_Pistol_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWeapon_Pistol.OuterSingleton;
}
template<> BANSUNGOFFLINE_CPLUS_API UClass* StaticClass<AWeapon_Pistol>()
{
	return AWeapon_Pistol::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWeapon_Pistol);
AWeapon_Pistol::~AWeapon_Pistol() {}
// End Class AWeapon_Pistol

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Newww_BanSungOFFLINE_CPlus_Source_BanSungOFFLINE_CPlus_Weapon_Weapon_Pistol_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWeapon_Pistol, AWeapon_Pistol::StaticClass, TEXT("AWeapon_Pistol"), &Z_Registration_Info_UClass_AWeapon_Pistol, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWeapon_Pistol), 3271092713U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Newww_BanSungOFFLINE_CPlus_Source_BanSungOFFLINE_CPlus_Weapon_Weapon_Pistol_h_1997247104(TEXT("/Script/BanSungOFFLINE_CPlus"),
	Z_CompiledInDeferFile_FID_Unreal_Newww_BanSungOFFLINE_CPlus_Source_BanSungOFFLINE_CPlus_Weapon_Weapon_Pistol_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Newww_BanSungOFFLINE_CPlus_Source_BanSungOFFLINE_CPlus_Weapon_Weapon_Pistol_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
