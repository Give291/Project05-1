// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project05/Project05GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProject05GameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
PROJECT05_API UClass* Z_Construct_UClass_AProject05GameMode();
PROJECT05_API UClass* Z_Construct_UClass_AProject05GameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Project05();
// End Cross Module References

// Begin Class AProject05GameMode
void AProject05GameMode::StaticRegisterNativesAProject05GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProject05GameMode);
UClass* Z_Construct_UClass_AProject05GameMode_NoRegister()
{
	return AProject05GameMode::StaticClass();
}
struct Z_Construct_UClass_AProject05GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Project05GameMode.h" },
		{ "ModuleRelativePath", "Project05GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProject05GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AProject05GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Project05,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProject05GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProject05GameMode_Statics::ClassParams = {
	&AProject05GameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProject05GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AProject05GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AProject05GameMode()
{
	if (!Z_Registration_Info_UClass_AProject05GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProject05GameMode.OuterSingleton, Z_Construct_UClass_AProject05GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProject05GameMode.OuterSingleton;
}
template<> PROJECT05_API UClass* StaticClass<AProject05GameMode>()
{
	return AProject05GameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AProject05GameMode);
AProject05GameMode::~AProject05GameMode() {}
// End Class AProject05GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Project05_Source_Project05_Project05GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProject05GameMode, AProject05GameMode::StaticClass, TEXT("AProject05GameMode"), &Z_Registration_Info_UClass_AProject05GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProject05GameMode), 3089767875U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project05_Source_Project05_Project05GameMode_h_1418567183(TEXT("/Script/Project05"),
	Z_CompiledInDeferFile_FID_Project05_Source_Project05_Project05GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project05_Source_Project05_Project05GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
