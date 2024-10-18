// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBanSungOFFLINE_CPlus_init() {}
	BANSUNGOFFLINE_CPLUS_API UFunction* Z_Construct_UDelegateFunction_BanSungOFFLINE_CPlus_BulletCount__DelegateSignature();
	BANSUNGOFFLINE_CPLUS_API UFunction* Z_Construct_UDelegateFunction_BanSungOFFLINE_CPlus_DisplayWBBulletCount__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_BanSungOFFLINE_CPlus;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_BanSungOFFLINE_CPlus()
	{
		if (!Z_Registration_Info_UPackage__Script_BanSungOFFLINE_CPlus.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_BanSungOFFLINE_CPlus_BulletCount__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BanSungOFFLINE_CPlus_DisplayWBBulletCount__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/BanSungOFFLINE_CPlus",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x1078063E,
				0x60485794,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_BanSungOFFLINE_CPlus.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_BanSungOFFLINE_CPlus.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_BanSungOFFLINE_CPlus(Z_Construct_UPackage__Script_BanSungOFFLINE_CPlus, TEXT("/Script/BanSungOFFLINE_CPlus"), Z_Registration_Info_UPackage__Script_BanSungOFFLINE_CPlus, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x1078063E, 0x60485794));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
