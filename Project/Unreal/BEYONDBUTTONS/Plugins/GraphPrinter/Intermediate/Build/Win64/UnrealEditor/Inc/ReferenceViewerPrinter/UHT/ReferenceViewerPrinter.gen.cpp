// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReferenceViewerPrinter/Private/ReferenceViewerPrinter/WidgetPrinters/ReferenceViewerPrinter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReferenceViewerPrinter() {}

// Begin Cross Module References
GENERICGRAPHPRINTER_API UClass* Z_Construct_UClass_UGenericGraphPrinter();
REFERENCEVIEWERPRINTER_API UClass* Z_Construct_UClass_UReferenceViewerPrinter();
REFERENCEVIEWERPRINTER_API UClass* Z_Construct_UClass_UReferenceViewerPrinter_NoRegister();
UPackage* Z_Construct_UPackage__Script_ReferenceViewerPrinter();
// End Cross Module References

// Begin Class UReferenceViewerPrinter
void UReferenceViewerPrinter::StaticRegisterNativesUReferenceViewerPrinter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReferenceViewerPrinter);
UClass* Z_Construct_UClass_UReferenceViewerPrinter_NoRegister()
{
	return UReferenceViewerPrinter::StaticClass();
}
struct Z_Construct_UClass_UReferenceViewerPrinter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A class of graph printers dedicated to material assets.\n * Print the preview window along with the graph editor.\n */" },
		{ "IncludePath", "ReferenceViewerPrinter/WidgetPrinters/ReferenceViewerPrinter.h" },
		{ "ModuleRelativePath", "Private/ReferenceViewerPrinter/WidgetPrinters/ReferenceViewerPrinter.h" },
		{ "ToolTip", "A class of graph printers dedicated to material assets.\nPrint the preview window along with the graph editor." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReferenceViewerPrinter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UReferenceViewerPrinter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGenericGraphPrinter,
	(UObject* (*)())Z_Construct_UPackage__Script_ReferenceViewerPrinter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReferenceViewerPrinter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UReferenceViewerPrinter_Statics::ClassParams = {
	&UReferenceViewerPrinter::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReferenceViewerPrinter_Statics::Class_MetaDataParams), Z_Construct_UClass_UReferenceViewerPrinter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UReferenceViewerPrinter()
{
	if (!Z_Registration_Info_UClass_UReferenceViewerPrinter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReferenceViewerPrinter.OuterSingleton, Z_Construct_UClass_UReferenceViewerPrinter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UReferenceViewerPrinter.OuterSingleton;
}
template<> REFERENCEVIEWERPRINTER_API UClass* StaticClass<UReferenceViewerPrinter>()
{
	return UReferenceViewerPrinter::StaticClass();
}
UReferenceViewerPrinter::UReferenceViewerPrinter() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UReferenceViewerPrinter);
UReferenceViewerPrinter::~UReferenceViewerPrinter() {}
// End Class UReferenceViewerPrinter

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GraphPrinter_Source_ReferenceViewerPrinter_Private_ReferenceViewerPrinter_WidgetPrinters_ReferenceViewerPrinter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UReferenceViewerPrinter, UReferenceViewerPrinter::StaticClass, TEXT("UReferenceViewerPrinter"), &Z_Registration_Info_UClass_UReferenceViewerPrinter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReferenceViewerPrinter), 1770769670U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GraphPrinter_Source_ReferenceViewerPrinter_Private_ReferenceViewerPrinter_WidgetPrinters_ReferenceViewerPrinter_h_1888950489(TEXT("/Script/ReferenceViewerPrinter"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GraphPrinter_Source_ReferenceViewerPrinter_Private_ReferenceViewerPrinter_WidgetPrinters_ReferenceViewerPrinter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GraphPrinter_Source_ReferenceViewerPrinter_Private_ReferenceViewerPrinter_WidgetPrinters_ReferenceViewerPrinter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
