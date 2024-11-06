// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GenericGraphPrinter/Public/GenericGraphPrinter/Utilities/GenericGraphPrinterSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGenericGraphPrinterSettings() {}

// Begin Cross Module References
GENERICGRAPHPRINTER_API UClass* Z_Construct_UClass_UGenericGraphPrinterSettings();
GENERICGRAPHPRINTER_API UClass* Z_Construct_UClass_UGenericGraphPrinterSettings_NoRegister();
GRAPHPRINTERGLOBALS_API UClass* Z_Construct_UClass_UGraphPrinterSettings();
UPackage* Z_Construct_UPackage__Script_GenericGraphPrinter();
// End Cross Module References

// Begin Class UGenericGraphPrinterSettings
void UGenericGraphPrinterSettings::StaticRegisterNativesUGenericGraphPrinterSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGenericGraphPrinterSettings);
UClass* Z_Construct_UClass_UGenericGraphPrinterSettings_NoRegister()
{
	return UGenericGraphPrinterSettings::StaticClass();
}
struct Z_Construct_UClass_UGenericGraphPrinterSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A class that sets the default values for UPrintGraphOptions from the editor preferences.\n */" },
		{ "IncludePath", "GenericGraphPrinter/Utilities/GenericGraphPrinterSettings.h" },
		{ "ModuleRelativePath", "Public/GenericGraphPrinter/Utilities/GenericGraphPrinterSettings.h" },
		{ "ToolTip", "A class that sets the default values for UPrintGraphOptions from the editor preferences." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[] = {
		{ "Category", "Image" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "// The wide margin when drawing the graph editor.\n" },
		{ "ModuleRelativePath", "Public/GenericGraphPrinter/Utilities/GenericGraphPrinterSettings.h" },
		{ "ToolTip", "The wide margin when drawing the graph editor." },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawOnlyGraph_MetaData[] = {
		{ "Category", "Image" },
		{ "Comment", "// Whether to hide the title bar of the graph editor and the text of the graph type in the lower right.\n" },
		{ "ModuleRelativePath", "Public/GenericGraphPrinter/Utilities/GenericGraphPrinterSettings.h" },
		{ "ToolTip", "Whether to hide the title bar of the graph editor and the text of the graph type in the lower right." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Padding;
	static void NewProp_bDrawOnlyGraph_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawOnlyGraph;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenericGraphPrinterSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGenericGraphPrinterSettings_Statics::NewProp_Padding = { "Padding", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGenericGraphPrinterSettings, Padding), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Padding_MetaData), NewProp_Padding_MetaData) };
void Z_Construct_UClass_UGenericGraphPrinterSettings_Statics::NewProp_bDrawOnlyGraph_SetBit(void* Obj)
{
	((UGenericGraphPrinterSettings*)Obj)->bDrawOnlyGraph = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGenericGraphPrinterSettings_Statics::NewProp_bDrawOnlyGraph = { "bDrawOnlyGraph", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGenericGraphPrinterSettings), &Z_Construct_UClass_UGenericGraphPrinterSettings_Statics::NewProp_bDrawOnlyGraph_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawOnlyGraph_MetaData), NewProp_bDrawOnlyGraph_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGenericGraphPrinterSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenericGraphPrinterSettings_Statics::NewProp_Padding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenericGraphPrinterSettings_Statics::NewProp_bDrawOnlyGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGenericGraphPrinterSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGenericGraphPrinterSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGraphPrinterSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_GenericGraphPrinter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGenericGraphPrinterSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGenericGraphPrinterSettings_Statics::ClassParams = {
	&UGenericGraphPrinterSettings::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGenericGraphPrinterSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGenericGraphPrinterSettings_Statics::PropPointers),
	0,
	0x080000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGenericGraphPrinterSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UGenericGraphPrinterSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGenericGraphPrinterSettings()
{
	if (!Z_Registration_Info_UClass_UGenericGraphPrinterSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGenericGraphPrinterSettings.OuterSingleton, Z_Construct_UClass_UGenericGraphPrinterSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGenericGraphPrinterSettings.OuterSingleton;
}
template<> GENERICGRAPHPRINTER_API UClass* StaticClass<UGenericGraphPrinterSettings>()
{
	return UGenericGraphPrinterSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGenericGraphPrinterSettings);
UGenericGraphPrinterSettings::~UGenericGraphPrinterSettings() {}
// End Class UGenericGraphPrinterSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GraphPrinter_Source_GenericGraphPrinter_Public_GenericGraphPrinter_Utilities_GenericGraphPrinterSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGenericGraphPrinterSettings, UGenericGraphPrinterSettings::StaticClass, TEXT("UGenericGraphPrinterSettings"), &Z_Registration_Info_UClass_UGenericGraphPrinterSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGenericGraphPrinterSettings), 1087226829U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GraphPrinter_Source_GenericGraphPrinter_Public_GenericGraphPrinter_Utilities_GenericGraphPrinterSettings_h_4025576870(TEXT("/Script/GenericGraphPrinter"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GraphPrinter_Source_GenericGraphPrinter_Public_GenericGraphPrinter_Utilities_GenericGraphPrinterSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GraphPrinter_Source_GenericGraphPrinter_Public_GenericGraphPrinter_Utilities_GenericGraphPrinterSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
