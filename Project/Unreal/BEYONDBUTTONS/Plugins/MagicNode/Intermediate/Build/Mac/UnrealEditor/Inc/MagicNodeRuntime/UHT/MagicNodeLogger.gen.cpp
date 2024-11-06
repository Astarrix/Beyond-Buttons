// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicNodeRuntime/Public/MagicNodeLogger.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagicNodeLogger() {}

// Begin Cross Module References
MAGICNODERUNTIME_API UEnum* Z_Construct_UEnum_MagicNodeRuntime_EMGCSeverity();
UPackage* Z_Construct_UPackage__Script_MagicNodeRuntime();
// End Cross Module References

// Begin Enum EMGCSeverity
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMGCSeverity;
static UEnum* EMGCSeverity_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMGCSeverity.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMGCSeverity.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MagicNodeRuntime_EMGCSeverity, (UObject*)Z_Construct_UPackage__Script_MagicNodeRuntime(), TEXT("EMGCSeverity"));
	}
	return Z_Registration_Info_UEnum_EMGCSeverity.OuterSingleton;
}
template<> MAGICNODERUNTIME_API UEnum* StaticEnum<EMGCSeverity>()
{
	return EMGCSeverity_StaticEnum();
}
struct Z_Construct_UEnum_MagicNodeRuntime_EMGCSeverity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "Error.Comment", "//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "Error.Name", "EMGCSeverity::Error" },
		{ "Fatal.Comment", "//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "Fatal.Name", "EMGCSeverity::Fatal" },
		{ "Info.Comment", "//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "Info.Name", "EMGCSeverity::Info" },
		{ "ModuleRelativePath", "Public/MagicNodeLogger.h" },
		{ "Warning.Comment", "//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "Warning.Name", "EMGCSeverity::Warning" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMGCSeverity::Fatal", (int64)EMGCSeverity::Fatal },
		{ "EMGCSeverity::Error", (int64)EMGCSeverity::Error },
		{ "EMGCSeverity::Warning", (int64)EMGCSeverity::Warning },
		{ "EMGCSeverity::Info", (int64)EMGCSeverity::Info },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MagicNodeRuntime_EMGCSeverity_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MagicNodeRuntime,
	nullptr,
	"EMGCSeverity",
	"EMGCSeverity",
	Z_Construct_UEnum_MagicNodeRuntime_EMGCSeverity_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MagicNodeRuntime_EMGCSeverity_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MagicNodeRuntime_EMGCSeverity_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MagicNodeRuntime_EMGCSeverity_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MagicNodeRuntime_EMGCSeverity()
{
	if (!Z_Registration_Info_UEnum_EMGCSeverity.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMGCSeverity.InnerSingleton, Z_Construct_UEnum_MagicNodeRuntime_EMGCSeverity_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMGCSeverity.InnerSingleton;
}
// End Enum EMGCSeverity

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MagicNode_Source_MagicNodeRuntime_Public_MagicNodeLogger_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMGCSeverity_StaticEnum, TEXT("EMGCSeverity"), &Z_Registration_Info_UEnum_EMGCSeverity, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3094755829U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MagicNode_Source_MagicNodeRuntime_Public_MagicNodeLogger_h_2952764684(TEXT("/Script/MagicNodeRuntime"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MagicNode_Source_MagicNodeRuntime_Public_MagicNodeLogger_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MagicNode_Source_MagicNodeRuntime_Public_MagicNodeLogger_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
