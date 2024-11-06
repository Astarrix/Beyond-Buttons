// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicNodeRuntime/Public/MagicNodeRuntime.h"
#include "MagicNodeRuntime/Public/MagicNodeDataTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagicNodeRuntime() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
MAGICNODERUNTIME_API UClass* Z_Construct_UClass_UMagicNode();
MAGICNODERUNTIME_API UClass* Z_Construct_UClass_UMagicNode_NoRegister();
MAGICNODERUNTIME_API UClass* Z_Construct_UClass_UMagicNodeScript();
MAGICNODERUNTIME_API UClass* Z_Construct_UClass_UMagicNodeScript_NoRegister();
MAGICNODERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FMGC_SourceCode();
UPackage* Z_Construct_UPackage__Script_MagicNodeRuntime();
// End Cross Module References

// Begin Class UMagicNode Function Finish
struct Z_Construct_UFunction_UMagicNode_Finish_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MagicNode" },
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Public/MagicNodeRuntime.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicNode_Finish_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicNode, nullptr, "Finish", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicNode_Finish_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMagicNode_Finish_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMagicNode_Finish()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMagicNode_Finish_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMagicNode::execFinish)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Finish();
	P_NATIVE_END;
}
// End Class UMagicNode Function Finish

// Begin Class UMagicNode
void UMagicNode::StaticRegisterNativesUMagicNode()
{
	UClass* Class = UMagicNode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Finish", &UMagicNode::execFinish },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMagicNode);
UClass* Z_Construct_UClass_UMagicNode_NoRegister()
{
	return UMagicNode::StaticClass();
}
struct Z_Construct_UClass_UMagicNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "MagicNode" },
		{ "ClassGroupNames", "Synaptech" },
		{ "Comment", "/// Magic-Node's Runtime Object.\n" },
		{ "HideCategories", "Activation Variable" },
		{ "IncludePath", "MagicNodeRuntime.h" },
		{ "ModuleRelativePath", "Public/MagicNodeRuntime.h" },
		{ "ToolTip", "Magic-Node's Runtime Object." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMagicNode_Finish, "Finish" }, // 574155193
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMagicNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMagicNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MagicNodeRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMagicNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMagicNode_Statics::ClassParams = {
	&UMagicNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMagicNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UMagicNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMagicNode()
{
	if (!Z_Registration_Info_UClass_UMagicNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMagicNode.OuterSingleton, Z_Construct_UClass_UMagicNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMagicNode.OuterSingleton;
}
template<> MAGICNODERUNTIME_API UClass* StaticClass<UMagicNode>()
{
	return UMagicNode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMagicNode);
UMagicNode::~UMagicNode() {}
// End Class UMagicNode

// Begin Class UMagicNodeScript
void UMagicNodeScript::StaticRegisterNativesUMagicNodeScript()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMagicNodeScript);
UClass* Z_Construct_UClass_UMagicNodeScript_NoRegister()
{
	return UMagicNodeScript::StaticClass();
}
struct Z_Construct_UClass_UMagicNodeScript_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "MagicNode" },
		{ "ClassGroupNames", "Synaptech" },
		{ "Comment", "/* C++ Scriptable Node for Blueprint Graphs */" },
		{ "DisplayName", "Magic Node Script" },
		{ "HideCategories", "Activation Variable" },
		{ "IncludePath", "MagicNodeRuntime.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MagicNodeRuntime.h" },
		{ "ToolTip", "C++ Scriptable Node for Blueprint Graphs" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeScriptClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/MagicNodeRuntime.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeColor_MetaData[] = {
		{ "Category", "MagicNode" },
		{ "ModuleRelativePath", "Public/MagicNodeRuntime.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentClass_MetaData[] = {
		{ "Category", "MagicNode" },
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Public/MagicNodeRuntime.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LockSourceCode_MetaData[] = {
		{ "Category", "MagicNode" },
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Public/MagicNodeRuntime.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "Category", "Source Code" },
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Public/MagicNodeRuntime.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_RuntimeScriptClass;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeColor;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ParentClass;
	static void NewProp_LockSourceCode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_LockSourceCode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Source;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMagicNodeScript>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMagicNodeScript_Statics::NewProp_RuntimeScriptClass = { "RuntimeScriptClass", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMagicNodeScript, RuntimeScriptClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UMagicNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RuntimeScriptClass_MetaData), NewProp_RuntimeScriptClass_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMagicNodeScript_Statics::NewProp_NodeColor = { "NodeColor", nullptr, (EPropertyFlags)0x0010000800010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMagicNodeScript, NodeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeColor_MetaData), NewProp_NodeColor_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMagicNodeScript_Statics::NewProp_ParentClass = { "ParentClass", nullptr, (EPropertyFlags)0x0014000800010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMagicNodeScript, ParentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UMagicNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentClass_MetaData), NewProp_ParentClass_MetaData) };
void Z_Construct_UClass_UMagicNodeScript_Statics::NewProp_LockSourceCode_SetBit(void* Obj)
{
	((UMagicNodeScript*)Obj)->LockSourceCode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMagicNodeScript_Statics::NewProp_LockSourceCode = { "LockSourceCode", nullptr, (EPropertyFlags)0x0010000800010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMagicNodeScript), &Z_Construct_UClass_UMagicNodeScript_Statics::NewProp_LockSourceCode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LockSourceCode_MetaData), NewProp_LockSourceCode_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMagicNodeScript_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000800010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMagicNodeScript, Source), Z_Construct_UScriptStruct_FMGC_SourceCode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) }; // 2426688733
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMagicNodeScript_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicNodeScript_Statics::NewProp_RuntimeScriptClass,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicNodeScript_Statics::NewProp_NodeColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicNodeScript_Statics::NewProp_ParentClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicNodeScript_Statics::NewProp_LockSourceCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicNodeScript_Statics::NewProp_Source,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMagicNodeScript_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMagicNodeScript_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MagicNodeRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMagicNodeScript_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMagicNodeScript_Statics::ClassParams = {
	&UMagicNodeScript::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMagicNodeScript_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMagicNodeScript_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMagicNodeScript_Statics::Class_MetaDataParams), Z_Construct_UClass_UMagicNodeScript_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMagicNodeScript()
{
	if (!Z_Registration_Info_UClass_UMagicNodeScript.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMagicNodeScript.OuterSingleton, Z_Construct_UClass_UMagicNodeScript_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMagicNodeScript.OuterSingleton;
}
template<> MAGICNODERUNTIME_API UClass* StaticClass<UMagicNodeScript>()
{
	return UMagicNodeScript::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMagicNodeScript);
UMagicNodeScript::~UMagicNodeScript() {}
// End Class UMagicNodeScript

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MagicNode_Source_MagicNodeRuntime_Public_MagicNodeRuntime_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMagicNode, UMagicNode::StaticClass, TEXT("UMagicNode"), &Z_Registration_Info_UClass_UMagicNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMagicNode), 3223284258U) },
		{ Z_Construct_UClass_UMagicNodeScript, UMagicNodeScript::StaticClass, TEXT("UMagicNodeScript"), &Z_Registration_Info_UClass_UMagicNodeScript, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMagicNodeScript), 3181430331U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MagicNode_Source_MagicNodeRuntime_Public_MagicNodeRuntime_h_3112830533(TEXT("/Script/MagicNodeRuntime"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MagicNode_Source_MagicNodeRuntime_Public_MagicNodeRuntime_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MagicNode_Source_MagicNodeRuntime_Public_MagicNodeRuntime_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
