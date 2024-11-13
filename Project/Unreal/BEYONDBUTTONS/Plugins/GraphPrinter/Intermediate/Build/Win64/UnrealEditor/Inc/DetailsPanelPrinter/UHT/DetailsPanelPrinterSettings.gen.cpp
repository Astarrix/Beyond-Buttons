// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DetailsPanelPrinter/Public/DetailsPanelPrinter/Utilities/DetailsPanelPrinterSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDetailsPanelPrinterSettings() {}

// Begin Cross Module References
DETAILSPANELPRINTER_API UClass* Z_Construct_UClass_UDetailsPanelPrinterSettings();
DETAILSPANELPRINTER_API UClass* Z_Construct_UClass_UDetailsPanelPrinterSettings_NoRegister();
GRAPHPRINTERGLOBALS_API UClass* Z_Construct_UClass_UGraphPrinterSettings();
UPackage* Z_Construct_UPackage__Script_DetailsPanelPrinter();
// End Cross Module References

// Begin Class UDetailsPanelPrinterSettings
void UDetailsPanelPrinterSettings::StaticRegisterNativesUDetailsPanelPrinterSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDetailsPanelPrinterSettings);
UClass* Z_Construct_UClass_UDetailsPanelPrinterSettings_NoRegister()
{
	return UDetailsPanelPrinterSettings::StaticClass();
}
struct Z_Construct_UClass_UDetailsPanelPrinterSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A class that sets the default values for UPrintDetailsPanelOptions from the editor preferences.\n */" },
#endif
		{ "IncludePath", "DetailsPanelPrinter/Utilities/DetailsPanelPrinterSettings.h" },
		{ "ModuleRelativePath", "Public/DetailsPanelPrinter/Utilities/DetailsPanelPrinterSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A class that sets the default values for UPrintDetailsPanelOptions from the editor preferences." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[] = {
		{ "Category", "Image" },
		{ "ClampMin", "0.000000" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The height margin when drawing the details view.\n" },
#endif
		{ "ModuleRelativePath", "Public/DetailsPanelPrinter/Utilities/DetailsPanelPrinterSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The height margin when drawing the details view." },
#endif
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsIncludeExpansionStateInImageFile_MetaData[] = {
		{ "Category", "Expansion State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether to embed the expanded state of each item in the image file and restore the expanded state of each item when restoring.\n" },
#endif
		{ "ModuleRelativePath", "Public/DetailsPanelPrinter/Utilities/DetailsPanelPrinterSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to embed the expanded state of each item in the image file and restore the expanded state of each item when restoring." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWhetherToAlsoRestoreExpandedStates_MetaData[] = {
		{ "Category", "Expansion State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether to also restore the expanded state when restoring.\n" },
#endif
		{ "ModuleRelativePath", "Public/DetailsPanelPrinter/Utilities/DetailsPanelPrinterSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to also restore the expanded state when restoring." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Padding;
	static void NewProp_bIsIncludeExpansionStateInImageFile_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsIncludeExpansionStateInImageFile;
	static void NewProp_bWhetherToAlsoRestoreExpandedStates_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWhetherToAlsoRestoreExpandedStates;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDetailsPanelPrinterSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDetailsPanelPrinterSettings_Statics::NewProp_Padding = { "Padding", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDetailsPanelPrinterSettings, Padding), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Padding_MetaData), NewProp_Padding_MetaData) };
void Z_Construct_UClass_UDetailsPanelPrinterSettings_Statics::NewProp_bIsIncludeExpansionStateInImageFile_SetBit(void* Obj)
{
	((UDetailsPanelPrinterSettings*)Obj)->bIsIncludeExpansionStateInImageFile = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDetailsPanelPrinterSettings_Statics::NewProp_bIsIncludeExpansionStateInImageFile = { "bIsIncludeExpansionStateInImageFile", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDetailsPanelPrinterSettings), &Z_Construct_UClass_UDetailsPanelPrinterSettings_Statics::NewProp_bIsIncludeExpansionStateInImageFile_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsIncludeExpansionStateInImageFile_MetaData), NewProp_bIsIncludeExpansionStateInImageFile_MetaData) };
void Z_Construct_UClass_UDetailsPanelPrinterSettings_Statics::NewProp_bWhetherToAlsoRestoreExpandedStates_SetBit(void* Obj)
{
	((UDetailsPanelPrinterSettings*)Obj)->bWhetherToAlsoRestoreExpandedStates = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDetailsPanelPrinterSettings_Statics::NewProp_bWhetherToAlsoRestoreExpandedStates = { "bWhetherToAlsoRestoreExpandedStates", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDetailsPanelPrinterSettings), &Z_Construct_UClass_UDetailsPanelPrinterSettings_Statics::NewProp_bWhetherToAlsoRestoreExpandedStates_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWhetherToAlsoRestoreExpandedStates_MetaData), NewProp_bWhetherToAlsoRestoreExpandedStates_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDetailsPanelPrinterSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDetailsPanelPrinterSettings_Statics::NewProp_Padding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDetailsPanelPrinterSettings_Statics::NewProp_bIsIncludeExpansionStateInImageFile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDetailsPanelPrinterSettings_Statics::NewProp_bWhetherToAlsoRestoreExpandedStates,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDetailsPanelPrinterSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDetailsPanelPrinterSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGraphPrinterSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_DetailsPanelPrinter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDetailsPanelPrinterSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDetailsPanelPrinterSettings_Statics::ClassParams = {
	&UDetailsPanelPrinterSettings::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDetailsPanelPrinterSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDetailsPanelPrinterSettings_Statics::PropPointers),
	0,
	0x081000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDetailsPanelPrinterSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UDetailsPanelPrinterSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDetailsPanelPrinterSettings()
{
	if (!Z_Registration_Info_UClass_UDetailsPanelPrinterSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDetailsPanelPrinterSettings.OuterSingleton, Z_Construct_UClass_UDetailsPanelPrinterSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDetailsPanelPrinterSettings.OuterSingleton;
}
template<> DETAILSPANELPRINTER_API UClass* StaticClass<UDetailsPanelPrinterSettings>()
{
	return UDetailsPanelPrinterSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDetailsPanelPrinterSettings);
UDetailsPanelPrinterSettings::~UDetailsPanelPrinterSettings() {}
// End Class UDetailsPanelPrinterSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_W013321M_Documents_GitHub_Beyond_Buttons_Project_Unreal_BEYONDBUTTONS_Plugins_GraphPrinter_Source_DetailsPanelPrinter_Public_DetailsPanelPrinter_Utilities_DetailsPanelPrinterSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDetailsPanelPrinterSettings, UDetailsPanelPrinterSettings::StaticClass, TEXT("UDetailsPanelPrinterSettings"), &Z_Registration_Info_UClass_UDetailsPanelPrinterSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDetailsPanelPrinterSettings), 2529856905U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_W013321M_Documents_GitHub_Beyond_Buttons_Project_Unreal_BEYONDBUTTONS_Plugins_GraphPrinter_Source_DetailsPanelPrinter_Public_DetailsPanelPrinter_Utilities_DetailsPanelPrinterSettings_h_1635892921(TEXT("/Script/DetailsPanelPrinter"),
	Z_CompiledInDeferFile_FID_Users_W013321M_Documents_GitHub_Beyond_Buttons_Project_Unreal_BEYONDBUTTONS_Plugins_GraphPrinter_Source_DetailsPanelPrinter_Public_DetailsPanelPrinter_Utilities_DetailsPanelPrinterSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_W013321M_Documents_GitHub_Beyond_Buttons_Project_Unreal_BEYONDBUTTONS_Plugins_GraphPrinter_Source_DetailsPanelPrinter_Public_DetailsPanelPrinter_Utilities_DetailsPanelPrinterSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
