// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ExtraWinFunctionBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EXTRAWINFUNCTION_ExtraWinFunctionBPLibrary_generated_h
#error "ExtraWinFunctionBPLibrary.generated.h already included, missing '#pragma once' in ExtraWinFunctionBPLibrary.h"
#endif
#define EXTRAWINFUNCTION_ExtraWinFunctionBPLibrary_generated_h

#define FID_Users_W013321M_Documents_GitHub_Beyond_Buttons_Project_Unreal_BEYONDBUTTONS_Plugins_ExtraWinFunction_Source_ExtraWinFunction_Public_ExtraWinFunctionBPLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMuteComputerSound); \
	DECLARE_FUNCTION(execMuteMicrophoneVolume); \
	DECLARE_FUNCTION(execGetMicrophoneVolume); \
	DECLARE_FUNCTION(execSetMicrophoneVolume); \
	DECLARE_FUNCTION(execSetComputerSoundLevel); \
	DECLARE_FUNCTION(execDeleteDirectory); \
	DECLARE_FUNCTION(execGetGraphicsCardRAMSize); \
	DECLARE_FUNCTION(execGetDisplayRefreshRate); \
	DECLARE_FUNCTION(execGetTotalMouseButtonCount); \
	DECLARE_FUNCTION(execGetDefaultMicrophoneName); \
	DECLARE_FUNCTION(execGetAllMicrophoneNames); \
	DECLARE_FUNCTION(execGetDefaultSoundDeviceName); \
	DECLARE_FUNCTION(execGetAllGraphicsCardNames); \
	DECLARE_FUNCTION(execCreateDirectory); \
	DECLARE_FUNCTION(execShowMessageBox); \
	DECLARE_FUNCTION(execGetAllSpeakerNames); \
	DECLARE_FUNCTION(execOpenDirectory); \
	DECLARE_FUNCTION(execGetProcessorThreadCount); \
	DECLARE_FUNCTION(execGetComputerSoundLevel); \
	DECLARE_FUNCTION(execIsGraphicsCardAvailable); \
	DECLARE_FUNCTION(execIsMouseAvailable); \
	DECLARE_FUNCTION(execGetPrimaryGraphicsCardName); \
	DECLARE_FUNCTION(execIsSpeakerAvailable); \
	DECLARE_FUNCTION(execIsMicrophoneAvailable); \
	DECLARE_FUNCTION(execGetDeviceName); \
	DECLARE_FUNCTION(execGetComputerUsername); \
	DECLARE_FUNCTION(execIsBatteryCharging); \
	DECLARE_FUNCTION(execIsBatterySupported); \
	DECLARE_FUNCTION(execGetProcessorCoreCount); \
	DECLARE_FUNCTION(execGetRamSize); \
	DECLARE_FUNCTION(execGetDevicePlatform); \
	DECLARE_FUNCTION(execCheckInternetConnection);


#define FID_Users_W013321M_Documents_GitHub_Beyond_Buttons_Project_Unreal_BEYONDBUTTONS_Plugins_ExtraWinFunction_Source_ExtraWinFunction_Public_ExtraWinFunctionBPLibrary_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWindowsExtraFunctionBPLibrary(); \
	friend struct Z_Construct_UClass_UWindowsExtraFunctionBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UWindowsExtraFunctionBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ExtraWinFunction"), NO_API) \
	DECLARE_SERIALIZER(UWindowsExtraFunctionBPLibrary)


#define FID_Users_W013321M_Documents_GitHub_Beyond_Buttons_Project_Unreal_BEYONDBUTTONS_Plugins_ExtraWinFunction_Source_ExtraWinFunction_Public_ExtraWinFunctionBPLibrary_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWindowsExtraFunctionBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWindowsExtraFunctionBPLibrary(UWindowsExtraFunctionBPLibrary&&); \
	UWindowsExtraFunctionBPLibrary(const UWindowsExtraFunctionBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWindowsExtraFunctionBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWindowsExtraFunctionBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWindowsExtraFunctionBPLibrary) \
	NO_API virtual ~UWindowsExtraFunctionBPLibrary();


#define FID_Users_W013321M_Documents_GitHub_Beyond_Buttons_Project_Unreal_BEYONDBUTTONS_Plugins_ExtraWinFunction_Source_ExtraWinFunction_Public_ExtraWinFunctionBPLibrary_h_9_PROLOG
#define FID_Users_W013321M_Documents_GitHub_Beyond_Buttons_Project_Unreal_BEYONDBUTTONS_Plugins_ExtraWinFunction_Source_ExtraWinFunction_Public_ExtraWinFunctionBPLibrary_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_W013321M_Documents_GitHub_Beyond_Buttons_Project_Unreal_BEYONDBUTTONS_Plugins_ExtraWinFunction_Source_ExtraWinFunction_Public_ExtraWinFunctionBPLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_W013321M_Documents_GitHub_Beyond_Buttons_Project_Unreal_BEYONDBUTTONS_Plugins_ExtraWinFunction_Source_ExtraWinFunction_Public_ExtraWinFunctionBPLibrary_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_W013321M_Documents_GitHub_Beyond_Buttons_Project_Unreal_BEYONDBUTTONS_Plugins_ExtraWinFunction_Source_ExtraWinFunction_Public_ExtraWinFunctionBPLibrary_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EXTRAWINFUNCTION_API UClass* StaticClass<class UWindowsExtraFunctionBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_W013321M_Documents_GitHub_Beyond_Buttons_Project_Unreal_BEYONDBUTTONS_Plugins_ExtraWinFunction_Source_ExtraWinFunction_Public_ExtraWinFunctionBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
