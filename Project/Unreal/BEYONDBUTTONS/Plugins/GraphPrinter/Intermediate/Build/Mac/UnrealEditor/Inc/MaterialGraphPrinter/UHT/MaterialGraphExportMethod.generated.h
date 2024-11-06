// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MaterialGraphPrinter/Types/MaterialGraphExportMethod.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MATERIALGRAPHPRINTER_MaterialGraphExportMethod_generated_h
#error "MaterialGraphExportMethod.generated.h already included, missing '#pragma once' in MaterialGraphExportMethod.h"
#endif
#define MATERIALGRAPHPRINTER_MaterialGraphExportMethod_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GraphPrinter_Source_MaterialGraphPrinter_Public_MaterialGraphPrinter_Types_MaterialGraphExportMethod_h


#define FOREACH_ENUM_EMATERIALGRAPHEXPORTMETHOD(op) \
	op(EMaterialGraphExportMethod::GraphOnly) \
	op(EMaterialGraphExportMethod::CombinePreviewAndGraph) \
	op(EMaterialGraphExportMethod::PreviewAndGraphSeparately) 

enum class EMaterialGraphExportMethod : uint8;
template<> struct TIsUEnumClass<EMaterialGraphExportMethod> { enum { Value = true }; };
template<> MATERIALGRAPHPRINTER_API UEnum* StaticEnum<EMaterialGraphExportMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
