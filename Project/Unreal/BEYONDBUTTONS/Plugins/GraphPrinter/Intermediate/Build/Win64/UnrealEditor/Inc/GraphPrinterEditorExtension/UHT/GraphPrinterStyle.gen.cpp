// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GraphPrinterEditorExtension/Public/GraphPrinterEditorExtension/Utilities/GraphPrinterStyle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGraphPrinterStyle() {}

// Begin Cross Module References
GRAPHPRINTEREDITOREXTENSION_API UEnum* Z_Construct_UEnum_GraphPrinterEditorExtension_EGraphPrinterStyleIconType();
UPackage* Z_Construct_UPackage__Script_GraphPrinterEditorExtension();
// End Cross Module References

// Begin Enum EGraphPrinterStyleIconType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGraphPrinterStyleIconType;
static UEnum* EGraphPrinterStyleIconType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGraphPrinterStyleIconType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGraphPrinterStyleIconType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GraphPrinterEditorExtension_EGraphPrinterStyleIconType, (UObject*)Z_Construct_UPackage__Script_GraphPrinterEditorExtension(), TEXT("EGraphPrinterStyleIconType"));
	}
	return Z_Registration_Info_UEnum_EGraphPrinterStyleIconType.OuterSingleton;
}
template<> GRAPHPRINTEREDITOREXTENSION_API UEnum* StaticEnum<EGraphPrinterStyleIconType>()
{
	return EGraphPrinterStyleIconType_StaticEnum();
}
struct Z_Construct_UEnum_GraphPrinterEditorExtension_EGraphPrinterStyleIconType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// An enum class that defines type of icon registered in this style set.\n" },
#endif
		{ "CopyAllAreaOfWidgetToClipboard.Name", "EGraphPrinterStyleIconType::CopyAllAreaOfWidgetToClipboard" },
		{ "CopySelectedAreaOfWidgetToClipboard.Name", "EGraphPrinterStyleIconType::CopySelectedAreaOfWidgetToClipboard" },
		{ "ModuleRelativePath", "Public/GraphPrinterEditorExtension/Utilities/GraphPrinterStyle.h" },
		{ "OpenExportDestinationFolder.Name", "EGraphPrinterStyleIconType::OpenExportDestinationFolder" },
		{ "PluginIcon.Name", "EGraphPrinterStyleIconType::PluginIcon" },
		{ "PrintAllAreaOfWidget.Name", "EGraphPrinterStyleIconType::PrintAllAreaOfWidget" },
		{ "PrintSelectedAreaOfWidget.Name", "EGraphPrinterStyleIconType::PrintSelectedAreaOfWidget" },
		{ "RestoreWidgetFromImageFile.Name", "EGraphPrinterStyleIconType::RestoreWidgetFromImageFile" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An enum class that defines type of icon registered in this style set." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGraphPrinterStyleIconType::PluginIcon", (int64)EGraphPrinterStyleIconType::PluginIcon },
		{ "EGraphPrinterStyleIconType::CopyAllAreaOfWidgetToClipboard", (int64)EGraphPrinterStyleIconType::CopyAllAreaOfWidgetToClipboard },
		{ "EGraphPrinterStyleIconType::CopySelectedAreaOfWidgetToClipboard", (int64)EGraphPrinterStyleIconType::CopySelectedAreaOfWidgetToClipboard },
		{ "EGraphPrinterStyleIconType::PrintAllAreaOfWidget", (int64)EGraphPrinterStyleIconType::PrintAllAreaOfWidget },
		{ "EGraphPrinterStyleIconType::PrintSelectedAreaOfWidget", (int64)EGraphPrinterStyleIconType::PrintSelectedAreaOfWidget },
		{ "EGraphPrinterStyleIconType::RestoreWidgetFromImageFile", (int64)EGraphPrinterStyleIconType::RestoreWidgetFromImageFile },
		{ "EGraphPrinterStyleIconType::OpenExportDestinationFolder", (int64)EGraphPrinterStyleIconType::OpenExportDestinationFolder },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GraphPrinterEditorExtension_EGraphPrinterStyleIconType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GraphPrinterEditorExtension,
	nullptr,
	"EGraphPrinterStyleIconType",
	"EGraphPrinterStyleIconType",
	Z_Construct_UEnum_GraphPrinterEditorExtension_EGraphPrinterStyleIconType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GraphPrinterEditorExtension_EGraphPrinterStyleIconType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GraphPrinterEditorExtension_EGraphPrinterStyleIconType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GraphPrinterEditorExtension_EGraphPrinterStyleIconType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GraphPrinterEditorExtension_EGraphPrinterStyleIconType()
{
	if (!Z_Registration_Info_UEnum_EGraphPrinterStyleIconType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGraphPrinterStyleIconType.InnerSingleton, Z_Construct_UEnum_GraphPrinterEditorExtension_EGraphPrinterStyleIconType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGraphPrinterStyleIconType.InnerSingleton;
}
// End Enum EGraphPrinterStyleIconType

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_W013321M_Documents_GitHub_Beyond_Buttons_Project_Unreal_BEYONDBUTTONS_Plugins_GraphPrinter_Source_GraphPrinterEditorExtension_Public_GraphPrinterEditorExtension_Utilities_GraphPrinterStyle_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGraphPrinterStyleIconType_StaticEnum, TEXT("EGraphPrinterStyleIconType"), &Z_Registration_Info_UEnum_EGraphPrinterStyleIconType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4231823815U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_W013321M_Documents_GitHub_Beyond_Buttons_Project_Unreal_BEYONDBUTTONS_Plugins_GraphPrinter_Source_GraphPrinterEditorExtension_Public_GraphPrinterEditorExtension_Utilities_GraphPrinterStyle_h_2001747180(TEXT("/Script/GraphPrinterEditorExtension"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_W013321M_Documents_GitHub_Beyond_Buttons_Project_Unreal_BEYONDBUTTONS_Plugins_GraphPrinter_Source_GraphPrinterEditorExtension_Public_GraphPrinterEditorExtension_Utilities_GraphPrinterStyle_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_W013321M_Documents_GitHub_Beyond_Buttons_Project_Unreal_BEYONDBUTTONS_Plugins_GraphPrinter_Source_GraphPrinterEditorExtension_Public_GraphPrinterEditorExtension_Utilities_GraphPrinterStyle_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
