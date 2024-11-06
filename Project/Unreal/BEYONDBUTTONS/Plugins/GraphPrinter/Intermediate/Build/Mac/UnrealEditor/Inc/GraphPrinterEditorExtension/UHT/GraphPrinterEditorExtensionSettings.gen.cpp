// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GraphPrinterEditorExtension/Public/GraphPrinterEditorExtension/Utilities/GraphPrinterEditorExtensionSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGraphPrinterEditorExtensionSettings() {}

// Begin Cross Module References
GRAPHPRINTEREDITOREXTENSION_API UClass* Z_Construct_UClass_UGraphPrinterEditorExtensionSettings();
GRAPHPRINTEREDITOREXTENSION_API UClass* Z_Construct_UClass_UGraphPrinterEditorExtensionSettings_NoRegister();
GRAPHPRINTERGLOBALS_API UClass* Z_Construct_UClass_UGraphPrinterSettings();
UPackage* Z_Construct_UPackage__Script_GraphPrinterEditorExtension();
// End Cross Module References

// Begin Class UGraphPrinterEditorExtensionSettings
void UGraphPrinterEditorExtensionSettings::StaticRegisterNativesUGraphPrinterEditorExtensionSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGraphPrinterEditorExtensionSettings);
UClass* Z_Construct_UClass_UGraphPrinterEditorExtensionSettings_NoRegister()
{
	return UGraphPrinterEditorExtensionSettings::StaticClass();
}
struct Z_Construct_UClass_UGraphPrinterEditorExtensionSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A editor preferences class related to the editor extension of this plugin.\n */" },
		{ "IncludePath", "GraphPrinterEditorExtension/Utilities/GraphPrinterEditorExtensionSettings.h" },
		{ "ModuleRelativePath", "Public/GraphPrinterEditorExtension/Utilities/GraphPrinterEditorExtensionSettings.h" },
		{ "ToolTip", "A editor preferences class related to the editor extension of this plugin." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowSubMenuInToolMenu_MetaData[] = {
		{ "Category", "UI" },
		{ "Comment", "// Whether to display submenus that perform plugin functions in the editor's tools menu.\n" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Public/GraphPrinterEditorExtension/Utilities/GraphPrinterEditorExtensionSettings.h" },
		{ "ToolTip", "Whether to display submenus that perform plugin functions in the editor's tools menu." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowComboButtonInToolbar_MetaData[] = {
		{ "Category", "UI" },
		{ "Comment", "// Whether to show the combo button that performs the function of the plugin in the toolbar of the asset editor.\n" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Public/GraphPrinterEditorExtension/Utilities/GraphPrinterEditorExtensionSettings.h" },
		{ "ToolTip", "Whether to show the combo button that performs the function of the plugin in the toolbar of the asset editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowComboButtonInStatusBar_MetaData[] = {
		{ "Category", "UI" },
		{ "Comment", "// Whether to show the combo button that performs the function of the plugin in the editor's status bar.\n" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Public/GraphPrinterEditorExtension/Utilities/GraphPrinterEditorExtensionSettings.h" },
		{ "ToolTip", "Whether to show the combo button that performs the function of the plugin in the editor's status bar." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCollectTargetWidgetsAutomatically_MetaData[] = {
		{ "Category", "UI" },
		{ "Comment", "// Whether to automatically collect the target widgets when opening any type of menu.\n" },
		{ "ModuleRelativePath", "Public/GraphPrinterEditorExtension/Utilities/GraphPrinterEditorExtensionSettings.h" },
		{ "ToolTip", "Whether to automatically collect the target widgets when opening any type of menu." },
	};
#endif // WITH_METADATA
	static void NewProp_bShowSubMenuInToolMenu_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowSubMenuInToolMenu;
	static void NewProp_bShowComboButtonInToolbar_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowComboButtonInToolbar;
	static void NewProp_bShowComboButtonInStatusBar_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowComboButtonInStatusBar;
	static void NewProp_bCollectTargetWidgetsAutomatically_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCollectTargetWidgetsAutomatically;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGraphPrinterEditorExtensionSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UGraphPrinterEditorExtensionSettings_Statics::NewProp_bShowSubMenuInToolMenu_SetBit(void* Obj)
{
	((UGraphPrinterEditorExtensionSettings*)Obj)->bShowSubMenuInToolMenu = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGraphPrinterEditorExtensionSettings_Statics::NewProp_bShowSubMenuInToolMenu = { "bShowSubMenuInToolMenu", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGraphPrinterEditorExtensionSettings), &Z_Construct_UClass_UGraphPrinterEditorExtensionSettings_Statics::NewProp_bShowSubMenuInToolMenu_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowSubMenuInToolMenu_MetaData), NewProp_bShowSubMenuInToolMenu_MetaData) };
void Z_Construct_UClass_UGraphPrinterEditorExtensionSettings_Statics::NewProp_bShowComboButtonInToolbar_SetBit(void* Obj)
{
	((UGraphPrinterEditorExtensionSettings*)Obj)->bShowComboButtonInToolbar = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGraphPrinterEditorExtensionSettings_Statics::NewProp_bShowComboButtonInToolbar = { "bShowComboButtonInToolbar", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGraphPrinterEditorExtensionSettings), &Z_Construct_UClass_UGraphPrinterEditorExtensionSettings_Statics::NewProp_bShowComboButtonInToolbar_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowComboButtonInToolbar_MetaData), NewProp_bShowComboButtonInToolbar_MetaData) };
void Z_Construct_UClass_UGraphPrinterEditorExtensionSettings_Statics::NewProp_bShowComboButtonInStatusBar_SetBit(void* Obj)
{
	((UGraphPrinterEditorExtensionSettings*)Obj)->bShowComboButtonInStatusBar = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGraphPrinterEditorExtensionSettings_Statics::NewProp_bShowComboButtonInStatusBar = { "bShowComboButtonInStatusBar", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGraphPrinterEditorExtensionSettings), &Z_Construct_UClass_UGraphPrinterEditorExtensionSettings_Statics::NewProp_bShowComboButtonInStatusBar_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowComboButtonInStatusBar_MetaData), NewProp_bShowComboButtonInStatusBar_MetaData) };
void Z_Construct_UClass_UGraphPrinterEditorExtensionSettings_Statics::NewProp_bCollectTargetWidgetsAutomatically_SetBit(void* Obj)
{
	((UGraphPrinterEditorExtensionSettings*)Obj)->bCollectTargetWidgetsAutomatically = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGraphPrinterEditorExtensionSettings_Statics::NewProp_bCollectTargetWidgetsAutomatically = { "bCollectTargetWidgetsAutomatically", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGraphPrinterEditorExtensionSettings), &Z_Construct_UClass_UGraphPrinterEditorExtensionSettings_Statics::NewProp_bCollectTargetWidgetsAutomatically_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCollectTargetWidgetsAutomatically_MetaData), NewProp_bCollectTargetWidgetsAutomatically_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGraphPrinterEditorExtensionSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphPrinterEditorExtensionSettings_Statics::NewProp_bShowSubMenuInToolMenu,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphPrinterEditorExtensionSettings_Statics::NewProp_bShowComboButtonInToolbar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphPrinterEditorExtensionSettings_Statics::NewProp_bShowComboButtonInStatusBar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphPrinterEditorExtensionSettings_Statics::NewProp_bCollectTargetWidgetsAutomatically,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGraphPrinterEditorExtensionSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGraphPrinterEditorExtensionSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGraphPrinterSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_GraphPrinterEditorExtension,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGraphPrinterEditorExtensionSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGraphPrinterEditorExtensionSettings_Statics::ClassParams = {
	&UGraphPrinterEditorExtensionSettings::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGraphPrinterEditorExtensionSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGraphPrinterEditorExtensionSettings_Statics::PropPointers),
	0,
	0x080000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGraphPrinterEditorExtensionSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UGraphPrinterEditorExtensionSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGraphPrinterEditorExtensionSettings()
{
	if (!Z_Registration_Info_UClass_UGraphPrinterEditorExtensionSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGraphPrinterEditorExtensionSettings.OuterSingleton, Z_Construct_UClass_UGraphPrinterEditorExtensionSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGraphPrinterEditorExtensionSettings.OuterSingleton;
}
template<> GRAPHPRINTEREDITOREXTENSION_API UClass* StaticClass<UGraphPrinterEditorExtensionSettings>()
{
	return UGraphPrinterEditorExtensionSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGraphPrinterEditorExtensionSettings);
UGraphPrinterEditorExtensionSettings::~UGraphPrinterEditorExtensionSettings() {}
// End Class UGraphPrinterEditorExtensionSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GraphPrinter_Source_GraphPrinterEditorExtension_Public_GraphPrinterEditorExtension_Utilities_GraphPrinterEditorExtensionSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGraphPrinterEditorExtensionSettings, UGraphPrinterEditorExtensionSettings::StaticClass, TEXT("UGraphPrinterEditorExtensionSettings"), &Z_Registration_Info_UClass_UGraphPrinterEditorExtensionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGraphPrinterEditorExtensionSettings), 3023399048U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GraphPrinter_Source_GraphPrinterEditorExtension_Public_GraphPrinterEditorExtension_Utilities_GraphPrinterEditorExtensionSettings_h_3501568943(TEXT("/Script/GraphPrinterEditorExtension"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GraphPrinter_Source_GraphPrinterEditorExtension_Public_GraphPrinterEditorExtension_Utilities_GraphPrinterEditorExtensionSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GraphPrinter_Source_GraphPrinterEditorExtension_Public_GraphPrinterEditorExtension_Utilities_GraphPrinterEditorExtensionSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
