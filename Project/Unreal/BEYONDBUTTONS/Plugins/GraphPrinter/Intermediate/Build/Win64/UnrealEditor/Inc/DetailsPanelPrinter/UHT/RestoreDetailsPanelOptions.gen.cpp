// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DetailsPanelPrinter/Public/DetailsPanelPrinter/Types/RestoreDetailsPanelOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRestoreDetailsPanelOptions() {}

// Begin Cross Module References
DETAILSPANELPRINTER_API UClass* Z_Construct_UClass_URestoreDetailsPanelOptions();
DETAILSPANELPRINTER_API UClass* Z_Construct_UClass_URestoreDetailsPanelOptions_NoRegister();
UPackage* Z_Construct_UPackage__Script_DetailsPanelPrinter();
WIDGETPRINTER_API UClass* Z_Construct_UClass_URestoreWidgetOptions();
// End Cross Module References

// Begin Class URestoreDetailsPanelOptions
void URestoreDetailsPanelOptions::StaticRegisterNativesURestoreDetailsPanelOptions()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URestoreDetailsPanelOptions);
UClass* Z_Construct_UClass_URestoreDetailsPanelOptions_NoRegister()
{
	return URestoreDetailsPanelOptions::StaticClass();
}
struct Z_Construct_UClass_URestoreDetailsPanelOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n *  An optional class to specify when restore the state of the details panel.\n */" },
		{ "IncludePath", "DetailsPanelPrinter/Types/RestoreDetailsPanelOptions.h" },
		{ "ModuleRelativePath", "Public/DetailsPanelPrinter/Types/RestoreDetailsPanelOptions.h" },
		{ "ToolTip", "An optional class to specify when restore the state of the details panel." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URestoreDetailsPanelOptions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URestoreDetailsPanelOptions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URestoreWidgetOptions,
	(UObject* (*)())Z_Construct_UPackage__Script_DetailsPanelPrinter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URestoreDetailsPanelOptions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URestoreDetailsPanelOptions_Statics::ClassParams = {
	&URestoreDetailsPanelOptions::StaticClass,
	nullptr,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URestoreDetailsPanelOptions_Statics::Class_MetaDataParams), Z_Construct_UClass_URestoreDetailsPanelOptions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URestoreDetailsPanelOptions()
{
	if (!Z_Registration_Info_UClass_URestoreDetailsPanelOptions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URestoreDetailsPanelOptions.OuterSingleton, Z_Construct_UClass_URestoreDetailsPanelOptions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URestoreDetailsPanelOptions.OuterSingleton;
}
template<> DETAILSPANELPRINTER_API UClass* StaticClass<URestoreDetailsPanelOptions>()
{
	return URestoreDetailsPanelOptions::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URestoreDetailsPanelOptions);
URestoreDetailsPanelOptions::~URestoreDetailsPanelOptions() {}
// End Class URestoreDetailsPanelOptions

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GraphPrinter_Source_DetailsPanelPrinter_Public_DetailsPanelPrinter_Types_RestoreDetailsPanelOptions_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URestoreDetailsPanelOptions, URestoreDetailsPanelOptions::StaticClass, TEXT("URestoreDetailsPanelOptions"), &Z_Registration_Info_UClass_URestoreDetailsPanelOptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URestoreDetailsPanelOptions), 3101093003U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GraphPrinter_Source_DetailsPanelPrinter_Public_DetailsPanelPrinter_Types_RestoreDetailsPanelOptions_h_1438797758(TEXT("/Script/DetailsPanelPrinter"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GraphPrinter_Source_DetailsPanelPrinter_Public_DetailsPanelPrinter_Types_RestoreDetailsPanelOptions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GraphPrinter_Source_DetailsPanelPrinter_Public_DetailsPanelPrinter_Types_RestoreDetailsPanelOptions_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
