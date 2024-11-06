// Copyright Gdy Development, Inc. All Rights Reserved.

#include "ExtraWinFunctionBPLibrary.h"
#include "ExtraWinFunction.h"

#if PLATFORM_WINDOWS
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#define UNLEN 256
#include <mmsystem.h>
#include <mmdeviceapi.h>
#include <endpointvolume.h>
#include <dxgi.h>
#include <vector>
#pragma comment(lib, "dxgi.lib")
#include "Windows/WindowsHWrapper.h"
#include <Functiondiscoverykeys_devpkey.h>
#include "Windows/WindowsPlatformMisc.h"
#include "Windows/AllowWindowsPlatformTypes.h"
#include <wininet.h>
#include "GenericPlatform/GenericPlatformProperties.h"
#include "Windows/HideWindowsPlatformTypes.h"
#include <functiondiscoverykeys_devpkey.h>
#include "HAL/PlatformFile.h" 
#include "HAL/PlatformFilemanager.h" 
#include "Misc/Paths.h"
#endif

bool UWindowsExtraFunctionBPLibrary::CheckInternetConnection()
{
#if PLATFORM_WINDOWS
	DWORD flags;
	bool isOnline = InternetGetConnectedState(&flags, 0);
	return isOnline;
#else
	return false;
#endif
}

FString UWindowsExtraFunctionBPLibrary::GetDevicePlatform()
{
#if PLATFORM_WINDOWS
	FString PlatformName = FGenericPlatformMisc::GetUBTPlatform();
	return FString(PlatformName);
#else
	return FString("None");
#endif
}

int32 UWindowsExtraFunctionBPLibrary::GetRamSize()
{
#if PLATFORM_WINDOWS
	MEMORYSTATUSEX MemoryStatus;
	MemoryStatus.dwLength = sizeof(MemoryStatus);
	GlobalMemoryStatusEx(&MemoryStatus);
	int32 RAMSizeInMB = FMath::RoundToInt(MemoryStatus.ullTotalPhys / (1024.0f * 1024.0f));
	return RAMSizeInMB;
#else

	return 0;
#endif
}

int32 UWindowsExtraFunctionBPLibrary::GetProcessorCoreCount()
{
#if PLATFORM_WINDOWS

	return FWindowsPlatformMisc::NumberOfCores();
#else
	return 0;
#endif
}

bool UWindowsExtraFunctionBPLibrary::IsBatterySupported()
{
#if PLATFORM_WINDOWS
	SYSTEM_POWER_STATUS powerStatus;
	if (GetSystemPowerStatus(&powerStatus))
	{
		return powerStatus.BatteryFlag != 128;
	}
	return false;
#else

	return false;
#endif
}

bool UWindowsExtraFunctionBPLibrary::IsBatteryCharging()
{
#if PLATFORM_WINDOWS
	SYSTEM_POWER_STATUS powerStatus;
	if (GetSystemPowerStatus(&powerStatus))
	{
		return powerStatus.BatteryFlag & 8; // BatteryFlag = 8 indicates battery is charging
	}
	return false;
#else

	return false;
#endif
}

FString UWindowsExtraFunctionBPLibrary::GetComputerUsername()
{
#if PLATFORM_WINDOWS
	TCHAR username[UNLEN + 1];
	DWORD usernameLength = UNLEN + 1;
	GetUserName(username, &usernameLength);
	return FString(username);

#else
	return FString("None");
#endif
}

FString UWindowsExtraFunctionBPLibrary::GetDeviceName()
{
#if PLATFORM_WINDOWS

	TCHAR computerName[MAX_COMPUTERNAME_LENGTH + 1];
	DWORD computerNameSize = sizeof(computerName) / sizeof(computerName[0]);
	if (GetComputerName(computerName, &computerNameSize))
	{
		FString deviceName(computerName);
		return deviceName;
	}
	return FString("Unknown");

#else
	return FString("Unknown");
#endif
}

