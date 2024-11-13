// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MagicNodeLogger.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MAGICNODERUNTIME_MagicNodeLogger_generated_h
#error "MagicNodeLogger.generated.h already included, missing '#pragma once' in MagicNodeLogger.h"
#endif
#define MAGICNODERUNTIME_MagicNodeLogger_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_W013321M_Documents_GitHub_Beyond_Buttons_Project_Unreal_BEYONDBUTTONS_Plugins_MagicNode_Source_MagicNodeRuntime_Public_MagicNodeLogger_h


#define FOREACH_ENUM_EMGCSEVERITY(op) \
	op(EMGCSeverity::Fatal) \
	op(EMGCSeverity::Error) \
	op(EMGCSeverity::Warning) \
	op(EMGCSeverity::Info) 

enum class EMGCSeverity : uint8;
template<> struct TIsUEnumClass<EMGCSeverity> { enum { Value = true }; };
template<> MAGICNODERUNTIME_API UEnum* StaticEnum<EMGCSeverity>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
