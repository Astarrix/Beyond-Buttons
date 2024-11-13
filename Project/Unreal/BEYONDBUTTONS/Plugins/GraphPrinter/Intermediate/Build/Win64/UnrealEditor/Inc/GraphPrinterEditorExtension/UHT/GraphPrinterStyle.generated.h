// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GraphPrinterEditorExtension/Utilities/GraphPrinterStyle.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GRAPHPRINTEREDITOREXTENSION_GraphPrinterStyle_generated_h
#error "GraphPrinterStyle.generated.h already included, missing '#pragma once' in GraphPrinterStyle.h"
#endif
#define GRAPHPRINTEREDITOREXTENSION_GraphPrinterStyle_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_W013321M_Documents_GitHub_Beyond_Buttons_Project_Unreal_BEYONDBUTTONS_Plugins_GraphPrinter_Source_GraphPrinterEditorExtension_Public_GraphPrinterEditorExtension_Utilities_GraphPrinterStyle_h


#define FOREACH_ENUM_EGRAPHPRINTERSTYLEICONTYPE(op) \
	op(EGraphPrinterStyleIconType::PluginIcon) \
	op(EGraphPrinterStyleIconType::CopyAllAreaOfWidgetToClipboard) \
	op(EGraphPrinterStyleIconType::CopySelectedAreaOfWidgetToClipboard) \
	op(EGraphPrinterStyleIconType::PrintAllAreaOfWidget) \
	op(EGraphPrinterStyleIconType::PrintSelectedAreaOfWidget) \
	op(EGraphPrinterStyleIconType::RestoreWidgetFromImageFile) \
	op(EGraphPrinterStyleIconType::OpenExportDestinationFolder) 

enum class EGraphPrinterStyleIconType : uint8;
template<> struct TIsUEnumClass<EGraphPrinterStyleIconType> { enum { Value = true }; };
template<> GRAPHPRINTEREDITOREXTENSION_API UEnum* StaticEnum<EGraphPrinterStyleIconType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
