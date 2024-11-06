// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicNodeKismet/Classes/KMGC_MagicNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKMGC_MagicNode() {}

// Begin Cross Module References
BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
MAGICNODEKISMET_API UClass* Z_Construct_UClass_UKMGC_MagicNode();
MAGICNODEKISMET_API UClass* Z_Construct_UClass_UKMGC_MagicNode_NoRegister();
UPackage* Z_Construct_UPackage__Script_MagicNodeKismet();
// End Cross Module References

// Begin Class UKMGC_MagicNode
void UKMGC_MagicNode::StaticRegisterNativesUKMGC_MagicNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UKMGC_MagicNode);
UClass* Z_Construct_UClass_UKMGC_MagicNode_NoRegister()
{
	return UKMGC_MagicNode::StaticClass();
}
struct Z_Construct_UClass_UKMGC_MagicNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "IncludePath", "KMGC_MagicNode.h" },
		{ "ModuleRelativePath", "Classes/KMGC_MagicNode.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKMGC_MagicNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UKMGC_MagicNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UK2Node,
	(UObject* (*)())Z_Construct_UPackage__Script_MagicNodeKismet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKMGC_MagicNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UKMGC_MagicNode_Statics::ClassParams = {
	&UKMGC_MagicNode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKMGC_MagicNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UKMGC_MagicNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UKMGC_MagicNode()
{
	if (!Z_Registration_Info_UClass_UKMGC_MagicNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKMGC_MagicNode.OuterSingleton, Z_Construct_UClass_UKMGC_MagicNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UKMGC_MagicNode.OuterSingleton;
}
template<> MAGICNODEKISMET_API UClass* StaticClass<UKMGC_MagicNode>()
{
	return UKMGC_MagicNode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UKMGC_MagicNode);
UKMGC_MagicNode::~UKMGC_MagicNode() {}
// End Class UKMGC_MagicNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MagicNode_Source_MagicNodeKismet_Classes_KMGC_MagicNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UKMGC_MagicNode, UKMGC_MagicNode::StaticClass, TEXT("UKMGC_MagicNode"), &Z_Registration_Info_UClass_UKMGC_MagicNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKMGC_MagicNode), 2046598053U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MagicNode_Source_MagicNodeKismet_Classes_KMGC_MagicNode_h_3784738322(TEXT("/Script/MagicNodeKismet"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MagicNode_Source_MagicNodeKismet_Classes_KMGC_MagicNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MagicNode_Source_MagicNodeKismet_Classes_KMGC_MagicNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
