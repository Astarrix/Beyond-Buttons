// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DetailsPanelPrinter/Public/DetailsPanelPrinter/WidgetPrinters/ActorDetailsPanelPrinter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorDetailsPanelPrinter() {}

// Begin Cross Module References
DETAILSPANELPRINTER_API UClass* Z_Construct_UClass_UActorDetailsPanelPrinter();
DETAILSPANELPRINTER_API UClass* Z_Construct_UClass_UActorDetailsPanelPrinter_NoRegister();
DETAILSPANELPRINTER_API UClass* Z_Construct_UClass_UDetailsPanelPrinter();
UPackage* Z_Construct_UPackage__Script_DetailsPanelPrinter();
// End Cross Module References

// Begin Class UActorDetailsPanelPrinter
void UActorDetailsPanelPrinter::StaticRegisterNativesUActorDetailsPanelPrinter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorDetailsPanelPrinter);
UClass* Z_Construct_UClass_UActorDetailsPanelPrinter_NoRegister()
{
	return UActorDetailsPanelPrinter::StaticClass();
}
struct Z_Construct_UClass_UActorDetailsPanelPrinter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A printer class for the actor details panel.\n */" },
		{ "IncludePath", "DetailsPanelPrinter/WidgetPrinters/ActorDetailsPanelPrinter.h" },
		{ "ModuleRelativePath", "Public/DetailsPanelPrinter/WidgetPrinters/ActorDetailsPanelPrinter.h" },
		{ "ToolTip", "A printer class for the actor details panel." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorDetailsPanelPrinter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UActorDetailsPanelPrinter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDetailsPanelPrinter,
	(UObject* (*)())Z_Construct_UPackage__Script_DetailsPanelPrinter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActorDetailsPanelPrinter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorDetailsPanelPrinter_Statics::ClassParams = {
	&UActorDetailsPanelPrinter::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActorDetailsPanelPrinter_Statics::Class_MetaDataParams), Z_Construct_UClass_UActorDetailsPanelPrinter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UActorDetailsPanelPrinter()
{
	if (!Z_Registration_Info_UClass_UActorDetailsPanelPrinter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorDetailsPanelPrinter.OuterSingleton, Z_Construct_UClass_UActorDetailsPanelPrinter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UActorDetailsPanelPrinter.OuterSingleton;
}
template<> DETAILSPANELPRINTER_API UClass* StaticClass<UActorDetailsPanelPrinter>()
{
	return UActorDetailsPanelPrinter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UActorDetailsPanelPrinter);
UActorDetailsPanelPrinter::~UActorDetailsPanelPrinter() {}
// End Class UActorDetailsPanelPrinter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GraphPrinter_Source_DetailsPanelPrinter_Public_DetailsPanelPrinter_WidgetPrinters_ActorDetailsPanelPrinter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UActorDetailsPanelPrinter, UActorDetailsPanelPrinter::StaticClass, TEXT("UActorDetailsPanelPrinter"), &Z_Registration_Info_UClass_UActorDetailsPanelPrinter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorDetailsPanelPrinter), 1970874327U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GraphPrinter_Source_DetailsPanelPrinter_Public_DetailsPanelPrinter_WidgetPrinters_ActorDetailsPanelPrinter_h_3134899317(TEXT("/Script/DetailsPanelPrinter"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GraphPrinter_Source_DetailsPanelPrinter_Public_DetailsPanelPrinter_WidgetPrinters_ActorDetailsPanelPrinter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GraphPrinter_Source_DetailsPanelPrinter_Public_DetailsPanelPrinter_WidgetPrinters_ActorDetailsPanelPrinter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
