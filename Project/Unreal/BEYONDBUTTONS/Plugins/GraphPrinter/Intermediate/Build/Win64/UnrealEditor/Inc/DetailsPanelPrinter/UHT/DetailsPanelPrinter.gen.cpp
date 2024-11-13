// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DetailsPanelPrinter/Public/DetailsPanelPrinter/WidgetPrinters/DetailsPanelPrinter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDetailsPanelPrinter() {}

// Begin Cross Module References
DETAILSPANELPRINTER_API UClass* Z_Construct_UClass_UDetailsPanelPrinter();
DETAILSPANELPRINTER_API UClass* Z_Construct_UClass_UDetailsPanelPrinter_NoRegister();
UPackage* Z_Construct_UPackage__Script_DetailsPanelPrinter();
WIDGETPRINTER_API UClass* Z_Construct_UClass_UWidgetPrinter();
// End Cross Module References

// Begin Class UDetailsPanelPrinter
void UDetailsPanelPrinter::StaticRegisterNativesUDetailsPanelPrinter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDetailsPanelPrinter);
UClass* Z_Construct_UClass_UDetailsPanelPrinter_NoRegister()
{
	return UDetailsPanelPrinter::StaticClass();
}
struct Z_Construct_UClass_UDetailsPanelPrinter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A printer class for the details panel.\n */" },
#endif
		{ "IncludePath", "DetailsPanelPrinter/WidgetPrinters/DetailsPanelPrinter.h" },
		{ "ModuleRelativePath", "Public/DetailsPanelPrinter/WidgetPrinters/DetailsPanelPrinter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A printer class for the details panel." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDetailsPanelPrinter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDetailsPanelPrinter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidgetPrinter,
	(UObject* (*)())Z_Construct_UPackage__Script_DetailsPanelPrinter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDetailsPanelPrinter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDetailsPanelPrinter_Statics::ClassParams = {
	&UDetailsPanelPrinter::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDetailsPanelPrinter_Statics::Class_MetaDataParams), Z_Construct_UClass_UDetailsPanelPrinter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDetailsPanelPrinter()
{
	if (!Z_Registration_Info_UClass_UDetailsPanelPrinter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDetailsPanelPrinter.OuterSingleton, Z_Construct_UClass_UDetailsPanelPrinter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDetailsPanelPrinter.OuterSingleton;
}
template<> DETAILSPANELPRINTER_API UClass* StaticClass<UDetailsPanelPrinter>()
{
	return UDetailsPanelPrinter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDetailsPanelPrinter);
UDetailsPanelPrinter::~UDetailsPanelPrinter() {}
// End Class UDetailsPanelPrinter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_W013321M_Documents_GitHub_Beyond_Buttons_Project_Unreal_BEYONDBUTTONS_Plugins_GraphPrinter_Source_DetailsPanelPrinter_Public_DetailsPanelPrinter_WidgetPrinters_DetailsPanelPrinter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDetailsPanelPrinter, UDetailsPanelPrinter::StaticClass, TEXT("UDetailsPanelPrinter"), &Z_Registration_Info_UClass_UDetailsPanelPrinter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDetailsPanelPrinter), 1870177585U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_W013321M_Documents_GitHub_Beyond_Buttons_Project_Unreal_BEYONDBUTTONS_Plugins_GraphPrinter_Source_DetailsPanelPrinter_Public_DetailsPanelPrinter_WidgetPrinters_DetailsPanelPrinter_h_2724756502(TEXT("/Script/DetailsPanelPrinter"),
	Z_CompiledInDeferFile_FID_Users_W013321M_Documents_GitHub_Beyond_Buttons_Project_Unreal_BEYONDBUTTONS_Plugins_GraphPrinter_Source_DetailsPanelPrinter_Public_DetailsPanelPrinter_WidgetPrinters_DetailsPanelPrinter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_W013321M_Documents_GitHub_Beyond_Buttons_Project_Unreal_BEYONDBUTTONS_Plugins_GraphPrinter_Source_DetailsPanelPrinter_Public_DetailsPanelPrinter_WidgetPrinters_DetailsPanelPrinter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
