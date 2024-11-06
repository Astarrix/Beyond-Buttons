// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MaterialGraphPrinter/Public/MaterialGraphPrinter/Types/PrintMaterialGraphOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrintMaterialGraphOptions() {}

// Begin Cross Module References
GENERICGRAPHPRINTER_API UClass* Z_Construct_UClass_UPrintGraphOptions();
MATERIALGRAPHPRINTER_API UClass* Z_Construct_UClass_UPrintMaterialGraphOptions();
MATERIALGRAPHPRINTER_API UClass* Z_Construct_UClass_UPrintMaterialGraphOptions_NoRegister();
UPackage* Z_Construct_UPackage__Script_MaterialGraphPrinter();
// End Cross Module References

// Begin Class UPrintMaterialGraphOptions
void UPrintMaterialGraphOptions::StaticRegisterNativesUPrintMaterialGraphOptions()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPrintMaterialGraphOptions);
UClass* Z_Construct_UClass_UPrintMaterialGraphOptions_NoRegister()
{
	return UPrintMaterialGraphOptions::StaticClass();
}
struct Z_Construct_UClass_UPrintMaterialGraphOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * An optional class to specify when printing the material graph editor.\n */" },
		{ "IncludePath", "MaterialGraphPrinter/Types/PrintMaterialGraphOptions.h" },
		{ "ModuleRelativePath", "Public/MaterialGraphPrinter/Types/PrintMaterialGraphOptions.h" },
		{ "ToolTip", "An optional class to specify when printing the material graph editor." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPrintMaterialGraphOptions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPrintMaterialGraphOptions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrintGraphOptions,
	(UObject* (*)())Z_Construct_UPackage__Script_MaterialGraphPrinter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPrintMaterialGraphOptions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPrintMaterialGraphOptions_Statics::ClassParams = {
	&UPrintMaterialGraphOptions::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPrintMaterialGraphOptions_Statics::Class_MetaDataParams), Z_Construct_UClass_UPrintMaterialGraphOptions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPrintMaterialGraphOptions()
{
	if (!Z_Registration_Info_UClass_UPrintMaterialGraphOptions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPrintMaterialGraphOptions.OuterSingleton, Z_Construct_UClass_UPrintMaterialGraphOptions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPrintMaterialGraphOptions.OuterSingleton;
}
template<> MATERIALGRAPHPRINTER_API UClass* StaticClass<UPrintMaterialGraphOptions>()
{
	return UPrintMaterialGraphOptions::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPrintMaterialGraphOptions);
UPrintMaterialGraphOptions::~UPrintMaterialGraphOptions() {}
// End Class UPrintMaterialGraphOptions

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GraphPrinter_Source_MaterialGraphPrinter_Public_MaterialGraphPrinter_Types_PrintMaterialGraphOptions_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPrintMaterialGraphOptions, UPrintMaterialGraphOptions::StaticClass, TEXT("UPrintMaterialGraphOptions"), &Z_Registration_Info_UClass_UPrintMaterialGraphOptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPrintMaterialGraphOptions), 4114995777U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GraphPrinter_Source_MaterialGraphPrinter_Public_MaterialGraphPrinter_Types_PrintMaterialGraphOptions_h_1459635580(TEXT("/Script/MaterialGraphPrinter"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GraphPrinter_Source_MaterialGraphPrinter_Public_MaterialGraphPrinter_Types_PrintMaterialGraphOptions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GraphPrinter_Source_MaterialGraphPrinter_Public_MaterialGraphPrinter_Types_PrintMaterialGraphOptions_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
