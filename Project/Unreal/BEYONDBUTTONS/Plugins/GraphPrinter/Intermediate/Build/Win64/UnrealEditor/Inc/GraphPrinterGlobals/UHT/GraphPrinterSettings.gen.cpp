// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GraphPrinterGlobals/Public/GraphPrinterGlobals/Utilities/GraphPrinterSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGraphPrinterSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
GRAPHPRINTERGLOBALS_API UClass* Z_Construct_UClass_UGraphPrinterSettings();
GRAPHPRINTERGLOBALS_API UClass* Z_Construct_UClass_UGraphPrinterSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_GraphPrinterGlobals();
// End Cross Module References

// Begin Class UGraphPrinterSettings
void UGraphPrinterSettings::StaticRegisterNativesUGraphPrinterSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGraphPrinterSettings);
UClass* Z_Construct_UClass_UGraphPrinterSettings_NoRegister()
{
	return UGraphPrinterSettings::StaticClass();
}
struct Z_Construct_UClass_UGraphPrinterSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A editor preferences class for this plugin.\n */" },
#endif
		{ "IncludePath", "GraphPrinterGlobals/Utilities/GraphPrinterSettings.h" },
		{ "ModuleRelativePath", "Public/GraphPrinterGlobals/Utilities/GraphPrinterSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A editor preferences class for this plugin." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGraphPrinterSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGraphPrinterSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_GraphPrinterGlobals,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGraphPrinterSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGraphPrinterSettings_Statics::ClassParams = {
	&UGraphPrinterSettings::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x081000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGraphPrinterSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UGraphPrinterSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGraphPrinterSettings()
{
	if (!Z_Registration_Info_UClass_UGraphPrinterSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGraphPrinterSettings.OuterSingleton, Z_Construct_UClass_UGraphPrinterSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGraphPrinterSettings.OuterSingleton;
}
template<> GRAPHPRINTERGLOBALS_API UClass* StaticClass<UGraphPrinterSettings>()
{
	return UGraphPrinterSettings::StaticClass();
}
UGraphPrinterSettings::UGraphPrinterSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGraphPrinterSettings);
UGraphPrinterSettings::~UGraphPrinterSettings() {}
// End Class UGraphPrinterSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_W013321M_Documents_GitHub_Beyond_Buttons_Project_Unreal_BEYONDBUTTONS_Plugins_GraphPrinter_Source_GraphPrinterGlobals_Public_GraphPrinterGlobals_Utilities_GraphPrinterSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGraphPrinterSettings, UGraphPrinterSettings::StaticClass, TEXT("UGraphPrinterSettings"), &Z_Registration_Info_UClass_UGraphPrinterSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGraphPrinterSettings), 1336294369U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_W013321M_Documents_GitHub_Beyond_Buttons_Project_Unreal_BEYONDBUTTONS_Plugins_GraphPrinter_Source_GraphPrinterGlobals_Public_GraphPrinterGlobals_Utilities_GraphPrinterSettings_h_1908177714(TEXT("/Script/GraphPrinterGlobals"),
	Z_CompiledInDeferFile_FID_Users_W013321M_Documents_GitHub_Beyond_Buttons_Project_Unreal_BEYONDBUTTONS_Plugins_GraphPrinter_Source_GraphPrinterGlobals_Public_GraphPrinterGlobals_Utilities_GraphPrinterSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_W013321M_Documents_GitHub_Beyond_Buttons_Project_Unreal_BEYONDBUTTONS_Plugins_GraphPrinter_Source_GraphPrinterGlobals_Public_GraphPrinterGlobals_Utilities_GraphPrinterSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
