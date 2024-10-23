// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BanSungOFFLINE_CPlus/Enemy/Enemy_Zombie.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemy_Zombie() {}

// Begin Cross Module References
BANSUNGOFFLINE_CPLUS_API UClass* Z_Construct_UClass_AEnemy();
BANSUNGOFFLINE_CPLUS_API UClass* Z_Construct_UClass_AEnemy_Zombie();
BANSUNGOFFLINE_CPLUS_API UClass* Z_Construct_UClass_AEnemy_Zombie_NoRegister();
UPackage* Z_Construct_UPackage__Script_BanSungOFFLINE_CPlus();
// End Cross Module References

// Begin Class AEnemy_Zombie
void AEnemy_Zombie::StaticRegisterNativesAEnemy_Zombie()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemy_Zombie);
UClass* Z_Construct_UClass_AEnemy_Zombie_NoRegister()
{
	return AEnemy_Zombie::StaticClass();
}
struct Z_Construct_UClass_AEnemy_Zombie_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Enemy/Enemy_Zombie.h" },
		{ "ModuleRelativePath", "Enemy/Enemy_Zombie.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemy_Zombie>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AEnemy_Zombie_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AEnemy,
	(UObject* (*)())Z_Construct_UPackage__Script_BanSungOFFLINE_CPlus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Zombie_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemy_Zombie_Statics::ClassParams = {
	&AEnemy_Zombie::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Zombie_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemy_Zombie_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemy_Zombie()
{
	if (!Z_Registration_Info_UClass_AEnemy_Zombie.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemy_Zombie.OuterSingleton, Z_Construct_UClass_AEnemy_Zombie_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemy_Zombie.OuterSingleton;
}
template<> BANSUNGOFFLINE_CPLUS_API UClass* StaticClass<AEnemy_Zombie>()
{
	return AEnemy_Zombie::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemy_Zombie);
AEnemy_Zombie::~AEnemy_Zombie() {}
// End Class AEnemy_Zombie

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_TQPhuuuuu_Desktop_GitHubNew_Unreal_Newww_BanSungOFFLINE_CPlus_Source_BanSungOFFLINE_CPlus_Enemy_Enemy_Zombie_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemy_Zombie, AEnemy_Zombie::StaticClass, TEXT("AEnemy_Zombie"), &Z_Registration_Info_UClass_AEnemy_Zombie, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemy_Zombie), 308942124U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_TQPhuuuuu_Desktop_GitHubNew_Unreal_Newww_BanSungOFFLINE_CPlus_Source_BanSungOFFLINE_CPlus_Enemy_Enemy_Zombie_h_2520744394(TEXT("/Script/BanSungOFFLINE_CPlus"),
	Z_CompiledInDeferFile_FID_Users_TQPhuuuuu_Desktop_GitHubNew_Unreal_Newww_BanSungOFFLINE_CPlus_Source_BanSungOFFLINE_CPlus_Enemy_Enemy_Zombie_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_TQPhuuuuu_Desktop_GitHubNew_Unreal_Newww_BanSungOFFLINE_CPlus_Source_BanSungOFFLINE_CPlus_Enemy_Enemy_Zombie_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
