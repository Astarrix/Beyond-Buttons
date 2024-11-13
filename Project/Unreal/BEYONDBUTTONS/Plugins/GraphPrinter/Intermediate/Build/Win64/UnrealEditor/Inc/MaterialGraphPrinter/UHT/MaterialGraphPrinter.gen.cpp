// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MaterialGraphPrinter/Public/MaterialGraphPrinter/WidgetPrinters/MaterialGraphPrinter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialGraphPrinter() {}

// Begin Cross Module References
GENERICGRAPHPRINTER_API UClass* Z_Construct_UClass_UGenericGraphPrinter();
MATERIALGRAPHPRINTER_API UClass* Z_Construct_UClass_UMaterialGraphPrinter();
MATERIALGRAPHPRINTER_API UClass* Z_Construct_UClass_UMaterialGraphPrinter_NoRegister();
UPackage* Z_Construct_UPackage__Script_MaterialGraphPrinter();
// End Cross Module References

// Begin Class UMaterialGraphPrinter
void UMaterialGraphPrinter::StaticRegisterNativesUMaterialGraphPrinter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialGraphPrinter);
UClass* Z_Construct_UClass_UMaterialGraphPrinter_NoRegister()
{
	return UMaterialGraphPrinter::StaticClass();
}
struct Z_Construct_UClass_UMaterialGraphPrinter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A class of graph printers dedicated to material assets.\n * Print the preview window along with the graph editor.\n */" },
#endif
		{ "IncludePath", "MaterialGraphPrinter/WidgetPrinters/MaterialGraphPrinter.h" },
		{ "ModuleRelativePath", "Public/MaterialGraphPrinter/WidgetPrinters/MaterialGraphPrinter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A class of graph printers dedicated to material assets.\nPrint the preview window along with the graph editor." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialGraphPrinter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMaterialGraphPrinter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGenericGraphPrinter,
	(UObject* (*)())Z_Construct_UPackage__Script_MaterialGraphPrinter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialGraphPrinter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialGraphPrinter_Statics::ClassParams = {
	&UMaterialGraphPrinter::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialGraphPrinter_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialGraphPrinter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialGraphPrinter()
{
	if (!Z_Registration_Info_UClass_UMaterialGraphPrinter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialGraphPrinter.OuterSingleton, Z_Construct_UClass_UMaterialGraphPrinter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialGraphPrinter.OuterSingleton;
}
template<> MATERIALGRAPHPRINTER_API UClass* StaticClass<UMaterialGraphPrinter>()
{
	return UMaterialGraphPrinter::StaticClass();
}
UMaterialGraphPrinter::UMaterialGraphPrinter() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialGraphPrinter);
UMaterialGraphPrinter::~UMaterialGraphPrinter() {}
// End Class UMaterialGraphPrinter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_W013321M_Documents_GitHub_Beyond_Buttons_Project_Unreal_BEYONDBUTTONS_Plugins_GraphPrinter_Source_MaterialGraphPrinter_Public_MaterialGraphPrinter_WidgetPrinters_MaterialGraphPrinter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialGraphPrinter, UMaterialGraphPrinter::StaticClass, TEXT("UMaterialGraphPrinter"), &Z_Registration_Info_UClass_UMaterialGraphPrinter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialGraphPrinter), 580880803U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_W013321M_Documents_GitHub_Beyond_Buttons_Project_Unreal_BEYONDBUTTONS_Plugins_GraphPrinter_Source_MaterialGraphPrinter_Public_MaterialGraphPrinter_WidgetPrinters_MaterialGraphPrinter_h_615439838(TEXT("/Script/MaterialGraphPrinter"),
	Z_CompiledInDeferFile_FID_Users_W013321M_Documents_GitHub_Beyond_Buttons_Project_Unreal_BEYONDBUTTONS_Plugins_GraphPrinter_Source_MaterialGraphPrinter_Public_MaterialGraphPrinter_WidgetPrinters_MaterialGraphPrinter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_W013321M_Documents_GitHub_Beyond_Buttons_Project_Unreal_BEYONDBUTTONS_Plugins_GraphPrinter_Source_MaterialGraphPrinter_Public_MaterialGraphPrinter_WidgetPrinters_MaterialGraphPrinter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
