// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CompoundOperators/Public/CompoundOperatorsBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCompoundOperatorsBPLibrary() {}

// Begin Cross Module References
COMPOUNDOPERATORS_API UClass* Z_Construct_UClass_UCompoundOperatorsBPLibrary();
COMPOUNDOPERATORS_API UClass* Z_Construct_UClass_UCompoundOperatorsBPLibrary_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMatrix();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimespan();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_CompoundOperators();
// End Cross Module References

// Begin Class UCompoundOperatorsBPLibrary Function AddTo_ByteByte
struct Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_ByteByte_Statics
{
	struct CompoundOperatorsBPLibrary_eventAddTo_ByteByte_Parms
	{
		uint8 A;
		uint8 B;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Byte" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Assign (A += B) */" },
#endif
		{ "CompactNodeTitle", "+=" },
		{ "CPP_Default_B", "1" },
		{ "DisplayName", "Add to Byte" },
		{ "Keywords", "+= add plus" },
		{ "ModuleRelativePath", "Public/CompoundOperatorsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assign (A += B)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_A;
	static const UECodeGen_Private::FBytePropertyParams NewProp_B;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_ByteByte_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventAddTo_ByteByte_Parms, A), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_ByteByte_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventAddTo_ByteByte_Parms, B), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_ByteByte_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_ByteByte_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_ByteByte_Statics::NewProp_B,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_ByteByte_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_ByteByte_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompoundOperatorsBPLibrary, nullptr, "AddTo_ByteByte", nullptr, nullptr, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_ByteByte_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_ByteByte_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_ByteByte_Statics::CompoundOperatorsBPLibrary_eventAddTo_ByteByte_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_ByteByte_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_ByteByte_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_ByteByte_Statics::CompoundOperatorsBPLibrary_eventAddTo_ByteByte_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_ByteByte()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_ByteByte_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompoundOperatorsBPLibrary::execAddTo_ByteByte)
{
	P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_A);
	P_GET_PROPERTY(FByteProperty,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCompoundOperatorsBPLibrary::AddTo_ByteByte(Z_Param_Out_A,Z_Param_B);
	P_NATIVE_END;
}
// End Class UCompoundOperatorsBPLibrary Function AddTo_ByteByte