bool UWindowsExtraFunctionBPLibrary::IsMicrophoneAvailable()
{
#if PLATFORM_WINDOWS
	// Initialize COM library
	HRESULT hr = CoInitializeEx(NULL, COINIT_APARTMENTTHREADED);
	if (FAILED(hr))
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to initialize COM library."));
		return false;
	}
	// Create an instance of the MMDeviceEnumerator
	IMMDeviceEnumerator* pEnumerator = NULL;
	hr = CoCreateInstance(__uuidof(MMDeviceEnumerator), NULL, CLSCTX_ALL,
		__uuidof(IMMDeviceEnumerator), (LPVOID*)&pEnumerator);
	if (FAILED(hr))
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to create instance of MMDeviceEnumerator."));
		CoUninitialize();
		return false;
	}
	// Get the default audio capture endpoint
	IMMDevice* pDevice = NULL;
	hr = pEnumerator->GetDefaultAudioEndpoint(eCapture, eConsole, &pDevice);
	if (FAILED(hr))
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to get default audio capture endpoint."));
		pEnumerator->Release();
		CoUninitialize();
		return false;
	}
	// Check if the device is valid
	bool isMicrophoneAvailable = (pDevice != NULL);
	// Release resources
	pDevice->Release();
	pEnumerator->Release();
	CoUninitialize();
	return isMicrophoneAvailable;

#else
	return false;
#endif
}

bool UWindowsExtraFunctionBPLibrary::IsSpeakerAvailable()
{
#if PLATFORM_WINDOWS
	// Initialize COM library
	HRESULT hr = CoInitializeEx(NULL, COINIT_APARTMENTTHREADED);
	if (FAILED(hr))
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to initialize COM library."));
		return false;
	}
	// Create an instance of the MMDeviceEnumerator
	IMMDeviceEnumerator* pEnumerator = NULL;
	hr = CoCreateInstance(__uuidof(MMDeviceEnumerator), NULL, CLSCTX_ALL,
		__uuidof(IMMDeviceEnumerator), (LPVOID*)&pEnumerator);
	if (FAILED(hr))
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to create instance of MMDeviceEnumerator."));
		CoUninitialize();
		return false;
	}
	// Get the default audio capture endpoint
	IMMDevice* pDevice = NULL;
	hr = pEnumerator->GetDefaultAudioEndpoint(eCapture, eConsole, &pDevice);
	if (FAILED(hr))
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to get default audio capture endpoint."));
		pEnumerator->Release();
		CoUninitialize();
		return false;
	}
	// Check if the device is valid
	bool isSpeakerAvailable = (pDevice != NULL);
	// Release resources
	pDevice->Release();
	pEnumerator->Release();
	CoUninitialize();
	return isSpeakerAvailable;
#else
	return false;
#endif
}

FString UWindowsExtraFunctionBPLibrary::GetPrimaryGraphicsCardName()
{
#if PLATFORM_WINDOWS

	FString GraphicsCardName = "Unknown";
	DISPLAY_DEVICE DisplayDevice;
	DisplayDevice.cb = sizeof(DisplayDevice);
	if (EnumDisplayDevices(nullptr, 0, &DisplayDevice, 0))
	{
		GraphicsCardName = DisplayDevice.DeviceString;
	}
	return GraphicsCardName;

#else
	return FString("None");
#endif
}

bool UWindowsExtraFunctionBPLibrary::IsMouseAvailable()
{
#if PLATFORM_WINDOWS
	UINT result = GetSystemMetrics(SM_MOUSEPRESENT);
	return (result != 0);

#else
	return false;
#endif
}

bool UWindowsExtraFunctionBPLibrary::IsGraphicsCardAvailable()
{
#if PLATFORM_WINDOWS

	bool GraphicsCard = false;
	DISPLAY_DEVICE DisplayDevice;
	DisplayDevice.cb = sizeof(DisplayDevice);
	if (EnumDisplayDevices(nullptr, 0, &DisplayDevice, 0))
	{
		GraphicsCard = true;
	}
	return GraphicsCard;

#else
	return false;
#endif
}

