// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GraphPrinterRemoteControl/Public/GraphPrinterRemoteControl/Utilities/GraphPrinterRemoteControlSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGraphPrinterRemoteControlSettings() {}

// Begin Cross Module References
GRAPHPRINTERGLOBALS_API UClass* Z_Construct_UClass_UGraphPrinterSettings();
GRAPHPRINTERREMOTECONTROL_API UClass* Z_Construct_UClass_UGraphPrinterRemoteControlSettings();
GRAPHPRINTERREMOTECONTROL_API UClass* Z_Construct_UClass_UGraphPrinterRemoteControlSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_GraphPrinterRemoteControl();
// End Cross Module References

// Begin Class UGraphPrinterRemoteControlSettings
void UGraphPrinterRemoteControlSettings::StaticRegisterNativesUGraphPrinterRemoteControlSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGraphPrinterRemoteControlSettings);
UClass* Z_Construct_UClass_UGraphPrinterRemoteControlSettings_NoRegister()
{
	return UGraphPrinterRemoteControlSettings::StaticClass();
}
struct Z_Construct_UClass_UGraphPrinterRemoteControlSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A editor preferences class related to the remote control of this plugin.\n */" },
		{ "IncludePath", "GraphPrinterRemoteControl/Utilities/GraphPrinterRemoteControlSettings.h" },
		{ "ModuleRelativePath", "Public/GraphPrinterRemoteControl/Utilities/GraphPrinterRemoteControlSettings.h" },
		{ "ToolTip", "A editor preferences class related to the remote control of this plugin." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRemoteControl_MetaData[] = {
		{ "Category", "Remote Control" },
		{ "Comment", "// Whether remote control via web socket is enabled.\n// Please check again when the server is rebuilt.\n" },
		{ "ModuleRelativePath", "Public/GraphPrinterRemoteControl/Utilities/GraphPrinterRemoteControlSettings.h" },
		{ "ToolTip", "Whether remote control via web socket is enabled.\nPlease check again when the server is rebuilt." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerURL_MetaData[] = {
		{ "Category", "Remote Control" },
		{ "Comment", "// Your server URL. You can use ws, wss or wss+insecure.\n// Disable remote control once to edit.\n" },
		{ "EditCondition", "!bEnableRemoteControl" },
		{ "ModuleRelativePath", "Public/GraphPrinterRemoteControl/Utilities/GraphPrinterRemoteControlSettings.h" },
		{ "ToolTip", "Your server URL. You can use ws, wss or wss+insecure.\nDisable remote control once to edit." },
	};
#endif // WITH_METADATA
	static void NewProp_bEnableRemoteControl_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRemoteControl;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ServerURL;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGraphPrinterRemoteControlSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UGraphPrinterRemoteControlSettings_Statics::NewProp_bEnableRemoteControl_SetBit(void* Obj)
{
	((UGraphPrinterRemoteControlSettings*)Obj)->bEnableRemoteControl = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGraphPrinterRemoteControlSettings_Statics::NewProp_bEnableRemoteControl = { "bEnableRemoteControl", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGraphPrinterRemoteControlSettings), &Z_Construct_UClass_UGraphPrinterRemoteControlSettings_Statics::NewProp_bEnableRemoteControl_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableRemoteControl_MetaData), NewProp_bEnableRemoteControl_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGraphPrinterRemoteControlSettings_Statics::NewProp_ServerURL = { "ServerURL", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGraphPrinterRemoteControlSettings, ServerURL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerURL_MetaData), NewProp_ServerURL_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGraphPrinterRemoteControlSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphPrinterRemoteControlSettings_Statics::NewProp_bEnableRemoteControl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphPrinterRemoteControlSettings_Statics::NewProp_ServerURL,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGraphPrinterRemoteControlSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGraphPrinterRemoteControlSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGraphPrinterSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_GraphPrinterRemoteControl,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGraphPrinterRemoteControlSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGraphPrinterRemoteControlSettings_Statics::ClassParams = {
	&UGraphPrinterRemoteControlSettings::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGraphPrinterRemoteControlSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGraphPrinterRemoteControlSettings_Statics::PropPointers),
	0,
	0x080000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGraphPrinterRemoteControlSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UGraphPrinterRemoteControlSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGraphPrinterRemoteControlSettings()
{
	if (!Z_Registration_Info_UClass_UGraphPrinterRemoteControlSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGraphPrinterRemoteControlSettings.OuterSingleton, Z_Construct_UClass_UGraphPrinterRemoteControlSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGraphPrinterRemoteControlSettings.OuterSingleton;
}
template<> GRAPHPRINTERREMOTECONTROL_API UClass* StaticClass<UGraphPrinterRemoteControlSettings>()
{
	return UGraphPrinterRemoteControlSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGraphPrinterRemoteControlSettings);
UGraphPrinterRemoteControlSettings::~UGraphPrinterRemoteControlSettings() {}
// End Class UGraphPrinterRemoteControlSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GraphPrinter_Source_GraphPrinterRemoteControl_Public_GraphPrinterRemoteControl_Utilities_GraphPrinterRemoteControlSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGraphPrinterRemoteControlSettings, UGraphPrinterRemoteControlSettings::StaticClass, TEXT("UGraphPrinterRemoteControlSettings"), &Z_Registration_Info_UClass_UGraphPrinterRemoteControlSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGraphPrinterRemoteControlSettings), 2343502765U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GraphPrinter_Source_GraphPrinterRemoteControl_Public_GraphPrinterRemoteControl_Utilities_GraphPrinterRemoteControlSettings_h_4270425111(TEXT("/Script/GraphPrinterRemoteControl"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GraphPrinter_Source_GraphPrinterRemoteControl_Public_GraphPrinterRemoteControl_Utilities_GraphPrinterRemoteControlSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GraphPrinter_Source_GraphPrinterRemoteControl_Public_GraphPrinterRemoteControl_Utilities_GraphPrinterRemoteControlSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
