// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WidgetPrinter/Public/WidgetPrinter/WidgetPrinters/WidgetPrinter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetPrinter() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_WidgetPrinter();
WIDGETPRINTER_API UClass* Z_Construct_UClass_UPrintWidgetOptions_NoRegister();
WIDGETPRINTER_API UClass* Z_Construct_UClass_URestoreWidgetOptions_NoRegister();
WIDGETPRINTER_API UClass* Z_Construct_UClass_UWidgetPrinter();
WIDGETPRINTER_API UClass* Z_Construct_UClass_UWidgetPrinter_NoRegister();
// End Cross Module References

// Begin Class UWidgetPrinter
void UWidgetPrinter::StaticRegisterNativesUWidgetPrinter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidgetPrinter);
UClass* Z_Construct_UClass_UWidgetPrinter_NoRegister()
{
	return UWidgetPrinter::StaticClass();
}
struct Z_Construct_UClass_UWidgetPrinter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A wrapper class that inherits from UObject to collect all existing printers.\n * Please implement the actual processing in the inner class.\n */" },
		{ "IncludePath", "WidgetPrinter/WidgetPrinters/WidgetPrinter.h" },
		{ "ModuleRelativePath", "Public/WidgetPrinter/WidgetPrinters/WidgetPrinter.h" },
		{ "ToolTip", "A wrapper class that inherits from UObject to collect all existing printers.\nPlease implement the actual processing in the inner class." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedPrintOptions_MetaData[] = {
		{ "Comment", "// Optional classes that is cached for passing to the inner class.\n" },
		{ "ModuleRelativePath", "Public/WidgetPrinter/WidgetPrinters/WidgetPrinter.h" },
		{ "ToolTip", "Optional classes that is cached for passing to the inner class." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedRestoreOptions_MetaData[] = {
		{ "ModuleRelativePath", "Public/WidgetPrinter/WidgetPrinters/WidgetPrinter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedPrintOptions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedRestoreOptions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetPrinter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidgetPrinter_Statics::NewProp_CachedPrintOptions = { "CachedPrintOptions", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidgetPrinter, CachedPrintOptions), Z_Construct_UClass_UPrintWidgetOptions_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedPrintOptions_MetaData), NewProp_CachedPrintOptions_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidgetPrinter_Statics::NewProp_CachedRestoreOptions = { "CachedRestoreOptions", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidgetPrinter, CachedRestoreOptions), Z_Construct_UClass_URestoreWidgetOptions_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedRestoreOptions_MetaData), NewProp_CachedRestoreOptions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidgetPrinter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetPrinter_Statics::NewProp_CachedPrintOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetPrinter_Statics::NewProp_CachedRestoreOptions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetPrinter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWidgetPrinter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_WidgetPrinter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetPrinter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidgetPrinter_Statics::ClassParams = {
	&UWidgetPrinter::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWidgetPrinter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetPrinter_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetPrinter_Statics::Class_MetaDataParams), Z_Construct_UClass_UWidgetPrinter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWidgetPrinter()
{
	if (!Z_Registration_Info_UClass_UWidgetPrinter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidgetPrinter.OuterSingleton, Z_Construct_UClass_UWidgetPrinter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWidgetPrinter.OuterSingleton;
}
template<> WIDGETPRINTER_API UClass* StaticClass<UWidgetPrinter>()
{
	return UWidgetPrinter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetPrinter);
UWidgetPrinter::~UWidgetPrinter() {}
// End Class UWidgetPrinter

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GraphPrinter_Source_WidgetPrinter_Public_WidgetPrinter_WidgetPrinters_WidgetPrinter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWidgetPrinter, UWidgetPrinter::StaticClass, TEXT("UWidgetPrinter"), &Z_Registration_Info_UClass_UWidgetPrinter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidgetPrinter), 186751373U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GraphPrinter_Source_WidgetPrinter_Public_WidgetPrinter_WidgetPrinters_WidgetPrinter_h_2650677119(TEXT("/Script/WidgetPrinter"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GraphPrinter_Source_WidgetPrinter_Public_WidgetPrinter_WidgetPrinters_WidgetPrinter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GraphPrinter_Source_WidgetPrinter_Public_WidgetPrinter_WidgetPrinters_WidgetPrinter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
