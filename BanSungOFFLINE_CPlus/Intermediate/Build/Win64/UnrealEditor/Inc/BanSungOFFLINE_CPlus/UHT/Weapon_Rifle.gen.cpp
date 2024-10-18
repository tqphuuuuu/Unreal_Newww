// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BanSungOFFLINE_CPlus/Weapon/Weapon_Rifle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeapon_Rifle() {}

// Begin Cross Module References
BANSUNGOFFLINE_CPLUS_API UClass* Z_Construct_UClass_AWeapon();
BANSUNGOFFLINE_CPLUS_API UClass* Z_Construct_UClass_AWeapon_Rifle();
BANSUNGOFFLINE_CPLUS_API UClass* Z_Construct_UClass_AWeapon_Rifle_NoRegister();
UPackage* Z_Construct_UPackage__Script_BanSungOFFLINE_CPlus();
// End Cross Module References

// Begin Class AWeapon_Rifle
void AWeapon_Rifle::StaticRegisterNativesAWeapon_Rifle()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWeapon_Rifle);
UClass* Z_Construct_UClass_AWeapon_Rifle_NoRegister()
{
	return AWeapon_Rifle::StaticClass();
}
struct Z_Construct_UClass_AWeapon_Rifle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Weapon/Weapon_Rifle.h" },
		{ "ModuleRelativePath", "Weapon/Weapon_Rifle.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeapon_Rifle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AWeapon_Rifle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AWeapon,
	(UObject* (*)())Z_Construct_UPackage__Script_BanSungOFFLINE_CPlus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Rifle_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWeapon_Rifle_Statics::ClassParams = {
	&AWeapon_Rifle::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Rifle_Statics::Class_MetaDataParams), Z_Construct_UClass_AWeapon_Rifle_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWeapon_Rifle()
{
	if (!Z_Registration_Info_UClass_AWeapon_Rifle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWeapon_Rifle.OuterSingleton, Z_Construct_UClass_AWeapon_Rifle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWeapon_Rifle.OuterSingleton;
}
template<> BANSUNGOFFLINE_CPLUS_API UClass* StaticClass<AWeapon_Rifle>()
{
	return AWeapon_Rifle::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWeapon_Rifle);
AWeapon_Rifle::~AWeapon_Rifle() {}
// End Class AWeapon_Rifle

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Newww_BanSungOFFLINE_CPlus_Source_BanSungOFFLINE_CPlus_Weapon_Weapon_Rifle_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWeapon_Rifle, AWeapon_Rifle::StaticClass, TEXT("AWeapon_Rifle"), &Z_Registration_Info_UClass_AWeapon_Rifle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWeapon_Rifle), 202499066U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Newww_BanSungOFFLINE_CPlus_Source_BanSungOFFLINE_CPlus_Weapon_Weapon_Rifle_h_175344904(TEXT("/Script/BanSungOFFLINE_CPlus"),
	Z_CompiledInDeferFile_FID_Unreal_Newww_BanSungOFFLINE_CPlus_Source_BanSungOFFLINE_CPlus_Weapon_Weapon_Rifle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Newww_BanSungOFFLINE_CPlus_Source_BanSungOFFLINE_CPlus_Weapon_Weapon_Rifle_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
