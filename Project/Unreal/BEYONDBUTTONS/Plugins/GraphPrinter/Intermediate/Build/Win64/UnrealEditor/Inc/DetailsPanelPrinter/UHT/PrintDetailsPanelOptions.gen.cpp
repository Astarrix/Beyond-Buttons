// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DetailsPanelPrinter/Public/DetailsPanelPrinter/Types/PrintDetailsPanelOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrintDetailsPanelOptions() {}

// Begin Cross Module References
DETAILSPANELPRINTER_API UClass* Z_Construct_UClass_UPrintDetailsPanelOptions();
DETAILSPANELPRINTER_API UClass* Z_Construct_UClass_UPrintDetailsPanelOptions_NoRegister();
UPackage* Z_Construct_UPackage__Script_DetailsPanelPrinter();
WIDGETPRINTER_API UClass* Z_Construct_UClass_UPrintWidgetOptions();
// End Cross Module References

// Begin Class UPrintDetailsPanelOptions
void UPrintDetailsPanelOptions::StaticRegisterNativesUPrintDetailsPanelOptions()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPrintDetailsPanelOptions);
UClass* Z_Construct_UClass_UPrintDetailsPanelOptions_NoRegister()
{
	return UPrintDetailsPanelOptions::StaticClass();
}
struct Z_Construct_UClass_UPrintDetailsPanelOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * An optional class to specify when printing the details panel.\n */" },
		{ "IncludePath", "DetailsPanelPrinter/Types/PrintDetailsPanelOptions.h" },
		{ "ModuleRelativePath", "Public/DetailsPanelPrinter/Types/PrintDetailsPanelOptions.h" },
		{ "ToolTip", "An optional class to specify when printing the details panel." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPrintDetailsPanelOptions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPrintDetailsPanelOptions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrintWidgetOptions,
	(UObject* (*)())Z_Construct_UPackage__Script_DetailsPanelPrinter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPrintDetailsPanelOptions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPrintDetailsPanelOptions_Statics::ClassParams = {
	&UPrintDetailsPanelOptions::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPrintDetailsPanelOptions_Statics::Class_MetaDataParams), Z_Construct_UClass_UPrintDetailsPanelOptions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPrintDetailsPanelOptions()
{
	if (!Z_Registration_Info_UClass_UPrintDetailsPanelOptions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPrintDetailsPanelOptions.OuterSingleton, Z_Construct_UClass_UPrintDetailsPanelOptions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPrintDetailsPanelOptions.OuterSingleton;
}
template<> DETAILSPANELPRINTER_API UClass* StaticClass<UPrintDetailsPanelOptions>()
{
	return UPrintDetailsPanelOptions::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPrintDetailsPanelOptions);
UPrintDetailsPanelOptions::~UPrintDetailsPanelOptions() {}
// End Class UPrintDetailsPanelOptions

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GraphPrinter_Source_DetailsPanelPrinter_Public_DetailsPanelPrinter_Types_PrintDetailsPanelOptions_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPrintDetailsPanelOptions, UPrintDetailsPanelOptions::StaticClass, TEXT("UPrintDetailsPanelOptions"), &Z_Registration_Info_UClass_UPrintDetailsPanelOptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPrintDetailsPanelOptions), 2768589311U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GraphPrinter_Source_DetailsPanelPrinter_Public_DetailsPanelPrinter_Types_PrintDetailsPanelOptions_h_3147230226(TEXT("/Script/DetailsPanelPrinter"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GraphPrinter_Source_DetailsPanelPrinter_Public_DetailsPanelPrinter_Types_PrintDetailsPanelOptions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GraphPrinter_Source_DetailsPanelPrinter_Public_DetailsPanelPrinter_Types_PrintDetailsPanelOptions_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
