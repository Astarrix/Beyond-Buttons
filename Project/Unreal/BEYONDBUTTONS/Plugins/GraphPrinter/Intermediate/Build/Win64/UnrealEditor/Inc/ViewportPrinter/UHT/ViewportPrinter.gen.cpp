// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ViewportPrinter/Public/ViewportPrinter/WidgetPrinters/ViewportPrinter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeViewportPrinter() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_ViewportPrinter();
VIEWPORTPRINTER_API UClass* Z_Construct_UClass_UViewportPrinter();
VIEWPORTPRINTER_API UClass* Z_Construct_UClass_UViewportPrinter_NoRegister();
WIDGETPRINTER_API UClass* Z_Construct_UClass_UWidgetPrinter();
// End Cross Module References

// Begin Class UViewportPrinter
void UViewportPrinter::StaticRegisterNativesUViewportPrinter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UViewportPrinter);
UClass* Z_Construct_UClass_UViewportPrinter_NoRegister()
{
	return UViewportPrinter::StaticClass();
}
struct Z_Construct_UClass_UViewportPrinter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A class of graph printers dedicated to viewport in levels, materials, animation blueprints, etc.\n */" },
		{ "IncludePath", "ViewportPrinter/WidgetPrinters/ViewportPrinter.h" },
		{ "ModuleRelativePath", "Public/ViewportPrinter/WidgetPrinters/ViewportPrinter.h" },
		{ "ToolTip", "A class of graph printers dedicated to viewport in levels, materials, animation blueprints, etc." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UViewportPrinter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UViewportPrinter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidgetPrinter,
	(UObject* (*)())Z_Construct_UPackage__Script_ViewportPrinter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UViewportPrinter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UViewportPrinter_Statics::ClassParams = {
	&UViewportPrinter::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UViewportPrinter_Statics::Class_MetaDataParams), Z_Construct_UClass_UViewportPrinter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UViewportPrinter()
{
	if (!Z_Registration_Info_UClass_UViewportPrinter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UViewportPrinter.OuterSingleton, Z_Construct_UClass_UViewportPrinter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UViewportPrinter.OuterSingleton;
}
template<> VIEWPORTPRINTER_API UClass* StaticClass<UViewportPrinter>()
{
	return UViewportPrinter::StaticClass();
}
UViewportPrinter::UViewportPrinter() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UViewportPrinter);
UViewportPrinter::~UViewportPrinter() {}
// End Class UViewportPrinter

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GraphPrinter_Source_ViewportPrinter_Public_ViewportPrinter_WidgetPrinters_ViewportPrinter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UViewportPrinter, UViewportPrinter::StaticClass, TEXT("UViewportPrinter"), &Z_Registration_Info_UClass_UViewportPrinter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UViewportPrinter), 1250249387U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GraphPrinter_Source_ViewportPrinter_Public_ViewportPrinter_WidgetPrinters_ViewportPrinter_h_4268051770(TEXT("/Script/ViewportPrinter"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GraphPrinter_Source_ViewportPrinter_Public_ViewportPrinter_WidgetPrinters_ViewportPrinter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GraphPrinter_Source_ViewportPrinter_Public_ViewportPrinter_WidgetPrinters_ViewportPrinter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