bool UWindowsExtraFunctionBPLibrary::GetComputerSoundLevel(float& OutVolume)
{
#if PLATFORM_WINDOWS
	IMMDeviceEnumerator* DeviceEnumerator;
	CoInitializeEx(NULL, COINIT_APARTMENTTHREADED);
	HRESULT hr = CoCreateInstance(
		__uuidof(MMDeviceEnumerator),
		NULL,
		CLSCTX_INPROC_SERVER,
		__uuidof(IMMDeviceEnumerator),
		(LPVOID*)&DeviceEnumerator
	);
	if (SUCCEEDED(hr))
	{
		IMMDevice* DefaultDevice;
		hr = DeviceEnumerator->GetDefaultAudioEndpoint(eRender, eConsole, &DefaultDevice);
		if (SUCCEEDED(hr))
		{
			IAudioEndpointVolume* EndpointVolume;
			hr = DefaultDevice->Activate(__uuidof(IAudioEndpointVolume), CLSCTX_INPROC_SERVER, NULL,
				(LPVOID*)&EndpointVolume);
			if (SUCCEEDED(hr))
			{
				hr = EndpointVolume->GetMasterVolumeLevelScalar(&OutVolume);
				EndpointVolume->Release();
			}
			DefaultDevice->Release();
		}
		DeviceEnumerator->Release();
	}
	CoUninitialize();
	return SUCCEEDED(hr);
#else

	return false;
#endif
}

int32 UWindowsExtraFunctionBPLibrary::GetProcessorThreadCount()
{
#if PLATFORM_WINDOWS
	return FWindowsPlatformMisc::NumberOfCoresIncludingHyperthreads();
#else
	return 0;
#endif
}

void UWindowsExtraFunctionBPLibrary::OpenDirectory(const FString& DirectoryPath)
{
#if PLATFORM_WINDOWS
	FPlatformProcess::ExploreFolder(*DirectoryPath);

#endif
}

TArray<FString> UWindowsExtraFunctionBPLibrary::GetAllSpeakerNames()
{
	TArray <FString> SpeakerNames;
#if PLATFORM_WINDOWS

	UINT numDevices = waveOutGetNumDevs();
	for (UINT deviceId = 0; deviceId < numDevices; deviceId++)
	{
		WAVEOUTCAPS waveOutCaps;
		if (waveOutGetDevCaps(deviceId, &waveOutCaps, sizeof(WAVEOUTCAPS)) == MMSYSERR_NOERROR)
		{
			FString SpeakerName = FString(waveOutCaps.szPname);
			SpeakerNames.Add(SpeakerName);
		}
	}
	return SpeakerNames;
#else
	return SpeakerNames;
#endif
}

void UWindowsExtraFunctionBPLibrary::ShowMessageBox(FString Message, FString Title)
{
#if PLATFORM_WINDOWS
	FWindowsPlatformMisc::MessageBoxExt(EAppMsgType::Ok, *Message, *Title);
#endif
}

bool UWindowsExtraFunctionBPLibrary::CreateDirectory(FString DirectoryPath)
{
#if PLATFORM_WINDOWS

	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
	return PlatformFile.CreateDirectory(*DirectoryPath);
#else
	return false;
#endif
}

TArray<FString> UWindowsExtraFunctionBPLibrary::GetAllGraphicsCardNames()
{
	TArray<FString> GraphicsCardNames;
#if PLATFORM_WINDOWS

	CoInitialize(nullptr);
	IDXGIFactory* dxgiFactory = nullptr;
	if (SUCCEEDED(CreateDXGIFactory(__uuidof(IDXGIFactory), (void**)&dxgiFactory)))
	{
		IDXGIAdapter* adapter = nullptr;
		UINT adapterIndex = 0;
		while (dxgiFactory->EnumAdapters(adapterIndex, &adapter) != DXGI_ERROR_NOT_FOUND)
		{
			DXGI_ADAPTER_DESC adapterDesc;
			if (SUCCEEDED(adapter->GetDesc(&adapterDesc)))
			{
				FString CardName = FString(adapterDesc.Description);
				GraphicsCardNames.Add(CardName);
			}
			adapterIndex++;
		}
		dxgiFactory->Release();
	}
	CoUninitialize();
	return GraphicsCardNames;
#else
	return GraphicsCardNames;
#endif
}