// Begin Class UCompoundOperatorsBPLibrary Function AddTo_DateTimeDateTime
struct Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_DateTimeDateTime_Statics
{
	struct CompoundOperatorsBPLibrary_eventAddTo_DateTimeDateTime_Parms
	{
		FDateTime A;
		FDateTime B;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|DateTime" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Assign (A + B) */" },
#endif
		{ "CompactNodeTitle", "+=" },
		{ "DisplayName", "Add to DateTime" },
		{ "IgnoreTypePromotion", "" },
		{ "Keywords", "+= add plus" },
		{ "ModuleRelativePath", "Public/CompoundOperatorsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assign (A + B)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_DateTimeDateTime_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventAddTo_DateTimeDateTime_Parms, A), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_DateTimeDateTime_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventAddTo_DateTimeDateTime_Parms, B), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_DateTimeDateTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_DateTimeDateTime_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_DateTimeDateTime_Statics::NewProp_B,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_DateTimeDateTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_DateTimeDateTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompoundOperatorsBPLibrary, nullptr, "AddTo_DateTimeDateTime", nullptr, nullptr, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_DateTimeDateTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_DateTimeDateTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_DateTimeDateTime_Statics::CompoundOperatorsBPLibrary_eventAddTo_DateTimeDateTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_DateTimeDateTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_DateTimeDateTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_DateTimeDateTime_Statics::CompoundOperatorsBPLibrary_eventAddTo_DateTimeDateTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_DateTimeDateTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_DateTimeDateTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompoundOperatorsBPLibrary::execAddTo_DateTimeDateTime)
{
	P_GET_STRUCT_REF(FDateTime,Z_Param_Out_A);
	P_GET_STRUCT(FDateTime,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCompoundOperatorsBPLibrary::AddTo_DateTimeDateTime(Z_Param_Out_A,Z_Param_B);
	P_NATIVE_END;
}
// End Class UCompoundOperatorsBPLibrary Function AddTo_DateTimeDateTime

// Begin Class UCompoundOperatorsBPLibrary Function AddTo_DateTimeTimespan
struct Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_DateTimeTimespan_Statics
{
	struct CompoundOperatorsBPLibrary_eventAddTo_DateTimeTimespan_Parms
	{
		FDateTime A;
		FTimespan B;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|DateTime" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Assign (A + B) */" },
#endif
		{ "CompactNodeTitle", "+=" },
		{ "DisplayName", "Add to Timespan" },
		{ "IgnoreTypePromotion", "" },
		{ "Keywords", "+= add plus" },
		{ "ModuleRelativePath", "Public/CompoundOperatorsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assign (A + B)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_DateTimeTimespan_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventAddTo_DateTimeTimespan_Parms, A), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_DateTimeTimespan_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventAddTo_DateTimeTimespan_Parms, B), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_DateTimeTimespan_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_DateTimeTimespan_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_DateTimeTimespan_Statics::NewProp_B,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_DateTimeTimespan_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_DateTimeTimespan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompoundOperatorsBPLibrary, nullptr, "AddTo_DateTimeTimespan", nullptr, nullptr, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_DateTimeTimespan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_DateTimeTimespan_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_DateTimeTimespan_Statics::CompoundOperatorsBPLibrary_eventAddTo_DateTimeTimespan_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_DateTimeTimespan_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_DateTimeTimespan_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_DateTimeTimespan_Statics::CompoundOperatorsBPLibrary_eventAddTo_DateTimeTimespan_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_DateTimeTimespan()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_DateTimeTimespan_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompoundOperatorsBPLibrary::execAddTo_DateTimeTimespan)
{
	P_GET_STRUCT_REF(FDateTime,Z_Param_Out_A);
	P_GET_STRUCT(FTimespan,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCompoundOperatorsBPLibrary::AddTo_DateTimeTimespan(Z_Param_Out_A,Z_Param_B);
	P_NATIVE_END;
}
// End Class UCompoundOperatorsBPLibrary Function AddTo_DateTimeTimespan

// Begin Class UCompoundOperatorsBPLibrary Function AddTo_DoubleDouble
struct Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_DoubleDouble_Statics
{
	struct CompoundOperatorsBPLibrary_eventAddTo_DoubleDouble_Parms
	{
		double A;
		double B;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Float" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Assign (A += B) */" },
#endif
		{ "CompactNodeTitle", "+=" },
		{ "CPP_Default_B", "1.000000" },
		{ "DisplayName", "Add to float" },
		{ "Keywords", "+= add plus" },
		{ "ModuleRelativePath", "Public/CompoundOperatorsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assign (A += B)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_A;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_B;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_DoubleDouble_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventAddTo_DoubleDouble_Parms, A), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_DoubleDouble_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventAddTo_DoubleDouble_Parms, B), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_DoubleDouble_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_DoubleDouble_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_DoubleDouble_Statics::NewProp_B,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_DoubleDouble_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_DoubleDouble_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompoundOperatorsBPLibrary, nullptr, "AddTo_DoubleDouble", nullptr, nullptr, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_DoubleDouble_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_DoubleDouble_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_DoubleDouble_Statics::CompoundOperatorsBPLibrary_eventAddTo_DoubleDouble_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_DoubleDouble_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_DoubleDouble_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_DoubleDouble_Statics::CompoundOperatorsBPLibrary_eventAddTo_DoubleDouble_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_DoubleDouble()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_DoubleDouble_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompoundOperatorsBPLibrary::execAddTo_DoubleDouble)
{
	P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_A);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCompoundOperatorsBPLibrary::AddTo_DoubleDouble(Z_Param_Out_A,Z_Param_B);
	P_NATIVE_END;
}
// End Class UCompoundOperatorsBPLibrary Function AddTo_DoubleDouble

// Begin Class UCompoundOperatorsBPLibrary Function AddTo_Int64Int64
struct Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_Int64Int64_Statics
{
	struct CompoundOperatorsBPLibrary_eventAddTo_Int64Int64_Parms
	{
		int64 A;
		int64 B;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Integer64" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Assign (A += B) */" },
#endif
		{ "CompactNodeTitle", "+=" },
		{ "CPP_Default_B", "1" },
		{ "DisplayName", "Add to integer64" },
		{ "Keywords", "+= add plus" },
		{ "ModuleRelativePath", "Public/CompoundOperatorsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assign (A += B)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_A;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_B;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_Int64Int64_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventAddTo_Int64Int64_Parms, A), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_Int64Int64_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventAddTo_Int64Int64_Parms, B), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_Int64Int64_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_Int64Int64_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_Int64Int64_Statics::NewProp_B,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_Int64Int64_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_Int64Int64_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompoundOperatorsBPLibrary, nullptr, "AddTo_Int64Int64", nullptr, nullptr, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_Int64Int64_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_Int64Int64_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_Int64Int64_Statics::CompoundOperatorsBPLibrary_eventAddTo_Int64Int64_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_Int64Int64_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_Int64Int64_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_Int64Int64_Statics::CompoundOperatorsBPLibrary_eventAddTo_Int64Int64_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_Int64Int64()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_Int64Int64_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompoundOperatorsBPLibrary::execAddTo_Int64Int64)
{
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_A);
	P_GET_PROPERTY(FInt64Property,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCompoundOperatorsBPLibrary::AddTo_Int64Int64(Z_Param_Out_A,Z_Param_B);
	P_NATIVE_END;
}
// End Class UCompoundOperatorsBPLibrary Function AddTo_Int64Int64

// Begin Class UCompoundOperatorsBPLibrary Function AddTo_IntInt
struct Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_IntInt_Statics
{
	struct CompoundOperatorsBPLibrary_eventAddTo_IntInt_Parms
	{
		int32 A;
		int32 B;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Integer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Assign (A += B) */" },
#endif
		{ "CompactNodeTitle", "+=" },
		{ "CPP_Default_B", "1" },
		{ "DisplayName", "Add to int" },
		{ "Keywords", "+= add plus" },
		{ "ModuleRelativePath", "Public/CompoundOperatorsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assign (A += B)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_A;
	static const UECodeGen_Private::FIntPropertyParams NewProp_B;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_IntInt_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventAddTo_IntInt_Parms, A), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_IntInt_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventAddTo_IntInt_Parms, B), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_IntInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_IntInt_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_IntInt_Statics::NewProp_B,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_IntInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_IntInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompoundOperatorsBPLibrary, nullptr, "AddTo_IntInt", nullptr, nullptr, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_IntInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_IntInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_IntInt_Statics::CompoundOperatorsBPLibrary_eventAddTo_IntInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_IntInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_IntInt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_IntInt_Statics::CompoundOperatorsBPLibrary_eventAddTo_IntInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_IntInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_IntInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompoundOperatorsBPLibrary::execAddTo_IntInt)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_A);
	P_GET_PROPERTY(FIntProperty,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCompoundOperatorsBPLibrary::AddTo_IntInt(Z_Param_Out_A,Z_Param_B);
	P_NATIVE_END;
}
// End Class UCompoundOperatorsBPLibrary Function AddTo_IntInt

// Begin Class UCompoundOperatorsBPLibrary Function AddTo_IntPointInt
struct Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_IntPointInt_Statics
{
	struct CompoundOperatorsBPLibrary_eventAddTo_IntPointInt_Parms
	{
		FIntPoint A;
		int32 B;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|IntPoint" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Assign (A += B) */" },
#endif
		{ "CompactNodeTitle", "+=" },
		{ "DisplayName", "Add to Integer" },
		{ "Keywords", "+= add plus" },
		{ "ModuleRelativePath", "Public/CompoundOperatorsBPLibrary.h" },
		{ "ScriptMethod", "AddToInt" },
		{ "ScriptOperator", "+;+=" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assign (A += B)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FIntPropertyParams NewProp_B;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_IntPointInt_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventAddTo_IntPointInt_Parms, A), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_IntPointInt_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventAddTo_IntPointInt_Parms, B), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_IntPointInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_IntPointInt_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_IntPointInt_Statics::NewProp_B,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_IntPointInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_IntPointInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompoundOperatorsBPLibrary, nullptr, "AddTo_IntPointInt", nullptr, nullptr, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_IntPointInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_IntPointInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_IntPointInt_Statics::CompoundOperatorsBPLibrary_eventAddTo_IntPointInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_IntPointInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_IntPointInt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_IntPointInt_Statics::CompoundOperatorsBPLibrary_eventAddTo_IntPointInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_IntPointInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_IntPointInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompoundOperatorsBPLibrary::execAddTo_IntPointInt)
{
	P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_A);
	P_GET_PROPERTY(FIntProperty,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCompoundOperatorsBPLibrary::AddTo_IntPointInt(Z_Param_Out_A,Z_Param_B);
	P_NATIVE_END;
}
// End Class UCompoundOperatorsBPLibrary Function AddTo_IntPointInt

// Begin Class UCompoundOperatorsBPLibrary Function AddTo_IntPointIntPoint
struct Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_IntPointIntPoint_Statics
{
	struct CompoundOperatorsBPLibrary_eventAddTo_IntPointIntPoint_Parms
	{
		FIntPoint A;
		FIntPoint B;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|IntPoint" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Assign A added by B */" },
#endif
		{ "CompactNodeTitle", "+=" },
		{ "DisplayName", "Add to IntPoint" },
		{ "Keywords", "+= add plus" },
		{ "ModuleRelativePath", "Public/CompoundOperatorsBPLibrary.h" },
		{ "ScriptMethod", "AddToIntPoint" },
		{ "ScriptOperator", "+;+=" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assign A added by B" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_IntPointIntPoint_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventAddTo_IntPointIntPoint_Parms, A), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_IntPointIntPoint_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventAddTo_IntPointIntPoint_Parms, B), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_IntPointIntPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_IntPointIntPoint_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_IntPointIntPoint_Statics::NewProp_B,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_IntPointIntPoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_IntPointIntPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompoundOperatorsBPLibrary, nullptr, "AddTo_IntPointIntPoint", nullptr, nullptr, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_IntPointIntPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_IntPointIntPoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_IntPointIntPoint_Statics::CompoundOperatorsBPLibrary_eventAddTo_IntPointIntPoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_IntPointIntPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_IntPointIntPoint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_IntPointIntPoint_Statics::CompoundOperatorsBPLibrary_eventAddTo_IntPointIntPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_IntPointIntPoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_IntPointIntPoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompoundOperatorsBPLibrary::execAddTo_IntPointIntPoint)
{
	P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_A);
	P_GET_STRUCT(FIntPoint,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCompoundOperatorsBPLibrary::AddTo_IntPointIntPoint(Z_Param_Out_A,Z_Param_B);
	P_NATIVE_END;
}
// End Class UCompoundOperatorsBPLibrary Function AddTo_IntPointIntPoint

// Begin Class UCompoundOperatorsBPLibrary Function AddTo_LinearColorLinearColor
struct Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_LinearColorLinearColor_Statics
{
	struct CompoundOperatorsBPLibrary_eventAddTo_LinearColorLinearColor_Parms
	{
		FLinearColor A;
		FLinearColor B;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Color" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Element-wise assign addition of two linear colors (R+=R, G+=G, B+=B, A+=A) */" },
#endif
		{ "CompactNodeTitle", "+=" },
		{ "DisplayName", "Add to LinearColor" },
		{ "Keywords", "+= add plus" },
		{ "ModuleRelativePath", "Public/CompoundOperatorsBPLibrary.h" },
		{ "ScriptMethod", "AddToLinearColor" },
		{ "ScriptOperator", "+;+=" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Element-wise assign addition of two linear colors (R+=R, G+=G, B+=B, A+=A)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_LinearColorLinearColor_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventAddTo_LinearColorLinearColor_Parms, A), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_LinearColorLinearColor_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventAddTo_LinearColorLinearColor_Parms, B), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_LinearColorLinearColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_LinearColorLinearColor_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_LinearColorLinearColor_Statics::NewProp_B,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_LinearColorLinearColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_LinearColorLinearColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompoundOperatorsBPLibrary, nullptr, "AddTo_LinearColorLinearColor", nullptr, nullptr, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_LinearColorLinearColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_LinearColorLinearColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_LinearColorLinearColor_Statics::CompoundOperatorsBPLibrary_eventAddTo_LinearColorLinearColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_LinearColorLinearColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_LinearColorLinearColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_LinearColorLinearColor_Statics::CompoundOperatorsBPLibrary_eventAddTo_LinearColorLinearColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_LinearColorLinearColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_LinearColorLinearColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompoundOperatorsBPLibrary::execAddTo_LinearColorLinearColor)
{
	P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_A);
	P_GET_STRUCT(FLinearColor,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCompoundOperatorsBPLibrary::AddTo_LinearColorLinearColor(Z_Param_Out_A,Z_Param_B);
	P_NATIVE_END;
}
// End Class UCompoundOperatorsBPLibrary Function AddTo_LinearColorLinearColor

// Begin Class UCompoundOperatorsBPLibrary Function AddTo_MatrixMatrix
struct Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_MatrixMatrix_Statics
{
	struct FMatrix
	{
		FPlane XPlane;
		FPlane YPlane;
		FPlane ZPlane;
		FPlane WPlane;
	};

	struct CompoundOperatorsBPLibrary_eventAddTo_MatrixMatrix_Parms
	{
		FMatrix A;
		FMatrix B;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Matrix" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Assign adding a matrix to matrix (A += B) */" },
#endif
		{ "CompactNodeTitle", "+=" },
		{ "DisplayName", "Add to Matrix" },
		{ "Keywords", "+= add plus" },
		{ "ModuleRelativePath", "Public/CompoundOperatorsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assign adding a matrix to matrix (A += B)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_MatrixMatrix_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventAddTo_MatrixMatrix_Parms, A), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_MatrixMatrix_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventAddTo_MatrixMatrix_Parms, B), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_MatrixMatrix_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_MatrixMatrix_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_MatrixMatrix_Statics::NewProp_B,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_MatrixMatrix_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_MatrixMatrix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompoundOperatorsBPLibrary, nullptr, "AddTo_MatrixMatrix", nullptr, nullptr, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_MatrixMatrix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_MatrixMatrix_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_MatrixMatrix_Statics::CompoundOperatorsBPLibrary_eventAddTo_MatrixMatrix_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_MatrixMatrix_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_MatrixMatrix_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_MatrixMatrix_Statics::CompoundOperatorsBPLibrary_eventAddTo_MatrixMatrix_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_MatrixMatrix()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_MatrixMatrix_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompoundOperatorsBPLibrary::execAddTo_MatrixMatrix)
{
	P_GET_STRUCT_REF(FMatrix,Z_Param_Out_A);
	P_GET_STRUCT_REF(FMatrix,Z_Param_Out_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCompoundOperatorsBPLibrary::AddTo_MatrixMatrix(Z_Param_Out_A,Z_Param_Out_B);
	P_NATIVE_END;
}
// End Class UCompoundOperatorsBPLibrary Function AddTo_MatrixMatrix

// Begin Class UCompoundOperatorsBPLibrary Function AddTo_QuatQuat
struct Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_QuatQuat_Statics
{
	struct CompoundOperatorsBPLibrary_eventAddTo_QuatQuat_Parms
	{
		FQuat A;
		FQuat B;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Quat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Assign adding of Vector (A + B) */" },
#endif
		{ "CompactNodeTitle", "+=" },
		{ "DisplayName", "Add to Quat" },
		{ "Keywords", "+= add plus" },
		{ "ModuleRelativePath", "Public/CompoundOperatorsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assign adding of Vector (A + B)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_QuatQuat_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventAddTo_QuatQuat_Parms, A), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_QuatQuat_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventAddTo_QuatQuat_Parms, B), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_QuatQuat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_QuatQuat_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_QuatQuat_Statics::NewProp_B,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_QuatQuat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_QuatQuat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompoundOperatorsBPLibrary, nullptr, "AddTo_QuatQuat", nullptr, nullptr, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_QuatQuat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_QuatQuat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_QuatQuat_Statics::CompoundOperatorsBPLibrary_eventAddTo_QuatQuat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_QuatQuat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_QuatQuat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_QuatQuat_Statics::CompoundOperatorsBPLibrary_eventAddTo_QuatQuat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_QuatQuat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_QuatQuat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompoundOperatorsBPLibrary::execAddTo_QuatQuat)
{
	P_GET_STRUCT_REF(FQuat,Z_Param_Out_A);
	P_GET_STRUCT_REF(FQuat,Z_Param_Out_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCompoundOperatorsBPLibrary::AddTo_QuatQuat(Z_Param_Out_A,Z_Param_Out_B);
	P_NATIVE_END;
}
// End Class UCompoundOperatorsBPLibrary Function AddTo_QuatQuat

// Begin Class UCompoundOperatorsBPLibrary Function AddTo_TimespanTimespan
struct Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_TimespanTimespan_Statics
{
	struct CompoundOperatorsBPLibrary_eventAddTo_TimespanTimespan_Parms
	{
		FTimespan A;
		FTimespan B;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Timespan" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Assign (A + B) */" },
#endif
		{ "CompactNodeTitle", "+=" },
		{ "DisplayName", "Add to Timespan" },
		{ "Keywords", "+= add plus" },
		{ "ModuleRelativePath", "Public/CompoundOperatorsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assign (A + B)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_TimespanTimespan_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventAddTo_TimespanTimespan_Parms, A), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_TimespanTimespan_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventAddTo_TimespanTimespan_Parms, B), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_TimespanTimespan_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_TimespanTimespan_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_TimespanTimespan_Statics::NewProp_B,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_TimespanTimespan_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_TimespanTimespan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompoundOperatorsBPLibrary, nullptr, "AddTo_TimespanTimespan", nullptr, nullptr, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_TimespanTimespan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_TimespanTimespan_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_TimespanTimespan_Statics::CompoundOperatorsBPLibrary_eventAddTo_TimespanTimespan_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_TimespanTimespan_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_TimespanTimespan_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_TimespanTimespan_Statics::CompoundOperatorsBPLibrary_eventAddTo_TimespanTimespan_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_TimespanTimespan()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_TimespanTimespan_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompoundOperatorsBPLibrary::execAddTo_TimespanTimespan)
{
	P_GET_STRUCT_REF(FTimespan,Z_Param_Out_A);
	P_GET_STRUCT(FTimespan,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCompoundOperatorsBPLibrary::AddTo_TimespanTimespan(Z_Param_Out_A,Z_Param_B);
	P_NATIVE_END;
}
// End Class UCompoundOperatorsBPLibrary Function AddTo_TimespanTimespan

// Begin Class UCompoundOperatorsBPLibrary Function AddTo_Vector2DFloat
struct Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_Vector2DFloat_Statics
{
	struct CompoundOperatorsBPLibrary_eventAddTo_Vector2DFloat_Parms
	{
		FVector2D A;
		double B;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Vector2D" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Assign Vector A added by B */" },
#endif
		{ "CompactNodeTitle", "+=" },
		{ "DisplayName", "Add to vector2d float" },
		{ "Keywords", "+= add plus" },
		{ "ModuleRelativePath", "Public/CompoundOperatorsBPLibrary.h" },
		{ "ScriptMethod", "AddToFloat" },
		{ "ScriptOperator", "+;+=" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assign Vector A added by B" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_B;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_Vector2DFloat_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventAddTo_Vector2DFloat_Parms, A), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_Vector2DFloat_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventAddTo_Vector2DFloat_Parms, B), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_Vector2DFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_Vector2DFloat_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_Vector2DFloat_Statics::NewProp_B,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_Vector2DFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_Vector2DFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompoundOperatorsBPLibrary, nullptr, "AddTo_Vector2DFloat", nullptr, nullptr, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_Vector2DFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_Vector2DFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_Vector2DFloat_Statics::CompoundOperatorsBPLibrary_eventAddTo_Vector2DFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_Vector2DFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_Vector2DFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_Vector2DFloat_Statics::CompoundOperatorsBPLibrary_eventAddTo_Vector2DFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_Vector2DFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_Vector2DFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompoundOperatorsBPLibrary::execAddTo_Vector2DFloat)
{
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_A);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCompoundOperatorsBPLibrary::AddTo_Vector2DFloat(Z_Param_Out_A,Z_Param_B);
	P_NATIVE_END;
}
// End Class UCompoundOperatorsBPLibrary Function AddTo_Vector2DFloat

// Begin Class UCompoundOperatorsBPLibrary Function AddTo_Vector2DVector2D
struct Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_Vector2DVector2D_Statics
{
	struct CompoundOperatorsBPLibrary_eventAddTo_Vector2DVector2D_Parms
	{
		FVector2D A;
		FVector2D B;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Vector2D" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Assign Vector A and Vector B (A += B) */" },
#endif
		{ "CompactNodeTitle", "+=" },
		{ "DisplayName", "Add to vector2d" },
		{ "Keywords", "+= add plus" },
		{ "ModuleRelativePath", "Public/CompoundOperatorsBPLibrary.h" },
		{ "ScriptMethod", "AddToVector2D" },
		{ "ScriptOperator", "+;+=" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assign Vector A and Vector B (A += B)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_Vector2DVector2D_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventAddTo_Vector2DVector2D_Parms, A), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_Vector2DVector2D_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventAddTo_Vector2DVector2D_Parms, B), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_Vector2DVector2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_Vector2DVector2D_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_Vector2DVector2D_Statics::NewProp_B,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_Vector2DVector2D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_Vector2DVector2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompoundOperatorsBPLibrary, nullptr, "AddTo_Vector2DVector2D", nullptr, nullptr, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_Vector2DVector2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_Vector2DVector2D_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_Vector2DVector2D_Statics::CompoundOperatorsBPLibrary_eventAddTo_Vector2DVector2D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_Vector2DVector2D_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_Vector2DVector2D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_Vector2DVector2D_Statics::CompoundOperatorsBPLibrary_eventAddTo_Vector2DVector2D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_Vector2DVector2D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_Vector2DVector2D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompoundOperatorsBPLibrary::execAddTo_Vector2DVector2D)
{
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_A);
	P_GET_STRUCT(FVector2D,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCompoundOperatorsBPLibrary::AddTo_Vector2DVector2D(Z_Param_Out_A,Z_Param_B);
	P_NATIVE_END;
}
// End Class UCompoundOperatorsBPLibrary Function AddTo_Vector2DVector2D

// Begin Class UCompoundOperatorsBPLibrary Function AddTo_Vector4Vector4
struct Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_Vector4Vector4_Statics
{
	struct CompoundOperatorsBPLibrary_eventAddTo_Vector4Vector4_Parms
	{
		FVector4 A;
		FVector4 B;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Vector4" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Assign of Vector A  (A += B) */" },
#endif
		{ "CompactNodeTitle", "+=" },
		{ "DisplayName", "Add to Vector4" },
		{ "Keywords", "+ add plus" },
		{ "ModuleRelativePath", "Public/CompoundOperatorsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assign of Vector A  (A += B)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_Vector4Vector4_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventAddTo_Vector4Vector4_Parms, A), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_Vector4Vector4_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventAddTo_Vector4Vector4_Parms, B), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_Vector4Vector4_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_Vector4Vector4_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_Vector4Vector4_Statics::NewProp_B,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_Vector4Vector4_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_Vector4Vector4_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompoundOperatorsBPLibrary, nullptr, "AddTo_Vector4Vector4", nullptr, nullptr, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_Vector4Vector4_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_Vector4Vector4_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_Vector4Vector4_Statics::CompoundOperatorsBPLibrary_eventAddTo_Vector4Vector4_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_Vector4Vector4_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_Vector4Vector4_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_Vector4Vector4_Statics::CompoundOperatorsBPLibrary_eventAddTo_Vector4Vector4_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_Vector4Vector4()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_Vector4Vector4_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompoundOperatorsBPLibrary::execAddTo_Vector4Vector4)
{
	P_GET_STRUCT_REF(FVector4,Z_Param_Out_A);
	P_GET_STRUCT_REF(FVector4,Z_Param_Out_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCompoundOperatorsBPLibrary::AddTo_Vector4Vector4(Z_Param_Out_A,Z_Param_Out_B);
	P_NATIVE_END;
}
// End Class UCompoundOperatorsBPLibrary Function AddTo_Vector4Vector4

// Begin Class UCompoundOperatorsBPLibrary Function AddTo_VectorFloat
struct Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_VectorFloat_Statics
{
	struct CompoundOperatorsBPLibrary_eventAddTo_VectorFloat_Parms
	{
		FVector A;
		double B;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Vector" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Assign adding a float to each component of a vector */" },
#endif
		{ "CompactNodeTitle", "+=" },
		{ "DisplayName", "Add to float" },
		{ "Keywords", "+= add plus" },
		{ "ModuleRelativePath", "Public/CompoundOperatorsBPLibrary.h" },
		{ "ScriptMethod", "AddToFloat" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assign adding a float to each component of a vector" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_B;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_VectorFloat_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventAddTo_VectorFloat_Parms, A), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_VectorFloat_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventAddTo_VectorFloat_Parms, B), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_VectorFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_VectorFloat_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_VectorFloat_Statics::NewProp_B,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_VectorFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_VectorFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompoundOperatorsBPLibrary, nullptr, "AddTo_VectorFloat", nullptr, nullptr, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_VectorFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_VectorFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_VectorFloat_Statics::CompoundOperatorsBPLibrary_eventAddTo_VectorFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_VectorFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_VectorFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_VectorFloat_Statics::CompoundOperatorsBPLibrary_eventAddTo_VectorFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_VectorFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_VectorFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompoundOperatorsBPLibrary::execAddTo_VectorFloat)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_A);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCompoundOperatorsBPLibrary::AddTo_VectorFloat(Z_Param_Out_A,Z_Param_B);
	P_NATIVE_END;
}
// End Class UCompoundOperatorsBPLibrary Function AddTo_VectorFloat

// Begin Class UCompoundOperatorsBPLibrary Function AddTo_VectorInt
struct Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_VectorInt_Statics
{
	struct CompoundOperatorsBPLibrary_eventAddTo_VectorInt_Parms
	{
		FVector A;
		int32 B;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Vector" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Assign an integer to each component of a vector */" },
#endif
		{ "CompactNodeTitle", "+=" },
		{ "DisplayName", "Add to integer" },
		{ "Keywords", "+= add plus" },
		{ "ModuleRelativePath", "Public/CompoundOperatorsBPLibrary.h" },
		{ "ScriptMethod", "AddToInt" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assign an integer to each component of a vector" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FIntPropertyParams NewProp_B;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_VectorInt_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventAddTo_VectorInt_Parms, A), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_VectorInt_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventAddTo_VectorInt_Parms, B), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_VectorInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_VectorInt_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_VectorInt_Statics::NewProp_B,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_VectorInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_VectorInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompoundOperatorsBPLibrary, nullptr, "AddTo_VectorInt", nullptr, nullptr, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_VectorInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_VectorInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_VectorInt_Statics::CompoundOperatorsBPLibrary_eventAddTo_VectorInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_VectorInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_VectorInt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_VectorInt_Statics::CompoundOperatorsBPLibrary_eventAddTo_VectorInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_VectorInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_VectorInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompoundOperatorsBPLibrary::execAddTo_VectorInt)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_A);
	P_GET_PROPERTY(FIntProperty,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCompoundOperatorsBPLibrary::AddTo_VectorInt(Z_Param_Out_A,Z_Param_B);
	P_NATIVE_END;
}
// End Class UCompoundOperatorsBPLibrary Function AddTo_VectorInt

// Begin Class UCompoundOperatorsBPLibrary Function AddTo_VectorVector
struct Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_VectorVector_Statics
{
	struct CompoundOperatorsBPLibrary_eventAddTo_VectorVector_Parms
	{
		FVector A;
		FVector B;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Vector" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Vector Assign */" },
#endif
		{ "CompactNodeTitle", "+=" },
		{ "DisplayName", "Add to vector" },
		{ "Keywords", "+= add plus" },
		{ "ModuleRelativePath", "Public/CompoundOperatorsBPLibrary.h" },
		{ "ScriptMethod", "AddTo" },
		{ "ScriptOperator", "+;+=" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vector Assign" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_VectorVector_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventAddTo_VectorVector_Parms, A), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_VectorVector_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventAddTo_VectorVector_Parms, B), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_VectorVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_VectorVector_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_VectorVector_Statics::NewProp_B,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_VectorVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_VectorVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompoundOperatorsBPLibrary, nullptr, "AddTo_VectorVector", nullptr, nullptr, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_VectorVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_VectorVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_VectorVector_Statics::CompoundOperatorsBPLibrary_eventAddTo_VectorVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_VectorVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_VectorVector_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_VectorVector_Statics::CompoundOperatorsBPLibrary_eventAddTo_VectorVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_VectorVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_VectorVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompoundOperatorsBPLibrary::execAddTo_VectorVector)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_A);
	P_GET_STRUCT(FVector,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCompoundOperatorsBPLibrary::AddTo_VectorVector(Z_Param_Out_A,Z_Param_B);
	P_NATIVE_END;
}
// End Class UCompoundOperatorsBPLibrary Function AddTo_VectorVector

// Begin Class UCompoundOperatorsBPLibrary Function DivideTo_ByteByte
struct Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_ByteByte_Statics
{
	struct CompoundOperatorsBPLibrary_eventDivideTo_ByteByte_Parms
	{
		uint8 A;
		uint8 B;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Byte" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Assign (A /= B) */" },
#endif
		{ "CompactNodeTitle", "/=" },
		{ "CPP_Default_B", "1" },
		{ "DisplayName", "Divide to Byte" },
		{ "Keywords", "/= Divide divide" },
		{ "ModuleRelativePath", "Public/CompoundOperatorsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assign (A /= B)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_A;
	static const UECodeGen_Private::FBytePropertyParams NewProp_B;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_ByteByte_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventDivideTo_ByteByte_Parms, A), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_ByteByte_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventDivideTo_ByteByte_Parms, B), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_ByteByte_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_ByteByte_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_ByteByte_Statics::NewProp_B,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_ByteByte_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_ByteByte_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompoundOperatorsBPLibrary, nullptr, "DivideTo_ByteByte", nullptr, nullptr, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_ByteByte_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_ByteByte_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_ByteByte_Statics::CompoundOperatorsBPLibrary_eventDivideTo_ByteByte_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_ByteByte_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_ByteByte_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_ByteByte_Statics::CompoundOperatorsBPLibrary_eventDivideTo_ByteByte_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_ByteByte()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_ByteByte_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompoundOperatorsBPLibrary::execDivideTo_ByteByte)
{
	P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_A);
	P_GET_PROPERTY(FByteProperty,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCompoundOperatorsBPLibrary::DivideTo_ByteByte(Z_Param_Out_A,Z_Param_B);
	P_NATIVE_END;
}
// End Class UCompoundOperatorsBPLibrary Function DivideTo_ByteByte

// Begin Class UCompoundOperatorsBPLibrary Function DivideTo_DoubleDouble
struct Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_DoubleDouble_Statics
{
	struct CompoundOperatorsBPLibrary_eventDivideTo_DoubleDouble_Parms
	{
		double A;
		double B;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Float" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Assign (A /= B) */" },
#endif
		{ "CompactNodeTitle", "/=" },
		{ "CPP_Default_B", "1.000000" },
		{ "DisplayName", "Divide to float" },
		{ "Keywords", "/= Divide divide" },
		{ "ModuleRelativePath", "Public/CompoundOperatorsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assign (A /= B)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_A;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_B;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_DoubleDouble_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventDivideTo_DoubleDouble_Parms, A), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_DoubleDouble_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventDivideTo_DoubleDouble_Parms, B), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_DoubleDouble_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_DoubleDouble_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_DoubleDouble_Statics::NewProp_B,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_DoubleDouble_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_DoubleDouble_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompoundOperatorsBPLibrary, nullptr, "DivideTo_DoubleDouble", nullptr, nullptr, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_DoubleDouble_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_DoubleDouble_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_DoubleDouble_Statics::CompoundOperatorsBPLibrary_eventDivideTo_DoubleDouble_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_DoubleDouble_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_DoubleDouble_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_DoubleDouble_Statics::CompoundOperatorsBPLibrary_eventDivideTo_DoubleDouble_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_DoubleDouble()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_DoubleDouble_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompoundOperatorsBPLibrary::execDivideTo_DoubleDouble)
{
	P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_A);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCompoundOperatorsBPLibrary::DivideTo_DoubleDouble(Z_Param_Out_A,Z_Param_B);
	P_NATIVE_END;
}
// End Class UCompoundOperatorsBPLibrary Function DivideTo_DoubleDouble

// Begin Class UCompoundOperatorsBPLibrary Function DivideTo_Int64Int64
struct Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_Int64Int64_Statics
{
	struct CompoundOperatorsBPLibrary_eventDivideTo_Int64Int64_Parms
	{
		int64 A;
		int64 B;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Integer64" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Assign (A /= B) */" },
#endif
		{ "CompactNodeTitle", "/=" },
		{ "CPP_Default_B", "1" },
		{ "DisplayName", "Divide to integer64" },
		{ "Keywords", "/= Divide divide" },
		{ "ModuleRelativePath", "Public/CompoundOperatorsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assign (A /= B)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_A;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_B;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_Int64Int64_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventDivideTo_Int64Int64_Parms, A), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_Int64Int64_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventDivideTo_Int64Int64_Parms, B), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_Int64Int64_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_Int64Int64_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_Int64Int64_Statics::NewProp_B,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_Int64Int64_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_Int64Int64_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompoundOperatorsBPLibrary, nullptr, "DivideTo_Int64Int64", nullptr, nullptr, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_Int64Int64_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_Int64Int64_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_Int64Int64_Statics::CompoundOperatorsBPLibrary_eventDivideTo_Int64Int64_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_Int64Int64_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_Int64Int64_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_Int64Int64_Statics::CompoundOperatorsBPLibrary_eventDivideTo_Int64Int64_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_Int64Int64()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_Int64Int64_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompoundOperatorsBPLibrary::execDivideTo_Int64Int64)
{
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_A);
	P_GET_PROPERTY(FInt64Property,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCompoundOperatorsBPLibrary::DivideTo_Int64Int64(Z_Param_Out_A,Z_Param_B);
	P_NATIVE_END;
}
// End Class UCompoundOperatorsBPLibrary Function DivideTo_Int64Int64

// Begin Class UCompoundOperatorsBPLibrary Function DivideTo_IntInt
struct Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_IntInt_Statics
{
	struct CompoundOperatorsBPLibrary_eventDivideTo_IntInt_Parms
	{
		int32 A;
		int32 B;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Integer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Assign (A /= B) */" },
#endif
		{ "CompactNodeTitle", "/=" },
		{ "CPP_Default_B", "1" },
		{ "DisplayName", "Divide to int" },
		{ "Keywords", "/= Divide divide" },
		{ "ModuleRelativePath", "Public/CompoundOperatorsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assign (A /= B)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_A;
	static const UECodeGen_Private::FIntPropertyParams NewProp_B;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_IntInt_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventDivideTo_IntInt_Parms, A), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_IntInt_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventDivideTo_IntInt_Parms, B), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_IntInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_IntInt_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_IntInt_Statics::NewProp_B,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_IntInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_IntInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompoundOperatorsBPLibrary, nullptr, "DivideTo_IntInt", nullptr, nullptr, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_IntInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_IntInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_IntInt_Statics::CompoundOperatorsBPLibrary_eventDivideTo_IntInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_IntInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_IntInt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_IntInt_Statics::CompoundOperatorsBPLibrary_eventDivideTo_IntInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_IntInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_IntInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompoundOperatorsBPLibrary::execDivideTo_IntInt)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_A);
	P_GET_PROPERTY(FIntProperty,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCompoundOperatorsBPLibrary::DivideTo_IntInt(Z_Param_Out_A,Z_Param_B);
	P_NATIVE_END;
}
// End Class UCompoundOperatorsBPLibrary Function DivideTo_IntInt

// Begin Class UCompoundOperatorsBPLibrary Function DivideTo_IntPointInt
struct Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_IntPointInt_Statics
{
	struct CompoundOperatorsBPLibrary_eventDivideTo_IntPointInt_Parms
	{
		FIntPoint A;
		int32 B;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|IntPoint" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Assign (A /= B) */" },
#endif
		{ "CompactNodeTitle", "/=" },
		{ "DisplayName", "Divide to Integer" },
		{ "Keywords", "/= Divide divide" },
		{ "ModuleRelativePath", "Public/CompoundOperatorsBPLibrary.h" },
		{ "ScriptMethod", "DivideToInt" },
		{ "ScriptOperator", "/;/=" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assign (A /= B)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FIntPropertyParams NewProp_B;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_IntPointInt_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventDivideTo_IntPointInt_Parms, A), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_IntPointInt_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventDivideTo_IntPointInt_Parms, B), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_IntPointInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_IntPointInt_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_IntPointInt_Statics::NewProp_B,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_IntPointInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_IntPointInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompoundOperatorsBPLibrary, nullptr, "DivideTo_IntPointInt", nullptr, nullptr, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_IntPointInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_IntPointInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_IntPointInt_Statics::CompoundOperatorsBPLibrary_eventDivideTo_IntPointInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_IntPointInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_IntPointInt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_IntPointInt_Statics::CompoundOperatorsBPLibrary_eventDivideTo_IntPointInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_IntPointInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_IntPointInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompoundOperatorsBPLibrary::execDivideTo_IntPointInt)
{
	P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_A);
	P_GET_PROPERTY(FIntProperty,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCompoundOperatorsBPLibrary::DivideTo_IntPointInt(Z_Param_Out_A,Z_Param_B);
	P_NATIVE_END;
}
// End Class UCompoundOperatorsBPLibrary Function DivideTo_IntPointInt

// Begin Class UCompoundOperatorsBPLibrary Function DivideTo_IntPointIntPoint
struct Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_IntPointIntPoint_Statics
{
	struct CompoundOperatorsBPLibrary_eventDivideTo_IntPointIntPoint_Parms
	{
		FIntPoint A;
		FIntPoint B;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|IntPoint" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Assign A Divideed by B */" },
#endif
		{ "CompactNodeTitle", "/=" },
		{ "DisplayName", "Divide to IntPoint" },
		{ "Keywords", "/= Divide divide" },
		{ "ModuleRelativePath", "Public/CompoundOperatorsBPLibrary.h" },
		{ "ScriptMethod", "DivideToIntPoint" },
		{ "ScriptOperator", "/;/=" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assign A Divideed by B" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_IntPointIntPoint_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventDivideTo_IntPointIntPoint_Parms, A), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_IntPointIntPoint_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventDivideTo_IntPointIntPoint_Parms, B), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_IntPointIntPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_IntPointIntPoint_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_IntPointIntPoint_Statics::NewProp_B,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_IntPointIntPoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_IntPointIntPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompoundOperatorsBPLibrary, nullptr, "DivideTo_IntPointIntPoint", nullptr, nullptr, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_IntPointIntPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_IntPointIntPoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_IntPointIntPoint_Statics::CompoundOperatorsBPLibrary_eventDivideTo_IntPointIntPoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_IntPointIntPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_IntPointIntPoint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_IntPointIntPoint_Statics::CompoundOperatorsBPLibrary_eventDivideTo_IntPointIntPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_IntPointIntPoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_IntPointIntPoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompoundOperatorsBPLibrary::execDivideTo_IntPointIntPoint)
{
	P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_A);
	P_GET_STRUCT(FIntPoint,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCompoundOperatorsBPLibrary::DivideTo_IntPointIntPoint(Z_Param_Out_A,Z_Param_B);
	P_NATIVE_END;
}
// End Class UCompoundOperatorsBPLibrary Function DivideTo_IntPointIntPoint

// Begin Class UCompoundOperatorsBPLibrary Function DivideTo_LinearColorLinearColor
struct Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_LinearColorLinearColor_Statics
{
	struct CompoundOperatorsBPLibrary_eventDivideTo_LinearColorLinearColor_Parms
	{
		FLinearColor A;
		FLinearColor B;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Color" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Element-wise assign Divideition of two linear colors (R/=R, G/=G, B/=B, A/=A) */" },
#endif
		{ "CompactNodeTitle", "/=" },
		{ "DisplayName", "Divide to LinearColor" },
		{ "Keywords", "/= Divide divide" },
		{ "ModuleRelativePath", "Public/CompoundOperatorsBPLibrary.h" },
		{ "ScriptMethod", "DivideToLinearColor" },
		{ "ScriptOperator", "/;/=" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Element-wise assign Divideition of two linear colors (R/=R, G/=G, B/=B, A/=A)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_LinearColorLinearColor_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventDivideTo_LinearColorLinearColor_Parms, A), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_LinearColorLinearColor_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventDivideTo_LinearColorLinearColor_Parms, B), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_LinearColorLinearColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_LinearColorLinearColor_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_LinearColorLinearColor_Statics::NewProp_B,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_LinearColorLinearColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_LinearColorLinearColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompoundOperatorsBPLibrary, nullptr, "DivideTo_LinearColorLinearColor", nullptr, nullptr, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_LinearColorLinearColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_LinearColorLinearColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_LinearColorLinearColor_Statics::CompoundOperatorsBPLibrary_eventDivideTo_LinearColorLinearColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_LinearColorLinearColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_LinearColorLinearColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_LinearColorLinearColor_Statics::CompoundOperatorsBPLibrary_eventDivideTo_LinearColorLinearColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_LinearColorLinearColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_LinearColorLinearColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompoundOperatorsBPLibrary::execDivideTo_LinearColorLinearColor)
{
	P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_A);
	P_GET_STRUCT(FLinearColor,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCompoundOperatorsBPLibrary::DivideTo_LinearColorLinearColor(Z_Param_Out_A,Z_Param_B);
	P_NATIVE_END;
}
// End Class UCompoundOperatorsBPLibrary Function DivideTo_LinearColorLinearColor

// Begin Class UCompoundOperatorsBPLibrary Function DivideTo_Vector2DFloat
struct Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_Vector2DFloat_Statics
{
	struct CompoundOperatorsBPLibrary_eventDivideTo_Vector2DFloat_Parms
	{
		FVector2D A;
		double B;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Vector2D" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Assign Vector A Divideed by B */" },
#endif
		{ "CompactNodeTitle", "/=" },
		{ "DisplayName", "Divide to vector2d float" },
		{ "Keywords", "/= Divide divide" },
		{ "ModuleRelativePath", "Public/CompoundOperatorsBPLibrary.h" },
		{ "ScriptMethod", "DivideToFloat" },
		{ "ScriptOperator", "/;/=" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assign Vector A Divideed by B" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_B;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_Vector2DFloat_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventDivideTo_Vector2DFloat_Parms, A), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_Vector2DFloat_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventDivideTo_Vector2DFloat_Parms, B), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_Vector2DFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_Vector2DFloat_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_Vector2DFloat_Statics::NewProp_B,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_Vector2DFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_Vector2DFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompoundOperatorsBPLibrary, nullptr, "DivideTo_Vector2DFloat", nullptr, nullptr, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_Vector2DFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_Vector2DFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_Vector2DFloat_Statics::CompoundOperatorsBPLibrary_eventDivideTo_Vector2DFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_Vector2DFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_Vector2DFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_Vector2DFloat_Statics::CompoundOperatorsBPLibrary_eventDivideTo_Vector2DFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_Vector2DFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_Vector2DFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompoundOperatorsBPLibrary::execDivideTo_Vector2DFloat)
{
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_A);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCompoundOperatorsBPLibrary::DivideTo_Vector2DFloat(Z_Param_Out_A,Z_Param_B);
	P_NATIVE_END;
}
// End Class UCompoundOperatorsBPLibrary Function DivideTo_Vector2DFloat

// Begin Class UCompoundOperatorsBPLibrary Function DivideTo_Vector2DVector2D
struct Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_Vector2DVector2D_Statics
{
	struct CompoundOperatorsBPLibrary_eventDivideTo_Vector2DVector2D_Parms
	{
		FVector2D A;
		FVector2D B;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Vector2D" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Assign Vector A and Vector B (A /= B) */" },
#endif
		{ "CompactNodeTitle", "/=" },
		{ "DisplayName", "Divide to vector2d" },
		{ "Keywords", "/= Divide divide" },
		{ "ModuleRelativePath", "Public/CompoundOperatorsBPLibrary.h" },
		{ "ScriptMethod", "DivideToVector2D" },
		{ "ScriptOperator", "/;/=" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assign Vector A and Vector B (A /= B)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_Vector2DVector2D_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventDivideTo_Vector2DVector2D_Parms, A), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_Vector2DVector2D_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventDivideTo_Vector2DVector2D_Parms, B), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_Vector2DVector2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_Vector2DVector2D_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_Vector2DVector2D_Statics::NewProp_B,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_Vector2DVector2D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_Vector2DVector2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompoundOperatorsBPLibrary, nullptr, "DivideTo_Vector2DVector2D", nullptr, nullptr, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_Vector2DVector2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_Vector2DVector2D_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_Vector2DVector2D_Statics::CompoundOperatorsBPLibrary_eventDivideTo_Vector2DVector2D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_Vector2DVector2D_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_Vector2DVector2D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_Vector2DVector2D_Statics::CompoundOperatorsBPLibrary_eventDivideTo_Vector2DVector2D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_Vector2DVector2D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_Vector2DVector2D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompoundOperatorsBPLibrary::execDivideTo_Vector2DVector2D)
{
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_A);
	P_GET_STRUCT(FVector2D,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCompoundOperatorsBPLibrary::DivideTo_Vector2DVector2D(Z_Param_Out_A,Z_Param_B);
	P_NATIVE_END;
}
// End Class UCompoundOperatorsBPLibrary Function DivideTo_Vector2DVector2D

// Begin Class UCompoundOperatorsBPLibrary Function DivideTo_Vector4Vector4
struct Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_Vector4Vector4_Statics
{
	struct CompoundOperatorsBPLibrary_eventDivideTo_Vector4Vector4_Parms
	{
		FVector4 A;
		FVector4 B;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Vector4" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Assign of Vector A  (A /= B) */" },
#endif
		{ "CompactNodeTitle", "/=" },
		{ "DisplayName", "Divide to Vector4" },
		{ "Keywords", "/ Divide divide" },
		{ "ModuleRelativePath", "Public/CompoundOperatorsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assign of Vector A  (A /= B)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_Vector4Vector4_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventDivideTo_Vector4Vector4_Parms, A), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_Vector4Vector4_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventDivideTo_Vector4Vector4_Parms, B), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_Vector4Vector4_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_Vector4Vector4_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_Vector4Vector4_Statics::NewProp_B,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_Vector4Vector4_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_Vector4Vector4_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompoundOperatorsBPLibrary, nullptr, "DivideTo_Vector4Vector4", nullptr, nullptr, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_Vector4Vector4_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_Vector4Vector4_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_Vector4Vector4_Statics::CompoundOperatorsBPLibrary_eventDivideTo_Vector4Vector4_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_Vector4Vector4_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_Vector4Vector4_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_Vector4Vector4_Statics::CompoundOperatorsBPLibrary_eventDivideTo_Vector4Vector4_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_Vector4Vector4()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_Vector4Vector4_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompoundOperatorsBPLibrary::execDivideTo_Vector4Vector4)
{
	P_GET_STRUCT_REF(FVector4,Z_Param_Out_A);
	P_GET_STRUCT_REF(FVector4,Z_Param_Out_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCompoundOperatorsBPLibrary::DivideTo_Vector4Vector4(Z_Param_Out_A,Z_Param_Out_B);
	P_NATIVE_END;
}
// End Class UCompoundOperatorsBPLibrary Function DivideTo_Vector4Vector4

// Begin Class UCompoundOperatorsBPLibrary Function DivideTo_VectorFloat
struct Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_VectorFloat_Statics
{
	struct CompoundOperatorsBPLibrary_eventDivideTo_VectorFloat_Parms
	{
		FVector A;
		double B;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Vector" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Assign Divideing a float to each component of a vector */" },
#endif
		{ "CompactNodeTitle", "/=" },
		{ "DisplayName", "Divide to float" },
		{ "Keywords", "/= Divide divide" },
		{ "ModuleRelativePath", "Public/CompoundOperatorsBPLibrary.h" },
		{ "ScriptMethod", "DivideToFloat" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assign Divideing a float to each component of a vector" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_B;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_VectorFloat_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventDivideTo_VectorFloat_Parms, A), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_VectorFloat_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventDivideTo_VectorFloat_Parms, B), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_VectorFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_VectorFloat_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_VectorFloat_Statics::NewProp_B,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_VectorFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_VectorFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompoundOperatorsBPLibrary, nullptr, "DivideTo_VectorFloat", nullptr, nullptr, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_VectorFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_VectorFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_VectorFloat_Statics::CompoundOperatorsBPLibrary_eventDivideTo_VectorFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_VectorFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_VectorFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_VectorFloat_Statics::CompoundOperatorsBPLibrary_eventDivideTo_VectorFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_VectorFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_VectorFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompoundOperatorsBPLibrary::execDivideTo_VectorFloat)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_A);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCompoundOperatorsBPLibrary::DivideTo_VectorFloat(Z_Param_Out_A,Z_Param_B);
	P_NATIVE_END;
}
// End Class UCompoundOperatorsBPLibrary Function DivideTo_VectorFloat

// Begin Class UCompoundOperatorsBPLibrary Function DivideTo_VectorInt
struct Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_VectorInt_Statics
{
	struct CompoundOperatorsBPLibrary_eventDivideTo_VectorInt_Parms
	{
		FVector A;
		int32 B;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Vector" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Assign an integer to each component of a vector */" },
#endif
		{ "CompactNodeTitle", "/=" },
		{ "DisplayName", "Divide to integer" },
		{ "Keywords", "/= Divide divide" },
		{ "ModuleRelativePath", "Public/CompoundOperatorsBPLibrary.h" },
		{ "ScriptMethod", "DivideToInt" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assign an integer to each component of a vector" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FIntPropertyParams NewProp_B;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_VectorInt_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventDivideTo_VectorInt_Parms, A), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_VectorInt_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventDivideTo_VectorInt_Parms, B), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_VectorInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_VectorInt_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_VectorInt_Statics::NewProp_B,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_VectorInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_VectorInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompoundOperatorsBPLibrary, nullptr, "DivideTo_VectorInt", nullptr, nullptr, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_VectorInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_VectorInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_VectorInt_Statics::CompoundOperatorsBPLibrary_eventDivideTo_VectorInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_VectorInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_VectorInt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_VectorInt_Statics::CompoundOperatorsBPLibrary_eventDivideTo_VectorInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_VectorInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_VectorInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompoundOperatorsBPLibrary::execDivideTo_VectorInt)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_A);
	P_GET_PROPERTY(FIntProperty,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCompoundOperatorsBPLibrary::DivideTo_VectorInt(Z_Param_Out_A,Z_Param_B);
	P_NATIVE_END;
}
// End Class UCompoundOperatorsBPLibrary Function DivideTo_VectorInt

// Begin Class UCompoundOperatorsBPLibrary Function DivideTo_VectorVector
struct Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_VectorVector_Statics
{
	struct CompoundOperatorsBPLibrary_eventDivideTo_VectorVector_Parms
	{
		FVector A;
		FVector B;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Vector" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Vector Assign */" },
#endif
		{ "CompactNodeTitle", "/=" },
		{ "DisplayName", "Divide to vector" },
		{ "Keywords", "/= Divide divide" },
		{ "ModuleRelativePath", "Public/CompoundOperatorsBPLibrary.h" },
		{ "ScriptMethod", "DivideToVector" },
		{ "ScriptOperator", "/;/=" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vector Assign" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_VectorVector_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventDivideTo_VectorVector_Parms, A), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_VectorVector_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventDivideTo_VectorVector_Parms, B), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_VectorVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_VectorVector_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_VectorVector_Statics::NewProp_B,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_VectorVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_VectorVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompoundOperatorsBPLibrary, nullptr, "DivideTo_VectorVector", nullptr, nullptr, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_VectorVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_VectorVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_VectorVector_Statics::CompoundOperatorsBPLibrary_eventDivideTo_VectorVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_VectorVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_VectorVector_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_VectorVector_Statics::CompoundOperatorsBPLibrary_eventDivideTo_VectorVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_VectorVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_VectorVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompoundOperatorsBPLibrary::execDivideTo_VectorVector)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_A);
	P_GET_STRUCT(FVector,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCompoundOperatorsBPLibrary::DivideTo_VectorVector(Z_Param_Out_A,Z_Param_B);
	P_NATIVE_END;
}
// End Class UCompoundOperatorsBPLibrary Function DivideTo_VectorVector

// Begin Class UCompoundOperatorsBPLibrary Function MultiplyTo_ByteByte
struct Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_ByteByte_Statics
{
	struct CompoundOperatorsBPLibrary_eventMultiplyTo_ByteByte_Parms
	{
		uint8 A;
		uint8 B;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Byte" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Assign (A *= B) */" },
#endif
		{ "CompactNodeTitle", "*=" },
		{ "CPP_Default_B", "1" },
		{ "DisplayName", "Multiply to Byte" },
		{ "Keywords", "*= Multiply multiply" },
		{ "ModuleRelativePath", "Public/CompoundOperatorsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assign (A *= B)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_A;
	static const UECodeGen_Private::FBytePropertyParams NewProp_B;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_ByteByte_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventMultiplyTo_ByteByte_Parms, A), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_ByteByte_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventMultiplyTo_ByteByte_Parms, B), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_ByteByte_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_ByteByte_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_ByteByte_Statics::NewProp_B,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_ByteByte_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_ByteByte_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompoundOperatorsBPLibrary, nullptr, "MultiplyTo_ByteByte", nullptr, nullptr, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_ByteByte_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_ByteByte_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_ByteByte_Statics::CompoundOperatorsBPLibrary_eventMultiplyTo_ByteByte_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_ByteByte_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_ByteByte_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_ByteByte_Statics::CompoundOperatorsBPLibrary_eventMultiplyTo_ByteByte_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_ByteByte()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_ByteByte_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompoundOperatorsBPLibrary::execMultiplyTo_ByteByte)
{
	P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_A);
	P_GET_PROPERTY(FByteProperty,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCompoundOperatorsBPLibrary::MultiplyTo_ByteByte(Z_Param_Out_A,Z_Param_B);
	P_NATIVE_END;
}
// End Class UCompoundOperatorsBPLibrary Function MultiplyTo_ByteByte

// Begin Class UCompoundOperatorsBPLibrary Function MultiplyTo_DoubleDouble
struct Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_DoubleDouble_Statics
{
	struct CompoundOperatorsBPLibrary_eventMultiplyTo_DoubleDouble_Parms
	{
		double A;
		double B;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Float" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Assign (A *= B) */" },
#endif
		{ "CompactNodeTitle", "*=" },
		{ "CPP_Default_B", "1.000000" },
		{ "DisplayName", "Multiply to float" },
		{ "Keywords", "*= Multiply multiply" },
		{ "ModuleRelativePath", "Public/CompoundOperatorsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assign (A *= B)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_A;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_B;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_DoubleDouble_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventMultiplyTo_DoubleDouble_Parms, A), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_DoubleDouble_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventMultiplyTo_DoubleDouble_Parms, B), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_DoubleDouble_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_DoubleDouble_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_DoubleDouble_Statics::NewProp_B,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_DoubleDouble_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_DoubleDouble_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompoundOperatorsBPLibrary, nullptr, "MultiplyTo_DoubleDouble", nullptr, nullptr, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_DoubleDouble_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_DoubleDouble_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_DoubleDouble_Statics::CompoundOperatorsBPLibrary_eventMultiplyTo_DoubleDouble_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_DoubleDouble_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_DoubleDouble_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_DoubleDouble_Statics::CompoundOperatorsBPLibrary_eventMultiplyTo_DoubleDouble_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_DoubleDouble()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_DoubleDouble_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompoundOperatorsBPLibrary::execMultiplyTo_DoubleDouble)
{
	P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_A);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCompoundOperatorsBPLibrary::MultiplyTo_DoubleDouble(Z_Param_Out_A,Z_Param_B);
	P_NATIVE_END;
}
// End Class UCompoundOperatorsBPLibrary Function MultiplyTo_DoubleDouble

// Begin Class UCompoundOperatorsBPLibrary Function MultiplyTo_Int64Int64
struct Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_Int64Int64_Statics
{
	struct CompoundOperatorsBPLibrary_eventMultiplyTo_Int64Int64_Parms
	{
		int64 A;
		int64 B;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Integer64" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Assign (A *= B) */" },
#endif
		{ "CompactNodeTitle", "*=" },
		{ "CPP_Default_B", "1" },
		{ "DisplayName", "Multiply to integer64" },
		{ "Keywords", "*= Multiply multiply" },
		{ "ModuleRelativePath", "Public/CompoundOperatorsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assign (A *= B)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_A;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_B;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_Int64Int64_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventMultiplyTo_Int64Int64_Parms, A), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_Int64Int64_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventMultiplyTo_Int64Int64_Parms, B), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_Int64Int64_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_Int64Int64_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_Int64Int64_Statics::NewProp_B,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_Int64Int64_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_Int64Int64_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompoundOperatorsBPLibrary, nullptr, "MultiplyTo_Int64Int64", nullptr, nullptr, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_Int64Int64_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_Int64Int64_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_Int64Int64_Statics::CompoundOperatorsBPLibrary_eventMultiplyTo_Int64Int64_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_Int64Int64_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_Int64Int64_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_Int64Int64_Statics::CompoundOperatorsBPLibrary_eventMultiplyTo_Int64Int64_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_Int64Int64()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_Int64Int64_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompoundOperatorsBPLibrary::execMultiplyTo_Int64Int64)
{
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_A);
	P_GET_PROPERTY(FInt64Property,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCompoundOperatorsBPLibrary::MultiplyTo_Int64Int64(Z_Param_Out_A,Z_Param_B);
	P_NATIVE_END;
}
// End Class UCompoundOperatorsBPLibrary Function MultiplyTo_Int64Int64

// Begin Class UCompoundOperatorsBPLibrary Function MultiplyTo_IntInt
struct Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_IntInt_Statics
{
	struct CompoundOperatorsBPLibrary_eventMultiplyTo_IntInt_Parms
	{
		int32 A;
		int32 B;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Integer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Assign (A *= B) */" },
#endif
		{ "CompactNodeTitle", "*=" },
		{ "CPP_Default_B", "1" },
		{ "DisplayName", "Multiply to int" },
		{ "Keywords", "*= Multiply multiply" },
		{ "ModuleRelativePath", "Public/CompoundOperatorsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assign (A *= B)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_A;
	static const UECodeGen_Private::FIntPropertyParams NewProp_B;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_IntInt_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventMultiplyTo_IntInt_Parms, A), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_IntInt_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventMultiplyTo_IntInt_Parms, B), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_IntInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_IntInt_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_IntInt_Statics::NewProp_B,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_IntInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_IntInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompoundOperatorsBPLibrary, nullptr, "MultiplyTo_IntInt", nullptr, nullptr, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_IntInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_IntInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_IntInt_Statics::CompoundOperatorsBPLibrary_eventMultiplyTo_IntInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_IntInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_IntInt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_IntInt_Statics::CompoundOperatorsBPLibrary_eventMultiplyTo_IntInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_IntInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_IntInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompoundOperatorsBPLibrary::execMultiplyTo_IntInt)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_A);
	P_GET_PROPERTY(FIntProperty,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCompoundOperatorsBPLibrary::MultiplyTo_IntInt(Z_Param_Out_A,Z_Param_B);
	P_NATIVE_END;
}
// End Class UCompoundOperatorsBPLibrary Function MultiplyTo_IntInt

// Begin Class UCompoundOperatorsBPLibrary Function MultiplyTo_IntPointInt
struct Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_IntPointInt_Statics
{
	struct CompoundOperatorsBPLibrary_eventMultiplyTo_IntPointInt_Parms
	{
		FIntPoint A;
		int32 B;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|IntPoint" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Assign (A *= B) */" },
#endif
		{ "CompactNodeTitle", "*=" },
		{ "DisplayName", "Multiply to Integer" },
		{ "Keywords", "*= Multiply multiply" },
		{ "ModuleRelativePath", "Public/CompoundOperatorsBPLibrary.h" },
		{ "ScriptMethod", "MultiplyToInt" },
		{ "ScriptOperator", "*;*=" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assign (A *= B)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FIntPropertyParams NewProp_B;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_IntPointInt_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventMultiplyTo_IntPointInt_Parms, A), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_IntPointInt_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventMultiplyTo_IntPointInt_Parms, B), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_IntPointInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_IntPointInt_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_IntPointInt_Statics::NewProp_B,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_IntPointInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_IntPointInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompoundOperatorsBPLibrary, nullptr, "MultiplyTo_IntPointInt", nullptr, nullptr, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_IntPointInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_IntPointInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_IntPointInt_Statics::CompoundOperatorsBPLibrary_eventMultiplyTo_IntPointInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_IntPointInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_IntPointInt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_IntPointInt_Statics::CompoundOperatorsBPLibrary_eventMultiplyTo_IntPointInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_IntPointInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_IntPointInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompoundOperatorsBPLibrary::execMultiplyTo_IntPointInt)
{
	P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_A);
	P_GET_PROPERTY(FIntProperty,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCompoundOperatorsBPLibrary::MultiplyTo_IntPointInt(Z_Param_Out_A,Z_Param_B);
	P_NATIVE_END;
}
// End Class UCompoundOperatorsBPLibrary Function MultiplyTo_IntPointInt

// Begin Class UCompoundOperatorsBPLibrary Function MultiplyTo_IntPointIntPoint
struct Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_IntPointIntPoint_Statics
{
	struct CompoundOperatorsBPLibrary_eventMultiplyTo_IntPointIntPoint_Parms
	{
		FIntPoint A;
		FIntPoint B;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|IntPoint" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Assign A Multiplyed by B */" },
#endif
		{ "CompactNodeTitle", "*=" },
		{ "DisplayName", "Multiply to IntPoint" },
		{ "Keywords", "*= Multiply multiply" },
		{ "ModuleRelativePath", "Public/CompoundOperatorsBPLibrary.h" },
		{ "ScriptMethod", "MultiplyToIntPoint" },
		{ "ScriptOperator", "*;*=" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assign A Multiplyed by B" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_IntPointIntPoint_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventMultiplyTo_IntPointIntPoint_Parms, A), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_IntPointIntPoint_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventMultiplyTo_IntPointIntPoint_Parms, B), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_IntPointIntPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_IntPointIntPoint_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_IntPointIntPoint_Statics::NewProp_B,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_IntPointIntPoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_IntPointIntPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompoundOperatorsBPLibrary, nullptr, "MultiplyTo_IntPointIntPoint", nullptr, nullptr, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_IntPointIntPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_IntPointIntPoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_IntPointIntPoint_Statics::CompoundOperatorsBPLibrary_eventMultiplyTo_IntPointIntPoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_IntPointIntPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_IntPointIntPoint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_IntPointIntPoint_Statics::CompoundOperatorsBPLibrary_eventMultiplyTo_IntPointIntPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_IntPointIntPoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_IntPointIntPoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompoundOperatorsBPLibrary::execMultiplyTo_IntPointIntPoint)
{
	P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_A);
	P_GET_STRUCT(FIntPoint,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCompoundOperatorsBPLibrary::MultiplyTo_IntPointIntPoint(Z_Param_Out_A,Z_Param_B);
	P_NATIVE_END;
}
// End Class UCompoundOperatorsBPLibrary Function MultiplyTo_IntPointIntPoint

// Begin Class UCompoundOperatorsBPLibrary Function MultiplyTo_LinearColorLinearColor
struct Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_LinearColorLinearColor_Statics
{
	struct CompoundOperatorsBPLibrary_eventMultiplyTo_LinearColorLinearColor_Parms
	{
		FLinearColor A;
		FLinearColor B;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Color" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Element-wise assign Multiplyition of two linear colors (R*=R, G*=G, B*=B, A*=A) */" },
#endif
		{ "CompactNodeTitle", "*=" },
		{ "DisplayName", "Multiply to LinearColor" },
		{ "Keywords", "*= Multiply multiply" },
		{ "ModuleRelativePath", "Public/CompoundOperatorsBPLibrary.h" },
		{ "ScriptMethod", "MultiplyToLinearColor" },
		{ "ScriptOperator", "*;*=" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Element-wise assign Multiplyition of two linear colors (R*=R, G*=G, B*=B, A*=A)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_LinearColorLinearColor_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventMultiplyTo_LinearColorLinearColor_Parms, A), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_LinearColorLinearColor_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventMultiplyTo_LinearColorLinearColor_Parms, B), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_LinearColorLinearColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_LinearColorLinearColor_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_LinearColorLinearColor_Statics::NewProp_B,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_LinearColorLinearColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_LinearColorLinearColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompoundOperatorsBPLibrary, nullptr, "MultiplyTo_LinearColorLinearColor", nullptr, nullptr, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_LinearColorLinearColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_LinearColorLinearColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_LinearColorLinearColor_Statics::CompoundOperatorsBPLibrary_eventMultiplyTo_LinearColorLinearColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_LinearColorLinearColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_LinearColorLinearColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_LinearColorLinearColor_Statics::CompoundOperatorsBPLibrary_eventMultiplyTo_LinearColorLinearColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_LinearColorLinearColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_LinearColorLinearColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompoundOperatorsBPLibrary::execMultiplyTo_LinearColorLinearColor)
{
	P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_A);
	P_GET_STRUCT(FLinearColor,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCompoundOperatorsBPLibrary::MultiplyTo_LinearColorLinearColor(Z_Param_Out_A,Z_Param_B);
	P_NATIVE_END;
}
// End Class UCompoundOperatorsBPLibrary Function MultiplyTo_LinearColorLinearColor

// Begin Class UCompoundOperatorsBPLibrary Function MultiplyTo_MatrixMatrix
struct Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_MatrixMatrix_Statics
{
	struct FMatrix
	{
		FPlane XPlane;
		FPlane YPlane;
		FPlane ZPlane;
		FPlane WPlane;
	};

	struct CompoundOperatorsBPLibrary_eventMultiplyTo_MatrixMatrix_Parms
	{
		FMatrix A;
		FMatrix B;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Matrix" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Assign Multiplying a matrix to matrix (A *= B) */" },
#endif
		{ "CompactNodeTitle", "*=" },
		{ "DisplayName", "Multiply to Matrix" },
		{ "Keywords", "*= Multiply multiply" },
		{ "ModuleRelativePath", "Public/CompoundOperatorsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assign Multiplying a matrix to matrix (A *= B)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_MatrixMatrix_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventMultiplyTo_MatrixMatrix_Parms, A), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_MatrixMatrix_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventMultiplyTo_MatrixMatrix_Parms, B), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_MatrixMatrix_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_MatrixMatrix_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_MatrixMatrix_Statics::NewProp_B,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_MatrixMatrix_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_MatrixMatrix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompoundOperatorsBPLibrary, nullptr, "MultiplyTo_MatrixMatrix", nullptr, nullptr, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_MatrixMatrix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_MatrixMatrix_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_MatrixMatrix_Statics::CompoundOperatorsBPLibrary_eventMultiplyTo_MatrixMatrix_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_MatrixMatrix_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_MatrixMatrix_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_MatrixMatrix_Statics::CompoundOperatorsBPLibrary_eventMultiplyTo_MatrixMatrix_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_MatrixMatrix()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_MatrixMatrix_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompoundOperatorsBPLibrary::execMultiplyTo_MatrixMatrix)
{
	P_GET_STRUCT_REF(FMatrix,Z_Param_Out_A);
	P_GET_STRUCT_REF(FMatrix,Z_Param_Out_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCompoundOperatorsBPLibrary::MultiplyTo_MatrixMatrix(Z_Param_Out_A,Z_Param_Out_B);
	P_NATIVE_END;
}
// End Class UCompoundOperatorsBPLibrary Function MultiplyTo_MatrixMatrix

// Begin Class UCompoundOperatorsBPLibrary Function MultiplyTo_QuatQuat
struct Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_QuatQuat_Statics
{
	struct CompoundOperatorsBPLibrary_eventMultiplyTo_QuatQuat_Parms
	{
		FQuat A;
		FQuat B;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Quat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Assign Multiplying of Vector (A * B) */" },
#endif
		{ "CompactNodeTitle", "*=" },
		{ "DisplayName", "Multiply to Quat" },
		{ "Keywords", "*= Multiply multiply" },
		{ "ModuleRelativePath", "Public/CompoundOperatorsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assign Multiplying of Vector (A * B)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_QuatQuat_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventMultiplyTo_QuatQuat_Parms, A), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_QuatQuat_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventMultiplyTo_QuatQuat_Parms, B), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_QuatQuat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_QuatQuat_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_QuatQuat_Statics::NewProp_B,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_QuatQuat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_QuatQuat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompoundOperatorsBPLibrary, nullptr, "MultiplyTo_QuatQuat", nullptr, nullptr, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_QuatQuat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_QuatQuat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_QuatQuat_Statics::CompoundOperatorsBPLibrary_eventMultiplyTo_QuatQuat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_QuatQuat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_QuatQuat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_QuatQuat_Statics::CompoundOperatorsBPLibrary_eventMultiplyTo_QuatQuat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_QuatQuat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_QuatQuat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompoundOperatorsBPLibrary::execMultiplyTo_QuatQuat)
{
	P_GET_STRUCT_REF(FQuat,Z_Param_Out_A);
	P_GET_STRUCT_REF(FQuat,Z_Param_Out_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCompoundOperatorsBPLibrary::MultiplyTo_QuatQuat(Z_Param_Out_A,Z_Param_Out_B);
	P_NATIVE_END;
}
// End Class UCompoundOperatorsBPLibrary Function MultiplyTo_QuatQuat

// Begin Class UCompoundOperatorsBPLibrary Function MultiplyTo_Vector2DFloat
struct Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_Vector2DFloat_Statics
{
	struct CompoundOperatorsBPLibrary_eventMultiplyTo_Vector2DFloat_Parms
	{
		FVector2D A;
		double B;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Vector2D" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Assign Vector A Multiplyed by B */" },
#endif
		{ "CompactNodeTitle", "*=" },
		{ "DisplayName", "Multiply to vector2d float" },
		{ "Keywords", "*= Multiply multiply" },
		{ "ModuleRelativePath", "Public/CompoundOperatorsBPLibrary.h" },
		{ "ScriptMethod", "MultiplyToFloat" },
		{ "ScriptOperator", "*;*=" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assign Vector A Multiplyed by B" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_B;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_Vector2DFloat_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventMultiplyTo_Vector2DFloat_Parms, A), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_Vector2DFloat_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventMultiplyTo_Vector2DFloat_Parms, B), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_Vector2DFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_Vector2DFloat_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_Vector2DFloat_Statics::NewProp_B,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_Vector2DFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_Vector2DFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompoundOperatorsBPLibrary, nullptr, "MultiplyTo_Vector2DFloat", nullptr, nullptr, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_Vector2DFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_Vector2DFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_Vector2DFloat_Statics::CompoundOperatorsBPLibrary_eventMultiplyTo_Vector2DFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_Vector2DFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_Vector2DFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_Vector2DFloat_Statics::CompoundOperatorsBPLibrary_eventMultiplyTo_Vector2DFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_Vector2DFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_Vector2DFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompoundOperatorsBPLibrary::execMultiplyTo_Vector2DFloat)
{
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_A);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCompoundOperatorsBPLibrary::MultiplyTo_Vector2DFloat(Z_Param_Out_A,Z_Param_B);
	P_NATIVE_END;
}
// End Class UCompoundOperatorsBPLibrary Function MultiplyTo_Vector2DFloat

// Begin Class UCompoundOperatorsBPLibrary Function MultiplyTo_Vector2DVector2D
struct Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_Vector2DVector2D_Statics
{
	struct CompoundOperatorsBPLibrary_eventMultiplyTo_Vector2DVector2D_Parms
	{
		FVector2D A;
		FVector2D B;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Vector2D" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Assign Vector A and Vector B (A *= B) */" },
#endif
		{ "CompactNodeTitle", "*=" },
		{ "DisplayName", "Multiply to vector2d" },
		{ "Keywords", "*= Multiply multiply" },
		{ "ModuleRelativePath", "Public/CompoundOperatorsBPLibrary.h" },
		{ "ScriptMethod", "MultiplyToVector2D" },
		{ "ScriptOperator", "*;*=" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assign Vector A and Vector B (A *= B)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_Vector2DVector2D_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventMultiplyTo_Vector2DVector2D_Parms, A), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_Vector2DVector2D_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventMultiplyTo_Vector2DVector2D_Parms, B), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_Vector2DVector2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_Vector2DVector2D_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_Vector2DVector2D_Statics::NewProp_B,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_Vector2DVector2D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_Vector2DVector2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompoundOperatorsBPLibrary, nullptr, "MultiplyTo_Vector2DVector2D", nullptr, nullptr, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_Vector2DVector2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_Vector2DVector2D_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_Vector2DVector2D_Statics::CompoundOperatorsBPLibrary_eventMultiplyTo_Vector2DVector2D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_Vector2DVector2D_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_Vector2DVector2D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_Vector2DVector2D_Statics::CompoundOperatorsBPLibrary_eventMultiplyTo_Vector2DVector2D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_Vector2DVector2D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_Vector2DVector2D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompoundOperatorsBPLibrary::execMultiplyTo_Vector2DVector2D)
{
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_A);
	P_GET_STRUCT(FVector2D,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCompoundOperatorsBPLibrary::MultiplyTo_Vector2DVector2D(Z_Param_Out_A,Z_Param_B);
	P_NATIVE_END;
}
// End Class UCompoundOperatorsBPLibrary Function MultiplyTo_Vector2DVector2D

// Begin Class UCompoundOperatorsBPLibrary Function MultiplyTo_Vector4Vector4
struct Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_Vector4Vector4_Statics
{
	struct CompoundOperatorsBPLibrary_eventMultiplyTo_Vector4Vector4_Parms
	{
		FVector4 A;
		FVector4 B;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Vector4" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Assign of Vector A  (A *= B) */" },
#endif
		{ "CompactNodeTitle", "*=" },
		{ "DisplayName", "Multiply to Vector4" },
		{ "Keywords", "* Multiply multiply" },
		{ "ModuleRelativePath", "Public/CompoundOperatorsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assign of Vector A  (A *= B)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_Vector4Vector4_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventMultiplyTo_Vector4Vector4_Parms, A), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_Vector4Vector4_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventMultiplyTo_Vector4Vector4_Parms, B), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_Vector4Vector4_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_Vector4Vector4_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_Vector4Vector4_Statics::NewProp_B,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_Vector4Vector4_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_Vector4Vector4_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompoundOperatorsBPLibrary, nullptr, "MultiplyTo_Vector4Vector4", nullptr, nullptr, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_Vector4Vector4_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_Vector4Vector4_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_Vector4Vector4_Statics::CompoundOperatorsBPLibrary_eventMultiplyTo_Vector4Vector4_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_Vector4Vector4_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_Vector4Vector4_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_Vector4Vector4_Statics::CompoundOperatorsBPLibrary_eventMultiplyTo_Vector4Vector4_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_Vector4Vector4()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_Vector4Vector4_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompoundOperatorsBPLibrary::execMultiplyTo_Vector4Vector4)
{
	P_GET_STRUCT_REF(FVector4,Z_Param_Out_A);
	P_GET_STRUCT_REF(FVector4,Z_Param_Out_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCompoundOperatorsBPLibrary::MultiplyTo_Vector4Vector4(Z_Param_Out_A,Z_Param_Out_B);
	P_NATIVE_END;
}
// End Class UCompoundOperatorsBPLibrary Function MultiplyTo_Vector4Vector4

// Begin Class UCompoundOperatorsBPLibrary Function MultiplyTo_VectorFloat
struct Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_VectorFloat_Statics
{
	struct CompoundOperatorsBPLibrary_eventMultiplyTo_VectorFloat_Parms
	{
		FVector A;
		double B;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Vector" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Assign Multiplying a float to each component of a vector */" },
#endif
		{ "CompactNodeTitle", "*=" },
		{ "DisplayName", "Multiply to float" },
		{ "Keywords", "*= Multiply multiply" },
		{ "ModuleRelativePath", "Public/CompoundOperatorsBPLibrary.h" },
		{ "ScriptMethod", "MultiplyToFloat" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assign Multiplying a float to each component of a vector" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_B;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_VectorFloat_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventMultiplyTo_VectorFloat_Parms, A), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_VectorFloat_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventMultiplyTo_VectorFloat_Parms, B), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_VectorFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_VectorFloat_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_VectorFloat_Statics::NewProp_B,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_VectorFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_VectorFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompoundOperatorsBPLibrary, nullptr, "MultiplyTo_VectorFloat", nullptr, nullptr, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_VectorFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_VectorFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_VectorFloat_Statics::CompoundOperatorsBPLibrary_eventMultiplyTo_VectorFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_VectorFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_VectorFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_VectorFloat_Statics::CompoundOperatorsBPLibrary_eventMultiplyTo_VectorFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_VectorFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_VectorFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompoundOperatorsBPLibrary::execMultiplyTo_VectorFloat)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_A);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCompoundOperatorsBPLibrary::MultiplyTo_VectorFloat(Z_Param_Out_A,Z_Param_B);
	P_NATIVE_END;
}
// End Class UCompoundOperatorsBPLibrary Function MultiplyTo_VectorFloat

// Begin Class UCompoundOperatorsBPLibrary Function MultiplyTo_VectorInt
struct Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_VectorInt_Statics
{
	struct CompoundOperatorsBPLibrary_eventMultiplyTo_VectorInt_Parms
	{
		FVector A;
		int32 B;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Vector" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Assign an integer to each component of a vector */" },
#endif
		{ "CompactNodeTitle", "*=" },
		{ "DisplayName", "Multiply to integer" },
		{ "Keywords", "*= Multiply multiply" },
		{ "ModuleRelativePath", "Public/CompoundOperatorsBPLibrary.h" },
		{ "ScriptMethod", "MultiplyToInt" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assign an integer to each component of a vector" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FIntPropertyParams NewProp_B;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_VectorInt_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventMultiplyTo_VectorInt_Parms, A), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_VectorInt_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventMultiplyTo_VectorInt_Parms, B), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_VectorInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_VectorInt_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_VectorInt_Statics::NewProp_B,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_VectorInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_VectorInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompoundOperatorsBPLibrary, nullptr, "MultiplyTo_VectorInt", nullptr, nullptr, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_VectorInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_VectorInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_VectorInt_Statics::CompoundOperatorsBPLibrary_eventMultiplyTo_VectorInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_VectorInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_VectorInt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_VectorInt_Statics::CompoundOperatorsBPLibrary_eventMultiplyTo_VectorInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_VectorInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_VectorInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompoundOperatorsBPLibrary::execMultiplyTo_VectorInt)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_A);
	P_GET_PROPERTY(FIntProperty,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCompoundOperatorsBPLibrary::MultiplyTo_VectorInt(Z_Param_Out_A,Z_Param_B);
	P_NATIVE_END;
}
// End Class UCompoundOperatorsBPLibrary Function MultiplyTo_VectorInt

// Begin Class UCompoundOperatorsBPLibrary Function MultiplyTo_VectorVector
struct Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_VectorVector_Statics
{
	struct CompoundOperatorsBPLibrary_eventMultiplyTo_VectorVector_Parms
	{
		FVector A;
		FVector B;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Vector" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Vector Assign */" },
#endif
		{ "CompactNodeTitle", "*=" },
		{ "DisplayName", "Multiply to vector" },
		{ "Keywords", "*= Multiply multiply" },
		{ "ModuleRelativePath", "Public/CompoundOperatorsBPLibrary.h" },
		{ "ScriptMethod", "MultiplyToVector" },
		{ "ScriptOperator", "*;*=" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vector Assign" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_VectorVector_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventMultiplyTo_VectorVector_Parms, A), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_VectorVector_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventMultiplyTo_VectorVector_Parms, B), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_VectorVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_VectorVector_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_VectorVector_Statics::NewProp_B,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_VectorVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_VectorVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompoundOperatorsBPLibrary, nullptr, "MultiplyTo_VectorVector", nullptr, nullptr, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_VectorVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_VectorVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_VectorVector_Statics::CompoundOperatorsBPLibrary_eventMultiplyTo_VectorVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_VectorVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_VectorVector_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_VectorVector_Statics::CompoundOperatorsBPLibrary_eventMultiplyTo_VectorVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_VectorVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_VectorVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompoundOperatorsBPLibrary::execMultiplyTo_VectorVector)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_A);
	P_GET_STRUCT(FVector,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCompoundOperatorsBPLibrary::MultiplyTo_VectorVector(Z_Param_Out_A,Z_Param_B);
	P_NATIVE_END;
}
// End Class UCompoundOperatorsBPLibrary Function MultiplyTo_VectorVector

// Begin Class UCompoundOperatorsBPLibrary Function SubtractTo_ByteByte
struct Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_ByteByte_Statics
{
	struct CompoundOperatorsBPLibrary_eventSubtractTo_ByteByte_Parms
	{
		uint8 A;
		uint8 B;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Byte" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Assign (A -= B) */" },
#endif
		{ "CompactNodeTitle", "-=" },
		{ "CPP_Default_B", "1" },
		{ "DisplayName", "Subtract to Byte" },
		{ "Keywords", "-= Subtract minus" },
		{ "ModuleRelativePath", "Public/CompoundOperatorsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assign (A -= B)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_A;
	static const UECodeGen_Private::FBytePropertyParams NewProp_B;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_ByteByte_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventSubtractTo_ByteByte_Parms, A), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_ByteByte_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventSubtractTo_ByteByte_Parms, B), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_ByteByte_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_ByteByte_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_ByteByte_Statics::NewProp_B,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_ByteByte_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_ByteByte_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompoundOperatorsBPLibrary, nullptr, "SubtractTo_ByteByte", nullptr, nullptr, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_ByteByte_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_ByteByte_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_ByteByte_Statics::CompoundOperatorsBPLibrary_eventSubtractTo_ByteByte_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_ByteByte_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_ByteByte_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_ByteByte_Statics::CompoundOperatorsBPLibrary_eventSubtractTo_ByteByte_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_ByteByte()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_ByteByte_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompoundOperatorsBPLibrary::execSubtractTo_ByteByte)
{
	P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_A);
	P_GET_PROPERTY(FByteProperty,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCompoundOperatorsBPLibrary::SubtractTo_ByteByte(Z_Param_Out_A,Z_Param_B);
	P_NATIVE_END;
}
// End Class UCompoundOperatorsBPLibrary Function SubtractTo_ByteByte

// Begin Class UCompoundOperatorsBPLibrary Function SubtractTo_DateTimeDateTime
struct Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_DateTimeDateTime_Statics
{
	struct CompoundOperatorsBPLibrary_eventSubtractTo_DateTimeDateTime_Parms
	{
		FDateTime A;
		FDateTime B;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|DateTime" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Assign (A - B) */" },
#endif
		{ "CompactNodeTitle", "-=" },
		{ "DisplayName", "Subtract to DateTime" },
		{ "IgnoreTypePromotion", "" },
		{ "Keywords", "-= Subtract minus" },
		{ "ModuleRelativePath", "Public/CompoundOperatorsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assign (A - B)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_DateTimeDateTime_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventSubtractTo_DateTimeDateTime_Parms, A), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_DateTimeDateTime_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventSubtractTo_DateTimeDateTime_Parms, B), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_DateTimeDateTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_DateTimeDateTime_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_DateTimeDateTime_Statics::NewProp_B,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_DateTimeDateTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_DateTimeDateTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompoundOperatorsBPLibrary, nullptr, "SubtractTo_DateTimeDateTime", nullptr, nullptr, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_DateTimeDateTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_DateTimeDateTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_DateTimeDateTime_Statics::CompoundOperatorsBPLibrary_eventSubtractTo_DateTimeDateTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_DateTimeDateTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_DateTimeDateTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_DateTimeDateTime_Statics::CompoundOperatorsBPLibrary_eventSubtractTo_DateTimeDateTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_DateTimeDateTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_DateTimeDateTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompoundOperatorsBPLibrary::execSubtractTo_DateTimeDateTime)
{
	P_GET_STRUCT_REF(FDateTime,Z_Param_Out_A);
	P_GET_STRUCT(FDateTime,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCompoundOperatorsBPLibrary::SubtractTo_DateTimeDateTime(Z_Param_Out_A,Z_Param_B);
	P_NATIVE_END;
}
// End Class UCompoundOperatorsBPLibrary Function SubtractTo_DateTimeDateTime

// Begin Class UCompoundOperatorsBPLibrary Function SubtractTo_DateTimeTimespan
struct Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_DateTimeTimespan_Statics
{
	struct CompoundOperatorsBPLibrary_eventSubtractTo_DateTimeTimespan_Parms
	{
		FDateTime A;
		FTimespan B;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|DateTime" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Assign (A - B) */" },
#endif
		{ "CompactNodeTitle", "-=" },
		{ "DisplayName", "Subtract to Timespan" },
		{ "IgnoreTypePromotion", "" },
		{ "Keywords", "-= Subtract minus" },
		{ "ModuleRelativePath", "Public/CompoundOperatorsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assign (A - B)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_DateTimeTimespan_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventSubtractTo_DateTimeTimespan_Parms, A), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_DateTimeTimespan_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventSubtractTo_DateTimeTimespan_Parms, B), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_DateTimeTimespan_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_DateTimeTimespan_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_DateTimeTimespan_Statics::NewProp_B,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_DateTimeTimespan_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_DateTimeTimespan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompoundOperatorsBPLibrary, nullptr, "SubtractTo_DateTimeTimespan", nullptr, nullptr, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_DateTimeTimespan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_DateTimeTimespan_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_DateTimeTimespan_Statics::CompoundOperatorsBPLibrary_eventSubtractTo_DateTimeTimespan_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_DateTimeTimespan_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_DateTimeTimespan_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_DateTimeTimespan_Statics::CompoundOperatorsBPLibrary_eventSubtractTo_DateTimeTimespan_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_DateTimeTimespan()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_DateTimeTimespan_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompoundOperatorsBPLibrary::execSubtractTo_DateTimeTimespan)
{
	P_GET_STRUCT_REF(FDateTime,Z_Param_Out_A);
	P_GET_STRUCT(FTimespan,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCompoundOperatorsBPLibrary::SubtractTo_DateTimeTimespan(Z_Param_Out_A,Z_Param_B);
	P_NATIVE_END;
}
// End Class UCompoundOperatorsBPLibrary Function SubtractTo_DateTimeTimespan

// Begin Class UCompoundOperatorsBPLibrary Function SubtractTo_DoubleDouble
struct Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_DoubleDouble_Statics
{
	struct CompoundOperatorsBPLibrary_eventSubtractTo_DoubleDouble_Parms
	{
		double A;
		double B;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Float" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Assign (A -= B) */" },
#endif
		{ "CompactNodeTitle", "-=" },
		{ "CPP_Default_B", "1.000000" },
		{ "DisplayName", "Subtract to float" },
		{ "Keywords", "-= Subtract minus" },
		{ "ModuleRelativePath", "Public/CompoundOperatorsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assign (A -= B)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_A;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_B;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_DoubleDouble_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventSubtractTo_DoubleDouble_Parms, A), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_DoubleDouble_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventSubtractTo_DoubleDouble_Parms, B), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_DoubleDouble_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_DoubleDouble_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_DoubleDouble_Statics::NewProp_B,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_DoubleDouble_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_DoubleDouble_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompoundOperatorsBPLibrary, nullptr, "SubtractTo_DoubleDouble", nullptr, nullptr, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_DoubleDouble_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_DoubleDouble_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_DoubleDouble_Statics::CompoundOperatorsBPLibrary_eventSubtractTo_DoubleDouble_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_DoubleDouble_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_DoubleDouble_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_DoubleDouble_Statics::CompoundOperatorsBPLibrary_eventSubtractTo_DoubleDouble_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_DoubleDouble()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_DoubleDouble_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompoundOperatorsBPLibrary::execSubtractTo_DoubleDouble)
{
	P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_A);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCompoundOperatorsBPLibrary::SubtractTo_DoubleDouble(Z_Param_Out_A,Z_Param_B);
	P_NATIVE_END;
}
// End Class UCompoundOperatorsBPLibrary Function SubtractTo_DoubleDouble

// Begin Class UCompoundOperatorsBPLibrary Function SubtractTo_Int64Int64
struct Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_Int64Int64_Statics
{
	struct CompoundOperatorsBPLibrary_eventSubtractTo_Int64Int64_Parms
	{
		int64 A;
		int64 B;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Integer64" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Assign (A -= B) */" },
#endif
		{ "CompactNodeTitle", "-=" },
		{ "CPP_Default_B", "1" },
		{ "DisplayName", "Subtract to integer64" },
		{ "Keywords", "-= Subtract minus" },
		{ "ModuleRelativePath", "Public/CompoundOperatorsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assign (A -= B)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_A;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_B;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_Int64Int64_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventSubtractTo_Int64Int64_Parms, A), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_Int64Int64_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventSubtractTo_Int64Int64_Parms, B), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_Int64Int64_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_Int64Int64_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_Int64Int64_Statics::NewProp_B,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_Int64Int64_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_Int64Int64_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompoundOperatorsBPLibrary, nullptr, "SubtractTo_Int64Int64", nullptr, nullptr, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_Int64Int64_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_Int64Int64_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_Int64Int64_Statics::CompoundOperatorsBPLibrary_eventSubtractTo_Int64Int64_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_Int64Int64_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_Int64Int64_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_Int64Int64_Statics::CompoundOperatorsBPLibrary_eventSubtractTo_Int64Int64_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_Int64Int64()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_Int64Int64_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompoundOperatorsBPLibrary::execSubtractTo_Int64Int64)
{
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_A);
	P_GET_PROPERTY(FInt64Property,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCompoundOperatorsBPLibrary::SubtractTo_Int64Int64(Z_Param_Out_A,Z_Param_B);
	P_NATIVE_END;
}
// End Class UCompoundOperatorsBPLibrary Function SubtractTo_Int64Int64

// Begin Class UCompoundOperatorsBPLibrary Function SubtractTo_IntInt
struct Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_IntInt_Statics
{
	struct CompoundOperatorsBPLibrary_eventSubtractTo_IntInt_Parms
	{
		int32 A;
		int32 B;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Integer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Assign (A -= B) */" },
#endif
		{ "CompactNodeTitle", "-=" },
		{ "CPP_Default_B", "1" },
		{ "DisplayName", "Subtract to int" },
		{ "Keywords", "-= Subtract minus" },
		{ "ModuleRelativePath", "Public/CompoundOperatorsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assign (A -= B)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_A;
	static const UECodeGen_Private::FIntPropertyParams NewProp_B;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_IntInt_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventSubtractTo_IntInt_Parms, A), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_IntInt_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventSubtractTo_IntInt_Parms, B), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_IntInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_IntInt_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_IntInt_Statics::NewProp_B,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_IntInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_IntInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompoundOperatorsBPLibrary, nullptr, "SubtractTo_IntInt", nullptr, nullptr, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_IntInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_IntInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_IntInt_Statics::CompoundOperatorsBPLibrary_eventSubtractTo_IntInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_IntInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_IntInt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_IntInt_Statics::CompoundOperatorsBPLibrary_eventSubtractTo_IntInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_IntInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_IntInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompoundOperatorsBPLibrary::execSubtractTo_IntInt)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_A);
	P_GET_PROPERTY(FIntProperty,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCompoundOperatorsBPLibrary::SubtractTo_IntInt(Z_Param_Out_A,Z_Param_B);
	P_NATIVE_END;
}
// End Class UCompoundOperatorsBPLibrary Function SubtractTo_IntInt

// Begin Class UCompoundOperatorsBPLibrary Function SubtractTo_IntPointInt
struct Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_IntPointInt_Statics
{
	struct CompoundOperatorsBPLibrary_eventSubtractTo_IntPointInt_Parms
	{
		FIntPoint A;
		int32 B;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|IntPoint" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Assign (A -= B) */" },
#endif
		{ "CompactNodeTitle", "-=" },
		{ "DisplayName", "Subtract to Integer" },
		{ "Keywords", "-= Subtract minus" },
		{ "ModuleRelativePath", "Public/CompoundOperatorsBPLibrary.h" },
		{ "ScriptMethod", "SubtractToInt" },
		{ "ScriptOperator", "-;-=" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assign (A -= B)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FIntPropertyParams NewProp_B;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_IntPointInt_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventSubtractTo_IntPointInt_Parms, A), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_IntPointInt_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventSubtractTo_IntPointInt_Parms, B), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_IntPointInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_IntPointInt_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_IntPointInt_Statics::NewProp_B,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_IntPointInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_IntPointInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompoundOperatorsBPLibrary, nullptr, "SubtractTo_IntPointInt", nullptr, nullptr, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_IntPointInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_IntPointInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_IntPointInt_Statics::CompoundOperatorsBPLibrary_eventSubtractTo_IntPointInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_IntPointInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_IntPointInt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_IntPointInt_Statics::CompoundOperatorsBPLibrary_eventSubtractTo_IntPointInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_IntPointInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_IntPointInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompoundOperatorsBPLibrary::execSubtractTo_IntPointInt)
{
	P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_A);
	P_GET_PROPERTY(FIntProperty,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCompoundOperatorsBPLibrary::SubtractTo_IntPointInt(Z_Param_Out_A,Z_Param_B);
	P_NATIVE_END;
}
// End Class UCompoundOperatorsBPLibrary Function SubtractTo_IntPointInt

// Begin Class UCompoundOperatorsBPLibrary Function SubtractTo_IntPointIntPoint
struct Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_IntPointIntPoint_Statics
{
	struct CompoundOperatorsBPLibrary_eventSubtractTo_IntPointIntPoint_Parms
	{
		FIntPoint A;
		FIntPoint B;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|IntPoint" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Assign A Subtracted by B */" },
#endif
		{ "CompactNodeTitle", "-=" },
		{ "DisplayName", "Subtract to IntPoint" },
		{ "Keywords", "-= Subtract minus" },
		{ "ModuleRelativePath", "Public/CompoundOperatorsBPLibrary.h" },
		{ "ScriptMethod", "SubtractToIntPoint" },
		{ "ScriptOperator", "-;-=" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assign A Subtracted by B" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_IntPointIntPoint_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventSubtractTo_IntPointIntPoint_Parms, A), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_IntPointIntPoint_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventSubtractTo_IntPointIntPoint_Parms, B), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_IntPointIntPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_IntPointIntPoint_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_IntPointIntPoint_Statics::NewProp_B,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_IntPointIntPoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_IntPointIntPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompoundOperatorsBPLibrary, nullptr, "SubtractTo_IntPointIntPoint", nullptr, nullptr, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_IntPointIntPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_IntPointIntPoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_IntPointIntPoint_Statics::CompoundOperatorsBPLibrary_eventSubtractTo_IntPointIntPoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_IntPointIntPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_IntPointIntPoint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_IntPointIntPoint_Statics::CompoundOperatorsBPLibrary_eventSubtractTo_IntPointIntPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_IntPointIntPoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_IntPointIntPoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompoundOperatorsBPLibrary::execSubtractTo_IntPointIntPoint)
{
	P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_A);
	P_GET_STRUCT(FIntPoint,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCompoundOperatorsBPLibrary::SubtractTo_IntPointIntPoint(Z_Param_Out_A,Z_Param_B);
	P_NATIVE_END;
}
// End Class UCompoundOperatorsBPLibrary Function SubtractTo_IntPointIntPoint

// Begin Class UCompoundOperatorsBPLibrary Function SubtractTo_LinearColorLinearColor
struct Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_LinearColorLinearColor_Statics
{
	struct CompoundOperatorsBPLibrary_eventSubtractTo_LinearColorLinearColor_Parms
	{
		FLinearColor A;
		FLinearColor B;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Color" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Element-wise assign Subtractition of two linear colors (R-=R, G-=G, B-=B, A-=A) */" },
#endif
		{ "CompactNodeTitle", "-=" },
		{ "DisplayName", "Subtract to LinearColor" },
		{ "Keywords", "-= Subtract minus" },
		{ "ModuleRelativePath", "Public/CompoundOperatorsBPLibrary.h" },
		{ "ScriptMethod", "SubtractToLinearColor" },
		{ "ScriptOperator", "-;-=" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Element-wise assign Subtractition of two linear colors (R-=R, G-=G, B-=B, A-=A)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_LinearColorLinearColor_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventSubtractTo_LinearColorLinearColor_Parms, A), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_LinearColorLinearColor_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventSubtractTo_LinearColorLinearColor_Parms, B), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_LinearColorLinearColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_LinearColorLinearColor_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_LinearColorLinearColor_Statics::NewProp_B,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_LinearColorLinearColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_LinearColorLinearColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompoundOperatorsBPLibrary, nullptr, "SubtractTo_LinearColorLinearColor", nullptr, nullptr, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_LinearColorLinearColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_LinearColorLinearColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_LinearColorLinearColor_Statics::CompoundOperatorsBPLibrary_eventSubtractTo_LinearColorLinearColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_LinearColorLinearColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_LinearColorLinearColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_LinearColorLinearColor_Statics::CompoundOperatorsBPLibrary_eventSubtractTo_LinearColorLinearColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_LinearColorLinearColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_LinearColorLinearColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompoundOperatorsBPLibrary::execSubtractTo_LinearColorLinearColor)
{
	P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_A);
	P_GET_STRUCT(FLinearColor,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCompoundOperatorsBPLibrary::SubtractTo_LinearColorLinearColor(Z_Param_Out_A,Z_Param_B);
	P_NATIVE_END;
}
// End Class UCompoundOperatorsBPLibrary Function SubtractTo_LinearColorLinearColor

// Begin Class UCompoundOperatorsBPLibrary Function SubtractTo_QuatQuat
struct Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_QuatQuat_Statics
{
	struct CompoundOperatorsBPLibrary_eventSubtractTo_QuatQuat_Parms
	{
		FQuat A;
		FQuat B;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Quat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Assign Subtracting of Vector (A - B) */" },
#endif
		{ "CompactNodeTitle", "-=" },
		{ "DisplayName", "Subtract to Quat" },
		{ "Keywords", "-= Subtract minus" },
		{ "ModuleRelativePath", "Public/CompoundOperatorsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assign Subtracting of Vector (A - B)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_QuatQuat_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventSubtractTo_QuatQuat_Parms, A), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_QuatQuat_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventSubtractTo_QuatQuat_Parms, B), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_QuatQuat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_QuatQuat_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_QuatQuat_Statics::NewProp_B,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_QuatQuat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_QuatQuat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompoundOperatorsBPLibrary, nullptr, "SubtractTo_QuatQuat", nullptr, nullptr, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_QuatQuat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_QuatQuat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_QuatQuat_Statics::CompoundOperatorsBPLibrary_eventSubtractTo_QuatQuat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_QuatQuat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_QuatQuat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_QuatQuat_Statics::CompoundOperatorsBPLibrary_eventSubtractTo_QuatQuat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_QuatQuat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_QuatQuat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompoundOperatorsBPLibrary::execSubtractTo_QuatQuat)
{
	P_GET_STRUCT_REF(FQuat,Z_Param_Out_A);
	P_GET_STRUCT_REF(FQuat,Z_Param_Out_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCompoundOperatorsBPLibrary::SubtractTo_QuatQuat(Z_Param_Out_A,Z_Param_Out_B);
	P_NATIVE_END;
}
// End Class UCompoundOperatorsBPLibrary Function SubtractTo_QuatQuat

// Begin Class UCompoundOperatorsBPLibrary Function SubtractTo_TimespanTimespan
struct Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_TimespanTimespan_Statics
{
	struct CompoundOperatorsBPLibrary_eventSubtractTo_TimespanTimespan_Parms
	{
		FTimespan A;
		FTimespan B;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Timespan" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Assign (A - B) */" },
#endif
		{ "CompactNodeTitle", "-=" },
		{ "DisplayName", "Subtract to Timespan" },
		{ "Keywords", "-= Subtract minus" },
		{ "ModuleRelativePath", "Public/CompoundOperatorsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assign (A - B)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_TimespanTimespan_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventSubtractTo_TimespanTimespan_Parms, A), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_TimespanTimespan_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventSubtractTo_TimespanTimespan_Parms, B), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_TimespanTimespan_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_TimespanTimespan_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_TimespanTimespan_Statics::NewProp_B,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_TimespanTimespan_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_TimespanTimespan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompoundOperatorsBPLibrary, nullptr, "SubtractTo_TimespanTimespan", nullptr, nullptr, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_TimespanTimespan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_TimespanTimespan_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_TimespanTimespan_Statics::CompoundOperatorsBPLibrary_eventSubtractTo_TimespanTimespan_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_TimespanTimespan_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_TimespanTimespan_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_TimespanTimespan_Statics::CompoundOperatorsBPLibrary_eventSubtractTo_TimespanTimespan_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_TimespanTimespan()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_TimespanTimespan_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompoundOperatorsBPLibrary::execSubtractTo_TimespanTimespan)
{
	P_GET_STRUCT_REF(FTimespan,Z_Param_Out_A);
	P_GET_STRUCT(FTimespan,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCompoundOperatorsBPLibrary::SubtractTo_TimespanTimespan(Z_Param_Out_A,Z_Param_B);
	P_NATIVE_END;
}
// End Class UCompoundOperatorsBPLibrary Function SubtractTo_TimespanTimespan

// Begin Class UCompoundOperatorsBPLibrary Function SubtractTo_Vector2DFloat
struct Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_Vector2DFloat_Statics
{
	struct CompoundOperatorsBPLibrary_eventSubtractTo_Vector2DFloat_Parms
	{
		FVector2D A;
		double B;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Vector2D" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Assign Vector A Subtracted by B */" },
#endif
		{ "CompactNodeTitle", "-=" },
		{ "DisplayName", "Subtract to vector2d float" },
		{ "Keywords", "-= Subtract minus" },
		{ "ModuleRelativePath", "Public/CompoundOperatorsBPLibrary.h" },
		{ "ScriptMethod", "SubtractToFloat" },
		{ "ScriptOperator", "-;-=" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assign Vector A Subtracted by B" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_B;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_Vector2DFloat_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventSubtractTo_Vector2DFloat_Parms, A), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_Vector2DFloat_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventSubtractTo_Vector2DFloat_Parms, B), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_Vector2DFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_Vector2DFloat_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_Vector2DFloat_Statics::NewProp_B,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_Vector2DFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_Vector2DFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompoundOperatorsBPLibrary, nullptr, "SubtractTo_Vector2DFloat", nullptr, nullptr, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_Vector2DFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_Vector2DFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_Vector2DFloat_Statics::CompoundOperatorsBPLibrary_eventSubtractTo_Vector2DFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_Vector2DFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_Vector2DFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_Vector2DFloat_Statics::CompoundOperatorsBPLibrary_eventSubtractTo_Vector2DFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_Vector2DFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_Vector2DFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompoundOperatorsBPLibrary::execSubtractTo_Vector2DFloat)
{
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_A);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCompoundOperatorsBPLibrary::SubtractTo_Vector2DFloat(Z_Param_Out_A,Z_Param_B);
	P_NATIVE_END;
}
// End Class UCompoundOperatorsBPLibrary Function SubtractTo_Vector2DFloat

// Begin Class UCompoundOperatorsBPLibrary Function SubtractTo_Vector2DVector2D
struct Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_Vector2DVector2D_Statics
{
	struct CompoundOperatorsBPLibrary_eventSubtractTo_Vector2DVector2D_Parms
	{
		FVector2D A;
		FVector2D B;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Vector2D" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Assign Vector A and Vector B (A -= B) */" },
#endif
		{ "CompactNodeTitle", "-=" },
		{ "DisplayName", "Subtract to vector2d" },
		{ "Keywords", "-= Subtract minus" },
		{ "ModuleRelativePath", "Public/CompoundOperatorsBPLibrary.h" },
		{ "ScriptMethod", "SubtractToVector2D" },
		{ "ScriptOperator", "-;-=" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assign Vector A and Vector B (A -= B)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_Vector2DVector2D_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventSubtractTo_Vector2DVector2D_Parms, A), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_Vector2DVector2D_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventSubtractTo_Vector2DVector2D_Parms, B), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_Vector2DVector2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_Vector2DVector2D_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_Vector2DVector2D_Statics::NewProp_B,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_Vector2DVector2D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_Vector2DVector2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompoundOperatorsBPLibrary, nullptr, "SubtractTo_Vector2DVector2D", nullptr, nullptr, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_Vector2DVector2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_Vector2DVector2D_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_Vector2DVector2D_Statics::CompoundOperatorsBPLibrary_eventSubtractTo_Vector2DVector2D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_Vector2DVector2D_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_Vector2DVector2D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_Vector2DVector2D_Statics::CompoundOperatorsBPLibrary_eventSubtractTo_Vector2DVector2D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_Vector2DVector2D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_Vector2DVector2D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompoundOperatorsBPLibrary::execSubtractTo_Vector2DVector2D)
{
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_A);
	P_GET_STRUCT(FVector2D,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCompoundOperatorsBPLibrary::SubtractTo_Vector2DVector2D(Z_Param_Out_A,Z_Param_B);
	P_NATIVE_END;
}
// End Class UCompoundOperatorsBPLibrary Function SubtractTo_Vector2DVector2D

// Begin Class UCompoundOperatorsBPLibrary Function SubtractTo_Vector4Vector4
struct Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_Vector4Vector4_Statics
{
	struct CompoundOperatorsBPLibrary_eventSubtractTo_Vector4Vector4_Parms
	{
		FVector4 A;
		FVector4 B;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Vector4" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Assign of Vector A  (A -= B) */" },
#endif
		{ "CompactNodeTitle", "-=" },
		{ "DisplayName", "Subtract to Vector4" },
		{ "Keywords", "- Subtract minus" },
		{ "ModuleRelativePath", "Public/CompoundOperatorsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assign of Vector A  (A -= B)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_Vector4Vector4_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventSubtractTo_Vector4Vector4_Parms, A), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_Vector4Vector4_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventSubtractTo_Vector4Vector4_Parms, B), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_Vector4Vector4_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_Vector4Vector4_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_Vector4Vector4_Statics::NewProp_B,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_Vector4Vector4_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_Vector4Vector4_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompoundOperatorsBPLibrary, nullptr, "SubtractTo_Vector4Vector4", nullptr, nullptr, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_Vector4Vector4_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_Vector4Vector4_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_Vector4Vector4_Statics::CompoundOperatorsBPLibrary_eventSubtractTo_Vector4Vector4_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_Vector4Vector4_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_Vector4Vector4_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_Vector4Vector4_Statics::CompoundOperatorsBPLibrary_eventSubtractTo_Vector4Vector4_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_Vector4Vector4()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_Vector4Vector4_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompoundOperatorsBPLibrary::execSubtractTo_Vector4Vector4)
{
	P_GET_STRUCT_REF(FVector4,Z_Param_Out_A);
	P_GET_STRUCT_REF(FVector4,Z_Param_Out_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCompoundOperatorsBPLibrary::SubtractTo_Vector4Vector4(Z_Param_Out_A,Z_Param_Out_B);
	P_NATIVE_END;
}
// End Class UCompoundOperatorsBPLibrary Function SubtractTo_Vector4Vector4

// Begin Class UCompoundOperatorsBPLibrary Function SubtractTo_VectorFloat
struct Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_VectorFloat_Statics
{
	struct CompoundOperatorsBPLibrary_eventSubtractTo_VectorFloat_Parms
	{
		FVector A;
		double B;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Vector" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Assign Subtracting a float to each component of a vector */" },
#endif
		{ "CompactNodeTitle", "-=" },
		{ "DisplayName", "Subtract to float" },
		{ "Keywords", "-= Subtract minus" },
		{ "ModuleRelativePath", "Public/CompoundOperatorsBPLibrary.h" },
		{ "ScriptMethod", "SubtractToFloat" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assign Subtracting a float to each component of a vector" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_B;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_VectorFloat_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventSubtractTo_VectorFloat_Parms, A), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_VectorFloat_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventSubtractTo_VectorFloat_Parms, B), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_VectorFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_VectorFloat_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_VectorFloat_Statics::NewProp_B,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_VectorFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_VectorFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompoundOperatorsBPLibrary, nullptr, "SubtractTo_VectorFloat", nullptr, nullptr, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_VectorFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_VectorFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_VectorFloat_Statics::CompoundOperatorsBPLibrary_eventSubtractTo_VectorFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_VectorFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_VectorFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_VectorFloat_Statics::CompoundOperatorsBPLibrary_eventSubtractTo_VectorFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_VectorFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_VectorFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompoundOperatorsBPLibrary::execSubtractTo_VectorFloat)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_A);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCompoundOperatorsBPLibrary::SubtractTo_VectorFloat(Z_Param_Out_A,Z_Param_B);
	P_NATIVE_END;
}
// End Class UCompoundOperatorsBPLibrary Function SubtractTo_VectorFloat

// Begin Class UCompoundOperatorsBPLibrary Function SubtractTo_VectorInt
struct Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_VectorInt_Statics
{
	struct CompoundOperatorsBPLibrary_eventSubtractTo_VectorInt_Parms
	{
		FVector A;
		int32 B;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Vector" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Assign an integer to each component of a vector */" },
#endif
		{ "CompactNodeTitle", "-=" },
		{ "DisplayName", "Subtract to integer" },
		{ "Keywords", "-= Subtract minus" },
		{ "ModuleRelativePath", "Public/CompoundOperatorsBPLibrary.h" },
		{ "ScriptMethod", "SubtractToInt" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assign an integer to each component of a vector" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FIntPropertyParams NewProp_B;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_VectorInt_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventSubtractTo_VectorInt_Parms, A), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_VectorInt_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventSubtractTo_VectorInt_Parms, B), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_VectorInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_VectorInt_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_VectorInt_Statics::NewProp_B,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_VectorInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_VectorInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompoundOperatorsBPLibrary, nullptr, "SubtractTo_VectorInt", nullptr, nullptr, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_VectorInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_VectorInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_VectorInt_Statics::CompoundOperatorsBPLibrary_eventSubtractTo_VectorInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_VectorInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_VectorInt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_VectorInt_Statics::CompoundOperatorsBPLibrary_eventSubtractTo_VectorInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_VectorInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_VectorInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompoundOperatorsBPLibrary::execSubtractTo_VectorInt)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_A);
	P_GET_PROPERTY(FIntProperty,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCompoundOperatorsBPLibrary::SubtractTo_VectorInt(Z_Param_Out_A,Z_Param_B);
	P_NATIVE_END;
}
// End Class UCompoundOperatorsBPLibrary Function SubtractTo_VectorInt

// Begin Class UCompoundOperatorsBPLibrary Function SubtractTo_VectorVector
struct Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_VectorVector_Statics
{
	struct CompoundOperatorsBPLibrary_eventSubtractTo_VectorVector_Parms
	{
		FVector A;
		FVector B;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Vector" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Vector Assign */" },
#endif
		{ "CompactNodeTitle", "-=" },
		{ "DisplayName", "Subtract to vector" },
		{ "Keywords", "-= Subtract minus" },
		{ "ModuleRelativePath", "Public/CompoundOperatorsBPLibrary.h" },
		{ "ScriptMethod", "SubtractTo" },
		{ "ScriptOperator", "-;-=" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vector Assign" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_VectorVector_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventSubtractTo_VectorVector_Parms, A), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_VectorVector_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompoundOperatorsBPLibrary_eventSubtractTo_VectorVector_Parms, B), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_VectorVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_VectorVector_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_VectorVector_Statics::NewProp_B,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_VectorVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_VectorVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompoundOperatorsBPLibrary, nullptr, "SubtractTo_VectorVector", nullptr, nullptr, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_VectorVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_VectorVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_VectorVector_Statics::CompoundOperatorsBPLibrary_eventSubtractTo_VectorVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_VectorVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_VectorVector_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_VectorVector_Statics::CompoundOperatorsBPLibrary_eventSubtractTo_VectorVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_VectorVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_VectorVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompoundOperatorsBPLibrary::execSubtractTo_VectorVector)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_A);
	P_GET_STRUCT(FVector,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCompoundOperatorsBPLibrary::SubtractTo_VectorVector(Z_Param_Out_A,Z_Param_B);
	P_NATIVE_END;
}
// End Class UCompoundOperatorsBPLibrary Function SubtractTo_VectorVector

// Begin Class UCompoundOperatorsBPLibrary
void UCompoundOperatorsBPLibrary::StaticRegisterNativesUCompoundOperatorsBPLibrary()
{
	UClass* Class = UCompoundOperatorsBPLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddTo_ByteByte", &UCompoundOperatorsBPLibrary::execAddTo_ByteByte },
		{ "AddTo_DateTimeDateTime", &UCompoundOperatorsBPLibrary::execAddTo_DateTimeDateTime },
		{ "AddTo_DateTimeTimespan", &UCompoundOperatorsBPLibrary::execAddTo_DateTimeTimespan },
		{ "AddTo_DoubleDouble", &UCompoundOperatorsBPLibrary::execAddTo_DoubleDouble },
		{ "AddTo_Int64Int64", &UCompoundOperatorsBPLibrary::execAddTo_Int64Int64 },
		{ "AddTo_IntInt", &UCompoundOperatorsBPLibrary::execAddTo_IntInt },
		{ "AddTo_IntPointInt", &UCompoundOperatorsBPLibrary::execAddTo_IntPointInt },
		{ "AddTo_IntPointIntPoint", &UCompoundOperatorsBPLibrary::execAddTo_IntPointIntPoint },
		{ "AddTo_LinearColorLinearColor", &UCompoundOperatorsBPLibrary::execAddTo_LinearColorLinearColor },
		{ "AddTo_MatrixMatrix", &UCompoundOperatorsBPLibrary::execAddTo_MatrixMatrix },
		{ "AddTo_QuatQuat", &UCompoundOperatorsBPLibrary::execAddTo_QuatQuat },
		{ "AddTo_TimespanTimespan", &UCompoundOperatorsBPLibrary::execAddTo_TimespanTimespan },
		{ "AddTo_Vector2DFloat", &UCompoundOperatorsBPLibrary::execAddTo_Vector2DFloat },
		{ "AddTo_Vector2DVector2D", &UCompoundOperatorsBPLibrary::execAddTo_Vector2DVector2D },
		{ "AddTo_Vector4Vector4", &UCompoundOperatorsBPLibrary::execAddTo_Vector4Vector4 },
		{ "AddTo_VectorFloat", &UCompoundOperatorsBPLibrary::execAddTo_VectorFloat },
		{ "AddTo_VectorInt", &UCompoundOperatorsBPLibrary::execAddTo_VectorInt },
		{ "AddTo_VectorVector", &UCompoundOperatorsBPLibrary::execAddTo_VectorVector },
		{ "DivideTo_ByteByte", &UCompoundOperatorsBPLibrary::execDivideTo_ByteByte },
		{ "DivideTo_DoubleDouble", &UCompoundOperatorsBPLibrary::execDivideTo_DoubleDouble },
		{ "DivideTo_Int64Int64", &UCompoundOperatorsBPLibrary::execDivideTo_Int64Int64 },
		{ "DivideTo_IntInt", &UCompoundOperatorsBPLibrary::execDivideTo_IntInt },
		{ "DivideTo_IntPointInt", &UCompoundOperatorsBPLibrary::execDivideTo_IntPointInt },
		{ "DivideTo_IntPointIntPoint", &UCompoundOperatorsBPLibrary::execDivideTo_IntPointIntPoint },
		{ "DivideTo_LinearColorLinearColor", &UCompoundOperatorsBPLibrary::execDivideTo_LinearColorLinearColor },
		{ "DivideTo_Vector2DFloat", &UCompoundOperatorsBPLibrary::execDivideTo_Vector2DFloat },
		{ "DivideTo_Vector2DVector2D", &UCompoundOperatorsBPLibrary::execDivideTo_Vector2DVector2D },
		{ "DivideTo_Vector4Vector4", &UCompoundOperatorsBPLibrary::execDivideTo_Vector4Vector4 },
		{ "DivideTo_VectorFloat", &UCompoundOperatorsBPLibrary::execDivideTo_VectorFloat },
		{ "DivideTo_VectorInt", &UCompoundOperatorsBPLibrary::execDivideTo_VectorInt },
		{ "DivideTo_VectorVector", &UCompoundOperatorsBPLibrary::execDivideTo_VectorVector },
		{ "MultiplyTo_ByteByte", &UCompoundOperatorsBPLibrary::execMultiplyTo_ByteByte },
		{ "MultiplyTo_DoubleDouble", &UCompoundOperatorsBPLibrary::execMultiplyTo_DoubleDouble },
		{ "MultiplyTo_Int64Int64", &UCompoundOperatorsBPLibrary::execMultiplyTo_Int64Int64 },
		{ "MultiplyTo_IntInt", &UCompoundOperatorsBPLibrary::execMultiplyTo_IntInt },
		{ "MultiplyTo_IntPointInt", &UCompoundOperatorsBPLibrary::execMultiplyTo_IntPointInt },
		{ "MultiplyTo_IntPointIntPoint", &UCompoundOperatorsBPLibrary::execMultiplyTo_IntPointIntPoint },
		{ "MultiplyTo_LinearColorLinearColor", &UCompoundOperatorsBPLibrary::execMultiplyTo_LinearColorLinearColor },
		{ "MultiplyTo_MatrixMatrix", &UCompoundOperatorsBPLibrary::execMultiplyTo_MatrixMatrix },
		{ "MultiplyTo_QuatQuat", &UCompoundOperatorsBPLibrary::execMultiplyTo_QuatQuat },
		{ "MultiplyTo_Vector2DFloat", &UCompoundOperatorsBPLibrary::execMultiplyTo_Vector2DFloat },
		{ "MultiplyTo_Vector2DVector2D", &UCompoundOperatorsBPLibrary::execMultiplyTo_Vector2DVector2D },
		{ "MultiplyTo_Vector4Vector4", &UCompoundOperatorsBPLibrary::execMultiplyTo_Vector4Vector4 },
		{ "MultiplyTo_VectorFloat", &UCompoundOperatorsBPLibrary::execMultiplyTo_VectorFloat },
		{ "MultiplyTo_VectorInt", &UCompoundOperatorsBPLibrary::execMultiplyTo_VectorInt },
		{ "MultiplyTo_VectorVector", &UCompoundOperatorsBPLibrary::execMultiplyTo_VectorVector },
		{ "SubtractTo_ByteByte", &UCompoundOperatorsBPLibrary::execSubtractTo_ByteByte },
		{ "SubtractTo_DateTimeDateTime", &UCompoundOperatorsBPLibrary::execSubtractTo_DateTimeDateTime },
		{ "SubtractTo_DateTimeTimespan", &UCompoundOperatorsBPLibrary::execSubtractTo_DateTimeTimespan },
		{ "SubtractTo_DoubleDouble", &UCompoundOperatorsBPLibrary::execSubtractTo_DoubleDouble },
		{ "SubtractTo_Int64Int64", &UCompoundOperatorsBPLibrary::execSubtractTo_Int64Int64 },
		{ "SubtractTo_IntInt", &UCompoundOperatorsBPLibrary::execSubtractTo_IntInt },
		{ "SubtractTo_IntPointInt", &UCompoundOperatorsBPLibrary::execSubtractTo_IntPointInt },
		{ "SubtractTo_IntPointIntPoint", &UCompoundOperatorsBPLibrary::execSubtractTo_IntPointIntPoint },
		{ "SubtractTo_LinearColorLinearColor", &UCompoundOperatorsBPLibrary::execSubtractTo_LinearColorLinearColor },
		{ "SubtractTo_QuatQuat", &UCompoundOperatorsBPLibrary::execSubtractTo_QuatQuat },
		{ "SubtractTo_TimespanTimespan", &UCompoundOperatorsBPLibrary::execSubtractTo_TimespanTimespan },
		{ "SubtractTo_Vector2DFloat", &UCompoundOperatorsBPLibrary::execSubtractTo_Vector2DFloat },
		{ "SubtractTo_Vector2DVector2D", &UCompoundOperatorsBPLibrary::execSubtractTo_Vector2DVector2D },
		{ "SubtractTo_Vector4Vector4", &UCompoundOperatorsBPLibrary::execSubtractTo_Vector4Vector4 },
		{ "SubtractTo_VectorFloat", &UCompoundOperatorsBPLibrary::execSubtractTo_VectorFloat },
		{ "SubtractTo_VectorInt", &UCompoundOperatorsBPLibrary::execSubtractTo_VectorInt },
		{ "SubtractTo_VectorVector", &UCompoundOperatorsBPLibrary::execSubtractTo_VectorVector },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCompoundOperatorsBPLibrary);
UClass* Z_Construct_UClass_UCompoundOperatorsBPLibrary_NoRegister()
{
	return UCompoundOperatorsBPLibrary::StaticClass();
}
struct Z_Construct_UClass_UCompoundOperatorsBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CompoundOperatorsBPLibrary.h" },
		{ "ModuleRelativePath", "Public/CompoundOperatorsBPLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_ByteByte, "AddTo_ByteByte" }, // 232719465
		{ &Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_DateTimeDateTime, "AddTo_DateTimeDateTime" }, // 1470866374
		{ &Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_DateTimeTimespan, "AddTo_DateTimeTimespan" }, // 3349237303
		{ &Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_DoubleDouble, "AddTo_DoubleDouble" }, // 3574216218
		{ &Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_Int64Int64, "AddTo_Int64Int64" }, // 180897044
		{ &Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_IntInt, "AddTo_IntInt" }, // 1729809477
		{ &Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_IntPointInt, "AddTo_IntPointInt" }, // 771585661
		{ &Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_IntPointIntPoint, "AddTo_IntPointIntPoint" }, // 2444695773
		{ &Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_LinearColorLinearColor, "AddTo_LinearColorLinearColor" }, // 1697764807
		{ &Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_MatrixMatrix, "AddTo_MatrixMatrix" }, // 547158350
		{ &Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_QuatQuat, "AddTo_QuatQuat" }, // 1452346120
		{ &Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_TimespanTimespan, "AddTo_TimespanTimespan" }, // 1940267173
		{ &Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_Vector2DFloat, "AddTo_Vector2DFloat" }, // 1603723982
		{ &Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_Vector2DVector2D, "AddTo_Vector2DVector2D" }, // 4133417447
		{ &Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_Vector4Vector4, "AddTo_Vector4Vector4" }, // 2298050294
		{ &Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_VectorFloat, "AddTo_VectorFloat" }, // 3050057915
		{ &Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_VectorInt, "AddTo_VectorInt" }, // 2013796474
		{ &Z_Construct_UFunction_UCompoundOperatorsBPLibrary_AddTo_VectorVector, "AddTo_VectorVector" }, // 4203676887
		{ &Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_ByteByte, "DivideTo_ByteByte" }, // 3175513328
		{ &Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_DoubleDouble, "DivideTo_DoubleDouble" }, // 752416713
		{ &Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_Int64Int64, "DivideTo_Int64Int64" }, // 1748716365
		{ &Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_IntInt, "DivideTo_IntInt" }, // 1357226621
		{ &Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_IntPointInt, "DivideTo_IntPointInt" }, // 987951715
		{ &Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_IntPointIntPoint, "DivideTo_IntPointIntPoint" }, // 873578546
		{ &Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_LinearColorLinearColor, "DivideTo_LinearColorLinearColor" }, // 3416937492
		{ &Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_Vector2DFloat, "DivideTo_Vector2DFloat" }, // 1405506268
		{ &Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_Vector2DVector2D, "DivideTo_Vector2DVector2D" }, // 1719894292
		{ &Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_Vector4Vector4, "DivideTo_Vector4Vector4" }, // 1156116124
		{ &Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_VectorFloat, "DivideTo_VectorFloat" }, // 856785866
		{ &Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_VectorInt, "DivideTo_VectorInt" }, // 3768981220
		{ &Z_Construct_UFunction_UCompoundOperatorsBPLibrary_DivideTo_VectorVector, "DivideTo_VectorVector" }, // 4010152675
		{ &Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_ByteByte, "MultiplyTo_ByteByte" }, // 1565030472
		{ &Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_DoubleDouble, "MultiplyTo_DoubleDouble" }, // 766510606
		{ &Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_Int64Int64, "MultiplyTo_Int64Int64" }, // 2100342105
		{ &Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_IntInt, "MultiplyTo_IntInt" }, // 3487193594
		{ &Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_IntPointInt, "MultiplyTo_IntPointInt" }, // 1848186480
		{ &Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_IntPointIntPoint, "MultiplyTo_IntPointIntPoint" }, // 1384432526
		{ &Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_LinearColorLinearColor, "MultiplyTo_LinearColorLinearColor" }, // 2904135913
		{ &Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_MatrixMatrix, "MultiplyTo_MatrixMatrix" }, // 1399242368
		{ &Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_QuatQuat, "MultiplyTo_QuatQuat" }, // 3492376019
		{ &Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_Vector2DFloat, "MultiplyTo_Vector2DFloat" }, // 139784049
		{ &Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_Vector2DVector2D, "MultiplyTo_Vector2DVector2D" }, // 88717600
		{ &Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_Vector4Vector4, "MultiplyTo_Vector4Vector4" }, // 840335791
		{ &Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_VectorFloat, "MultiplyTo_VectorFloat" }, // 4140352118
		{ &Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_VectorInt, "MultiplyTo_VectorInt" }, // 2702945915
		{ &Z_Construct_UFunction_UCompoundOperatorsBPLibrary_MultiplyTo_VectorVector, "MultiplyTo_VectorVector" }, // 1316291007
		{ &Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_ByteByte, "SubtractTo_ByteByte" }, // 4064350935
		{ &Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_DateTimeDateTime, "SubtractTo_DateTimeDateTime" }, // 488236490
		{ &Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_DateTimeTimespan, "SubtractTo_DateTimeTimespan" }, // 4066394879
		{ &Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_DoubleDouble, "SubtractTo_DoubleDouble" }, // 1988542903
		{ &Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_Int64Int64, "SubtractTo_Int64Int64" }, // 686150732
		{ &Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_IntInt, "SubtractTo_IntInt" }, // 734687035
		{ &Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_IntPointInt, "SubtractTo_IntPointInt" }, // 4030660118
		{ &Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_IntPointIntPoint, "SubtractTo_IntPointIntPoint" }, // 1089019562
		{ &Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_LinearColorLinearColor, "SubtractTo_LinearColorLinearColor" }, // 2949767247
		{ &Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_QuatQuat, "SubtractTo_QuatQuat" }, // 1319444135
		{ &Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_TimespanTimespan, "SubtractTo_TimespanTimespan" }, // 1840563134
		{ &Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_Vector2DFloat, "SubtractTo_Vector2DFloat" }, // 3637549063
		{ &Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_Vector2DVector2D, "SubtractTo_Vector2DVector2D" }, // 3513561039
		{ &Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_Vector4Vector4, "SubtractTo_Vector4Vector4" }, // 1446460064
		{ &Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_VectorFloat, "SubtractTo_VectorFloat" }, // 262859024
		{ &Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_VectorInt, "SubtractTo_VectorInt" }, // 1667310113
		{ &Z_Construct_UFunction_UCompoundOperatorsBPLibrary_SubtractTo_VectorVector, "SubtractTo_VectorVector" }, // 1795912099
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCompoundOperatorsBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCompoundOperatorsBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_CompoundOperators,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCompoundOperatorsBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCompoundOperatorsBPLibrary_Statics::ClassParams = {
	&UCompoundOperatorsBPLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCompoundOperatorsBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UCompoundOperatorsBPLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCompoundOperatorsBPLibrary()
{
	if (!Z_Registration_Info_UClass_UCompoundOperatorsBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCompoundOperatorsBPLibrary.OuterSingleton, Z_Construct_UClass_UCompoundOperatorsBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCompoundOperatorsBPLibrary.OuterSingleton;
}
template<> COMPOUNDOPERATORS_API UClass* StaticClass<UCompoundOperatorsBPLibrary>()
{
	return UCompoundOperatorsBPLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCompoundOperatorsBPLibrary);
UCompoundOperatorsBPLibrary::~UCompoundOperatorsBPLibrary() {}
// End Class UCompoundOperatorsBPLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_W013321M_Documents_GitHub_Beyond_Buttons_Project_Unreal_BEYONDBUTTONS_Plugins_CompoundOperators_Source_CompoundOperators_Public_CompoundOperatorsBPLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCompoundOperatorsBPLibrary, UCompoundOperatorsBPLibrary::StaticClass, TEXT("UCompoundOperatorsBPLibrary"), &Z_Registration_Info_UClass_UCompoundOperatorsBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCompoundOperatorsBPLibrary), 1769116228U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_W013321M_Documents_GitHub_Beyond_Buttons_Project_Unreal_BEYONDBUTTONS_Plugins_CompoundOperators_Source_CompoundOperators_Public_CompoundOperatorsBPLibrary_h_945423447(TEXT("/Script/CompoundOperators"),
	Z_CompiledInDeferFile_FID_Users_W013321M_Documents_GitHub_Beyond_Buttons_Project_Unreal_BEYONDBUTTONS_Plugins_CompoundOperators_Source_CompoundOperators_Public_CompoundOperatorsBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_W013321M_Documents_GitHub_Beyond_Buttons_Project_Unreal_BEYONDBUTTONS_Plugins_CompoundOperators_Source_CompoundOperators_Public_CompoundOperatorsBPLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
