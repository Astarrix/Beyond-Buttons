// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MaterialGraphPrinter/Public/MaterialGraphPrinter/Utilities/MaterialGraphPrinterSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialGraphPrinterSettings() {}

// Begin Cross Module References
GRAPHPRINTERGLOBALS_API UClass* Z_Construct_UClass_UGraphPrinterSettings();
MATERIALGRAPHPRINTER_API UClass* Z_Construct_UClass_UMaterialGraphPrinterSettings();
MATERIALGRAPHPRINTER_API UClass* Z_Construct_UClass_UMaterialGraphPrinterSettings_NoRegister();
MATERIALGRAPHPRINTER_API UEnum* Z_Construct_UEnum_MaterialGraphPrinter_EMaterialGraphExportMethod();
UPackage* Z_Construct_UPackage__Script_MaterialGraphPrinter();
// End Cross Module References

// Begin Class UMaterialGraphPrinterSettings
void UMaterialGraphPrinterSettings::StaticRegisterNativesUMaterialGraphPrinterSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialGraphPrinterSettings);
UClass* Z_Construct_UClass_UMaterialGraphPrinterSettings_NoRegister()
{
	return UMaterialGraphPrinterSettings::StaticClass();
}
struct Z_Construct_UClass_UMaterialGraphPrinterSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A class that sets the default values for UPrintMaterialGraphOptions from the editor preferences.\n */" },
		{ "IncludePath", "MaterialGraphPrinter/Utilities/MaterialGraphPrinterSettings.h" },
		{ "ModuleRelativePath", "Public/MaterialGraphPrinter/Utilities/MaterialGraphPrinterSettings.h" },
		{ "ToolTip", "A class that sets the default values for UPrintMaterialGraphOptions from the editor preferences." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialGraphExportMethod_MetaData[] = {
		{ "Category", "Material Editor" },
		{ "Comment", "// How to output a graph in the material editor.\n" },
		{ "ModuleRelativePath", "Public/MaterialGraphPrinter/Utilities/MaterialGraphPrinterSettings.h" },
		{ "ToolTip", "How to output a graph in the material editor." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_MaterialGraphExportMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MaterialGraphExportMethod;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialGraphPrinterSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialGraphPrinterSettings_Statics::NewProp_MaterialGraphExportMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMaterialGraphPrinterSettings_Statics::NewProp_MaterialGraphExportMethod = { "MaterialGraphExportMethod", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialGraphPrinterSettings, MaterialGraphExportMethod), Z_Construct_UEnum_MaterialGraphPrinter_EMaterialGraphExportMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialGraphExportMethod_MetaData), NewProp_MaterialGraphExportMethod_MetaData) }; // 2258277287
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialGraphPrinterSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialGraphPrinterSettings_Statics::NewProp_MaterialGraphExportMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialGraphPrinterSettings_Statics::NewProp_MaterialGraphExportMethod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialGraphPrinterSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialGraphPrinterSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGraphPrinterSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_MaterialGraphPrinter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialGraphPrinterSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialGraphPrinterSettings_Statics::ClassParams = {
	&UMaterialGraphPrinterSettings::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialGraphPrinterSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialGraphPrinterSettings_Statics::PropPointers),
	0,
	0x081000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialGraphPrinterSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialGraphPrinterSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialGraphPrinterSettings()
{
	if (!Z_Registration_Info_UClass_UMaterialGraphPrinterSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialGraphPrinterSettings.OuterSingleton, Z_Construct_UClass_UMaterialGraphPrinterSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialGraphPrinterSettings.OuterSingleton;
}
template<> MATERIALGRAPHPRINTER_API UClass* StaticClass<UMaterialGraphPrinterSettings>()
{
	return UMaterialGraphPrinterSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialGraphPrinterSettings);
UMaterialGraphPrinterSettings::~UMaterialGraphPrinterSettings() {}
// End Class UMaterialGraphPrinterSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GraphPrinter_Source_MaterialGraphPrinter_Public_MaterialGraphPrinter_Utilities_MaterialGraphPrinterSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialGraphPrinterSettings, UMaterialGraphPrinterSettings::StaticClass, TEXT("UMaterialGraphPrinterSettings"), &Z_Registration_Info_UClass_UMaterialGraphPrinterSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialGraphPrinterSettings), 4045553346U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GraphPrinter_Source_MaterialGraphPrinter_Public_MaterialGraphPrinter_Utilities_MaterialGraphPrinterSettings_h_657379575(TEXT("/Script/MaterialGraphPrinter"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GraphPrinter_Source_MaterialGraphPrinter_Public_MaterialGraphPrinter_Utilities_MaterialGraphPrinterSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GraphPrinter_Source_MaterialGraphPrinter_Public_MaterialGraphPrinter_Utilities_MaterialGraphPrinterSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
