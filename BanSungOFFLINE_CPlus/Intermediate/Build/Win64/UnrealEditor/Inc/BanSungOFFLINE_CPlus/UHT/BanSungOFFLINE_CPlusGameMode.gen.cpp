// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BanSungOFFLINE_CPlus/BanSungOFFLINE_CPlusGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBanSungOFFLINE_CPlusGameMode() {}

// Begin Cross Module References
BANSUNGOFFLINE_CPLUS_API UClass* Z_Construct_UClass_ABanSungOFFLINE_CPlusGameMode();
BANSUNGOFFLINE_CPLUS_API UClass* Z_Construct_UClass_ABanSungOFFLINE_CPlusGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_BanSungOFFLINE_CPlus();
// End Cross Module References

// Begin Class ABanSungOFFLINE_CPlusGameMode
void ABanSungOFFLINE_CPlusGameMode::StaticRegisterNativesABanSungOFFLINE_CPlusGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABanSungOFFLINE_CPlusGameMode);
UClass* Z_Construct_UClass_ABanSungOFFLINE_CPlusGameMode_NoRegister()
{
	return ABanSungOFFLINE_CPlusGameMode::StaticClass();
}
struct Z_Construct_UClass_ABanSungOFFLINE_CPlusGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "BanSungOFFLINE_CPlusGameMode.h" },
		{ "ModuleRelativePath", "BanSungOFFLINE_CPlusGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABanSungOFFLINE_CPlusGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABanSungOFFLINE_CPlusGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BanSungOFFLINE_CPlus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABanSungOFFLINE_CPlusGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABanSungOFFLINE_CPlusGameMode_Statics::ClassParams = {
	&ABanSungOFFLINE_CPlusGameMode::StaticClass,
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
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABanSungOFFLINE_CPlusGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ABanSungOFFLINE_CPlusGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABanSungOFFLINE_CPlusGameMode()
{
	if (!Z_Registration_Info_UClass_ABanSungOFFLINE_CPlusGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABanSungOFFLINE_CPlusGameMode.OuterSingleton, Z_Construct_UClass_ABanSungOFFLINE_CPlusGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABanSungOFFLINE_CPlusGameMode.OuterSingleton;
}
template<> BANSUNGOFFLINE_CPLUS_API UClass* StaticClass<ABanSungOFFLINE_CPlusGameMode>()
{
	return ABanSungOFFLINE_CPlusGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABanSungOFFLINE_CPlusGameMode);
ABanSungOFFLINE_CPlusGameMode::~ABanSungOFFLINE_CPlusGameMode() {}
// End Class ABanSungOFFLINE_CPlusGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_BanSungOFFLINE_CPlus_Source_BanSungOFFLINE_CPlus_BanSungOFFLINE_CPlusGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABanSungOFFLINE_CPlusGameMode, ABanSungOFFLINE_CPlusGameMode::StaticClass, TEXT("ABanSungOFFLINE_CPlusGameMode"), &Z_Registration_Info_UClass_ABanSungOFFLINE_CPlusGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABanSungOFFLINE_CPlusGameMode), 751754735U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BanSungOFFLINE_CPlus_Source_BanSungOFFLINE_CPlus_BanSungOFFLINE_CPlusGameMode_h_1652426448(TEXT("/Script/BanSungOFFLINE_CPlus"),
	Z_CompiledInDeferFile_FID_BanSungOFFLINE_CPlus_Source_BanSungOFFLINE_CPlus_BanSungOFFLINE_CPlusGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BanSungOFFLINE_CPlus_Source_BanSungOFFLINE_CPlus_BanSungOFFLINE_CPlusGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