FString UWindowsExtraFunctionBPLibrary::GetDefaultSoundDeviceName()
{
#if PLATFORM_WINDOWS


	IMMDeviceEnumerator* pEnumerator = NULL;
	IMMDevice* pDevice = NULL;
	IPropertyStore* pProps = NULL;
	LPWSTR pwszID = NULL;
	HRESULT hr = CoInitialize(NULL);
	if (SUCCEEDED(hr))
	{
		hr = CoCreateInstance(__uuidof(MMDeviceEnumerator), NULL, CLSCTX_ALL, __uuidof(IMMDeviceEnumerator), (void**)&pEnumerator);
	}
	if (SUCCEEDED(hr))
	{
		hr = pEnumerator->GetDefaultAudioEndpoint(eRender, eConsole, &pDevice);
	}
	if (SUCCEEDED(hr))
	{
		hr = pDevice->GetId(&pwszID);
	}
	if (SUCCEEDED(hr))
	{
		hr = pDevice->OpenPropertyStore(STGM_READ, &pProps);
	}
	if (SUCCEEDED(hr))
	{
		PROPVARIANT varName;
		PropVariantInit(&varName);
		hr = pProps->GetValue(PKEY_Device_FriendlyName, &varName);
		if (SUCCEEDED(hr))
		{
			FString SpeakerName = FString(varName.pwszVal);
			CoTaskMemFree(pwszID);
			PropVariantClear(&varName);
			pProps->Release();
			pDevice->Release();
			pEnumerator->Release();
			return SpeakerName;
		}
	}
	if (pwszID != NULL)
	{
		CoTaskMemFree(pwszID);
	}
	if (pProps != NULL)
	{
		pProps->Release();
	}
	if (pDevice != NULL)
	{
		pDevice->Release();
	}
	if (pEnumerator != NULL)
	{
		pEnumerator->Release();
	}
	return FString();
#else
	return FString("None");
#endif
}

TArray<FString> UWindowsExtraFunctionBPLibrary::GetAllMicrophoneNames()
{
	TArray<FString> MicrophoneModels;
#if PLATFORM_WINDOWS

	IMMDeviceEnumerator* DeviceEnumerator = NULL;
	IMMDeviceCollection* DeviceCollection = NULL;
	CoInitializeEx(NULL, COINIT_APARTMENTTHREADED);
	HRESULT Result = CoCreateInstance(__uuidof(MMDeviceEnumerator), NULL, CLSCTX_ALL, __uuidof(IMMDeviceEnumerator), (void**)&DeviceEnumerator);
	if (SUCCEEDED(Result))
	{
		Result = DeviceEnumerator->EnumAudioEndpoints(eCapture, DEVICE_STATE_ACTIVE, &DeviceCollection);
		if (SUCCEEDED(Result))
		{
			UINT DeviceCount = 0;
			Result = DeviceCollection->GetCount(&DeviceCount);
			if (SUCCEEDED(Result))
			{
				for (UINT i = 0; i < DeviceCount; i++)
				{
					IMMDevice* Device = NULL;
					Result = DeviceCollection->Item(i, &Device);
					if (SUCCEEDED(Result))
					{
						IPropertyStore* PropertyStore = NULL;
						Result = Device->OpenPropertyStore(STGM_READ, &PropertyStore);
						if (SUCCEEDED(Result))
						{
							PROPVARIANT PropVariant;
							PropVariantInit(&PropVariant);
							Result = PropertyStore->GetValue(PKEY_Device_FriendlyName, &PropVariant);
							if (SUCCEEDED(Result))
							{
								MicrophoneModels.Add(FString(PropVariant.pwszVal));
								PropVariantClear(&PropVariant);
							}
							PropertyStore->Release();
						}
						Device->Release();
					}
				}
			}
			DeviceCollection->Release();
		}
		DeviceEnumerator->Release();
	}
	CoUninitialize();
	return MicrophoneModels;
#else
	return MicrophoneModels;
#endif
}

FString UWindowsExtraFunctionBPLibrary::GetDefaultMicrophoneName()
{
#if PLATFORM_WINDOWS
	HWAVEIN hWaveIn = NULL;
	WAVEINCAPS waveInCaps;
	if (waveInGetDevCaps(0, &waveInCaps, sizeof(WAVEINCAPS)) == MMSYSERR_NOERROR)
	{
		return FString(waveInCaps.szPname);
	}
	return FString(TEXT("Unknown"));

#else
	return FString(TEXT("Unknown"));
#endif
}

