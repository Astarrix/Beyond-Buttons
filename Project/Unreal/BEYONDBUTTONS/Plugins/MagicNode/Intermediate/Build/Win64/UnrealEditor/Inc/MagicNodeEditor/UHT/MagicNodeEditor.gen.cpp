// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicNodeEditor/Public/MagicNodeEditor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagicNodeEditor() {}

// Begin Cross Module References
MAGICNODEEDITOR_API UClass* Z_Construct_UClass_UMGC_ScriptFactory();
MAGICNODEEDITOR_API UClass* Z_Construct_UClass_UMGC_ScriptFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_MagicNodeEditor();
// End Cross Module References

// Begin Class UMGC_ScriptFactory
void UMGC_ScriptFactory::StaticRegisterNativesUMGC_ScriptFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMGC_ScriptFactory);
UClass* Z_Construct_UClass_UMGC_ScriptFactory_NoRegister()
{
	return UMGC_ScriptFactory::StaticClass();
}
struct Z_Construct_UClass_UMGC_ScriptFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "IncludePath", "MagicNodeEditor.h" },
		{ "ModuleRelativePath", "Public/MagicNodeEditor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMGC_ScriptFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMGC_ScriptFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_MagicNodeEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMGC_ScriptFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMGC_ScriptFactory_Statics::ClassParams = {
	&UMGC_ScriptFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMGC_ScriptFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UMGC_ScriptFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMGC_ScriptFactory()
{
	if (!Z_Registration_Info_UClass_UMGC_ScriptFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMGC_ScriptFactory.OuterSingleton, Z_Construct_UClass_UMGC_ScriptFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMGC_ScriptFactory.OuterSingleton;
}
template<> MAGICNODEEDITOR_API UClass* StaticClass<UMGC_ScriptFactory>()
{
	return UMGC_ScriptFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMGC_ScriptFactory);
UMGC_ScriptFactory::~UMGC_ScriptFactory() {}
// End Class UMGC_ScriptFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MagicNode_Source_MagicNodeEditor_Public_MagicNodeEditor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMGC_ScriptFactory, UMGC_ScriptFactory::StaticClass, TEXT("UMGC_ScriptFactory"), &Z_Registration_Info_UClass_UMGC_ScriptFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMGC_ScriptFactory), 1850457157U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MagicNode_Source_MagicNodeEditor_Public_MagicNodeEditor_h_500827049(TEXT("/Script/MagicNodeEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MagicNode_Source_MagicNodeEditor_Public_MagicNodeEditor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MagicNode_Source_MagicNodeEditor_Public_MagicNodeEditor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
