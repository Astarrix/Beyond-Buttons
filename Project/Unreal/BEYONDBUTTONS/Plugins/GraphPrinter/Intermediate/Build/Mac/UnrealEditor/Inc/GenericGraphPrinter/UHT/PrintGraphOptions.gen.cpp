// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GenericGraphPrinter/Public/GenericGraphPrinter/Types/PrintGraphOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrintGraphOptions() {}

// Begin Cross Module References
GENERICGRAPHPRINTER_API UClass* Z_Construct_UClass_UPrintGraphOptions();
GENERICGRAPHPRINTER_API UClass* Z_Construct_UClass_UPrintGraphOptions_NoRegister();
UPackage* Z_Construct_UPackage__Script_GenericGraphPrinter();
WIDGETPRINTER_API UClass* Z_Construct_UClass_UPrintWidgetOptions();
// End Cross Module References

// Begin Class UPrintGraphOptions
void UPrintGraphOptions::StaticRegisterNativesUPrintGraphOptions()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPrintGraphOptions);
UClass* Z_Construct_UClass_UPrintGraphOptions_NoRegister()
{
	return UPrintGraphOptions::StaticClass();
}
struct Z_Construct_UClass_UPrintGraphOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * An optional class to specify when printing the graph editor.\n */" },
		{ "IncludePath", "GenericGraphPrinter/Types/PrintGraphOptions.h" },
		{ "ModuleRelativePath", "Public/GenericGraphPrinter/Types/PrintGraphOptions.h" },
		{ "ToolTip", "An optional class to specify when printing the graph editor." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPrintGraphOptions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPrintGraphOptions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrintWidgetOptions,
	(UObject* (*)())Z_Construct_UPackage__Script_GenericGraphPrinter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPrintGraphOptions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPrintGraphOptions_Statics::ClassParams = {
	&UPrintGraphOptions::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPrintGraphOptions_Statics::Class_MetaDataParams), Z_Construct_UClass_UPrintGraphOptions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPrintGraphOptions()
{
	if (!Z_Registration_Info_UClass_UPrintGraphOptions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPrintGraphOptions.OuterSingleton, Z_Construct_UClass_UPrintGraphOptions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPrintGraphOptions.OuterSingleton;
}
template<> GENERICGRAPHPRINTER_API UClass* StaticClass<UPrintGraphOptions>()
{
	return UPrintGraphOptions::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPrintGraphOptions);
UPrintGraphOptions::~UPrintGraphOptions() {}
// End Class UPrintGraphOptions

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GraphPrinter_Source_GenericGraphPrinter_Public_GenericGraphPrinter_Types_PrintGraphOptions_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPrintGraphOptions, UPrintGraphOptions::StaticClass, TEXT("UPrintGraphOptions"), &Z_Registration_Info_UClass_UPrintGraphOptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPrintGraphOptions), 2800440567U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GraphPrinter_Source_GenericGraphPrinter_Public_GenericGraphPrinter_Types_PrintGraphOptions_h_310163022(TEXT("/Script/GenericGraphPrinter"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GraphPrinter_Source_GenericGraphPrinter_Public_GenericGraphPrinter_Types_PrintGraphOptions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GraphPrinter_Source_GenericGraphPrinter_Public_GenericGraphPrinter_Types_PrintGraphOptions_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
