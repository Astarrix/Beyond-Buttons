// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicNodeRuntime/Public/MagicNodeDataTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagicNodeDataTypes() {}

// Begin Cross Module References
MAGICNODERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FMGC_SourceCode();
UPackage* Z_Construct_UPackage__Script_MagicNodeRuntime();
// End Cross Module References

// Begin ScriptStruct FMGC_SourceCode
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MGC_SourceCode;
class UScriptStruct* FMGC_SourceCode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MGC_SourceCode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MGC_SourceCode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMGC_SourceCode, (UObject*)Z_Construct_UPackage__Script_MagicNodeRuntime(), TEXT("MGC_SourceCode"));
	}
	return Z_Registration_Info_UScriptStruct_MGC_SourceCode.OuterSingleton;
}
template<> MAGICNODERUNTIME_API UScriptStruct* StaticStruct<FMGC_SourceCode>()
{
	return FMGC_SourceCode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMGC_SourceCode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n/// MGC Script Data Types (Editor-Only):\n" },
		{ "ModuleRelativePath", "Public/MagicNodeDataTypes.h" },
		{ "ToolTip", "MGC Script Data Types (Editor-Only):" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[] = {
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Public/MagicNodeDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Script_MetaData[] = {
		{ "ModuleRelativePath", "Public/MagicNodeDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Types_MetaData[] = {
		{ "ModuleRelativePath", "Public/MagicNodeDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Includes_MetaData[] = {
		{ "Category", "MagicNode" },
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Public/MagicNodeDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Macros_MetaData[] = {
		{ "Category", "MagicNode" },
		{ "ModuleRelativePath", "Public/MagicNodeDataTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Header;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Script;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Types;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Includes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Includes;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Macros_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Macros;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMGC_SourceCode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMGC_SourceCode_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMGC_SourceCode, Header), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Header_MetaData), NewProp_Header_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMGC_SourceCode_Statics::NewProp_Script = { "Script", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMGC_SourceCode, Script), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Script_MetaData), NewProp_Script_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMGC_SourceCode_Statics::NewProp_Types = { "Types", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMGC_SourceCode, Types), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Types_MetaData), NewProp_Types_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMGC_SourceCode_Statics::NewProp_Includes_Inner = { "Includes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMGC_SourceCode_Statics::NewProp_Includes = { "Includes", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMGC_SourceCode, Includes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Includes_MetaData), NewProp_Includes_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMGC_SourceCode_Statics::NewProp_Macros_Inner = { "Macros", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMGC_SourceCode_Statics::NewProp_Macros = { "Macros", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMGC_SourceCode, Macros), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Macros_MetaData), NewProp_Macros_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMGC_SourceCode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMGC_SourceCode_Statics::NewProp_Header,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMGC_SourceCode_Statics::NewProp_Script,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMGC_SourceCode_Statics::NewProp_Types,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMGC_SourceCode_Statics::NewProp_Includes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMGC_SourceCode_Statics::NewProp_Includes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMGC_SourceCode_Statics::NewProp_Macros_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMGC_SourceCode_Statics::NewProp_Macros,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMGC_SourceCode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMGC_SourceCode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MagicNodeRuntime,
	nullptr,
	&NewStructOps,
	"MGC_SourceCode",
	Z_Construct_UScriptStruct_FMGC_SourceCode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMGC_SourceCode_Statics::PropPointers),
	sizeof(FMGC_SourceCode),
	alignof(FMGC_SourceCode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMGC_SourceCode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMGC_SourceCode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMGC_SourceCode()
{
	if (!Z_Registration_Info_UScriptStruct_MGC_SourceCode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MGC_SourceCode.InnerSingleton, Z_Construct_UScriptStruct_FMGC_SourceCode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MGC_SourceCode.InnerSingleton;
}
// End ScriptStruct FMGC_SourceCode

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MagicNode_Source_MagicNodeRuntime_Public_MagicNodeDataTypes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMGC_SourceCode::StaticStruct, Z_Construct_UScriptStruct_FMGC_SourceCode_Statics::NewStructOps, TEXT("MGC_SourceCode"), &Z_Registration_Info_UScriptStruct_MGC_SourceCode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMGC_SourceCode), 2426688733U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MagicNode_Source_MagicNodeRuntime_Public_MagicNodeDataTypes_h_1463639877(TEXT("/Script/MagicNodeRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MagicNode_Source_MagicNodeRuntime_Public_MagicNodeDataTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MagicNode_Source_MagicNodeRuntime_Public_MagicNodeDataTypes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
