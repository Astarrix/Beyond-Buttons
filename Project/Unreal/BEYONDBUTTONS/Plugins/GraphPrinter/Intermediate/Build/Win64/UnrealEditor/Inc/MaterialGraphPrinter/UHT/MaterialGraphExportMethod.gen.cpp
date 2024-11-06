// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MaterialGraphPrinter/Public/MaterialGraphPrinter/Types/MaterialGraphExportMethod.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialGraphExportMethod() {}

// Begin Cross Module References
MATERIALGRAPHPRINTER_API UEnum* Z_Construct_UEnum_MaterialGraphPrinter_EMaterialGraphExportMethod();
UPackage* Z_Construct_UPackage__Script_MaterialGraphPrinter();
// End Cross Module References

// Begin Enum EMaterialGraphExportMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMaterialGraphExportMethod;
static UEnum* EMaterialGraphExportMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMaterialGraphExportMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMaterialGraphExportMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MaterialGraphPrinter_EMaterialGraphExportMethod, (UObject*)Z_Construct_UPackage__Script_MaterialGraphPrinter(), TEXT("EMaterialGraphExportMethod"));
	}
	return Z_Registration_Info_UEnum_EMaterialGraphExportMethod.OuterSingleton;
}
template<> MATERIALGRAPHPRINTER_API UEnum* StaticEnum<EMaterialGraphExportMethod>()
{
	return EMaterialGraphExportMethod_StaticEnum();
}
struct Z_Construct_UEnum_MaterialGraphPrinter_EMaterialGraphExportMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "CombinePreviewAndGraph.Name", "EMaterialGraphExportMethod::CombinePreviewAndGraph" },
		{ "Comment", "/**\n * An enum that defines how to output a graph in the material editor.\n */" },
		{ "GraphOnly.Name", "EMaterialGraphExportMethod::GraphOnly" },
		{ "ModuleRelativePath", "Public/MaterialGraphPrinter/Types/MaterialGraphExportMethod.h" },
		{ "PreviewAndGraphSeparately.Name", "EMaterialGraphExportMethod::PreviewAndGraphSeparately" },
		{ "ToolTip", "An enum that defines how to output a graph in the material editor." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMaterialGraphExportMethod::GraphOnly", (int64)EMaterialGraphExportMethod::GraphOnly },
		{ "EMaterialGraphExportMethod::CombinePreviewAndGraph", (int64)EMaterialGraphExportMethod::CombinePreviewAndGraph },
		{ "EMaterialGraphExportMethod::PreviewAndGraphSeparately", (int64)EMaterialGraphExportMethod::PreviewAndGraphSeparately },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MaterialGraphPrinter_EMaterialGraphExportMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MaterialGraphPrinter,
	nullptr,
	"EMaterialGraphExportMethod",
	"EMaterialGraphExportMethod",
	Z_Construct_UEnum_MaterialGraphPrinter_EMaterialGraphExportMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MaterialGraphPrinter_EMaterialGraphExportMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MaterialGraphPrinter_EMaterialGraphExportMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MaterialGraphPrinter_EMaterialGraphExportMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MaterialGraphPrinter_EMaterialGraphExportMethod()
{
	if (!Z_Registration_Info_UEnum_EMaterialGraphExportMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMaterialGraphExportMethod.InnerSingleton, Z_Construct_UEnum_MaterialGraphPrinter_EMaterialGraphExportMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMaterialGraphExportMethod.InnerSingleton;
}
// End Enum EMaterialGraphExportMethod

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GraphPrinter_Source_MaterialGraphPrinter_Public_MaterialGraphPrinter_Types_MaterialGraphExportMethod_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMaterialGraphExportMethod_StaticEnum, TEXT("EMaterialGraphExportMethod"), &Z_Registration_Info_UEnum_EMaterialGraphExportMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2258277287U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GraphPrinter_Source_MaterialGraphPrinter_Public_MaterialGraphPrinter_Types_MaterialGraphExportMethod_h_2765994835(TEXT("/Script/MaterialGraphPrinter"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GraphPrinter_Source_MaterialGraphPrinter_Public_MaterialGraphPrinter_Types_MaterialGraphExportMethod_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GraphPrinter_Source_MaterialGraphPrinter_Public_MaterialGraphPrinter_Types_MaterialGraphExportMethod_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
