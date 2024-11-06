// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WidgetPrinter/Public/WidgetPrinter/Utilities/WidgetPrinterSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetPrinterSettings() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureFilter();
GRAPHPRINTERGLOBALS_API UClass* Z_Construct_UClass_UGraphPrinterSettings();
IMAGEWRITEQUEUE_API UEnum* Z_Construct_UEnum_ImageWriteQueue_EDesiredImageFormat();
UPackage* Z_Construct_UPackage__Script_WidgetPrinter();
WIDGETPRINTER_API UClass* Z_Construct_UClass_UWidgetPrinterSettings();
WIDGETPRINTER_API UClass* Z_Construct_UClass_UWidgetPrinterSettings_NoRegister();
// End Cross Module References

// Begin Class UWidgetPrinterSettings
void UWidgetPrinterSettings::StaticRegisterNativesUWidgetPrinterSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidgetPrinterSettings);
UClass* Z_Construct_UClass_UWidgetPrinterSettings_NoRegister()
{
	return UWidgetPrinterSettings::StaticClass();
}
struct Z_Construct_UClass_UWidgetPrinterSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A class that sets the default values for UPrintWidgetOptions from the editor preferences.\n */" },
		{ "IncludePath", "WidgetPrinter/Utilities/WidgetPrinterSettings.h" },
		{ "ModuleRelativePath", "Public/WidgetPrinter/Utilities/WidgetPrinterSettings.h" },
		{ "ToolTip", "A class that sets the default values for UPrintWidgetOptions from the editor preferences." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsIncludeWidgetInfoInImageFile_MetaData[] = {
		{ "Category", "Image" },
		{ "Comment", "// Whether to embed the widget information in the image file.\n// When this option is enabled, the image formats that can be selected are limited.\n" },
		{ "ModuleRelativePath", "Public/WidgetPrinter/Utilities/WidgetPrinterSettings.h" },
		{ "ToolTip", "Whether to embed the widget information in the image file.\nWhen this option is enabled, the image formats that can be selected are limited." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Format_MetaData[] = {
		{ "Category", "Image" },
		{ "Comment", "// The desired output image format to write to disk.\n" },
		{ "ModuleRelativePath", "Public/WidgetPrinter/Utilities/WidgetPrinterSettings.h" },
		{ "ToolTip", "The desired output image format to write to disk." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompressionQuality_MetaData[] = {
		{ "Category", "Image" },
		{ "Comment", "// The image format specific compression setting. Either 0 (Default) or 1 (Uncompressed) for EXRs, or a value between 0 and 100.\n" },
		{ "ModuleRelativePath", "Public/WidgetPrinter/Utilities/WidgetPrinterSettings.h" },
		{ "ToolTip", "The image format specific compression setting. Either 0 (Default) or 1 (Uncompressed) for EXRs, or a value between 0 and 100." },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilteringMode_MetaData[] = {
		{ "Category", "Image" },
		{ "Comment", "// The texture filtering mode to use when outputting.\n" },
		{ "ModuleRelativePath", "Public/WidgetPrinter/Utilities/WidgetPrinterSettings.h" },
		{ "ToolTip", "The texture filtering mode to use when outputting." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseGamma_MetaData[] = {
		{ "Category", "Image" },
		{ "Comment", "// Whether to output the drawing result affected by the gamma value.\n" },
		{ "ModuleRelativePath", "Public/WidgetPrinter/Utilities/WidgetPrinterSettings.h" },
		{ "ToolTip", "Whether to output the drawing result affected by the gamma value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxImageSize_MetaData[] = {
		{ "Category", "Image" },
		{ "Comment", "// The maximum size of the output image.\n// There is no limit at (0.f, 0.f).\n// If set it too high, you may run out of video memory and crash.\n" },
		{ "ModuleRelativePath", "Public/WidgetPrinter/Utilities/WidgetPrinterSettings.h" },
		{ "ToolTip", "The maximum size of the output image.\nThere is no limit at (0.f, 0.f).\nIf set it too high, you may run out of video memory and crash." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderingScale_MetaData[] = {
		{ "Category", "Image" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.100000" },
		{ "Comment", "// The drawing scale of the output image.\n// Decrease the value if you want to draw a graph larger than MaxImageSize.\n// Decreasing the value may cause defects in the drawing result.\n" },
		{ "ModuleRelativePath", "Public/WidgetPrinter/Utilities/WidgetPrinterSettings.h" },
		{ "ToolTip", "The drawing scale of the output image.\nDecrease the value if you want to draw a graph larger than MaxImageSize.\nDecreasing the value may cause defects in the drawing result." },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.100000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanOverwriteFileWhenExport_MetaData[] = {
		{ "Category", "File" },
		{ "Comment", "// Whether to overwrite the image if it already exists when export.\n" },
		{ "ModuleRelativePath", "Public/WidgetPrinter/Utilities/WidgetPrinterSettings.h" },
		{ "ToolTip", "Whether to overwrite the image if it already exists when export." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputDirectory_MetaData[] = {
		{ "Category", "File" },
		{ "Comment", "// The directory path where the image file is output.\n" },
		{ "ModuleRelativePath", "Public/WidgetPrinter/Utilities/WidgetPrinterSettings.h" },
		{ "ToolTip", "The directory path where the image file is output." },
	};
#endif // WITH_METADATA
	static void NewProp_bIsIncludeWidgetInfoInImageFile_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsIncludeWidgetInfoInImageFile;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Format_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Format;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CompressionQuality;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FilteringMode;
	static void NewProp_bUseGamma_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseGamma;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxImageSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RenderingScale;
	static void NewProp_bCanOverwriteFileWhenExport_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanOverwriteFileWhenExport;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutputDirectory;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetPrinterSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UWidgetPrinterSettings_Statics::NewProp_bIsIncludeWidgetInfoInImageFile_SetBit(void* Obj)
{
	((UWidgetPrinterSettings*)Obj)->bIsIncludeWidgetInfoInImageFile = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWidgetPrinterSettings_Statics::NewProp_bIsIncludeWidgetInfoInImageFile = { "bIsIncludeWidgetInfoInImageFile", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWidgetPrinterSettings), &Z_Construct_UClass_UWidgetPrinterSettings_Statics::NewProp_bIsIncludeWidgetInfoInImageFile_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsIncludeWidgetInfoInImageFile_MetaData), NewProp_bIsIncludeWidgetInfoInImageFile_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWidgetPrinterSettings_Statics::NewProp_Format_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWidgetPrinterSettings_Statics::NewProp_Format = { "Format", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidgetPrinterSettings, Format), Z_Construct_UEnum_ImageWriteQueue_EDesiredImageFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Format_MetaData), NewProp_Format_MetaData) }; // 3760367723
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWidgetPrinterSettings_Statics::NewProp_CompressionQuality = { "CompressionQuality", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidgetPrinterSettings, CompressionQuality), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompressionQuality_MetaData), NewProp_CompressionQuality_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWidgetPrinterSettings_Statics::NewProp_FilteringMode = { "FilteringMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidgetPrinterSettings, FilteringMode), Z_Construct_UEnum_Engine_TextureFilter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilteringMode_MetaData), NewProp_FilteringMode_MetaData) }; // 525537855
void Z_Construct_UClass_UWidgetPrinterSettings_Statics::NewProp_bUseGamma_SetBit(void* Obj)
{
	((UWidgetPrinterSettings*)Obj)->bUseGamma = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWidgetPrinterSettings_Statics::NewProp_bUseGamma = { "bUseGamma", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWidgetPrinterSettings), &Z_Construct_UClass_UWidgetPrinterSettings_Statics::NewProp_bUseGamma_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseGamma_MetaData), NewProp_bUseGamma_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWidgetPrinterSettings_Statics::NewProp_MaxImageSize = { "MaxImageSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidgetPrinterSettings, MaxImageSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxImageSize_MetaData), NewProp_MaxImageSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWidgetPrinterSettings_Statics::NewProp_RenderingScale = { "RenderingScale", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidgetPrinterSettings, RenderingScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderingScale_MetaData), NewProp_RenderingScale_MetaData) };
void Z_Construct_UClass_UWidgetPrinterSettings_Statics::NewProp_bCanOverwriteFileWhenExport_SetBit(void* Obj)
{
	((UWidgetPrinterSettings*)Obj)->bCanOverwriteFileWhenExport = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWidgetPrinterSettings_Statics::NewProp_bCanOverwriteFileWhenExport = { "bCanOverwriteFileWhenExport", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWidgetPrinterSettings), &Z_Construct_UClass_UWidgetPrinterSettings_Statics::NewProp_bCanOverwriteFileWhenExport_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanOverwriteFileWhenExport_MetaData), NewProp_bCanOverwriteFileWhenExport_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWidgetPrinterSettings_Statics::NewProp_OutputDirectory = { "OutputDirectory", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidgetPrinterSettings, OutputDirectory), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputDirectory_MetaData), NewProp_OutputDirectory_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidgetPrinterSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetPrinterSettings_Statics::NewProp_bIsIncludeWidgetInfoInImageFile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetPrinterSettings_Statics::NewProp_Format_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetPrinterSettings_Statics::NewProp_Format,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetPrinterSettings_Statics::NewProp_CompressionQuality,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetPrinterSettings_Statics::NewProp_FilteringMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetPrinterSettings_Statics::NewProp_bUseGamma,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetPrinterSettings_Statics::NewProp_MaxImageSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetPrinterSettings_Statics::NewProp_RenderingScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetPrinterSettings_Statics::NewProp_bCanOverwriteFileWhenExport,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetPrinterSettings_Statics::NewProp_OutputDirectory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetPrinterSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWidgetPrinterSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGraphPrinterSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_WidgetPrinter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetPrinterSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidgetPrinterSettings_Statics::ClassParams = {
	&UWidgetPrinterSettings::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWidgetPrinterSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetPrinterSettings_Statics::PropPointers),
	0,
	0x081000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetPrinterSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UWidgetPrinterSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWidgetPrinterSettings()
{
	if (!Z_Registration_Info_UClass_UWidgetPrinterSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidgetPrinterSettings.OuterSingleton, Z_Construct_UClass_UWidgetPrinterSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWidgetPrinterSettings.OuterSingleton;
}
template<> WIDGETPRINTER_API UClass* StaticClass<UWidgetPrinterSettings>()
{
	return UWidgetPrinterSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetPrinterSettings);
UWidgetPrinterSettings::~UWidgetPrinterSettings() {}
// End Class UWidgetPrinterSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GraphPrinter_Source_WidgetPrinter_Public_WidgetPrinter_Utilities_WidgetPrinterSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWidgetPrinterSettings, UWidgetPrinterSettings::StaticClass, TEXT("UWidgetPrinterSettings"), &Z_Registration_Info_UClass_UWidgetPrinterSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidgetPrinterSettings), 1574868865U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GraphPrinter_Source_WidgetPrinter_Public_WidgetPrinter_Utilities_WidgetPrinterSettings_h_2469673941(TEXT("/Script/WidgetPrinter"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GraphPrinter_Source_WidgetPrinter_Public_WidgetPrinter_Utilities_WidgetPrinterSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GraphPrinter_Source_WidgetPrinter_Public_WidgetPrinter_Utilities_WidgetPrinterSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
