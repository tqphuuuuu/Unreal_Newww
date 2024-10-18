// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BanSungOFFLINE_CPlus/Projectiles/Projectiles.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectiles() {}

// Begin Cross Module References
BANSUNGOFFLINE_CPLUS_API UClass* Z_Construct_UClass_AProjectiles();
BANSUNGOFFLINE_CPLUS_API UClass* Z_Construct_UClass_AProjectiles_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_BanSungOFFLINE_CPlus();
// End Cross Module References

// Begin Class AProjectiles
void AProjectiles::StaticRegisterNativesAProjectiles()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProjectiles);
UClass* Z_Construct_UClass_AProjectiles_NoRegister()
{
	return AProjectiles::StaticClass();
}
struct Z_Construct_UClass_AProjectiles_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Projectiles/Projectiles.h" },
		{ "ModuleRelativePath", "Projectiles/Projectiles.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Projectiles_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Projectiles/Projectiles.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereComponent_MetaData[] = {
		{ "Category", "Coli" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Projectiles/Projectiles.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovement_MetaData[] = {
		{ "Category", "Movement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Projectiles/Projectiles.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Projectiles;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovement;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectiles>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectiles_Statics::NewProp_Projectiles = { "Projectiles", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectiles, Projectiles), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Projectiles_MetaData), NewProp_Projectiles_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectiles_Statics::NewProp_SphereComponent = { "SphereComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectiles, SphereComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereComponent_MetaData), NewProp_SphereComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectiles_Statics::NewProp_ProjectileMovement = { "ProjectileMovement", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectiles, ProjectileMovement), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileMovement_MetaData), NewProp_ProjectileMovement_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProjectiles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectiles_Statics::NewProp_Projectiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectiles_Statics::NewProp_SphereComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectiles_Statics::NewProp_ProjectileMovement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectiles_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AProjectiles_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BanSungOFFLINE_CPlus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectiles_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProjectiles_Statics::ClassParams = {
	&AProjectiles::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AProjectiles_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AProjectiles_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectiles_Statics::Class_MetaDataParams), Z_Construct_UClass_AProjectiles_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AProjectiles()
{
	if (!Z_Registration_Info_UClass_AProjectiles.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProjectiles.OuterSingleton, Z_Construct_UClass_AProjectiles_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProjectiles.OuterSingleton;
}
template<> BANSUNGOFFLINE_CPLUS_API UClass* StaticClass<AProjectiles>()
{
	return AProjectiles::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectiles);
AProjectiles::~AProjectiles() {}
// End Class AProjectiles

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Newww_BanSungOFFLINE_CPlus_Source_BanSungOFFLINE_CPlus_Projectiles_Projectiles_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProjectiles, AProjectiles::StaticClass, TEXT("AProjectiles"), &Z_Registration_Info_UClass_AProjectiles, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProjectiles), 804708906U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Newww_BanSungOFFLINE_CPlus_Source_BanSungOFFLINE_CPlus_Projectiles_Projectiles_h_1663417982(TEXT("/Script/BanSungOFFLINE_CPlus"),
	Z_CompiledInDeferFile_FID_Unreal_Newww_BanSungOFFLINE_CPlus_Source_BanSungOFFLINE_CPlus_Projectiles_Projectiles_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Newww_BanSungOFFLINE_CPlus_Source_BanSungOFFLINE_CPlus_Projectiles_Projectiles_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
