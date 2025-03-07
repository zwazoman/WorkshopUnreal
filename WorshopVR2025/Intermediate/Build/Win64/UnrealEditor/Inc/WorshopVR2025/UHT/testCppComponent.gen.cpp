// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorshopVR2025/Public/testCppComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodetestCppComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_WorshopVR2025();
WORSHOPVR2025_API UClass* Z_Construct_UClass_UtestCppComponent();
WORSHOPVR2025_API UClass* Z_Construct_UClass_UtestCppComponent_NoRegister();
// End Cross Module References

// Begin Class UtestCppComponent
void UtestCppComponent::StaticRegisterNativesUtestCppComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UtestCppComponent);
UClass* Z_Construct_UClass_UtestCppComponent_NoRegister()
{
	return UtestCppComponent::StaticClass();
}
struct Z_Construct_UClass_UtestCppComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "testCppComponent.h" },
		{ "ModuleRelativePath", "Public/testCppComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UtestCppComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UtestCppComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_WorshopVR2025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UtestCppComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UtestCppComponent_Statics::ClassParams = {
	&UtestCppComponent::StaticClass,
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
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UtestCppComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UtestCppComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UtestCppComponent()
{
	if (!Z_Registration_Info_UClass_UtestCppComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UtestCppComponent.OuterSingleton, Z_Construct_UClass_UtestCppComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UtestCppComponent.OuterSingleton;
}
template<> WORSHOPVR2025_API UClass* StaticClass<UtestCppComponent>()
{
	return UtestCppComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UtestCppComponent);
UtestCppComponent::~UtestCppComponent() {}
// End Class UtestCppComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_leapo_WorkshopUnreal_WorshopVR2025_Source_WorshopVR2025_Public_testCppComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UtestCppComponent, UtestCppComponent::StaticClass, TEXT("UtestCppComponent"), &Z_Registration_Info_UClass_UtestCppComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UtestCppComponent), 1558059685U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_leapo_WorkshopUnreal_WorshopVR2025_Source_WorshopVR2025_Public_testCppComponent_h_2748269500(TEXT("/Script/WorshopVR2025"),
	Z_CompiledInDeferFile_FID_Users_leapo_WorkshopUnreal_WorshopVR2025_Source_WorshopVR2025_Public_testCppComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_leapo_WorkshopUnreal_WorshopVR2025_Source_WorshopVR2025_Public_testCppComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
