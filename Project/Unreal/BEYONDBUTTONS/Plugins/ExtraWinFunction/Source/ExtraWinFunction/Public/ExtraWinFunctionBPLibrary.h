// Copyright Gdy Development, Inc. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "ExtraWinFunctionBPLibrary.generated.h"


UCLASS()
class UWindowsExtraFunctionBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()


	// Use to check Internet
	UFUNCTION(BlueprintCallable, Category = "ExtraWinFunction")
	static bool CheckInternetConnection();

	// Use to check Device Platform
	UFUNCTION(BlueprintCallable, Category = "ExtraWinFunction")
	static FString GetDevicePlatform();

	// Use to check Ram Size
	UFUNCTION(BlueprintCallable, Category = "ExtraWinFunction")
	static int32  GetRamSize();

	// Use to check Processor Core Count
	UFUNCTION(BlueprintCallable, Category = "ExtraWinFunction")
	static int32 GetProcessorCoreCount();

	// Use to check Battery Supported
	UFUNCTION(BlueprintCallable, Category = "ExtraWinFunction")
	static bool IsBatterySupported();

	// Use to check Battery Charging
	UFUNCTION(BlueprintCallable, Category = "ExtraWinFunction")
	static bool IsBatteryCharging();

	// Use to check Computer Username
	UFUNCTION(BlueprintPure, Category = "ExtraWinFunction")
	static FString GetComputerUsername();

	// Use to check Device Name 
	UFUNCTION(BlueprintPure, Category = "ExtraWinFunction")
	static FString GetDeviceName();

	// Use to check Microphone
	UFUNCTION(BlueprintPure, Category = "ExtraWinFunction")
	static bool IsMicrophoneAvailable();

	// Use to Check Speaker Available
	UFUNCTION(BlueprintPure, Category = "ExtraWinFunction")
	static bool IsSpeakerAvailable();

	// Use to check Primary Graphics Card Name
	UFUNCTION(BlueprintPure, Category = "ExtraWinFunction")
	static FString GetPrimaryGraphicsCardName();

	// Use to check Mouse Available
	UFUNCTION(BlueprintPure, Category = "ExtraWinFunction")
	static bool IsMouseAvailable();

	// Use to check Graphics Card Available
	UFUNCTION(BlueprintPure, Category = "ExtraWinFunction")
	static bool IsGraphicsCardAvailable();

	// Use to check Computer Sound Level
	UFUNCTION(BlueprintCallable, Category = "ExtraWinFunction")
	static bool GetComputerSoundLevel(float& OutVolume);

	// Use to check Processor Thread Count
	UFUNCTION(BlueprintCallable, Category = "ExtraWinFunction")
	static int32 GetProcessorThreadCount();

	// Use to Open Directory
	UFUNCTION(BlueprintCallable, Category = "ExtraWinFunction")
	static void OpenDirectory(const FString& DirectoryPath);

	// Use to check All Speaker Names
	UFUNCTION(BlueprintCallable, Category = "ExtraWinFunction")
	static TArray <FString>GetAllSpeakerNames();

	// Use to Show Message Box
	UFUNCTION(BlueprintCallable, Category = "ExtraWinFunction")
	static void ShowMessageBox(FString Message, FString Title);

	// Use to Create Directory
	UFUNCTION(BlueprintCallable, Category = "ExtraWinFunction")
	static bool CreateDirectory(FString DirectoryPath);

	// Use to check All Graphics Card Names
	UFUNCTION(BlueprintCallable, Category = "ExtraWinFunction")
	static TArray<FString>GetAllGraphicsCardNames();

	// Use to check Default Sound Device Name
	UFUNCTION(BlueprintCallable, Category = "ExtraWinFunction")
	static FString GetDefaultSoundDeviceName();

	// Use to check All Microphone Names
	UFUNCTION(BlueprintCallable, Category = "ExtraWinFunction")
	static TArray<FString> GetAllMicrophoneNames();

	// Use to check Default Microphone Name
	UFUNCTION(BlueprintCallable, Category = "ExtraWinFunction")
	static FString GetDefaultMicrophoneName();

	// Use to check Total Mouse Button Count
	UFUNCTION(BlueprintCallable, Category = "ExtraWinFunction")
	static int32 GetTotalMouseButtonCount();

	// Use to check Get Display Refresh Rate
	UFUNCTION(BlueprintCallable, Category = "ExtraWinFunction")
	static float GetDisplayRefreshRate();

	// Use to check Graphics Card RAM Size
	UFUNCTION(BlueprintCallable, Category = "ExtraWinFunction")
	static int32 GetGraphicsCardRAMSize();

	// Use to Delete Directory
	UFUNCTION(BlueprintCallable, Category = "ExtraWinFunction")
	static bool DeleteDirectory(const FString& DirectoryToDelete);

	// Use to Set Computer Sound Level
	UFUNCTION(BlueprintCallable, Category = "ExtraWinFunction")
	static void SetComputerSoundLevel(float VolumeLevel);

	// Use to Set Microphone Volume
	UFUNCTION(BlueprintCallable, Category = "ExtraWinFunction")
	static void SetMicrophoneVolume(float VolumeLevel);

	// Use to Get Microphone Volume
	UFUNCTION(BlueprintCallable, Category = "ExtraWinFunction")
	static float GetMicrophoneVolume();

	// Use to Mute Microphone Volume
	UFUNCTION(BlueprintCallable, Category = "ExtraWinFunction")
	static void MuteMicrophoneVolume(bool bMute);

	// Use to Mute Computer Sound
	UFUNCTION(BlueprintCallable, Category = "ExtraWinFunction")
	static void MuteComputerSound(bool bMute);

};

