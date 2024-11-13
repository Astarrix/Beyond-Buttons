// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExtraWinFunction/Public/ExtraWinFunctionBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExtraWinFunctionBPLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
EXTRAWINFUNCTION_API UClass* Z_Construct_UClass_UWindowsExtraFunctionBPLibrary();
EXTRAWINFUNCTION_API UClass* Z_Construct_UClass_UWindowsExtraFunctionBPLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_ExtraWinFunction();
// End Cross Module References

// Begin Class UWindowsExtraFunctionBPLibrary Function CheckInternetConnection
struct Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_CheckInternetConnection_Statics
{
	struct WindowsExtraFunctionBPLibrary_eventCheckInternetConnection_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ExtraWinFunction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Use to check Internet\n" },
#endif
		{ "ModuleRelativePath", "Public/ExtraWinFunctionBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use to check Internet" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_CheckInternetConnection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WindowsExtraFunctionBPLibrary_eventCheckInternetConnection_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_CheckInternetConnection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WindowsExtraFunctionBPLibrary_eventCheckInternetConnection_Parms), &Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_CheckInternetConnection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_CheckInternetConnection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_CheckInternetConnection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_CheckInternetConnection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_CheckInternetConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowsExtraFunctionBPLibrary, nullptr, "CheckInternetConnection", nullptr, nullptr, Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_CheckInternetConnection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_CheckInternetConnection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_CheckInternetConnection_Statics::WindowsExtraFunctionBPLibrary_eventCheckInternetConnection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_CheckInternetConnection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_CheckInternetConnection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_CheckInternetConnection_Statics::WindowsExtraFunctionBPLibrary_eventCheckInternetConnection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_CheckInternetConnection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_CheckInternetConnection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWindowsExtraFunctionBPLibrary::execCheckInternetConnection)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UWindowsExtraFunctionBPLibrary::CheckInternetConnection();
	P_NATIVE_END;
}
// End Class UWindowsExtraFunctionBPLibrary Function CheckInternetConnection

// Begin Class UWindowsExtraFunctionBPLibrary Function CreateDirectory
struct Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_CreateDirectory_Statics
{
	struct WindowsExtraFunctionBPLibrary_eventCreateDirectory_Parms
	{
		FString DirectoryPath;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ExtraWinFunction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Use to Create Directory\n" },
#endif
		{ "ModuleRelativePath", "Public/ExtraWinFunctionBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use to Create Directory" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DirectoryPath;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_CreateDirectory_Statics::NewProp_DirectoryPath = { "DirectoryPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsExtraFunctionBPLibrary_eventCreateDirectory_Parms, DirectoryPath), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_CreateDirectory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WindowsExtraFunctionBPLibrary_eventCreateDirectory_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_CreateDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WindowsExtraFunctionBPLibrary_eventCreateDirectory_Parms), &Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_CreateDirectory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_CreateDirectory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_CreateDirectory_Statics::NewProp_DirectoryPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_CreateDirectory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_CreateDirectory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_CreateDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowsExtraFunctionBPLibrary, nullptr, "CreateDirectory", nullptr, nullptr, Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_CreateDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_CreateDirectory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_CreateDirectory_Statics::WindowsExtraFunctionBPLibrary_eventCreateDirectory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_CreateDirectory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_CreateDirectory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_CreateDirectory_Statics::WindowsExtraFunctionBPLibrary_eventCreateDirectory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_CreateDirectory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_CreateDirectory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWindowsExtraFunctionBPLibrary::execCreateDirectory)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_DirectoryPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UWindowsExtraFunctionBPLibrary::CreateDirectory(Z_Param_DirectoryPath);
	P_NATIVE_END;
}
// End Class UWindowsExtraFunctionBPLibrary Function CreateDirectory

// Begin Class UWindowsExtraFunctionBPLibrary Function DeleteDirectory
struct Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_DeleteDirectory_Statics
{
	struct WindowsExtraFunctionBPLibrary_eventDeleteDirectory_Parms
	{
		FString DirectoryToDelete;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ExtraWinFunction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Use to Delete Directory\n" },
#endif
		{ "ModuleRelativePath", "Public/ExtraWinFunctionBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use to Delete Directory" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectoryToDelete_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DirectoryToDelete;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_DeleteDirectory_Statics::NewProp_DirectoryToDelete = { "DirectoryToDelete", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsExtraFunctionBPLibrary_eventDeleteDirectory_Parms, DirectoryToDelete), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectoryToDelete_MetaData), NewProp_DirectoryToDelete_MetaData) };
void Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_DeleteDirectory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WindowsExtraFunctionBPLibrary_eventDeleteDirectory_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_DeleteDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WindowsExtraFunctionBPLibrary_eventDeleteDirectory_Parms), &Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_DeleteDirectory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_DeleteDirectory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_DeleteDirectory_Statics::NewProp_DirectoryToDelete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_DeleteDirectory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_DeleteDirectory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_DeleteDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowsExtraFunctionBPLibrary, nullptr, "DeleteDirectory", nullptr, nullptr, Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_DeleteDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_DeleteDirectory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_DeleteDirectory_Statics::WindowsExtraFunctionBPLibrary_eventDeleteDirectory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_DeleteDirectory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_DeleteDirectory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_DeleteDirectory_Statics::WindowsExtraFunctionBPLibrary_eventDeleteDirectory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_DeleteDirectory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_DeleteDirectory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWindowsExtraFunctionBPLibrary::execDeleteDirectory)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_DirectoryToDelete);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UWindowsExtraFunctionBPLibrary::DeleteDirectory(Z_Param_DirectoryToDelete);
	P_NATIVE_END;
}
// End Class UWindowsExtraFunctionBPLibrary Function DeleteDirectory

// Begin Class UWindowsExtraFunctionBPLibrary Function GetAllGraphicsCardNames
struct Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetAllGraphicsCardNames_Statics
{
	struct WindowsExtraFunctionBPLibrary_eventGetAllGraphicsCardNames_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ExtraWinFunction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Use to check All Graphics Card Names\n" },
#endif
		{ "ModuleRelativePath", "Public/ExtraWinFunctionBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use to check All Graphics Card Names" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetAllGraphicsCardNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetAllGraphicsCardNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsExtraFunctionBPLibrary_eventGetAllGraphicsCardNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetAllGraphicsCardNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetAllGraphicsCardNames_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetAllGraphicsCardNames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetAllGraphicsCardNames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetAllGraphicsCardNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowsExtraFunctionBPLibrary, nullptr, "GetAllGraphicsCardNames", nullptr, nullptr, Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetAllGraphicsCardNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetAllGraphicsCardNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetAllGraphicsCardNames_Statics::WindowsExtraFunctionBPLibrary_eventGetAllGraphicsCardNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetAllGraphicsCardNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetAllGraphicsCardNames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetAllGraphicsCardNames_Statics::WindowsExtraFunctionBPLibrary_eventGetAllGraphicsCardNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetAllGraphicsCardNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetAllGraphicsCardNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWindowsExtraFunctionBPLibrary::execGetAllGraphicsCardNames)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=UWindowsExtraFunctionBPLibrary::GetAllGraphicsCardNames();
	P_NATIVE_END;
}
// End Class UWindowsExtraFunctionBPLibrary Function GetAllGraphicsCardNames

