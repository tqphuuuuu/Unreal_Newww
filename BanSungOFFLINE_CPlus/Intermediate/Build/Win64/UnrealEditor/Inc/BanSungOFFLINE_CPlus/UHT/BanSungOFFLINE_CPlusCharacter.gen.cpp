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
BANSUNGOFFLINE_CPLUS_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_BanSungOFFLINE_CPlus();
// End Cross Module References

// Begin Class ABanSungOFFLINE_CPlusCharacter Function IsWeaponVisible
struct Z_Construct_UFunction_ABanSungOFFLINE_CPlusCharacter_IsWeaponVisible_Statics
{
	struct BanSungOFFLINE_CPlusCharacter_eventIsWeaponVisible_Parms
	{
		TSubclassOf<AWeapon> WeaponClass;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Ki\xe1\xbb\x83m tra hi\xe1\xbb\x83n th\xe1\xbb\x8b c\xe1\xbb\xa7""a s\xc3\xbang\n" },
#endif
		{ "ModuleRelativePath", "BanSungOFFLINE_CPlusCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ki\xe1\xbb\x83m tra hi\xe1\xbb\x83n th\xe1\xbb\x8b c\xe1\xbb\xa7""a s\xc3\xbang" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_WeaponClass;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ABanSungOFFLINE_CPlusCharacter_IsWeaponVisible_Statics::NewProp_WeaponClass = { "WeaponClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BanSungOFFLINE_CPlusCharacter_eventIsWeaponVisible_Parms, WeaponClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ABanSungOFFLINE_CPlusCharacter_IsWeaponVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BanSungOFFLINE_CPlusCharacter_eventIsWeaponVisible_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABanSungOFFLINE_CPlusCharacter_IsWeaponVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BanSungOFFLINE_CPlusCharacter_eventIsWeaponVisible_Parms), &Z_Construct_UFunction_ABanSungOFFLINE_CPlusCharacter_IsWeaponVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABanSungOFFLINE_CPlusCharacter_IsWeaponVisible_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABanSungOFFLINE_CPlusCharacter_IsWeaponVisible_Statics::NewProp_WeaponClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABanSungOFFLINE_CPlusCharacter_IsWeaponVisible_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABanSungOFFLINE_CPlusCharacter_IsWeaponVisible_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABanSungOFFLINE_CPlusCharacter_IsWeaponVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABanSungOFFLINE_CPlusCharacter, nullptr, "IsWeaponVisible", nullptr, nullptr, Z_Construct_UFunction_ABanSungOFFLINE_CPlusCharacter_IsWeaponVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABanSungOFFLINE_CPlusCharacter_IsWeaponVisible_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABanSungOFFLINE_CPlusCharacter_IsWeaponVisible_Statics::BanSungOFFLINE_CPlusCharacter_eventIsWeaponVisible_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABanSungOFFLINE_CPlusCharacter_IsWeaponVisible_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABanSungOFFLINE_CPlusCharacter_IsWeaponVisible_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABanSungOFFLINE_CPlusCharacter_IsWeaponVisible_Statics::BanSungOFFLINE_CPlusCharacter_eventIsWeaponVisible_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABanSungOFFLINE_CPlusCharacter_IsWeaponVisible()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABanSungOFFLINE_CPlusCharacter_IsWeaponVisible_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABanSungOFFLINE_CPlusCharacter::execIsWeaponVisible)
{
	P_GET_OBJECT(UClass,Z_Param_WeaponClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsWeaponVisible(Z_Param_WeaponClass);
	P_NATIVE_END;
}
// End Class ABanSungOFFLINE_CPlusCharacter Function IsWeaponVisible

// Begin Class ABanSungOFFLINE_CPlusCharacter
void ABanSungOFFLINE_CPlusCharacter::StaticRegisterNativesABanSungOFFLINE_CPlusCharacter()
{
	UClass* Class = ABanSungOFFLINE_CPlusCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IsWeaponVisible", &ABanSungOFFLINE_CPlusCharacter::execIsWeaponVisible },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cur_weapon_MetaData[] = {
		{ "Category", "BanSungOFFLINE_CPlusCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Bi\xe1\xba\xbfn hi\xe1\xbb\x87n UI\n" },
#endif
		{ "ModuleRelativePath", "BanSungOFFLINE_CPlusCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bi\xe1\xba\xbfn hi\xe1\xbb\x87n UI" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWeapon_MetaData[] = {
		{ "Category", "Weapon" },
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
	static const UECodeGen_Private::FIntPropertyParams NewProp_Cur_weapon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentWeapon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TopDownCameraComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABanSungOFFLINE_CPlusCharacter_IsWeaponVisible, "IsWeaponVisible" }, // 2335433187
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABanSungOFFLINE_CPlusCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABanSungOFFLINE_CPlusCharacter_Statics::NewProp_Cur_weapon = { "Cur_weapon", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABanSungOFFLINE_CPlusCharacter, Cur_weapon), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cur_weapon_MetaData), NewProp_Cur_weapon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABanSungOFFLINE_CPlusCharacter_Statics::NewProp_CurrentWeapon = { "CurrentWeapon", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABanSungOFFLINE_CPlusCharacter, CurrentWeapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentWeapon_MetaData), NewProp_CurrentWeapon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABanSungOFFLINE_CPlusCharacter_Statics::NewProp_TopDownCameraComponent = { "TopDownCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABanSungOFFLINE_CPlusCharacter, TopDownCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TopDownCameraComponent_MetaData), NewProp_TopDownCameraComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABanSungOFFLINE_CPlusCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABanSungOFFLINE_CPlusCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABanSungOFFLINE_CPlusCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABanSungOFFLINE_CPlusCharacter_Statics::NewProp_Cur_weapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABanSungOFFLINE_CPlusCharacter_Statics::NewProp_CurrentWeapon,
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
	FuncInfo,
	Z_Construct_UClass_ABanSungOFFLINE_CPlusCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_ABanSungOFFLINE_CPlusCharacter, ABanSungOFFLINE_CPlusCharacter::StaticClass, TEXT("ABanSungOFFLINE_CPlusCharacter"), &Z_Registration_Info_UClass_ABanSungOFFLINE_CPlusCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABanSungOFFLINE_CPlusCharacter), 2717132551U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Newww_BanSungOFFLINE_CPlus_Source_BanSungOFFLINE_CPlus_BanSungOFFLINE_CPlusCharacter_h_5592316(TEXT("/Script/BanSungOFFLINE_CPlus"),
	Z_CompiledInDeferFile_FID_Unreal_Newww_BanSungOFFLINE_CPlus_Source_BanSungOFFLINE_CPlus_BanSungOFFLINE_CPlusCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Newww_BanSungOFFLINE_CPlus_Source_BanSungOFFLINE_CPlus_BanSungOFFLINE_CPlusCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