int32 UWindowsExtraFunctionBPLibrary::GetTotalMouseButtonCount()
{
#if PLATFORM_WINDOWS

	int32 buttonCount = 0;
	buttonCount = GetSystemMetrics(SM_CMOUSEBUTTONS);
	return buttonCount;
#else
	return 0;
#endif
}

float UWindowsExtraFunctionBPLibrary::GetDisplayRefreshRate()
{
#if PLATFORM_WINDOWS

	DEVMODE DisplaySettings;
	DisplaySettings.dmSize = sizeof(DEVMODE);
	if (EnumDisplaySettings(NULL, ENUM_CURRENT_SETTINGS, &DisplaySettings))
	{
		float RefreshRate = static_cast<float>(DisplaySettings.dmDisplayFrequency);
		return RefreshRate;
	}
	return -1.0f;
#else
	return -1.0f;
#endif
}

int32 UWindowsExtraFunctionBPLibrary::GetGraphicsCardRAMSize()
{
#if PLATFORM_WINDOWS
	int32 GraphicsRAMSizeMB = 0;
	IDXGIFactory* DXGIFactory;
	if (SUCCEEDED(CreateDXGIFactory(__uuidof(IDXGIFactory), (void**)&DXGIFactory)))
	{
		IDXGIAdapter* Adapter;
		if (SUCCEEDED(DXGIFactory->EnumAdapters(0, &Adapter)))
		{
			DXGI_ADAPTER_DESC AdapterDesc;
			if (SUCCEEDED(Adapter->GetDesc(&AdapterDesc)))
			{
				GraphicsRAMSizeMB = static_cast<int32>(AdapterDesc.DedicatedVideoMemory / (1024 * 1024));
			}
			Adapter->Release();
		}
		DXGIFactory->Release();
	}
	return GraphicsRAMSizeMB;
#else
	return 0;
#endif
}

bool UWindowsExtraFunctionBPLibrary::DeleteDirectory(const FString& DirectoryToDelete)
{
#if PLATFORM_WINDOWS

	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
	if (PlatformFile.DirectoryExists(*DirectoryToDelete))
	{
		if (PlatformFile.DeleteDirectoryRecursively(*DirectoryToDelete))
		{
			return true;
		}
	}
	return false;
#else
	return false;
#endif
}

void UWindowsExtraFunctionBPLibrary::SetComputerSoundLevel(float VolumeLevel)
{
#if PLATFORM_WINDOWS
	IMMDeviceEnumerator* DeviceEnumerator = NULL;
	IMMDevice* Device = NULL;
	IAudioEndpointVolume* AudioEndpointVolume = NULL;
	CoInitialize(NULL);
	HRESULT Result = CoCreateInstance(__uuidof(MMDeviceEnumerator), NULL, CLSCTX_INPROC_SERVER, __uuidof(IMMDeviceEnumerator), (LPVOID*)&DeviceEnumerator);
	if (SUCCEEDED(Result))
	{
		Result = DeviceEnumerator->GetDefaultAudioEndpoint(eRender, eConsole, &Device);
		if (SUCCEEDED(Result))
		{
			Result = Device->Activate(__uuidof(IAudioEndpointVolume), CLSCTX_INPROC_SERVER, NULL, (LPVOID*)&AudioEndpointVolume);
			if (SUCCEEDED(Result))
			{
				AudioEndpointVolume->SetMasterVolumeLevelScalar(VolumeLevel, NULL);
				AudioEndpointVolume->Release();
			}
			Device->Release();
		}
		DeviceEnumerator->Release();
	}
	CoUninitialize();
#endif
}

void UWindowsExtraFunctionBPLibrary::SetMicrophoneVolume(float VolumeLevel)
{
#if PLATFORM_WINDOWS
	HRESULT hr;
	IMMDeviceEnumerator* enumerator = NULL;
	IMMDevice* device = NULL;
	IAudioEndpointVolume* endpointVolume = NULL;

	hr = CoInitialize(NULL);
	hr = CoCreateInstance(__uuidof(MMDeviceEnumerator), NULL, CLSCTX_INPROC_SERVER, __uuidof(IMMDeviceEnumerator), (LPVOID*)&enumerator);
	hr = enumerator->GetDefaultAudioEndpoint(eCapture, eConsole, &device);
	hr = device->Activate(__uuidof(IAudioEndpointVolume), CLSCTX_INPROC_SERVER, NULL, (LPVOID*)&endpointVolume);

	hr = endpointVolume->SetMasterVolumeLevelScalar(VolumeLevel, NULL);
#endif
}