// Begin Class UWindowsExtraFunctionBPLibrary Function GetAllMicrophoneNames
struct Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetAllMicrophoneNames_Statics
{
	struct WindowsExtraFunctionBPLibrary_eventGetAllMicrophoneNames_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ExtraWinFunction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Use to check All Microphone Names\n" },
#endif
		{ "ModuleRelativePath", "Public/ExtraWinFunctionBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use to check All Microphone Names" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetAllMicrophoneNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetAllMicrophoneNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsExtraFunctionBPLibrary_eventGetAllMicrophoneNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetAllMicrophoneNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetAllMicrophoneNames_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetAllMicrophoneNames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetAllMicrophoneNames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetAllMicrophoneNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowsExtraFunctionBPLibrary, nullptr, "GetAllMicrophoneNames", nullptr, nullptr, Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetAllMicrophoneNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetAllMicrophoneNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetAllMicrophoneNames_Statics::WindowsExtraFunctionBPLibrary_eventGetAllMicrophoneNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetAllMicrophoneNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetAllMicrophoneNames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetAllMicrophoneNames_Statics::WindowsExtraFunctionBPLibrary_eventGetAllMicrophoneNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetAllMicrophoneNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetAllMicrophoneNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWindowsExtraFunctionBPLibrary::execGetAllMicrophoneNames)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=UWindowsExtraFunctionBPLibrary::GetAllMicrophoneNames();
	P_NATIVE_END;
}
// End Class UWindowsExtraFunctionBPLibrary Function GetAllMicrophoneNames

// Begin Class UWindowsExtraFunctionBPLibrary Function GetAllSpeakerNames
struct Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetAllSpeakerNames_Statics
{
	struct WindowsExtraFunctionBPLibrary_eventGetAllSpeakerNames_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ExtraWinFunction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Use to check All Speaker Names\n" },
#endif
		{ "ModuleRelativePath", "Public/ExtraWinFunctionBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use to check All Speaker Names" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetAllSpeakerNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetAllSpeakerNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsExtraFunctionBPLibrary_eventGetAllSpeakerNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetAllSpeakerNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetAllSpeakerNames_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetAllSpeakerNames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetAllSpeakerNames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetAllSpeakerNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowsExtraFunctionBPLibrary, nullptr, "GetAllSpeakerNames", nullptr, nullptr, Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetAllSpeakerNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetAllSpeakerNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetAllSpeakerNames_Statics::WindowsExtraFunctionBPLibrary_eventGetAllSpeakerNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetAllSpeakerNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetAllSpeakerNames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetAllSpeakerNames_Statics::WindowsExtraFunctionBPLibrary_eventGetAllSpeakerNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetAllSpeakerNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetAllSpeakerNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWindowsExtraFunctionBPLibrary::execGetAllSpeakerNames)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=UWindowsExtraFunctionBPLibrary::GetAllSpeakerNames();
	P_NATIVE_END;
}
// End Class UWindowsExtraFunctionBPLibrary Function GetAllSpeakerNames

// Begin Class UWindowsExtraFunctionBPLibrary Function GetComputerSoundLevel
struct Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetComputerSoundLevel_Statics
{
	struct WindowsExtraFunctionBPLibrary_eventGetComputerSoundLevel_Parms
	{
		float OutVolume;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ExtraWinFunction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Use to check Computer Sound Level\n" },
#endif
		{ "ModuleRelativePath", "Public/ExtraWinFunctionBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use to check Computer Sound Level" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutVolume;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetComputerSoundLevel_Statics::NewProp_OutVolume = { "OutVolume", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsExtraFunctionBPLibrary_eventGetComputerSoundLevel_Parms, OutVolume), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetComputerSoundLevel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WindowsExtraFunctionBPLibrary_eventGetComputerSoundLevel_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetComputerSoundLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WindowsExtraFunctionBPLibrary_eventGetComputerSoundLevel_Parms), &Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetComputerSoundLevel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetComputerSoundLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetComputerSoundLevel_Statics::NewProp_OutVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetComputerSoundLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetComputerSoundLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetComputerSoundLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowsExtraFunctionBPLibrary, nullptr, "GetComputerSoundLevel", nullptr, nullptr, Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetComputerSoundLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetComputerSoundLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetComputerSoundLevel_Statics::WindowsExtraFunctionBPLibrary_eventGetComputerSoundLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetComputerSoundLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetComputerSoundLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetComputerSoundLevel_Statics::WindowsExtraFunctionBPLibrary_eventGetComputerSoundLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetComputerSoundLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetComputerSoundLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWindowsExtraFunctionBPLibrary::execGetComputerSoundLevel)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutVolume);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UWindowsExtraFunctionBPLibrary::GetComputerSoundLevel(Z_Param_Out_OutVolume);
	P_NATIVE_END;
}
// End Class UWindowsExtraFunctionBPLibrary Function GetComputerSoundLevel

// Begin Class UWindowsExtraFunctionBPLibrary Function GetComputerUsername
struct Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetComputerUsername_Statics
{
	struct WindowsExtraFunctionBPLibrary_eventGetComputerUsername_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ExtraWinFunction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Use to check Computer Username\n" },
#endif
		{ "ModuleRelativePath", "Public/ExtraWinFunctionBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use to check Computer Username" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetComputerUsername_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsExtraFunctionBPLibrary_eventGetComputerUsername_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetComputerUsername_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetComputerUsername_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetComputerUsername_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetComputerUsername_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowsExtraFunctionBPLibrary, nullptr, "GetComputerUsername", nullptr, nullptr, Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetComputerUsername_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetComputerUsername_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetComputerUsername_Statics::WindowsExtraFunctionBPLibrary_eventGetComputerUsername_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetComputerUsername_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetComputerUsername_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetComputerUsername_Statics::WindowsExtraFunctionBPLibrary_eventGetComputerUsername_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetComputerUsername()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetComputerUsername_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWindowsExtraFunctionBPLibrary::execGetComputerUsername)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UWindowsExtraFunctionBPLibrary::GetComputerUsername();
	P_NATIVE_END;
}
// End Class UWindowsExtraFunctionBPLibrary Function GetComputerUsername

