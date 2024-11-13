// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicNodeKismet/Classes/KMGC_KismetTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKMGC_KismetTypes() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
MAGICNODEKISMET_API UClass* Z_Construct_UClass_UMGC_ClassDB();
MAGICNODEKISMET_API UClass* Z_Construct_UClass_UMGC_ClassDB_NoRegister();
MAGICNODEKISMET_API UClass* Z_Construct_UClass_UMGC_FunctionDB();
MAGICNODEKISMET_API UClass* Z_Construct_UClass_UMGC_FunctionDB_NoRegister();
MAGICNODEKISMET_API UClass* Z_Construct_UClass_UMGC_KeywordDB();
MAGICNODEKISMET_API UClass* Z_Construct_UClass_UMGC_KeywordDB_NoRegister();
MAGICNODEKISMET_API UClass* Z_Construct_UClass_UMGC_SemanticDB();
MAGICNODEKISMET_API UClass* Z_Construct_UClass_UMGC_SemanticDB_NoRegister();
MAGICNODEKISMET_API UEnum* Z_Construct_UEnum_MagicNodeKismet_EAccessLevel();
MAGICNODEKISMET_API UEnum* Z_Construct_UEnum_MagicNodeKismet_EFunctionFlag();
MAGICNODEKISMET_API UEnum* Z_Construct_UEnum_MagicNodeKismet_EStack();
MAGICNODEKISMET_API UEnum* Z_Construct_UEnum_MagicNodeKismet_EType();
MAGICNODEKISMET_API UScriptStruct* Z_Construct_UScriptStruct_FClassDefinition();
MAGICNODEKISMET_API UScriptStruct* Z_Construct_UScriptStruct_FClassRedirector();
MAGICNODEKISMET_API UScriptStruct* Z_Construct_UScriptStruct_FFunctionDefinition();
MAGICNODEKISMET_API UScriptStruct* Z_Construct_UScriptStruct_FKeywordDefinition();
MAGICNODEKISMET_API UScriptStruct* Z_Construct_UScriptStruct_FPropertyDefinition();
UPackage* Z_Construct_UPackage__Script_MagicNodeKismet();
// End Cross Module References