float UWindowsExtraFunctionBPLibrary::GetMicrophoneVolume()
{
#if PLATFORM_WINDOWS
	IMMDeviceEnumerator* Enumerator = NULL;
	IMMDevice* Device = NULL;
	IAudioEndpointVolume* VolumeControl = NULL;

	float VolumeLevel = 0.0f;

	// Initialize COM
	CoInitialize(NULL);

	// Create device enumerator
	HRESULT Result = CoCreateInstance(__uuidof(MMDeviceEnumerator), NULL, CLSCTX_INPROC_SERVER, __uuidof(IMMDeviceEnumerator), (LPVOID*)&Enumerator);
	if (SUCCEEDED(Result))
	{
		// Get default audio endpoint (microphone)
		Result = Enumerator->GetDefaultAudioEndpoint(eCapture, eCommunications, &Device);
		if (SUCCEEDED(Result))
		{
			// Activate the audio endpoint interface
			Result = Device->Activate(__uuidof(IAudioEndpointVolume), CLSCTX_ALL, NULL, (LPVOID*)&VolumeControl);
			if (SUCCEEDED(Result))
			{
				// Get the current volume level
				VolumeControl->GetMasterVolumeLevelScalar(&VolumeLevel);
			}
		}
	}

	// Clean up
	if (Enumerator) Enumerator->Release();
	if (Device) Device->Release();
	if (VolumeControl) VolumeControl->Release();
	CoUninitialize();

	return VolumeLevel;
#else
	return 0.0;
#endif
}

void UWindowsExtraFunctionBPLibrary::MuteMicrophoneVolume(bool bMute)
{
#if PLATFORM_WINDOWS
	IMMDeviceEnumerator* deviceEnumerator;
	CoInitialize(NULL);
	HRESULT hr = CoCreateInstance(__uuidof(MMDeviceEnumerator), NULL, CLSCTX_INPROC_SERVER, __uuidof(IMMDeviceEnumerator), (LPVOID*)&deviceEnumerator);
	IMMDevice* defaultDevice;
	hr = deviceEnumerator->GetDefaultAudioEndpoint(eCapture, eConsole, &defaultDevice);
	deviceEnumerator->Release();
	IAudioEndpointVolume* endpointVolume;
	hr = defaultDevice->Activate(__uuidof(IAudioEndpointVolume), CLSCTX_INPROC_SERVER, NULL, (LPVOID*)&endpointVolume);
	defaultDevice->Release();

	if (bMute)
	{
		endpointVolume->SetMute(true, NULL);
	}
	else
	{
		endpointVolume->SetMute(false, NULL);
	}

	endpointVolume->Release();
	CoUninitialize();
#endif
}

void UWindowsExtraFunctionBPLibrary::MuteComputerSound(bool bMute)
{
#if PLATFORM_WINDOWS
	IMMDeviceEnumerator* pEnumerator = NULL;
	HRESULT hr = CoCreateInstance(__uuidof(MMDeviceEnumerator), NULL, CLSCTX_ALL, __uuidof(IMMDeviceEnumerator), (void**)&pEnumerator);
	if (SUCCEEDED(hr))
	{
		IMMDevice* pDevice = NULL;
		hr = pEnumerator->GetDefaultAudioEndpoint(eRender, eConsole, &pDevice);
		if (SUCCEEDED(hr))
		{
			IAudioEndpointVolume* pEndpointVolume = NULL;
			hr = pDevice->Activate(__uuidof(IAudioEndpointVolume), CLSCTX_ALL, NULL, (void**)&pEndpointVolume);
			if (SUCCEEDED(hr))
			{
				// Mute or unmute the volume based on the input parameter
				pEndpointVolume->SetMute(bMute, NULL);
				pEndpointVolume->Release();
			}
			pDevice->Release();
		}
		pEnumerator->Release();
	}
#endif
}
