// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WidgetPrinter/Public/WidgetPrinter/Types/PrintWidgetOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrintWidgetOptions() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_WidgetPrinter();
WIDGETPRINTER_API UClass* Z_Construct_UClass_UPrintWidgetOptions();
WIDGETPRINTER_API UClass* Z_Construct_UClass_UPrintWidgetOptions_NoRegister();
// End Cross Module References

// Begin Class UPrintWidgetOptions
void UPrintWidgetOptions::StaticRegisterNativesUPrintWidgetOptions()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPrintWidgetOptions);
UClass* Z_Construct_UClass_UPrintWidgetOptions_NoRegister()
{
	return UPrintWidgetOptions::StaticClass();
}
struct Z_Construct_UClass_UPrintWidgetOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * An optional class to specify when printing the widget.\n */" },
		{ "IncludePath", "WidgetPrinter/Types/PrintWidgetOptions.h" },
		{ "ModuleRelativePath", "Public/WidgetPrinter/Types/PrintWidgetOptions.h" },
		{ "ToolTip", "An optional class to specify when printing the widget." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPrintWidgetOptions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPrintWidgetOptions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_WidgetPrinter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPrintWidgetOptions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPrintWidgetOptions_Statics::ClassParams = {
	&UPrintWidgetOptions::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPrintWidgetOptions_Statics::Class_MetaDataParams), Z_Construct_UClass_UPrintWidgetOptions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPrintWidgetOptions()
{
	if (!Z_Registration_Info_UClass_UPrintWidgetOptions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPrintWidgetOptions.OuterSingleton, Z_Construct_UClass_UPrintWidgetOptions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPrintWidgetOptions.OuterSingleton;
}
template<> WIDGETPRINTER_API UClass* StaticClass<UPrintWidgetOptions>()
{
	return UPrintWidgetOptions::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPrintWidgetOptions);
UPrintWidgetOptions::~UPrintWidgetOptions() {}
// End Class UPrintWidgetOptions

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GraphPrinter_Source_WidgetPrinter_Public_WidgetPrinter_Types_PrintWidgetOptions_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPrintWidgetOptions, UPrintWidgetOptions::StaticClass, TEXT("UPrintWidgetOptions"), &Z_Registration_Info_UClass_UPrintWidgetOptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPrintWidgetOptions), 187275525U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GraphPrinter_Source_WidgetPrinter_Public_WidgetPrinter_Types_PrintWidgetOptions_h_497431245(TEXT("/Script/WidgetPrinter"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GraphPrinter_Source_WidgetPrinter_Public_WidgetPrinter_Types_PrintWidgetOptions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GraphPrinter_Source_WidgetPrinter_Public_WidgetPrinter_Types_PrintWidgetOptions_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
