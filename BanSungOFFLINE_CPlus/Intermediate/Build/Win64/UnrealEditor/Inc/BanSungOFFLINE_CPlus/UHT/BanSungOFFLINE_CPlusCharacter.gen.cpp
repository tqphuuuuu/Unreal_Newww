// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BanSungOFFLINE_CPlus/BanSungOFFLINE_CPlusCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBanSungOFFLINE_CPlusCharacter() {}

// Begin Cross Module References
BANSUNGOFFLINE_CPLUS_API UClass* Z_Construct_UClass_ABanSungOFFLINE_CPlusCharacter();
BANSUNGOFFLINE_CPLUS_API UClass* Z_Construct_UClass_ABanSungOFFLINE_CPlusCharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_BanSungOFFLINE_CPlus();
// End Cross Module References

// Begin Class ABanSungOFFLINE_CPlusCharacter
void ABanSungOFFLINE_CPlusCharacter::StaticRegisterNativesABanSungOFFLINE_CPlusCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABanSungOFFLINE_CPlusCharacter);
UClass* Z_Construct_UClass_ABanSungOFFLINE_CPlusCharacter_NoRegister()
{
	return ABanSungOFFLINE_CPlusCharacter::StaticClass();
}
struct Z_Construct_UClass_ABanSungOFFLINE_CPlusCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BanSungOFFLINE_CPlusCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "BanSungOFFLINE_CPlusCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TopDownCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Top down camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BanSungOFFLINE_CPlusCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Top down camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera above the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BanSungOFFLINE_CPlusCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera above the character" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TopDownCameraComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABanSungOFFLINE_CPlusCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABanSungOFFLINE_CPlusCharacter_Statics::NewProp_TopDownCameraComponent = { "TopDownCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABanSungOFFLINE_CPlusCharacter, TopDownCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TopDownCameraComponent_MetaData), NewProp_TopDownCameraComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABanSungOFFLINE_CPlusCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABanSungOFFLINE_CPlusCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABanSungOFFLINE_CPlusCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABanSungOFFLINE_CPlusCharacter_Statics::NewProp_TopDownCameraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABanSungOFFLINE_CPlusCharacter_Statics::NewProp_CameraBoom,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABanSungOFFLINE_CPlusCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABanSungOFFLINE_CPlusCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_BanSungOFFLINE_CPlus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABanSungOFFLINE_CPlusCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABanSungOFFLINE_CPlusCharacter_Statics::ClassParams = {
	&ABanSungOFFLINE_CPlusCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABanSungOFFLINE_CPlusCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABanSungOFFLINE_CPlusCharacter_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABanSungOFFLINE_CPlusCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ABanSungOFFLINE_CPlusCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABanSungOFFLINE_CPlusCharacter()
{
	if (!Z_Registration_Info_UClass_ABanSungOFFLINE_CPlusCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABanSungOFFLINE_CPlusCharacter.OuterSingleton, Z_Construct_UClass_ABanSungOFFLINE_CPlusCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABanSungOFFLINE_CPlusCharacter.OuterSingleton;
}
template<> BANSUNGOFFLINE_CPLUS_API UClass* StaticClass<ABanSungOFFLINE_CPlusCharacter>()
{
	return ABanSungOFFLINE_CPlusCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABanSungOFFLINE_CPlusCharacter);
ABanSungOFFLINE_CPlusCharacter::~ABanSungOFFLINE_CPlusCharacter() {}
// End Class ABanSungOFFLINE_CPlusCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Newww_BanSungOFFLINE_CPlus_Source_BanSungOFFLINE_CPlus_BanSungOFFLINE_CPlusCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABanSungOFFLINE_CPlusCharacter, ABanSungOFFLINE_CPlusCharacter::StaticClass, TEXT("ABanSungOFFLINE_CPlusCharacter"), &Z_Registration_Info_UClass_ABanSungOFFLINE_CPlusCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABanSungOFFLINE_CPlusCharacter), 1717864941U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Newww_BanSungOFFLINE_CPlus_Source_BanSungOFFLINE_CPlus_BanSungOFFLINE_CPlusCharacter_h_713554468(TEXT("/Script/BanSungOFFLINE_CPlus"),
	Z_CompiledInDeferFile_FID_Unreal_Newww_BanSungOFFLINE_CPlus_Source_BanSungOFFLINE_CPlus_BanSungOFFLINE_CPlusCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Newww_BanSungOFFLINE_CPlus_Source_BanSungOFFLINE_CPlus_BanSungOFFLINE_CPlusCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
