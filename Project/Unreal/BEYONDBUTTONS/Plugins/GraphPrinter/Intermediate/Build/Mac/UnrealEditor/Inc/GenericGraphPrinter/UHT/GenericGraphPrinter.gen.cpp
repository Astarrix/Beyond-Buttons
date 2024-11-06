// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GenericGraphPrinter/Public/GenericGraphPrinter/WidgetPrinters/GenericGraphPrinter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGenericGraphPrinter() {}

// Begin Cross Module References
GENERICGRAPHPRINTER_API UClass* Z_Construct_UClass_UGenericGraphPrinter();
GENERICGRAPHPRINTER_API UClass* Z_Construct_UClass_UGenericGraphPrinter_NoRegister();
UPackage* Z_Construct_UPackage__Script_GenericGraphPrinter();
WIDGETPRINTER_API UClass* Z_Construct_UClass_UWidgetPrinter();
// End Cross Module References

// Begin Class UGenericGraphPrinter
void UGenericGraphPrinter::StaticRegisterNativesUGenericGraphPrinter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGenericGraphPrinter);
UClass* Z_Construct_UClass_UGenericGraphPrinter_NoRegister()
{
	return UGenericGraphPrinter::StaticClass();
}
struct Z_Construct_UClass_UGenericGraphPrinter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A general-purpose printer class for the graph editor.\n */" },
		{ "IncludePath", "GenericGraphPrinter/WidgetPrinters/GenericGraphPrinter.h" },
		{ "ModuleRelativePath", "Public/GenericGraphPrinter/WidgetPrinters/GenericGraphPrinter.h" },
		{ "ToolTip", "A general-purpose printer class for the graph editor." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenericGraphPrinter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGenericGraphPrinter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidgetPrinter,
	(UObject* (*)())Z_Construct_UPackage__Script_GenericGraphPrinter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGenericGraphPrinter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGenericGraphPrinter_Statics::ClassParams = {
	&UGenericGraphPrinter::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGenericGraphPrinter_Statics::Class_MetaDataParams), Z_Construct_UClass_UGenericGraphPrinter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGenericGraphPrinter()
{
	if (!Z_Registration_Info_UClass_UGenericGraphPrinter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGenericGraphPrinter.OuterSingleton, Z_Construct_UClass_UGenericGraphPrinter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGenericGraphPrinter.OuterSingleton;
}
template<> GENERICGRAPHPRINTER_API UClass* StaticClass<UGenericGraphPrinter>()
{
	return UGenericGraphPrinter::StaticClass();
}
UGenericGraphPrinter::UGenericGraphPrinter() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGenericGraphPrinter);
UGenericGraphPrinter::~UGenericGraphPrinter() {}
// End Class UGenericGraphPrinter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GraphPrinter_Source_GenericGraphPrinter_Public_GenericGraphPrinter_WidgetPrinters_GenericGraphPrinter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGenericGraphPrinter, UGenericGraphPrinter::StaticClass, TEXT("UGenericGraphPrinter"), &Z_Registration_Info_UClass_UGenericGraphPrinter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGenericGraphPrinter), 263349836U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GraphPrinter_Source_GenericGraphPrinter_Public_GenericGraphPrinter_WidgetPrinters_GenericGraphPrinter_h_3748741141(TEXT("/Script/GenericGraphPrinter"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GraphPrinter_Source_GenericGraphPrinter_Public_GenericGraphPrinter_WidgetPrinters_GenericGraphPrinter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GraphPrinter_Source_GenericGraphPrinter_Public_GenericGraphPrinter_WidgetPrinters_GenericGraphPrinter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
