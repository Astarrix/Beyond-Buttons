// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicNodeKismet/Public/MagicNodeKismetSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagicNodeKismetSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
MAGICNODEKISMET_API UClass* Z_Construct_UClass_UKMGC_Settings();
MAGICNODEKISMET_API UClass* Z_Construct_UClass_UKMGC_Settings_NoRegister();
MAGICNODEKISMET_API UClass* Z_Construct_UClass_UMGC_ClassDB_NoRegister();
MAGICNODEKISMET_API UClass* Z_Construct_UClass_UMGC_FunctionDB_NoRegister();
MAGICNODEKISMET_API UClass* Z_Construct_UClass_UMGC_KeywordDB_NoRegister();
MAGICNODEKISMET_API UClass* Z_Construct_UClass_UMGC_SemanticDB_NoRegister();
UPackage* Z_Construct_UPackage__Script_MagicNodeKismet();
// End Cross Module References

// Begin Class UKMGC_Settings
void UKMGC_Settings::StaticRegisterNativesUKMGC_Settings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UKMGC_Settings);
UClass* Z_Construct_UClass_UKMGC_Settings_NoRegister()
{
	return UKMGC_Settings::StaticClass();
}
struct Z_Construct_UClass_UKMGC_Settings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Synaptech" },
		{ "ClassGroupNames", "Synaptech" },
		{ "Comment", "//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n/// MGC Global Settings\n" },
		{ "IncludePath", "MagicNodeKismetSettings.h" },
		{ "ModuleRelativePath", "Public/MagicNodeKismetSettings.h" },
		{ "ToolTip", "MGC Global Settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeywordDB_MetaData[] = {
		{ "Category", "MGC Kismet Data" },
		{ "Comment", "//\n/// :: KISMET ::\n///\n" },
		{ "DisplayName", "Keyword Database" },
		{ "ModuleRelativePath", "Public/MagicNodeKismetSettings.h" },
		{ "ToolTip", ":: KISMET ::" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FunctionDB_MetaData[] = {
		{ "Category", "MGC Kismet Data" },
		{ "Comment", "//\n" },
		{ "DisplayName", "Function Database" },
		{ "ModuleRelativePath", "Public/MagicNodeKismetSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClassDB_MetaData[] = {
		{ "Category", "MGC Kismet Data" },
		{ "Comment", "//\n" },
		{ "DisplayName", "Class Database" },
		{ "ModuleRelativePath", "Public/MagicNodeKismetSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SemanticDB_MetaData[] = {
		{ "Category", "MGC Kismet Data" },
		{ "Comment", "//\n" },
		{ "DisplayName", "Semantic Database" },
		{ "ModuleRelativePath", "Public/MagicNodeKismetSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowKeywordHints_MetaData[] = {
		{ "Category", "MGC Node Editor" },
		{ "Comment", "//\n//\n" },
		{ "ModuleRelativePath", "Public/MagicNodeKismetSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScanUnrealTypesOnEditorStartup_MetaData[] = {
		{ "Category", "MGC Code Completion" },
		{ "Comment", "/* If enabled, the auto-complete system will search for Unreal Types on Editor launch.\n\x09The list of types is HUGE and Editor startup could increase by several minutes with this activated. */" },
		{ "ModuleRelativePath", "Public/MagicNodeKismetSettings.h" },
		{ "ToolTip", "If enabled, the auto-complete system will search for Unreal Types on Editor launch.\n      The list of types is HUGE and Editor startup could increase by several minutes with this activated." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_KeywordDB_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_KeywordDB;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_FunctionDB_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_FunctionDB;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ClassDB_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ClassDB;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SemanticDB_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_SemanticDB;
	static void NewProp_ShowKeywordHints_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowKeywordHints;
	static void NewProp_ScanUnrealTypesOnEditorStartup_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ScanUnrealTypesOnEditorStartup;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKMGC_Settings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UKMGC_Settings_Statics::NewProp_KeywordDB_ElementProp = { "KeywordDB", nullptr, (EPropertyFlags)0x0004000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMGC_KeywordDB_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UKMGC_Settings_Statics::NewProp_KeywordDB = { "KeywordDB", nullptr, (EPropertyFlags)0x0014000000014001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKMGC_Settings, KeywordDB), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeywordDB_MetaData), NewProp_KeywordDB_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UKMGC_Settings_Statics::NewProp_FunctionDB_ElementProp = { "FunctionDB", nullptr, (EPropertyFlags)0x0004000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMGC_FunctionDB_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UKMGC_Settings_Statics::NewProp_FunctionDB = { "FunctionDB", nullptr, (EPropertyFlags)0x0014000000014001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKMGC_Settings, FunctionDB), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FunctionDB_MetaData), NewProp_FunctionDB_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UKMGC_Settings_Statics::NewProp_ClassDB_ElementProp = { "ClassDB", nullptr, (EPropertyFlags)0x0004000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMGC_ClassDB_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UKMGC_Settings_Statics::NewProp_ClassDB = { "ClassDB", nullptr, (EPropertyFlags)0x0014000000014001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKMGC_Settings, ClassDB), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClassDB_MetaData), NewProp_ClassDB_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UKMGC_Settings_Statics::NewProp_SemanticDB_ElementProp = { "SemanticDB", nullptr, (EPropertyFlags)0x0004000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMGC_SemanticDB_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UKMGC_Settings_Statics::NewProp_SemanticDB = { "SemanticDB", nullptr, (EPropertyFlags)0x0014000000014001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKMGC_Settings, SemanticDB), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SemanticDB_MetaData), NewProp_SemanticDB_MetaData) };
void Z_Construct_UClass_UKMGC_Settings_Statics::NewProp_ShowKeywordHints_SetBit(void* Obj)
{
	((UKMGC_Settings*)Obj)->ShowKeywordHints = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UKMGC_Settings_Statics::NewProp_ShowKeywordHints = { "ShowKeywordHints", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UKMGC_Settings), &Z_Construct_UClass_UKMGC_Settings_Statics::NewProp_ShowKeywordHints_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowKeywordHints_MetaData), NewProp_ShowKeywordHints_MetaData) };
void Z_Construct_UClass_UKMGC_Settings_Statics::NewProp_ScanUnrealTypesOnEditorStartup_SetBit(void* Obj)
{
	((UKMGC_Settings*)Obj)->ScanUnrealTypesOnEditorStartup = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UKMGC_Settings_Statics::NewProp_ScanUnrealTypesOnEditorStartup = { "ScanUnrealTypesOnEditorStartup", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UKMGC_Settings), &Z_Construct_UClass_UKMGC_Settings_Statics::NewProp_ScanUnrealTypesOnEditorStartup_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScanUnrealTypesOnEditorStartup_MetaData), NewProp_ScanUnrealTypesOnEditorStartup_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKMGC_Settings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKMGC_Settings_Statics::NewProp_KeywordDB_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKMGC_Settings_Statics::NewProp_KeywordDB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKMGC_Settings_Statics::NewProp_FunctionDB_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKMGC_Settings_Statics::NewProp_FunctionDB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKMGC_Settings_Statics::NewProp_ClassDB_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKMGC_Settings_Statics::NewProp_ClassDB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKMGC_Settings_Statics::NewProp_SemanticDB_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKMGC_Settings_Statics::NewProp_SemanticDB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKMGC_Settings_Statics::NewProp_ShowKeywordHints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKMGC_Settings_Statics::NewProp_ScanUnrealTypesOnEditorStartup,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKMGC_Settings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UKMGC_Settings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MagicNodeKismet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKMGC_Settings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UKMGC_Settings_Statics::ClassParams = {
	&UKMGC_Settings::StaticClass,
	"MagicNode",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UKMGC_Settings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UKMGC_Settings_Statics::PropPointers),
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKMGC_Settings_Statics::Class_MetaDataParams), Z_Construct_UClass_UKMGC_Settings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UKMGC_Settings()
{
	if (!Z_Registration_Info_UClass_UKMGC_Settings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKMGC_Settings.OuterSingleton, Z_Construct_UClass_UKMGC_Settings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UKMGC_Settings.OuterSingleton;
}
template<> MAGICNODEKISMET_API UClass* StaticClass<UKMGC_Settings>()
{
	return UKMGC_Settings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UKMGC_Settings);
UKMGC_Settings::~UKMGC_Settings() {}
// End Class UKMGC_Settings

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MagicNode_Source_MagicNodeKismet_Public_MagicNodeKismetSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UKMGC_Settings, UKMGC_Settings::StaticClass, TEXT("UKMGC_Settings"), &Z_Registration_Info_UClass_UKMGC_Settings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKMGC_Settings), 217505696U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MagicNode_Source_MagicNodeKismet_Public_MagicNodeKismetSettings_h_3918469506(TEXT("/Script/MagicNodeKismet"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MagicNode_Source_MagicNodeKismet_Public_MagicNodeKismetSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MagicNode_Source_MagicNodeKismet_Public_MagicNodeKismetSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
