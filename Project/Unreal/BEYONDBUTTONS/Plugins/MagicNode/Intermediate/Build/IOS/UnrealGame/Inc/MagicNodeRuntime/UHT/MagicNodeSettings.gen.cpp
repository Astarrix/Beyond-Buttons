// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicNodeRuntime/Public/MagicNodeSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagicNodeSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
MAGICNODERUNTIME_API UClass* Z_Construct_UClass_UMGC_Settings();
MAGICNODERUNTIME_API UClass* Z_Construct_UClass_UMGC_Settings_NoRegister();
UPackage* Z_Construct_UPackage__Script_MagicNodeRuntime();
// End Cross Module References

// Begin Class UMGC_Settings
void UMGC_Settings::StaticRegisterNativesUMGC_Settings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMGC_Settings);
UClass* Z_Construct_UClass_UMGC_Settings_NoRegister()
{
	return UMGC_Settings::StaticClass();
}
struct Z_Construct_UClass_UMGC_Settings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Synaptech" },
		{ "ClassGroupNames", "Synaptech" },
		{ "Comment", "//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n/// MGC Global Settings\n" },
		{ "IncludePath", "MagicNodeSettings.h" },
		{ "ModuleRelativePath", "Public/MagicNodeSettings.h" },
		{ "ToolTip", "MGC Global Settings" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMGC_Settings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMGC_Settings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MagicNodeRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMGC_Settings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMGC_Settings_Statics::ClassParams = {
	&UMGC_Settings::StaticClass,
	"MagicNode",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMGC_Settings_Statics::Class_MetaDataParams), Z_Construct_UClass_UMGC_Settings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMGC_Settings()
{
	if (!Z_Registration_Info_UClass_UMGC_Settings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMGC_Settings.OuterSingleton, Z_Construct_UClass_UMGC_Settings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMGC_Settings.OuterSingleton;
}
template<> MAGICNODERUNTIME_API UClass* StaticClass<UMGC_Settings>()
{
	return UMGC_Settings::StaticClass();
}
UMGC_Settings::UMGC_Settings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMGC_Settings);
UMGC_Settings::~UMGC_Settings() {}
// End Class UMGC_Settings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MagicNode_Source_MagicNodeRuntime_Public_MagicNodeSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMGC_Settings, UMGC_Settings::StaticClass, TEXT("UMGC_Settings"), &Z_Registration_Info_UClass_UMGC_Settings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMGC_Settings), 3498806833U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MagicNode_Source_MagicNodeRuntime_Public_MagicNodeSettings_h_4129402673(TEXT("/Script/MagicNodeRuntime"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MagicNode_Source_MagicNodeRuntime_Public_MagicNodeSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MagicNode_Source_MagicNodeRuntime_Public_MagicNodeSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