// Begin Enum EType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EType;
static UEnum* EType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MagicNodeKismet_EType, (UObject*)Z_Construct_UPackage__Script_MagicNodeKismet(), TEXT("EType"));
	}
	return Z_Registration_Info_UEnum_EType.OuterSingleton;
}
template<> MAGICNODEKISMET_API UEnum* StaticEnum<EType>()
{
	return EType_StaticEnum();
}
struct Z_Construct_UEnum_MagicNodeKismet_EType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bool.Name", "EType::Bool" },
		{ "Byte.Name", "EType::Byte" },
		{ "Class.Name", "EType::Class" },
		{ "Enum.Name", "EType::Enum" },
		{ "Float.Name", "EType::Float" },
		{ "Int.Name", "EType::Int" },
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
		{ "Name.Name", "EType::Name" },
		{ "None.Name", "EType::None" },
		{ "Object.Name", "EType::Object" },
		{ "String.Name", "EType::String" },
		{ "Struct.Name", "EType::Struct" },
		{ "Text.Name", "EType::Text" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EType::None", (int64)EType::None },
		{ "EType::Int", (int64)EType::Int },
		{ "EType::Byte", (int64)EType::Byte },
		{ "EType::Bool", (int64)EType::Bool },
		{ "EType::Float", (int64)EType::Float },
		{ "EType::Name", (int64)EType::Name },
		{ "EType::Text", (int64)EType::Text },
		{ "EType::String", (int64)EType::String },
		{ "EType::Enum", (int64)EType::Enum },
		{ "EType::Class", (int64)EType::Class },
		{ "EType::Struct", (int64)EType::Struct },
		{ "EType::Object", (int64)EType::Object },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MagicNodeKismet_EType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MagicNodeKismet,
	nullptr,
	"EType",
	"EType",
	Z_Construct_UEnum_MagicNodeKismet_EType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MagicNodeKismet_EType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MagicNodeKismet_EType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MagicNodeKismet_EType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MagicNodeKismet_EType()
{
	if (!Z_Registration_Info_UEnum_EType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EType.InnerSingleton, Z_Construct_UEnum_MagicNodeKismet_EType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EType.InnerSingleton;
}
// End Enum EType

// Begin Enum EStack
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStack;
static UEnum* EStack_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EStack.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EStack.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MagicNodeKismet_EStack, (UObject*)Z_Construct_UPackage__Script_MagicNodeKismet(), TEXT("EStack"));
	}
	return Z_Registration_Info_UEnum_EStack.OuterSingleton;
}
template<> MAGICNODEKISMET_API UEnum* StaticEnum<EStack>()
{
	return EStack_StaticEnum();
}
struct Z_Construct_UEnum_MagicNodeKismet_EStack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Array.Name", "EStack::Array" },
		{ "Map.Name", "EStack::Map" },
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
		{ "None.Name", "EStack::None" },
		{ "Set.Name", "EStack::Set" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EStack::None", (int64)EStack::None },
		{ "EStack::Array", (int64)EStack::Array },
		{ "EStack::Set", (int64)EStack::Set },
		{ "EStack::Map", (int64)EStack::Map },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MagicNodeKismet_EStack_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MagicNodeKismet,
	nullptr,
	"EStack",
	"EStack",
	Z_Construct_UEnum_MagicNodeKismet_EStack_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MagicNodeKismet_EStack_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MagicNodeKismet_EStack_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MagicNodeKismet_EStack_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MagicNodeKismet_EStack()
{
	if (!Z_Registration_Info_UEnum_EStack.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStack.InnerSingleton, Z_Construct_UEnum_MagicNodeKismet_EStack_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EStack.InnerSingleton;
}
// End Enum EStack

// Begin Enum EFunctionFlag
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFunctionFlag;
static UEnum* EFunctionFlag_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFunctionFlag.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFunctionFlag.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MagicNodeKismet_EFunctionFlag, (UObject*)Z_Construct_UPackage__Script_MagicNodeKismet(), TEXT("EFunctionFlag"));
	}
	return Z_Registration_Info_UEnum_EFunctionFlag.OuterSingleton;
}
template<> MAGICNODEKISMET_API UEnum* StaticEnum<EFunctionFlag>()
{
	return EFunctionFlag_StaticEnum();
}
struct Z_Construct_UEnum_MagicNodeKismet_EFunctionFlag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Callable.Name", "EFunctionFlag::Callable" },
		{ "Const.Name", "EFunctionFlag::Const" },
		{ "Delegate.Name", "EFunctionFlag::Delegate" },
		{ "Event.Name", "EFunctionFlag::Event" },
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
		{ "Native.Name", "EFunctionFlag::Native" },
		{ "None.Name", "EFunctionFlag::None" },
		{ "Pure.Name", "EFunctionFlag::Pure" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFunctionFlag::None", (int64)EFunctionFlag::None },
		{ "EFunctionFlag::Pure", (int64)EFunctionFlag::Pure },
		{ "EFunctionFlag::Const", (int64)EFunctionFlag::Const },
		{ "EFunctionFlag::Event", (int64)EFunctionFlag::Event },
		{ "EFunctionFlag::Native", (int64)EFunctionFlag::Native },
		{ "EFunctionFlag::Callable", (int64)EFunctionFlag::Callable },
		{ "EFunctionFlag::Delegate", (int64)EFunctionFlag::Delegate },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MagicNodeKismet_EFunctionFlag_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MagicNodeKismet,
	nullptr,
	"EFunctionFlag",
	"EFunctionFlag",
	Z_Construct_UEnum_MagicNodeKismet_EFunctionFlag_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MagicNodeKismet_EFunctionFlag_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MagicNodeKismet_EFunctionFlag_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MagicNodeKismet_EFunctionFlag_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MagicNodeKismet_EFunctionFlag()
{
	if (!Z_Registration_Info_UEnum_EFunctionFlag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFunctionFlag.InnerSingleton, Z_Construct_UEnum_MagicNodeKismet_EFunctionFlag_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFunctionFlag.InnerSingleton;
}
// End Enum EFunctionFlag

// Begin Enum EAccessLevel
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAccessLevel;
static UEnum* EAccessLevel_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAccessLevel.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAccessLevel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MagicNodeKismet_EAccessLevel, (UObject*)Z_Construct_UPackage__Script_MagicNodeKismet(), TEXT("EAccessLevel"));
	}
	return Z_Registration_Info_UEnum_EAccessLevel.OuterSingleton;
}
template<> MAGICNODEKISMET_API UEnum* StaticEnum<EAccessLevel>()
{
	return EAccessLevel_StaticEnum();
}
struct Z_Construct_UEnum_MagicNodeKismet_EAccessLevel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
		{ "None.Name", "EAccessLevel::None" },
		{ "Private.Name", "EAccessLevel::Private" },
		{ "Protected.Name", "EAccessLevel::Protected" },
		{ "Public.Name", "EAccessLevel::Public" },
		{ "Static.Name", "EAccessLevel::Static" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAccessLevel::None", (int64)EAccessLevel::None },
		{ "EAccessLevel::Public", (int64)EAccessLevel::Public },
		{ "EAccessLevel::Private", (int64)EAccessLevel::Private },
		{ "EAccessLevel::Protected", (int64)EAccessLevel::Protected },
		{ "EAccessLevel::Static", (int64)EAccessLevel::Static },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MagicNodeKismet_EAccessLevel_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MagicNodeKismet,
	nullptr,
	"EAccessLevel",
	"EAccessLevel",
	Z_Construct_UEnum_MagicNodeKismet_EAccessLevel_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MagicNodeKismet_EAccessLevel_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MagicNodeKismet_EAccessLevel_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MagicNodeKismet_EAccessLevel_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MagicNodeKismet_EAccessLevel()
{
	if (!Z_Registration_Info_UEnum_EAccessLevel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAccessLevel.InnerSingleton, Z_Construct_UEnum_MagicNodeKismet_EAccessLevel_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAccessLevel.InnerSingleton;
}
// End Enum EAccessLevel

// Begin ScriptStruct FKeywordDefinition
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_KeywordDefinition;
class UScriptStruct* FKeywordDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_KeywordDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_KeywordDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKeywordDefinition, (UObject*)Z_Construct_UPackage__Script_MagicNodeKismet(), TEXT("KeywordDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_KeywordDefinition.OuterSingleton;
}
template<> MAGICNODEKISMET_API UScriptStruct* StaticStruct<FKeywordDefinition>()
{
	return FKeywordDefinition::StaticStruct();
}
struct Z_Construct_UScriptStruct_FKeywordDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Info_MetaData[] = {
		{ "Category", "Definitions" },
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Info;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKeywordDefinition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FKeywordDefinition_Statics::NewProp_Info = { "Info", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKeywordDefinition, Info), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Info_MetaData), NewProp_Info_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKeywordDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeywordDefinition_Statics::NewProp_Info,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeywordDefinition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKeywordDefinition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MagicNodeKismet,
	nullptr,
	&NewStructOps,
	"KeywordDefinition",
	Z_Construct_UScriptStruct_FKeywordDefinition_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeywordDefinition_Statics::PropPointers),
	sizeof(FKeywordDefinition),
	alignof(FKeywordDefinition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeywordDefinition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FKeywordDefinition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FKeywordDefinition()
{
	if (!Z_Registration_Info_UScriptStruct_KeywordDefinition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_KeywordDefinition.InnerSingleton, Z_Construct_UScriptStruct_FKeywordDefinition_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_KeywordDefinition.InnerSingleton;
}
// End ScriptStruct FKeywordDefinition

// Begin ScriptStruct FPropertyDefinition
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PropertyDefinition;
class UScriptStruct* FPropertyDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PropertyDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PropertyDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPropertyDefinition, (UObject*)Z_Construct_UPackage__Script_MagicNodeKismet(), TEXT("PropertyDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_PropertyDefinition.OuterSingleton;
}
template<> MAGICNODEKISMET_API UScriptStruct* StaticStruct<FPropertyDefinition>()
{
	return FPropertyDefinition::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPropertyDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TypeOf_MetaData[] = {
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StackOf_MetaData[] = {
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Access_MetaData[] = {
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnType_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n" },
#endif
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tooltip_MetaData[] = {
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hint_MetaData[] = {
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TypeOf_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TypeOf;
	static const UECodeGen_Private::FBytePropertyParams NewProp_StackOf_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_StackOf;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Access_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Access;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Tooltip;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Hint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPropertyDefinition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPropertyDefinition_Statics::NewProp_TypeOf_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPropertyDefinition_Statics::NewProp_TypeOf = { "TypeOf", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPropertyDefinition, TypeOf), Z_Construct_UEnum_MagicNodeKismet_EType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TypeOf_MetaData), NewProp_TypeOf_MetaData) }; // 3310335230
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPropertyDefinition_Statics::NewProp_StackOf_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPropertyDefinition_Statics::NewProp_StackOf = { "StackOf", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPropertyDefinition, StackOf), Z_Construct_UEnum_MagicNodeKismet_EStack, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StackOf_MetaData), NewProp_StackOf_MetaData) }; // 3502603192
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPropertyDefinition_Statics::NewProp_Access_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPropertyDefinition_Statics::NewProp_Access = { "Access", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPropertyDefinition, Access), Z_Construct_UEnum_MagicNodeKismet_EAccessLevel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Access_MetaData), NewProp_Access_MetaData) }; // 2579443941
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPropertyDefinition_Statics::NewProp_ReturnType = { "ReturnType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPropertyDefinition, ReturnType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnType_MetaData), NewProp_ReturnType_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPropertyDefinition_Statics::NewProp_Tooltip = { "Tooltip", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPropertyDefinition, Tooltip), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tooltip_MetaData), NewProp_Tooltip_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPropertyDefinition_Statics::NewProp_Hint = { "Hint", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPropertyDefinition, Hint), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hint_MetaData), NewProp_Hint_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPropertyDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyDefinition_Statics::NewProp_TypeOf_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyDefinition_Statics::NewProp_TypeOf,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyDefinition_Statics::NewProp_StackOf_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyDefinition_Statics::NewProp_StackOf,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyDefinition_Statics::NewProp_Access_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyDefinition_Statics::NewProp_Access,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyDefinition_Statics::NewProp_ReturnType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyDefinition_Statics::NewProp_Tooltip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyDefinition_Statics::NewProp_Hint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyDefinition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPropertyDefinition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MagicNodeKismet,
	nullptr,
	&NewStructOps,
	"PropertyDefinition",
	Z_Construct_UScriptStruct_FPropertyDefinition_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyDefinition_Statics::PropPointers),
	sizeof(FPropertyDefinition),
	alignof(FPropertyDefinition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyDefinition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPropertyDefinition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPropertyDefinition()
{
	if (!Z_Registration_Info_UScriptStruct_PropertyDefinition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PropertyDefinition.InnerSingleton, Z_Construct_UScriptStruct_FPropertyDefinition_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PropertyDefinition.InnerSingleton;
}
// End ScriptStruct FPropertyDefinition

// Begin ScriptStruct FFunctionDefinition
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FunctionDefinition;
class UScriptStruct* FFunctionDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FunctionDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FunctionDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFunctionDefinition, (UObject*)Z_Construct_UPackage__Script_MagicNodeKismet(), TEXT("FunctionDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_FunctionDefinition.OuterSingleton;
}
template<> MAGICNODEKISMET_API UScriptStruct* StaticStruct<FFunctionDefinition>()
{
	return FFunctionDefinition::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFunctionDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TypeOf_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n" },
#endif
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StackOf_MetaData[] = {
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Flag_MetaData[] = {
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Access_MetaData[] = {
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Inputs_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n" },
#endif
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Outputs_MetaData[] = {
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnType_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n" },
#endif
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tooltip_MetaData[] = {
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hint_MetaData[] = {
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TypeOf_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TypeOf;
	static const UECodeGen_Private::FBytePropertyParams NewProp_StackOf_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_StackOf;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Flag_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Flag;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Access_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Access;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Inputs_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_Inputs;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Outputs_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_Outputs;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Tooltip;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Hint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFunctionDefinition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_TypeOf_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_TypeOf = { "TypeOf", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFunctionDefinition, TypeOf), Z_Construct_UEnum_MagicNodeKismet_EType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TypeOf_MetaData), NewProp_TypeOf_MetaData) }; // 3310335230
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_StackOf_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_StackOf = { "StackOf", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFunctionDefinition, StackOf), Z_Construct_UEnum_MagicNodeKismet_EStack, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StackOf_MetaData), NewProp_StackOf_MetaData) }; // 3502603192
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_Flag_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_Flag = { "Flag", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFunctionDefinition, Flag), Z_Construct_UEnum_MagicNodeKismet_EFunctionFlag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Flag_MetaData), NewProp_Flag_MetaData) }; // 4179337826
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_Access_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_Access = { "Access", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFunctionDefinition, Access), Z_Construct_UEnum_MagicNodeKismet_EAccessLevel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Access_MetaData), NewProp_Access_MetaData) }; // 2579443941
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_Inputs_ElementProp = { "Inputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_Inputs = { "Inputs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFunctionDefinition, Inputs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Inputs_MetaData), NewProp_Inputs_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_Outputs_ElementProp = { "Outputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_Outputs = { "Outputs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFunctionDefinition, Outputs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Outputs_MetaData), NewProp_Outputs_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_ReturnType = { "ReturnType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFunctionDefinition, ReturnType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnType_MetaData), NewProp_ReturnType_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_Tooltip = { "Tooltip", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFunctionDefinition, Tooltip), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tooltip_MetaData), NewProp_Tooltip_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_Hint = { "Hint", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFunctionDefinition, Hint), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hint_MetaData), NewProp_Hint_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFunctionDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_TypeOf_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_TypeOf,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_StackOf_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_StackOf,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_Flag_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_Flag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_Access_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_Access,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_Inputs_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_Inputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_Outputs_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_Outputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_ReturnType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_Tooltip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_Hint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFunctionDefinition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFunctionDefinition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MagicNodeKismet,
	nullptr,
	&NewStructOps,
	"FunctionDefinition",
	Z_Construct_UScriptStruct_FFunctionDefinition_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFunctionDefinition_Statics::PropPointers),
	sizeof(FFunctionDefinition),
	alignof(FFunctionDefinition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFunctionDefinition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFunctionDefinition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFunctionDefinition()
{
	if (!Z_Registration_Info_UScriptStruct_FunctionDefinition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FunctionDefinition.InnerSingleton, Z_Construct_UScriptStruct_FFunctionDefinition_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FunctionDefinition.InnerSingleton;
}
// End ScriptStruct FFunctionDefinition

// Begin ScriptStruct FClassDefinition
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClassDefinition;
class UScriptStruct* FClassDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClassDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClassDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClassDefinition, (UObject*)Z_Construct_UPackage__Script_MagicNodeKismet(), TEXT("ClassDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_ClassDefinition.OuterSingleton;
}
template<> MAGICNODEKISMET_API UScriptStruct* StaticStruct<FClassDefinition>()
{
	return FClassDefinition::StaticStruct();
}
struct Z_Construct_UScriptStruct_FClassDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variables_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n" },
#endif
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Functions_MetaData[] = {
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentClass_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n" },
#endif
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tooltip_MetaData[] = {
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hint_MetaData[] = {
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Variables_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Variables_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Variables;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Functions_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Functions_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Functions;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ParentClass;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Tooltip;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Hint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClassDefinition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClassDefinition_Statics::NewProp_Variables_ValueProp = { "Variables", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FPropertyDefinition, METADATA_PARAMS(0, nullptr) }; // 165694290
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClassDefinition_Statics::NewProp_Variables_Key_KeyProp = { "Variables_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FClassDefinition_Statics::NewProp_Variables = { "Variables", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClassDefinition, Variables), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variables_MetaData), NewProp_Variables_MetaData) }; // 165694290
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClassDefinition_Statics::NewProp_Functions_ValueProp = { "Functions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FFunctionDefinition, METADATA_PARAMS(0, nullptr) }; // 1073733200
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClassDefinition_Statics::NewProp_Functions_Key_KeyProp = { "Functions_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FClassDefinition_Statics::NewProp_Functions = { "Functions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClassDefinition, Functions), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Functions_MetaData), NewProp_Functions_MetaData) }; // 1073733200
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClassDefinition_Statics::NewProp_ParentClass = { "ParentClass", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClassDefinition, ParentClass), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentClass_MetaData), NewProp_ParentClass_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClassDefinition_Statics::NewProp_Tooltip = { "Tooltip", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClassDefinition, Tooltip), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tooltip_MetaData), NewProp_Tooltip_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClassDefinition_Statics::NewProp_Hint = { "Hint", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClassDefinition, Hint), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hint_MetaData), NewProp_Hint_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClassDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassDefinition_Statics::NewProp_Variables_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassDefinition_Statics::NewProp_Variables_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassDefinition_Statics::NewProp_Variables,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassDefinition_Statics::NewProp_Functions_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassDefinition_Statics::NewProp_Functions_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassDefinition_Statics::NewProp_Functions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassDefinition_Statics::NewProp_ParentClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassDefinition_Statics::NewProp_Tooltip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassDefinition_Statics::NewProp_Hint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassDefinition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClassDefinition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MagicNodeKismet,
	nullptr,
	&NewStructOps,
	"ClassDefinition",
	Z_Construct_UScriptStruct_FClassDefinition_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassDefinition_Statics::PropPointers),
	sizeof(FClassDefinition),
	alignof(FClassDefinition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassDefinition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FClassDefinition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FClassDefinition()
{
	if (!Z_Registration_Info_UScriptStruct_ClassDefinition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClassDefinition.InnerSingleton, Z_Construct_UScriptStruct_FClassDefinition_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ClassDefinition.InnerSingleton;
}
// End ScriptStruct FClassDefinition

// Begin ScriptStruct FClassRedirector
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClassRedirector;
class UScriptStruct* FClassRedirector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClassRedirector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClassRedirector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClassRedirector, (UObject*)Z_Construct_UPackage__Script_MagicNodeKismet(), TEXT("ClassRedirector"));
	}
	return Z_Registration_Info_UScriptStruct_ClassRedirector.OuterSingleton;
}
template<> MAGICNODEKISMET_API UScriptStruct* StaticStruct<FClassRedirector>()
{
	return FClassRedirector::StaticStruct();
}
struct Z_Construct_UScriptStruct_FClassRedirector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectClass_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n" },
#endif
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hint_MetaData[] = {
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ObjectClass;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OwnerClass;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ObjectName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Hint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClassRedirector>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClassRedirector_Statics::NewProp_ObjectClass = { "ObjectClass", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClassRedirector, ObjectClass), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectClass_MetaData), NewProp_ObjectClass_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClassRedirector_Statics::NewProp_OwnerClass = { "OwnerClass", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClassRedirector, OwnerClass), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerClass_MetaData), NewProp_OwnerClass_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClassRedirector_Statics::NewProp_ObjectName = { "ObjectName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClassRedirector, ObjectName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectName_MetaData), NewProp_ObjectName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClassRedirector_Statics::NewProp_Hint = { "Hint", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClassRedirector, Hint), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hint_MetaData), NewProp_Hint_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClassRedirector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassRedirector_Statics::NewProp_ObjectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassRedirector_Statics::NewProp_OwnerClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassRedirector_Statics::NewProp_ObjectName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassRedirector_Statics::NewProp_Hint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassRedirector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClassRedirector_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MagicNodeKismet,
	nullptr,
	&NewStructOps,
	"ClassRedirector",
	Z_Construct_UScriptStruct_FClassRedirector_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassRedirector_Statics::PropPointers),
	sizeof(FClassRedirector),
	alignof(FClassRedirector),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassRedirector_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FClassRedirector_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FClassRedirector()
{
	if (!Z_Registration_Info_UScriptStruct_ClassRedirector.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClassRedirector.InnerSingleton, Z_Construct_UScriptStruct_FClassRedirector_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ClassRedirector.InnerSingleton;
}
// End ScriptStruct FClassRedirector

// Begin Class UMGC_KeywordDB
void UMGC_KeywordDB::StaticRegisterNativesUMGC_KeywordDB()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMGC_KeywordDB);
UClass* Z_Construct_UClass_UMGC_KeywordDB_NoRegister()
{
	return UMGC_KeywordDB::StaticClass();
}
struct Z_Construct_UClass_UMGC_KeywordDB_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Synaptech" },
		{ "ClassGroupNames", "Synaptech" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n/// MGC Parser Database Classes:\n" },
#endif
		{ "IncludePath", "KMGC_KismetTypes.h" },
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MGC Parser Database Classes:" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScriptCore_MetaData[] = {
		{ "Category", "Keywords" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* MGC Default Scripting Keywords. */" },
#endif
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MGC Default Scripting Keywords." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Operators_MetaData[] = {
		{ "Category", "Keywords" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* MGC Default Operator Keywords. */" },
#endif
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MGC Default Operator Keywords." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Processors_MetaData[] = {
		{ "Category", "Keywords" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* MGC Default Pre-Processor Keywords. */" },
#endif
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MGC Default Pre-Processor Keywords." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Macros_MetaData[] = {
		{ "Category", "Keywords" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* MGC Default Macro Keywords. */" },
#endif
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MGC Default Macro Keywords." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Extensions_MetaData[] = {
		{ "Category", "Keywords" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n" },
#endif
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ScriptCore_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ScriptCore;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Operators_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_Operators;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Processors_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_Processors;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Macros_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_Macros;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Extensions_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_Extensions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMGC_KeywordDB>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMGC_KeywordDB_Statics::NewProp_ScriptCore_ElementProp = { "ScriptCore", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UMGC_KeywordDB_Statics::NewProp_ScriptCore = { "ScriptCore", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMGC_KeywordDB, ScriptCore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScriptCore_MetaData), NewProp_ScriptCore_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMGC_KeywordDB_Statics::NewProp_Operators_ElementProp = { "Operators", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UMGC_KeywordDB_Statics::NewProp_Operators = { "Operators", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMGC_KeywordDB, Operators), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Operators_MetaData), NewProp_Operators_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMGC_KeywordDB_Statics::NewProp_Processors_ElementProp = { "Processors", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UMGC_KeywordDB_Statics::NewProp_Processors = { "Processors", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMGC_KeywordDB, Processors), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Processors_MetaData), NewProp_Processors_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMGC_KeywordDB_Statics::NewProp_Macros_ElementProp = { "Macros", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UMGC_KeywordDB_Statics::NewProp_Macros = { "Macros", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMGC_KeywordDB, Macros), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Macros_MetaData), NewProp_Macros_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMGC_KeywordDB_Statics::NewProp_Extensions_ElementProp = { "Extensions", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UMGC_KeywordDB_Statics::NewProp_Extensions = { "Extensions", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMGC_KeywordDB, Extensions), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Extensions_MetaData), NewProp_Extensions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMGC_KeywordDB_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGC_KeywordDB_Statics::NewProp_ScriptCore_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGC_KeywordDB_Statics::NewProp_ScriptCore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGC_KeywordDB_Statics::NewProp_Operators_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGC_KeywordDB_Statics::NewProp_Operators,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGC_KeywordDB_Statics::NewProp_Processors_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGC_KeywordDB_Statics::NewProp_Processors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGC_KeywordDB_Statics::NewProp_Macros_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGC_KeywordDB_Statics::NewProp_Macros,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGC_KeywordDB_Statics::NewProp_Extensions_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGC_KeywordDB_Statics::NewProp_Extensions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMGC_KeywordDB_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMGC_KeywordDB_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MagicNodeKismet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMGC_KeywordDB_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMGC_KeywordDB_Statics::ClassParams = {
	&UMGC_KeywordDB::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMGC_KeywordDB_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMGC_KeywordDB_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMGC_KeywordDB_Statics::Class_MetaDataParams), Z_Construct_UClass_UMGC_KeywordDB_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMGC_KeywordDB()
{
	if (!Z_Registration_Info_UClass_UMGC_KeywordDB.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMGC_KeywordDB.OuterSingleton, Z_Construct_UClass_UMGC_KeywordDB_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMGC_KeywordDB.OuterSingleton;
}
template<> MAGICNODEKISMET_API UClass* StaticClass<UMGC_KeywordDB>()
{
	return UMGC_KeywordDB::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMGC_KeywordDB);
UMGC_KeywordDB::~UMGC_KeywordDB() {}
// End Class UMGC_KeywordDB

// Begin Class UMGC_ClassDB
void UMGC_ClassDB::StaticRegisterNativesUMGC_ClassDB()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMGC_ClassDB);
UClass* Z_Construct_UClass_UMGC_ClassDB_NoRegister()
{
	return UMGC_ClassDB::StaticClass();
}
struct Z_Construct_UClass_UMGC_ClassDB_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Synaptech" },
		{ "ClassGroupNames", "Synaptech" },
		{ "IncludePath", "KMGC_KismetTypes.h" },
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScriptCore_MetaData[] = {
		{ "Category", "Keywords" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* MGC Default Scripting Classes. */" },
#endif
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MGC Default Scripting Classes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScriptTypes_MetaData[] = {
		{ "Category", "Keywords" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* MGC Default Type Definitions. */" },
#endif
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MGC Default Type Definitions." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Extensions_MetaData[] = {
		{ "Category", "Keywords" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n" },
#endif
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ScriptCore_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ScriptCore;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ScriptTypes_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ScriptTypes;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Extensions_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_Extensions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMGC_ClassDB>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMGC_ClassDB_Statics::NewProp_ScriptCore_ElementProp = { "ScriptCore", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UMGC_ClassDB_Statics::NewProp_ScriptCore = { "ScriptCore", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMGC_ClassDB, ScriptCore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScriptCore_MetaData), NewProp_ScriptCore_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMGC_ClassDB_Statics::NewProp_ScriptTypes_ElementProp = { "ScriptTypes", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UMGC_ClassDB_Statics::NewProp_ScriptTypes = { "ScriptTypes", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMGC_ClassDB, ScriptTypes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScriptTypes_MetaData), NewProp_ScriptTypes_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMGC_ClassDB_Statics::NewProp_Extensions_ElementProp = { "Extensions", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UMGC_ClassDB_Statics::NewProp_Extensions = { "Extensions", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMGC_ClassDB, Extensions), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Extensions_MetaData), NewProp_Extensions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMGC_ClassDB_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGC_ClassDB_Statics::NewProp_ScriptCore_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGC_ClassDB_Statics::NewProp_ScriptCore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGC_ClassDB_Statics::NewProp_ScriptTypes_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGC_ClassDB_Statics::NewProp_ScriptTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGC_ClassDB_Statics::NewProp_Extensions_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGC_ClassDB_Statics::NewProp_Extensions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMGC_ClassDB_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMGC_ClassDB_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MagicNodeKismet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMGC_ClassDB_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMGC_ClassDB_Statics::ClassParams = {
	&UMGC_ClassDB::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMGC_ClassDB_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMGC_ClassDB_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMGC_ClassDB_Statics::Class_MetaDataParams), Z_Construct_UClass_UMGC_ClassDB_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMGC_ClassDB()
{
	if (!Z_Registration_Info_UClass_UMGC_ClassDB.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMGC_ClassDB.OuterSingleton, Z_Construct_UClass_UMGC_ClassDB_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMGC_ClassDB.OuterSingleton;
}
template<> MAGICNODEKISMET_API UClass* StaticClass<UMGC_ClassDB>()
{
	return UMGC_ClassDB::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMGC_ClassDB);
UMGC_ClassDB::~UMGC_ClassDB() {}
// End Class UMGC_ClassDB

// Begin Class UMGC_FunctionDB
void UMGC_FunctionDB::StaticRegisterNativesUMGC_FunctionDB()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMGC_FunctionDB);
UClass* Z_Construct_UClass_UMGC_FunctionDB_NoRegister()
{
	return UMGC_FunctionDB::StaticClass();
}
struct Z_Construct_UClass_UMGC_FunctionDB_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Synaptech" },
		{ "ClassGroupNames", "Synaptech" },
		{ "IncludePath", "KMGC_KismetTypes.h" },
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScriptCore_MetaData[] = {
		{ "Category", "Keywords" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* MGC Default Scripting Classes. */" },
#endif
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MGC Default Scripting Classes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Extensions_MetaData[] = {
		{ "Category", "Keywords" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n" },
#endif
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ScriptCore_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ScriptCore;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Extensions_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_Extensions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMGC_FunctionDB>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMGC_FunctionDB_Statics::NewProp_ScriptCore_ElementProp = { "ScriptCore", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UMGC_FunctionDB_Statics::NewProp_ScriptCore = { "ScriptCore", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMGC_FunctionDB, ScriptCore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScriptCore_MetaData), NewProp_ScriptCore_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMGC_FunctionDB_Statics::NewProp_Extensions_ElementProp = { "Extensions", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UMGC_FunctionDB_Statics::NewProp_Extensions = { "Extensions", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMGC_FunctionDB, Extensions), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Extensions_MetaData), NewProp_Extensions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMGC_FunctionDB_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGC_FunctionDB_Statics::NewProp_ScriptCore_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGC_FunctionDB_Statics::NewProp_ScriptCore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGC_FunctionDB_Statics::NewProp_Extensions_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGC_FunctionDB_Statics::NewProp_Extensions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMGC_FunctionDB_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMGC_FunctionDB_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MagicNodeKismet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMGC_FunctionDB_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMGC_FunctionDB_Statics::ClassParams = {
	&UMGC_FunctionDB::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMGC_FunctionDB_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMGC_FunctionDB_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMGC_FunctionDB_Statics::Class_MetaDataParams), Z_Construct_UClass_UMGC_FunctionDB_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMGC_FunctionDB()
{
	if (!Z_Registration_Info_UClass_UMGC_FunctionDB.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMGC_FunctionDB.OuterSingleton, Z_Construct_UClass_UMGC_FunctionDB_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMGC_FunctionDB.OuterSingleton;
}
template<> MAGICNODEKISMET_API UClass* StaticClass<UMGC_FunctionDB>()
{
	return UMGC_FunctionDB::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMGC_FunctionDB);
UMGC_FunctionDB::~UMGC_FunctionDB() {}
// End Class UMGC_FunctionDB

// Begin Class UMGC_SemanticDB
void UMGC_SemanticDB::StaticRegisterNativesUMGC_SemanticDB()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMGC_SemanticDB);
UClass* Z_Construct_UClass_UMGC_SemanticDB_NoRegister()
{
	return UMGC_SemanticDB::StaticClass();
}
struct Z_Construct_UClass_UMGC_SemanticDB_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Synaptech" },
		{ "ClassGroupNames", "Synaptech" },
		{ "IncludePath", "KMGC_KismetTypes.h" },
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeywordDefinitions_MetaData[] = {
		{ "Category", "Definitions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* MGC Default Scripting Keyword Definitions. */" },
#endif
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MGC Default Scripting Keyword Definitions." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TypeDefinitions_MetaData[] = {
		{ "Category", "Definitions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* MGC Default Scripting Type Definitions. */" },
#endif
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MGC Default Scripting Type Definitions." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MacroDefinitions_MetaData[] = {
		{ "Category", "Definitions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* MGC Default Scripting Macro Definitions. */" },
#endif
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MGC Default Scripting Macro Definitions." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClassDefinitions_MetaData[] = {
		{ "Category", "Definitions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* MGC Default Scripting Class Definitions. */" },
#endif
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MGC Default Scripting Class Definitions." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClassRedirectors_MetaData[] = {
		{ "Category", "Definitions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* MGC Default Scripting Map of Instantiated Classes. */" },
#endif
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MGC Default Scripting Map of Instantiated Classes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Documentation_MetaData[] = {
		{ "Category", "API Reference" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* MGC Important Classes' Documentation. */" },
#endif
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MGC Important Classes' Documentation." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeywordDefinitions_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_KeywordDefinitions_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_KeywordDefinitions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TypeDefinitions_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TypeDefinitions_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TypeDefinitions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MacroDefinitions_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MacroDefinitions_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MacroDefinitions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClassDefinitions_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ClassDefinitions_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ClassDefinitions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClassRedirectors_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ClassRedirectors_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ClassRedirectors;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Documentation_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Documentation_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Documentation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMGC_SemanticDB>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_KeywordDefinitions_ValueProp = { "KeywordDefinitions", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FKeywordDefinition, METADATA_PARAMS(0, nullptr) }; // 136643683
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_KeywordDefinitions_Key_KeyProp = { "KeywordDefinitions_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_KeywordDefinitions = { "KeywordDefinitions", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMGC_SemanticDB, KeywordDefinitions), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeywordDefinitions_MetaData), NewProp_KeywordDefinitions_MetaData) }; // 136643683
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_TypeDefinitions_ValueProp = { "TypeDefinitions", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FKeywordDefinition, METADATA_PARAMS(0, nullptr) }; // 136643683
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_TypeDefinitions_Key_KeyProp = { "TypeDefinitions_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_TypeDefinitions = { "TypeDefinitions", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMGC_SemanticDB, TypeDefinitions), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TypeDefinitions_MetaData), NewProp_TypeDefinitions_MetaData) }; // 136643683
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_MacroDefinitions_ValueProp = { "MacroDefinitions", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FKeywordDefinition, METADATA_PARAMS(0, nullptr) }; // 136643683
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_MacroDefinitions_Key_KeyProp = { "MacroDefinitions_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_MacroDefinitions = { "MacroDefinitions", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMGC_SemanticDB, MacroDefinitions), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MacroDefinitions_MetaData), NewProp_MacroDefinitions_MetaData) }; // 136643683
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_ClassDefinitions_ValueProp = { "ClassDefinitions", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FClassDefinition, METADATA_PARAMS(0, nullptr) }; // 3011881454
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_ClassDefinitions_Key_KeyProp = { "ClassDefinitions_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_ClassDefinitions = { "ClassDefinitions", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMGC_SemanticDB, ClassDefinitions), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClassDefinitions_MetaData), NewProp_ClassDefinitions_MetaData) }; // 3011881454
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_ClassRedirectors_ValueProp = { "ClassRedirectors", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FClassRedirector, METADATA_PARAMS(0, nullptr) }; // 204660908
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_ClassRedirectors_Key_KeyProp = { "ClassRedirectors_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_ClassRedirectors = { "ClassRedirectors", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMGC_SemanticDB, ClassRedirectors), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClassRedirectors_MetaData), NewProp_ClassRedirectors_MetaData) }; // 204660908
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_Documentation_ValueProp = { "Documentation", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_Documentation_Key_KeyProp = { "Documentation_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_Documentation = { "Documentation", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMGC_SemanticDB, Documentation), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Documentation_MetaData), NewProp_Documentation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMGC_SemanticDB_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_KeywordDefinitions_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_KeywordDefinitions_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_KeywordDefinitions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_TypeDefinitions_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_TypeDefinitions_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_TypeDefinitions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_MacroDefinitions_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_MacroDefinitions_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_MacroDefinitions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_ClassDefinitions_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_ClassDefinitions_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_ClassDefinitions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_ClassRedirectors_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_ClassRedirectors_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_ClassRedirectors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_Documentation_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_Documentation_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_Documentation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMGC_SemanticDB_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMGC_SemanticDB_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MagicNodeKismet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMGC_SemanticDB_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMGC_SemanticDB_Statics::ClassParams = {
	&UMGC_SemanticDB::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMGC_SemanticDB_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMGC_SemanticDB_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMGC_SemanticDB_Statics::Class_MetaDataParams), Z_Construct_UClass_UMGC_SemanticDB_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMGC_SemanticDB()
{
	if (!Z_Registration_Info_UClass_UMGC_SemanticDB.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMGC_SemanticDB.OuterSingleton, Z_Construct_UClass_UMGC_SemanticDB_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMGC_SemanticDB.OuterSingleton;
}
template<> MAGICNODEKISMET_API UClass* StaticClass<UMGC_SemanticDB>()
{
	return UMGC_SemanticDB::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMGC_SemanticDB);
UMGC_SemanticDB::~UMGC_SemanticDB() {}
// End Class UMGC_SemanticDB

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_W013321M_Documents_GitHub_Beyond_Buttons_Project_Unreal_BEYONDBUTTONS_Plugins_MagicNode_Source_MagicNodeKismet_Classes_KMGC_KismetTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EType_StaticEnum, TEXT("EType"), &Z_Registration_Info_UEnum_EType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3310335230U) },
		{ EStack_StaticEnum, TEXT("EStack"), &Z_Registration_Info_UEnum_EStack, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3502603192U) },
		{ EFunctionFlag_StaticEnum, TEXT("EFunctionFlag"), &Z_Registration_Info_UEnum_EFunctionFlag, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4179337826U) },
		{ EAccessLevel_StaticEnum, TEXT("EAccessLevel"), &Z_Registration_Info_UEnum_EAccessLevel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2579443941U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FKeywordDefinition::StaticStruct, Z_Construct_UScriptStruct_FKeywordDefinition_Statics::NewStructOps, TEXT("KeywordDefinition"), &Z_Registration_Info_UScriptStruct_KeywordDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKeywordDefinition), 136643683U) },
		{ FPropertyDefinition::StaticStruct, Z_Construct_UScriptStruct_FPropertyDefinition_Statics::NewStructOps, TEXT("PropertyDefinition"), &Z_Registration_Info_UScriptStruct_PropertyDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPropertyDefinition), 165694290U) },
		{ FFunctionDefinition::StaticStruct, Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewStructOps, TEXT("FunctionDefinition"), &Z_Registration_Info_UScriptStruct_FunctionDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFunctionDefinition), 1073733200U) },
		{ FClassDefinition::StaticStruct, Z_Construct_UScriptStruct_FClassDefinition_Statics::NewStructOps, TEXT("ClassDefinition"), &Z_Registration_Info_UScriptStruct_ClassDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClassDefinition), 3011881454U) },
		{ FClassRedirector::StaticStruct, Z_Construct_UScriptStruct_FClassRedirector_Statics::NewStructOps, TEXT("ClassRedirector"), &Z_Registration_Info_UScriptStruct_ClassRedirector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClassRedirector), 204660908U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMGC_KeywordDB, UMGC_KeywordDB::StaticClass, TEXT("UMGC_KeywordDB"), &Z_Registration_Info_UClass_UMGC_KeywordDB, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMGC_KeywordDB), 2159745374U) },
		{ Z_Construct_UClass_UMGC_ClassDB, UMGC_ClassDB::StaticClass, TEXT("UMGC_ClassDB"), &Z_Registration_Info_UClass_UMGC_ClassDB, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMGC_ClassDB), 711782317U) },
		{ Z_Construct_UClass_UMGC_FunctionDB, UMGC_FunctionDB::StaticClass, TEXT("UMGC_FunctionDB"), &Z_Registration_Info_UClass_UMGC_FunctionDB, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMGC_FunctionDB), 801014353U) },
		{ Z_Construct_UClass_UMGC_SemanticDB, UMGC_SemanticDB::StaticClass, TEXT("UMGC_SemanticDB"), &Z_Registration_Info_UClass_UMGC_SemanticDB, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMGC_SemanticDB), 1578735192U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_W013321M_Documents_GitHub_Beyond_Buttons_Project_Unreal_BEYONDBUTTONS_Plugins_MagicNode_Source_MagicNodeKismet_Classes_KMGC_KismetTypes_h_2992573320(TEXT("/Script/MagicNodeKismet"),
	Z_CompiledInDeferFile_FID_Users_W013321M_Documents_GitHub_Beyond_Buttons_Project_Unreal_BEYONDBUTTONS_Plugins_MagicNode_Source_MagicNodeKismet_Classes_KMGC_KismetTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_W013321M_Documents_GitHub_Beyond_Buttons_Project_Unreal_BEYONDBUTTONS_Plugins_MagicNode_Source_MagicNodeKismet_Classes_KMGC_KismetTypes_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_W013321M_Documents_GitHub_Beyond_Buttons_Project_Unreal_BEYONDBUTTONS_Plugins_MagicNode_Source_MagicNodeKismet_Classes_KMGC_KismetTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_W013321M_Documents_GitHub_Beyond_Buttons_Project_Unreal_BEYONDBUTTONS_Plugins_MagicNode_Source_MagicNodeKismet_Classes_KMGC_KismetTypes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_W013321M_Documents_GitHub_Beyond_Buttons_Project_Unreal_BEYONDBUTTONS_Plugins_MagicNode_Source_MagicNodeKismet_Classes_KMGC_KismetTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_W013321M_Documents_GitHub_Beyond_Buttons_Project_Unreal_BEYONDBUTTONS_Plugins_MagicNode_Source_MagicNodeKismet_Classes_KMGC_KismetTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
