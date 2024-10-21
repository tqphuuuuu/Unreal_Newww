// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Projectiles/Projectiles.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef BANSUNGOFFLINE_CPLUS_Projectiles_generated_h
#error "Projectiles.generated.h already included, missing '#pragma once' in Projectiles.h"
#endif
#define BANSUNGOFFLINE_CPLUS_Projectiles_generated_h

#define FID_Unreal_Newww_BanSungOFFLINE_CPlus_Source_BanSungOFFLINE_CPlus_Projectiles_Projectiles_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlap);


#define FID_Unreal_Newww_BanSungOFFLINE_CPlus_Source_BanSungOFFLINE_CPlus_Projectiles_Projectiles_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectiles(); \
	friend struct Z_Construct_UClass_AProjectiles_Statics; \
public: \
	DECLARE_CLASS(AProjectiles, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BanSungOFFLINE_CPlus"), NO_API) \
	DECLARE_SERIALIZER(AProjectiles)


#define FID_Unreal_Newww_BanSungOFFLINE_CPlus_Source_BanSungOFFLINE_CPlus_Projectiles_Projectiles_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AProjectiles(AProjectiles&&); \
	AProjectiles(const AProjectiles&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectiles); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectiles); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectiles) \
	NO_API virtual ~AProjectiles();


#define FID_Unreal_Newww_BanSungOFFLINE_CPlus_Source_BanSungOFFLINE_CPlus_Projectiles_Projectiles_h_9_PROLOG
#define FID_Unreal_Newww_BanSungOFFLINE_CPlus_Source_BanSungOFFLINE_CPlus_Projectiles_Projectiles_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Newww_BanSungOFFLINE_CPlus_Source_BanSungOFFLINE_CPlus_Projectiles_Projectiles_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Newww_BanSungOFFLINE_CPlus_Source_BanSungOFFLINE_CPlus_Projectiles_Projectiles_h_12_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Newww_BanSungOFFLINE_CPlus_Source_BanSungOFFLINE_CPlus_Projectiles_Projectiles_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BANSUNGOFFLINE_CPLUS_API UClass* StaticClass<class AProjectiles>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Newww_BanSungOFFLINE_CPlus_Source_BanSungOFFLINE_CPlus_Projectiles_Projectiles_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