// Begin Class UWindowsExtraFunctionBPLibrary Function GetDefaultMicrophoneName
struct Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetDefaultMicrophoneName_Statics
{
	struct WindowsExtraFunctionBPLibrary_eventGetDefaultMicrophoneName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ExtraWinFunction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Use to check Default Microphone Name\n" },
#endif
		{ "ModuleRelativePath", "Public/ExtraWinFunctionBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use to check Default Microphone Name" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetDefaultMicrophoneName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsExtraFunctionBPLibrary_eventGetDefaultMicrophoneName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetDefaultMicrophoneName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetDefaultMicrophoneName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetDefaultMicrophoneName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetDefaultMicrophoneName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowsExtraFunctionBPLibrary, nullptr, "GetDefaultMicrophoneName", nullptr, nullptr, Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetDefaultMicrophoneName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetDefaultMicrophoneName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetDefaultMicrophoneName_Statics::WindowsExtraFunctionBPLibrary_eventGetDefaultMicrophoneName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetDefaultMicrophoneName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetDefaultMicrophoneName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetDefaultMicrophoneName_Statics::WindowsExtraFunctionBPLibrary_eventGetDefaultMicrophoneName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetDefaultMicrophoneName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetDefaultMicrophoneName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWindowsExtraFunctionBPLibrary::execGetDefaultMicrophoneName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UWindowsExtraFunctionBPLibrary::GetDefaultMicrophoneName();
	P_NATIVE_END;
}
// End Class UWindowsExtraFunctionBPLibrary Function GetDefaultMicrophoneName

// Begin Class UWindowsExtraFunctionBPLibrary Function GetDefaultSoundDeviceName
struct Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetDefaultSoundDeviceName_Statics
{
	struct WindowsExtraFunctionBPLibrary_eventGetDefaultSoundDeviceName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ExtraWinFunction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Use to check Default Sound Device Name\n" },
#endif
		{ "ModuleRelativePath", "Public/ExtraWinFunctionBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use to check Default Sound Device Name" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetDefaultSoundDeviceName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsExtraFunctionBPLibrary_eventGetDefaultSoundDeviceName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetDefaultSoundDeviceName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetDefaultSoundDeviceName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetDefaultSoundDeviceName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetDefaultSoundDeviceName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowsExtraFunctionBPLibrary, nullptr, "GetDefaultSoundDeviceName", nullptr, nullptr, Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetDefaultSoundDeviceName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetDefaultSoundDeviceName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetDefaultSoundDeviceName_Statics::WindowsExtraFunctionBPLibrary_eventGetDefaultSoundDeviceName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetDefaultSoundDeviceName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetDefaultSoundDeviceName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetDefaultSoundDeviceName_Statics::WindowsExtraFunctionBPLibrary_eventGetDefaultSoundDeviceName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetDefaultSoundDeviceName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetDefaultSoundDeviceName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWindowsExtraFunctionBPLibrary::execGetDefaultSoundDeviceName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UWindowsExtraFunctionBPLibrary::GetDefaultSoundDeviceName();
	P_NATIVE_END;
}
// End Class UWindowsExtraFunctionBPLibrary Function GetDefaultSoundDeviceName

// Begin Class UWindowsExtraFunctionBPLibrary Function GetDeviceName
struct Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetDeviceName_Statics
{
	struct WindowsExtraFunctionBPLibrary_eventGetDeviceName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ExtraWinFunction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Use to check Device Name \n" },
#endif
		{ "ModuleRelativePath", "Public/ExtraWinFunctionBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use to check Device Name" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetDeviceName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsExtraFunctionBPLibrary_eventGetDeviceName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetDeviceName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetDeviceName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetDeviceName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetDeviceName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowsExtraFunctionBPLibrary, nullptr, "GetDeviceName", nullptr, nullptr, Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetDeviceName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetDeviceName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetDeviceName_Statics::WindowsExtraFunctionBPLibrary_eventGetDeviceName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetDeviceName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetDeviceName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetDeviceName_Statics::WindowsExtraFunctionBPLibrary_eventGetDeviceName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetDeviceName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetDeviceName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWindowsExtraFunctionBPLibrary::execGetDeviceName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UWindowsExtraFunctionBPLibrary::GetDeviceName();
	P_NATIVE_END;
}
// End Class UWindowsExtraFunctionBPLibrary Function GetDeviceName

// Begin Class UWindowsExtraFunctionBPLibrary Function GetDevicePlatform
struct Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetDevicePlatform_Statics
{
	struct WindowsExtraFunctionBPLibrary_eventGetDevicePlatform_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ExtraWinFunction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Use to check Device Platform\n" },
#endif
		{ "ModuleRelativePath", "Public/ExtraWinFunctionBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use to check Device Platform" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetDevicePlatform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsExtraFunctionBPLibrary_eventGetDevicePlatform_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetDevicePlatform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetDevicePlatform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetDevicePlatform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetDevicePlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowsExtraFunctionBPLibrary, nullptr, "GetDevicePlatform", nullptr, nullptr, Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetDevicePlatform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetDevicePlatform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetDevicePlatform_Statics::WindowsExtraFunctionBPLibrary_eventGetDevicePlatform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetDevicePlatform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetDevicePlatform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetDevicePlatform_Statics::WindowsExtraFunctionBPLibrary_eventGetDevicePlatform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetDevicePlatform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetDevicePlatform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWindowsExtraFunctionBPLibrary::execGetDevicePlatform)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UWindowsExtraFunctionBPLibrary::GetDevicePlatform();
	P_NATIVE_END;
}
// End Class UWindowsExtraFunctionBPLibrary Function GetDevicePlatform

// Begin Class UWindowsExtraFunctionBPLibrary Function GetDisplayRefreshRate
struct Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetDisplayRefreshRate_Statics
{
	struct WindowsExtraFunctionBPLibrary_eventGetDisplayRefreshRate_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ExtraWinFunction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Use to check Get Display Refresh Rate\n" },
#endif
		{ "ModuleRelativePath", "Public/ExtraWinFunctionBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use to check Get Display Refresh Rate" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetDisplayRefreshRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsExtraFunctionBPLibrary_eventGetDisplayRefreshRate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetDisplayRefreshRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetDisplayRefreshRate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetDisplayRefreshRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetDisplayRefreshRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowsExtraFunctionBPLibrary, nullptr, "GetDisplayRefreshRate", nullptr, nullptr, Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetDisplayRefreshRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetDisplayRefreshRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetDisplayRefreshRate_Statics::WindowsExtraFunctionBPLibrary_eventGetDisplayRefreshRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetDisplayRefreshRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetDisplayRefreshRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetDisplayRefreshRate_Statics::WindowsExtraFunctionBPLibrary_eventGetDisplayRefreshRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetDisplayRefreshRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetDisplayRefreshRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWindowsExtraFunctionBPLibrary::execGetDisplayRefreshRate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UWindowsExtraFunctionBPLibrary::GetDisplayRefreshRate();
	P_NATIVE_END;
}
// End Class UWindowsExtraFunctionBPLibrary Function GetDisplayRefreshRate

// Begin Class UWindowsExtraFunctionBPLibrary Function GetGraphicsCardRAMSize
struct Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetGraphicsCardRAMSize_Statics
{
	struct WindowsExtraFunctionBPLibrary_eventGetGraphicsCardRAMSize_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ExtraWinFunction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Use to check Graphics Card RAM Size\n" },
#endif
		{ "ModuleRelativePath", "Public/ExtraWinFunctionBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use to check Graphics Card RAM Size" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetGraphicsCardRAMSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsExtraFunctionBPLibrary_eventGetGraphicsCardRAMSize_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetGraphicsCardRAMSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetGraphicsCardRAMSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetGraphicsCardRAMSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetGraphicsCardRAMSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowsExtraFunctionBPLibrary, nullptr, "GetGraphicsCardRAMSize", nullptr, nullptr, Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetGraphicsCardRAMSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetGraphicsCardRAMSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetGraphicsCardRAMSize_Statics::WindowsExtraFunctionBPLibrary_eventGetGraphicsCardRAMSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetGraphicsCardRAMSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetGraphicsCardRAMSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetGraphicsCardRAMSize_Statics::WindowsExtraFunctionBPLibrary_eventGetGraphicsCardRAMSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetGraphicsCardRAMSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetGraphicsCardRAMSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWindowsExtraFunctionBPLibrary::execGetGraphicsCardRAMSize)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UWindowsExtraFunctionBPLibrary::GetGraphicsCardRAMSize();
	P_NATIVE_END;
}
// End Class UWindowsExtraFunctionBPLibrary Function GetGraphicsCardRAMSize

// Begin Class UWindowsExtraFunctionBPLibrary Function GetMicrophoneVolume
struct Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetMicrophoneVolume_Statics
{
	struct WindowsExtraFunctionBPLibrary_eventGetMicrophoneVolume_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ExtraWinFunction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Use to Get Microphone Volume\n" },
#endif
		{ "ModuleRelativePath", "Public/ExtraWinFunctionBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use to Get Microphone Volume" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetMicrophoneVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsExtraFunctionBPLibrary_eventGetMicrophoneVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetMicrophoneVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetMicrophoneVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetMicrophoneVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetMicrophoneVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowsExtraFunctionBPLibrary, nullptr, "GetMicrophoneVolume", nullptr, nullptr, Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetMicrophoneVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetMicrophoneVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetMicrophoneVolume_Statics::WindowsExtraFunctionBPLibrary_eventGetMicrophoneVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetMicrophoneVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetMicrophoneVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetMicrophoneVolume_Statics::WindowsExtraFunctionBPLibrary_eventGetMicrophoneVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetMicrophoneVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetMicrophoneVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWindowsExtraFunctionBPLibrary::execGetMicrophoneVolume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UWindowsExtraFunctionBPLibrary::GetMicrophoneVolume();
	P_NATIVE_END;
}
// End Class UWindowsExtraFunctionBPLibrary Function GetMicrophoneVolume

// Begin Class UWindowsExtraFunctionBPLibrary Function GetPrimaryGraphicsCardName
struct Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetPrimaryGraphicsCardName_Statics
{
	struct WindowsExtraFunctionBPLibrary_eventGetPrimaryGraphicsCardName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ExtraWinFunction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Use to check Primary Graphics Card Name\n" },
#endif
		{ "ModuleRelativePath", "Public/ExtraWinFunctionBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use to check Primary Graphics Card Name" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetPrimaryGraphicsCardName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsExtraFunctionBPLibrary_eventGetPrimaryGraphicsCardName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetPrimaryGraphicsCardName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetPrimaryGraphicsCardName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetPrimaryGraphicsCardName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetPrimaryGraphicsCardName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowsExtraFunctionBPLibrary, nullptr, "GetPrimaryGraphicsCardName", nullptr, nullptr, Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetPrimaryGraphicsCardName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetPrimaryGraphicsCardName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetPrimaryGraphicsCardName_Statics::WindowsExtraFunctionBPLibrary_eventGetPrimaryGraphicsCardName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetPrimaryGraphicsCardName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetPrimaryGraphicsCardName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetPrimaryGraphicsCardName_Statics::WindowsExtraFunctionBPLibrary_eventGetPrimaryGraphicsCardName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetPrimaryGraphicsCardName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetPrimaryGraphicsCardName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWindowsExtraFunctionBPLibrary::execGetPrimaryGraphicsCardName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UWindowsExtraFunctionBPLibrary::GetPrimaryGraphicsCardName();
	P_NATIVE_END;
}
// End Class UWindowsExtraFunctionBPLibrary Function GetPrimaryGraphicsCardName

// Begin Class UWindowsExtraFunctionBPLibrary Function GetProcessorCoreCount
struct Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetProcessorCoreCount_Statics
{
	struct WindowsExtraFunctionBPLibrary_eventGetProcessorCoreCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ExtraWinFunction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Use to check Processor Core Count\n" },
#endif
		{ "ModuleRelativePath", "Public/ExtraWinFunctionBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use to check Processor Core Count" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetProcessorCoreCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsExtraFunctionBPLibrary_eventGetProcessorCoreCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetProcessorCoreCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetProcessorCoreCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetProcessorCoreCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetProcessorCoreCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowsExtraFunctionBPLibrary, nullptr, "GetProcessorCoreCount", nullptr, nullptr, Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetProcessorCoreCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetProcessorCoreCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetProcessorCoreCount_Statics::WindowsExtraFunctionBPLibrary_eventGetProcessorCoreCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetProcessorCoreCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetProcessorCoreCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetProcessorCoreCount_Statics::WindowsExtraFunctionBPLibrary_eventGetProcessorCoreCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetProcessorCoreCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetProcessorCoreCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWindowsExtraFunctionBPLibrary::execGetProcessorCoreCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UWindowsExtraFunctionBPLibrary::GetProcessorCoreCount();
	P_NATIVE_END;
}
// End Class UWindowsExtraFunctionBPLibrary Function GetProcessorCoreCount

// Begin Class UWindowsExtraFunctionBPLibrary Function GetProcessorThreadCount
struct Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetProcessorThreadCount_Statics
{
	struct WindowsExtraFunctionBPLibrary_eventGetProcessorThreadCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ExtraWinFunction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Use to check Processor Thread Count\n" },
#endif
		{ "ModuleRelativePath", "Public/ExtraWinFunctionBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use to check Processor Thread Count" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetProcessorThreadCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsExtraFunctionBPLibrary_eventGetProcessorThreadCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetProcessorThreadCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetProcessorThreadCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetProcessorThreadCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetProcessorThreadCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowsExtraFunctionBPLibrary, nullptr, "GetProcessorThreadCount", nullptr, nullptr, Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetProcessorThreadCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetProcessorThreadCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetProcessorThreadCount_Statics::WindowsExtraFunctionBPLibrary_eventGetProcessorThreadCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetProcessorThreadCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetProcessorThreadCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetProcessorThreadCount_Statics::WindowsExtraFunctionBPLibrary_eventGetProcessorThreadCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetProcessorThreadCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetProcessorThreadCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWindowsExtraFunctionBPLibrary::execGetProcessorThreadCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UWindowsExtraFunctionBPLibrary::GetProcessorThreadCount();
	P_NATIVE_END;
}
// End Class UWindowsExtraFunctionBPLibrary Function GetProcessorThreadCount

// Begin Class UWindowsExtraFunctionBPLibrary Function GetRamSize
struct Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetRamSize_Statics
{
	struct WindowsExtraFunctionBPLibrary_eventGetRamSize_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ExtraWinFunction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Use to check Ram Size\n" },
#endif
		{ "ModuleRelativePath", "Public/ExtraWinFunctionBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use to check Ram Size" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetRamSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsExtraFunctionBPLibrary_eventGetRamSize_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetRamSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetRamSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetRamSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetRamSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowsExtraFunctionBPLibrary, nullptr, "GetRamSize", nullptr, nullptr, Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetRamSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetRamSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetRamSize_Statics::WindowsExtraFunctionBPLibrary_eventGetRamSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetRamSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetRamSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetRamSize_Statics::WindowsExtraFunctionBPLibrary_eventGetRamSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetRamSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetRamSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWindowsExtraFunctionBPLibrary::execGetRamSize)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UWindowsExtraFunctionBPLibrary::GetRamSize();
	P_NATIVE_END;
}
// End Class UWindowsExtraFunctionBPLibrary Function GetRamSize

// Begin Class UWindowsExtraFunctionBPLibrary Function GetTotalMouseButtonCount
struct Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetTotalMouseButtonCount_Statics
{
	struct WindowsExtraFunctionBPLibrary_eventGetTotalMouseButtonCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ExtraWinFunction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Use to check Total Mouse Button Count\n" },
#endif
		{ "ModuleRelativePath", "Public/ExtraWinFunctionBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use to check Total Mouse Button Count" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetTotalMouseButtonCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsExtraFunctionBPLibrary_eventGetTotalMouseButtonCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetTotalMouseButtonCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetTotalMouseButtonCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetTotalMouseButtonCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetTotalMouseButtonCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowsExtraFunctionBPLibrary, nullptr, "GetTotalMouseButtonCount", nullptr, nullptr, Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetTotalMouseButtonCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetTotalMouseButtonCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetTotalMouseButtonCount_Statics::WindowsExtraFunctionBPLibrary_eventGetTotalMouseButtonCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetTotalMouseButtonCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetTotalMouseButtonCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetTotalMouseButtonCount_Statics::WindowsExtraFunctionBPLibrary_eventGetTotalMouseButtonCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetTotalMouseButtonCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetTotalMouseButtonCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWindowsExtraFunctionBPLibrary::execGetTotalMouseButtonCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UWindowsExtraFunctionBPLibrary::GetTotalMouseButtonCount();
	P_NATIVE_END;
}
// End Class UWindowsExtraFunctionBPLibrary Function GetTotalMouseButtonCount

// Begin Class UWindowsExtraFunctionBPLibrary Function IsBatteryCharging
struct Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsBatteryCharging_Statics
{
	struct WindowsExtraFunctionBPLibrary_eventIsBatteryCharging_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ExtraWinFunction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Use to check Battery Charging\n" },
#endif
		{ "ModuleRelativePath", "Public/ExtraWinFunctionBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use to check Battery Charging" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsBatteryCharging_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WindowsExtraFunctionBPLibrary_eventIsBatteryCharging_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsBatteryCharging_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WindowsExtraFunctionBPLibrary_eventIsBatteryCharging_Parms), &Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsBatteryCharging_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsBatteryCharging_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsBatteryCharging_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsBatteryCharging_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsBatteryCharging_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowsExtraFunctionBPLibrary, nullptr, "IsBatteryCharging", nullptr, nullptr, Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsBatteryCharging_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsBatteryCharging_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsBatteryCharging_Statics::WindowsExtraFunctionBPLibrary_eventIsBatteryCharging_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsBatteryCharging_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsBatteryCharging_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsBatteryCharging_Statics::WindowsExtraFunctionBPLibrary_eventIsBatteryCharging_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsBatteryCharging()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsBatteryCharging_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWindowsExtraFunctionBPLibrary::execIsBatteryCharging)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UWindowsExtraFunctionBPLibrary::IsBatteryCharging();
	P_NATIVE_END;
}
// End Class UWindowsExtraFunctionBPLibrary Function IsBatteryCharging

// Begin Class UWindowsExtraFunctionBPLibrary Function IsBatterySupported
struct Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsBatterySupported_Statics
{
	struct WindowsExtraFunctionBPLibrary_eventIsBatterySupported_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ExtraWinFunction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Use to check Battery Supported\n" },
#endif
		{ "ModuleRelativePath", "Public/ExtraWinFunctionBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use to check Battery Supported" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsBatterySupported_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WindowsExtraFunctionBPLibrary_eventIsBatterySupported_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsBatterySupported_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WindowsExtraFunctionBPLibrary_eventIsBatterySupported_Parms), &Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsBatterySupported_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsBatterySupported_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsBatterySupported_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsBatterySupported_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsBatterySupported_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowsExtraFunctionBPLibrary, nullptr, "IsBatterySupported", nullptr, nullptr, Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsBatterySupported_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsBatterySupported_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsBatterySupported_Statics::WindowsExtraFunctionBPLibrary_eventIsBatterySupported_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsBatterySupported_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsBatterySupported_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsBatterySupported_Statics::WindowsExtraFunctionBPLibrary_eventIsBatterySupported_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsBatterySupported()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsBatterySupported_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWindowsExtraFunctionBPLibrary::execIsBatterySupported)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UWindowsExtraFunctionBPLibrary::IsBatterySupported();
	P_NATIVE_END;
}
// End Class UWindowsExtraFunctionBPLibrary Function IsBatterySupported

// Begin Class UWindowsExtraFunctionBPLibrary Function IsGraphicsCardAvailable
struct Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsGraphicsCardAvailable_Statics
{
	struct WindowsExtraFunctionBPLibrary_eventIsGraphicsCardAvailable_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ExtraWinFunction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Use to check Graphics Card Available\n" },
#endif
		{ "ModuleRelativePath", "Public/ExtraWinFunctionBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use to check Graphics Card Available" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsGraphicsCardAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WindowsExtraFunctionBPLibrary_eventIsGraphicsCardAvailable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsGraphicsCardAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WindowsExtraFunctionBPLibrary_eventIsGraphicsCardAvailable_Parms), &Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsGraphicsCardAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsGraphicsCardAvailable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsGraphicsCardAvailable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsGraphicsCardAvailable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsGraphicsCardAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowsExtraFunctionBPLibrary, nullptr, "IsGraphicsCardAvailable", nullptr, nullptr, Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsGraphicsCardAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsGraphicsCardAvailable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsGraphicsCardAvailable_Statics::WindowsExtraFunctionBPLibrary_eventIsGraphicsCardAvailable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsGraphicsCardAvailable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsGraphicsCardAvailable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsGraphicsCardAvailable_Statics::WindowsExtraFunctionBPLibrary_eventIsGraphicsCardAvailable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsGraphicsCardAvailable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsGraphicsCardAvailable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWindowsExtraFunctionBPLibrary::execIsGraphicsCardAvailable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UWindowsExtraFunctionBPLibrary::IsGraphicsCardAvailable();
	P_NATIVE_END;
}
// End Class UWindowsExtraFunctionBPLibrary Function IsGraphicsCardAvailable

// Begin Class UWindowsExtraFunctionBPLibrary Function IsMicrophoneAvailable
struct Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsMicrophoneAvailable_Statics
{
	struct WindowsExtraFunctionBPLibrary_eventIsMicrophoneAvailable_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ExtraWinFunction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Use to check Microphone\n" },
#endif
		{ "ModuleRelativePath", "Public/ExtraWinFunctionBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use to check Microphone" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsMicrophoneAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WindowsExtraFunctionBPLibrary_eventIsMicrophoneAvailable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsMicrophoneAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WindowsExtraFunctionBPLibrary_eventIsMicrophoneAvailable_Parms), &Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsMicrophoneAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsMicrophoneAvailable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsMicrophoneAvailable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsMicrophoneAvailable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsMicrophoneAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowsExtraFunctionBPLibrary, nullptr, "IsMicrophoneAvailable", nullptr, nullptr, Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsMicrophoneAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsMicrophoneAvailable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsMicrophoneAvailable_Statics::WindowsExtraFunctionBPLibrary_eventIsMicrophoneAvailable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsMicrophoneAvailable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsMicrophoneAvailable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsMicrophoneAvailable_Statics::WindowsExtraFunctionBPLibrary_eventIsMicrophoneAvailable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsMicrophoneAvailable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsMicrophoneAvailable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWindowsExtraFunctionBPLibrary::execIsMicrophoneAvailable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UWindowsExtraFunctionBPLibrary::IsMicrophoneAvailable();
	P_NATIVE_END;
}
// End Class UWindowsExtraFunctionBPLibrary Function IsMicrophoneAvailable

// Begin Class UWindowsExtraFunctionBPLibrary Function IsMouseAvailable
struct Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsMouseAvailable_Statics
{
	struct WindowsExtraFunctionBPLibrary_eventIsMouseAvailable_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ExtraWinFunction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Use to check Mouse Available\n" },
#endif
		{ "ModuleRelativePath", "Public/ExtraWinFunctionBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use to check Mouse Available" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsMouseAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WindowsExtraFunctionBPLibrary_eventIsMouseAvailable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsMouseAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WindowsExtraFunctionBPLibrary_eventIsMouseAvailable_Parms), &Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsMouseAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsMouseAvailable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsMouseAvailable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsMouseAvailable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsMouseAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowsExtraFunctionBPLibrary, nullptr, "IsMouseAvailable", nullptr, nullptr, Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsMouseAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsMouseAvailable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsMouseAvailable_Statics::WindowsExtraFunctionBPLibrary_eventIsMouseAvailable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsMouseAvailable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsMouseAvailable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsMouseAvailable_Statics::WindowsExtraFunctionBPLibrary_eventIsMouseAvailable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsMouseAvailable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsMouseAvailable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWindowsExtraFunctionBPLibrary::execIsMouseAvailable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UWindowsExtraFunctionBPLibrary::IsMouseAvailable();
	P_NATIVE_END;
}
// End Class UWindowsExtraFunctionBPLibrary Function IsMouseAvailable

// Begin Class UWindowsExtraFunctionBPLibrary Function IsSpeakerAvailable
struct Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsSpeakerAvailable_Statics
{
	struct WindowsExtraFunctionBPLibrary_eventIsSpeakerAvailable_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ExtraWinFunction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Use to Check Speaker Available\n" },
#endif
		{ "ModuleRelativePath", "Public/ExtraWinFunctionBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use to Check Speaker Available" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsSpeakerAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WindowsExtraFunctionBPLibrary_eventIsSpeakerAvailable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsSpeakerAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WindowsExtraFunctionBPLibrary_eventIsSpeakerAvailable_Parms), &Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsSpeakerAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsSpeakerAvailable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsSpeakerAvailable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsSpeakerAvailable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsSpeakerAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowsExtraFunctionBPLibrary, nullptr, "IsSpeakerAvailable", nullptr, nullptr, Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsSpeakerAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsSpeakerAvailable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsSpeakerAvailable_Statics::WindowsExtraFunctionBPLibrary_eventIsSpeakerAvailable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsSpeakerAvailable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsSpeakerAvailable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsSpeakerAvailable_Statics::WindowsExtraFunctionBPLibrary_eventIsSpeakerAvailable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsSpeakerAvailable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsSpeakerAvailable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWindowsExtraFunctionBPLibrary::execIsSpeakerAvailable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UWindowsExtraFunctionBPLibrary::IsSpeakerAvailable();
	P_NATIVE_END;
}
// End Class UWindowsExtraFunctionBPLibrary Function IsSpeakerAvailable

// Begin Class UWindowsExtraFunctionBPLibrary Function MuteComputerSound
struct Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_MuteComputerSound_Statics
{
	struct WindowsExtraFunctionBPLibrary_eventMuteComputerSound_Parms
	{
		bool bMute;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ExtraWinFunction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Use to Mute Computer Sound\n" },
#endif
		{ "ModuleRelativePath", "Public/ExtraWinFunctionBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use to Mute Computer Sound" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bMute_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMute;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_MuteComputerSound_Statics::NewProp_bMute_SetBit(void* Obj)
{
	((WindowsExtraFunctionBPLibrary_eventMuteComputerSound_Parms*)Obj)->bMute = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_MuteComputerSound_Statics::NewProp_bMute = { "bMute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WindowsExtraFunctionBPLibrary_eventMuteComputerSound_Parms), &Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_MuteComputerSound_Statics::NewProp_bMute_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_MuteComputerSound_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_MuteComputerSound_Statics::NewProp_bMute,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_MuteComputerSound_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_MuteComputerSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowsExtraFunctionBPLibrary, nullptr, "MuteComputerSound", nullptr, nullptr, Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_MuteComputerSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_MuteComputerSound_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_MuteComputerSound_Statics::WindowsExtraFunctionBPLibrary_eventMuteComputerSound_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_MuteComputerSound_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_MuteComputerSound_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_MuteComputerSound_Statics::WindowsExtraFunctionBPLibrary_eventMuteComputerSound_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_MuteComputerSound()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_MuteComputerSound_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWindowsExtraFunctionBPLibrary::execMuteComputerSound)
{
	P_GET_UBOOL(Z_Param_bMute);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWindowsExtraFunctionBPLibrary::MuteComputerSound(Z_Param_bMute);
	P_NATIVE_END;
}
// End Class UWindowsExtraFunctionBPLibrary Function MuteComputerSound

// Begin Class UWindowsExtraFunctionBPLibrary Function MuteMicrophoneVolume
struct Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_MuteMicrophoneVolume_Statics
{
	struct WindowsExtraFunctionBPLibrary_eventMuteMicrophoneVolume_Parms
	{
		bool bMute;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ExtraWinFunction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Use to Mute Microphone Volume\n" },
#endif
		{ "ModuleRelativePath", "Public/ExtraWinFunctionBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use to Mute Microphone Volume" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bMute_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMute;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_MuteMicrophoneVolume_Statics::NewProp_bMute_SetBit(void* Obj)
{
	((WindowsExtraFunctionBPLibrary_eventMuteMicrophoneVolume_Parms*)Obj)->bMute = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_MuteMicrophoneVolume_Statics::NewProp_bMute = { "bMute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WindowsExtraFunctionBPLibrary_eventMuteMicrophoneVolume_Parms), &Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_MuteMicrophoneVolume_Statics::NewProp_bMute_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_MuteMicrophoneVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_MuteMicrophoneVolume_Statics::NewProp_bMute,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_MuteMicrophoneVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_MuteMicrophoneVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowsExtraFunctionBPLibrary, nullptr, "MuteMicrophoneVolume", nullptr, nullptr, Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_MuteMicrophoneVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_MuteMicrophoneVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_MuteMicrophoneVolume_Statics::WindowsExtraFunctionBPLibrary_eventMuteMicrophoneVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_MuteMicrophoneVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_MuteMicrophoneVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_MuteMicrophoneVolume_Statics::WindowsExtraFunctionBPLibrary_eventMuteMicrophoneVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_MuteMicrophoneVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_MuteMicrophoneVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWindowsExtraFunctionBPLibrary::execMuteMicrophoneVolume)
{
	P_GET_UBOOL(Z_Param_bMute);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWindowsExtraFunctionBPLibrary::MuteMicrophoneVolume(Z_Param_bMute);
	P_NATIVE_END;
}
// End Class UWindowsExtraFunctionBPLibrary Function MuteMicrophoneVolume

// Begin Class UWindowsExtraFunctionBPLibrary Function OpenDirectory
struct Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_OpenDirectory_Statics
{
	struct WindowsExtraFunctionBPLibrary_eventOpenDirectory_Parms
	{
		FString DirectoryPath;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ExtraWinFunction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Use to Open Directory\n" },
#endif
		{ "ModuleRelativePath", "Public/ExtraWinFunctionBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use to Open Directory" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectoryPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DirectoryPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_OpenDirectory_Statics::NewProp_DirectoryPath = { "DirectoryPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsExtraFunctionBPLibrary_eventOpenDirectory_Parms, DirectoryPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectoryPath_MetaData), NewProp_DirectoryPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_OpenDirectory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_OpenDirectory_Statics::NewProp_DirectoryPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_OpenDirectory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_OpenDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowsExtraFunctionBPLibrary, nullptr, "OpenDirectory", nullptr, nullptr, Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_OpenDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_OpenDirectory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_OpenDirectory_Statics::WindowsExtraFunctionBPLibrary_eventOpenDirectory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_OpenDirectory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_OpenDirectory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_OpenDirectory_Statics::WindowsExtraFunctionBPLibrary_eventOpenDirectory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_OpenDirectory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_OpenDirectory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWindowsExtraFunctionBPLibrary::execOpenDirectory)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_DirectoryPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWindowsExtraFunctionBPLibrary::OpenDirectory(Z_Param_DirectoryPath);
	P_NATIVE_END;
}
// End Class UWindowsExtraFunctionBPLibrary Function OpenDirectory

// Begin Class UWindowsExtraFunctionBPLibrary Function SetComputerSoundLevel
struct Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_SetComputerSoundLevel_Statics
{
	struct WindowsExtraFunctionBPLibrary_eventSetComputerSoundLevel_Parms
	{
		float VolumeLevel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ExtraWinFunction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Use to Set Computer Sound Level\n" },
#endif
		{ "ModuleRelativePath", "Public/ExtraWinFunctionBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use to Set Computer Sound Level" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_SetComputerSoundLevel_Statics::NewProp_VolumeLevel = { "VolumeLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsExtraFunctionBPLibrary_eventSetComputerSoundLevel_Parms, VolumeLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_SetComputerSoundLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_SetComputerSoundLevel_Statics::NewProp_VolumeLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_SetComputerSoundLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_SetComputerSoundLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowsExtraFunctionBPLibrary, nullptr, "SetComputerSoundLevel", nullptr, nullptr, Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_SetComputerSoundLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_SetComputerSoundLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_SetComputerSoundLevel_Statics::WindowsExtraFunctionBPLibrary_eventSetComputerSoundLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_SetComputerSoundLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_SetComputerSoundLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_SetComputerSoundLevel_Statics::WindowsExtraFunctionBPLibrary_eventSetComputerSoundLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_SetComputerSoundLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_SetComputerSoundLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWindowsExtraFunctionBPLibrary::execSetComputerSoundLevel)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_VolumeLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWindowsExtraFunctionBPLibrary::SetComputerSoundLevel(Z_Param_VolumeLevel);
	P_NATIVE_END;
}
// End Class UWindowsExtraFunctionBPLibrary Function SetComputerSoundLevel

// Begin Class UWindowsExtraFunctionBPLibrary Function SetMicrophoneVolume
struct Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_SetMicrophoneVolume_Statics
{
	struct WindowsExtraFunctionBPLibrary_eventSetMicrophoneVolume_Parms
	{
		float VolumeLevel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ExtraWinFunction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Use to Set Microphone Volume\n" },
#endif
		{ "ModuleRelativePath", "Public/ExtraWinFunctionBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use to Set Microphone Volume" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_SetMicrophoneVolume_Statics::NewProp_VolumeLevel = { "VolumeLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsExtraFunctionBPLibrary_eventSetMicrophoneVolume_Parms, VolumeLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_SetMicrophoneVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_SetMicrophoneVolume_Statics::NewProp_VolumeLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_SetMicrophoneVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_SetMicrophoneVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowsExtraFunctionBPLibrary, nullptr, "SetMicrophoneVolume", nullptr, nullptr, Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_SetMicrophoneVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_SetMicrophoneVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_SetMicrophoneVolume_Statics::WindowsExtraFunctionBPLibrary_eventSetMicrophoneVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_SetMicrophoneVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_SetMicrophoneVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_SetMicrophoneVolume_Statics::WindowsExtraFunctionBPLibrary_eventSetMicrophoneVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_SetMicrophoneVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_SetMicrophoneVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWindowsExtraFunctionBPLibrary::execSetMicrophoneVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_VolumeLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWindowsExtraFunctionBPLibrary::SetMicrophoneVolume(Z_Param_VolumeLevel);
	P_NATIVE_END;
}
// End Class UWindowsExtraFunctionBPLibrary Function SetMicrophoneVolume

// Begin Class UWindowsExtraFunctionBPLibrary Function ShowMessageBox
struct Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_ShowMessageBox_Statics
{
	struct WindowsExtraFunctionBPLibrary_eventShowMessageBox_Parms
	{
		FString Message;
		FString Title;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ExtraWinFunction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Use to Show Message Box\n" },
#endif
		{ "ModuleRelativePath", "Public/ExtraWinFunctionBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use to Show Message Box" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Title;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_ShowMessageBox_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsExtraFunctionBPLibrary_eventShowMessageBox_Parms, Message), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_ShowMessageBox_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsExtraFunctionBPLibrary_eventShowMessageBox_Parms, Title), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_ShowMessageBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_ShowMessageBox_Statics::NewProp_Message,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_ShowMessageBox_Statics::NewProp_Title,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_ShowMessageBox_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_ShowMessageBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowsExtraFunctionBPLibrary, nullptr, "ShowMessageBox", nullptr, nullptr, Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_ShowMessageBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_ShowMessageBox_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_ShowMessageBox_Statics::WindowsExtraFunctionBPLibrary_eventShowMessageBox_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_ShowMessageBox_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_ShowMessageBox_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_ShowMessageBox_Statics::WindowsExtraFunctionBPLibrary_eventShowMessageBox_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_ShowMessageBox()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_ShowMessageBox_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWindowsExtraFunctionBPLibrary::execShowMessageBox)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_GET_PROPERTY(FStrProperty,Z_Param_Title);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWindowsExtraFunctionBPLibrary::ShowMessageBox(Z_Param_Message,Z_Param_Title);
	P_NATIVE_END;
}
// End Class UWindowsExtraFunctionBPLibrary Function ShowMessageBox

// Begin Class UWindowsExtraFunctionBPLibrary
void UWindowsExtraFunctionBPLibrary::StaticRegisterNativesUWindowsExtraFunctionBPLibrary()
{
	UClass* Class = UWindowsExtraFunctionBPLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CheckInternetConnection", &UWindowsExtraFunctionBPLibrary::execCheckInternetConnection },
		{ "CreateDirectory", &UWindowsExtraFunctionBPLibrary::execCreateDirectory },
		{ "DeleteDirectory", &UWindowsExtraFunctionBPLibrary::execDeleteDirectory },
		{ "GetAllGraphicsCardNames", &UWindowsExtraFunctionBPLibrary::execGetAllGraphicsCardNames },
		{ "GetAllMicrophoneNames", &UWindowsExtraFunctionBPLibrary::execGetAllMicrophoneNames },
		{ "GetAllSpeakerNames", &UWindowsExtraFunctionBPLibrary::execGetAllSpeakerNames },
		{ "GetComputerSoundLevel", &UWindowsExtraFunctionBPLibrary::execGetComputerSoundLevel },
		{ "GetComputerUsername", &UWindowsExtraFunctionBPLibrary::execGetComputerUsername },
		{ "GetDefaultMicrophoneName", &UWindowsExtraFunctionBPLibrary::execGetDefaultMicrophoneName },
		{ "GetDefaultSoundDeviceName", &UWindowsExtraFunctionBPLibrary::execGetDefaultSoundDeviceName },
		{ "GetDeviceName", &UWindowsExtraFunctionBPLibrary::execGetDeviceName },
		{ "GetDevicePlatform", &UWindowsExtraFunctionBPLibrary::execGetDevicePlatform },
		{ "GetDisplayRefreshRate", &UWindowsExtraFunctionBPLibrary::execGetDisplayRefreshRate },
		{ "GetGraphicsCardRAMSize", &UWindowsExtraFunctionBPLibrary::execGetGraphicsCardRAMSize },
		{ "GetMicrophoneVolume", &UWindowsExtraFunctionBPLibrary::execGetMicrophoneVolume },
		{ "GetPrimaryGraphicsCardName", &UWindowsExtraFunctionBPLibrary::execGetPrimaryGraphicsCardName },
		{ "GetProcessorCoreCount", &UWindowsExtraFunctionBPLibrary::execGetProcessorCoreCount },
		{ "GetProcessorThreadCount", &UWindowsExtraFunctionBPLibrary::execGetProcessorThreadCount },
		{ "GetRamSize", &UWindowsExtraFunctionBPLibrary::execGetRamSize },
		{ "GetTotalMouseButtonCount", &UWindowsExtraFunctionBPLibrary::execGetTotalMouseButtonCount },
		{ "IsBatteryCharging", &UWindowsExtraFunctionBPLibrary::execIsBatteryCharging },
		{ "IsBatterySupported", &UWindowsExtraFunctionBPLibrary::execIsBatterySupported },
		{ "IsGraphicsCardAvailable", &UWindowsExtraFunctionBPLibrary::execIsGraphicsCardAvailable },
		{ "IsMicrophoneAvailable", &UWindowsExtraFunctionBPLibrary::execIsMicrophoneAvailable },
		{ "IsMouseAvailable", &UWindowsExtraFunctionBPLibrary::execIsMouseAvailable },
		{ "IsSpeakerAvailable", &UWindowsExtraFunctionBPLibrary::execIsSpeakerAvailable },
		{ "MuteComputerSound", &UWindowsExtraFunctionBPLibrary::execMuteComputerSound },
		{ "MuteMicrophoneVolume", &UWindowsExtraFunctionBPLibrary::execMuteMicrophoneVolume },
		{ "OpenDirectory", &UWindowsExtraFunctionBPLibrary::execOpenDirectory },
		{ "SetComputerSoundLevel", &UWindowsExtraFunctionBPLibrary::execSetComputerSoundLevel },
		{ "SetMicrophoneVolume", &UWindowsExtraFunctionBPLibrary::execSetMicrophoneVolume },
		{ "ShowMessageBox", &UWindowsExtraFunctionBPLibrary::execShowMessageBox },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWindowsExtraFunctionBPLibrary);
UClass* Z_Construct_UClass_UWindowsExtraFunctionBPLibrary_NoRegister()
{
	return UWindowsExtraFunctionBPLibrary::StaticClass();
}
struct Z_Construct_UClass_UWindowsExtraFunctionBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ExtraWinFunctionBPLibrary.h" },
		{ "ModuleRelativePath", "Public/ExtraWinFunctionBPLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_CheckInternetConnection, "CheckInternetConnection" }, // 1641140591
		{ &Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_CreateDirectory, "CreateDirectory" }, // 1779153390
		{ &Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_DeleteDirectory, "DeleteDirectory" }, // 2560862642
		{ &Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetAllGraphicsCardNames, "GetAllGraphicsCardNames" }, // 2742813620
		{ &Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetAllMicrophoneNames, "GetAllMicrophoneNames" }, // 2804761021
		{ &Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetAllSpeakerNames, "GetAllSpeakerNames" }, // 2562190806
		{ &Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetComputerSoundLevel, "GetComputerSoundLevel" }, // 4031277480
		{ &Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetComputerUsername, "GetComputerUsername" }, // 2412787304
		{ &Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetDefaultMicrophoneName, "GetDefaultMicrophoneName" }, // 3523274874
		{ &Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetDefaultSoundDeviceName, "GetDefaultSoundDeviceName" }, // 4206237903
		{ &Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetDeviceName, "GetDeviceName" }, // 2998166443
		{ &Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetDevicePlatform, "GetDevicePlatform" }, // 3818555416
		{ &Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetDisplayRefreshRate, "GetDisplayRefreshRate" }, // 1634727545
		{ &Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetGraphicsCardRAMSize, "GetGraphicsCardRAMSize" }, // 1314400674
		{ &Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetMicrophoneVolume, "GetMicrophoneVolume" }, // 1513092412
		{ &Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetPrimaryGraphicsCardName, "GetPrimaryGraphicsCardName" }, // 2679360028
		{ &Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetProcessorCoreCount, "GetProcessorCoreCount" }, // 2334611327
		{ &Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetProcessorThreadCount, "GetProcessorThreadCount" }, // 414461549
		{ &Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetRamSize, "GetRamSize" }, // 3089274165
		{ &Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_GetTotalMouseButtonCount, "GetTotalMouseButtonCount" }, // 2901533480
		{ &Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsBatteryCharging, "IsBatteryCharging" }, // 3475572312
		{ &Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsBatterySupported, "IsBatterySupported" }, // 800141457
		{ &Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsGraphicsCardAvailable, "IsGraphicsCardAvailable" }, // 2337116582
		{ &Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsMicrophoneAvailable, "IsMicrophoneAvailable" }, // 1880070445
		{ &Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsMouseAvailable, "IsMouseAvailable" }, // 3070674550
		{ &Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_IsSpeakerAvailable, "IsSpeakerAvailable" }, // 339379803
		{ &Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_MuteComputerSound, "MuteComputerSound" }, // 1467657929
		{ &Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_MuteMicrophoneVolume, "MuteMicrophoneVolume" }, // 886750586
		{ &Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_OpenDirectory, "OpenDirectory" }, // 3437712774
		{ &Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_SetComputerSoundLevel, "SetComputerSoundLevel" }, // 196061522
		{ &Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_SetMicrophoneVolume, "SetMicrophoneVolume" }, // 3361639047
		{ &Z_Construct_UFunction_UWindowsExtraFunctionBPLibrary_ShowMessageBox, "ShowMessageBox" }, // 4119254545
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWindowsExtraFunctionBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWindowsExtraFunctionBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_ExtraWinFunction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWindowsExtraFunctionBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWindowsExtraFunctionBPLibrary_Statics::ClassParams = {
	&UWindowsExtraFunctionBPLibrary::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWindowsExtraFunctionBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UWindowsExtraFunctionBPLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWindowsExtraFunctionBPLibrary()
{
	if (!Z_Registration_Info_UClass_UWindowsExtraFunctionBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWindowsExtraFunctionBPLibrary.OuterSingleton, Z_Construct_UClass_UWindowsExtraFunctionBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWindowsExtraFunctionBPLibrary.OuterSingleton;
}
template<> EXTRAWINFUNCTION_API UClass* StaticClass<UWindowsExtraFunctionBPLibrary>()
{
	return UWindowsExtraFunctionBPLibrary::StaticClass();
}
UWindowsExtraFunctionBPLibrary::UWindowsExtraFunctionBPLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWindowsExtraFunctionBPLibrary);
UWindowsExtraFunctionBPLibrary::~UWindowsExtraFunctionBPLibrary() {}
// End Class UWindowsExtraFunctionBPLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_W013321M_Documents_GitHub_Beyond_Buttons_Project_Unreal_BEYONDBUTTONS_Plugins_ExtraWinFunction_Source_ExtraWinFunction_Public_ExtraWinFunctionBPLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWindowsExtraFunctionBPLibrary, UWindowsExtraFunctionBPLibrary::StaticClass, TEXT("UWindowsExtraFunctionBPLibrary"), &Z_Registration_Info_UClass_UWindowsExtraFunctionBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWindowsExtraFunctionBPLibrary), 2996384756U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_W013321M_Documents_GitHub_Beyond_Buttons_Project_Unreal_BEYONDBUTTONS_Plugins_ExtraWinFunction_Source_ExtraWinFunction_Public_ExtraWinFunctionBPLibrary_h_1930155626(TEXT("/Script/ExtraWinFunction"),
	Z_CompiledInDeferFile_FID_Users_W013321M_Documents_GitHub_Beyond_Buttons_Project_Unreal_BEYONDBUTTONS_Plugins_ExtraWinFunction_Source_ExtraWinFunction_Public_ExtraWinFunctionBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_W013321M_Documents_GitHub_Beyond_Buttons_Project_Unreal_BEYONDBUTTONS_Plugins_ExtraWinFunction_Source_ExtraWinFunction_Public_ExtraWinFunctionBPLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
