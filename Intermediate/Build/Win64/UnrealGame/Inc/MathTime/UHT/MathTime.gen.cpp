// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MathTime/Public/MathTime.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMathTime() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	MATHTIME_API UClass* Z_Construct_UClass_UMathTimeFunctionLibrary();
	MATHTIME_API UClass* Z_Construct_UClass_UMathTimeFunctionLibrary_NoRegister();
	MATHTIME_API UFunction* Z_Construct_UDelegateFunction_MathTime_CountdownFinishedDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_MathTime();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_MathTime_CountdownFinishedDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MathTime_CountdownFinishedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// \xe4\xbd\xbf\xe7\x94\xa8 BlueprintAssignable \xe5\x88\x9b\xe5\xbb\xba\xe8\x93\x9d\xe5\x9b\xbe\xe5\x8f\xaf\xe7\xbb\x91\xe5\xae\x9a\xe7\x9a\x84\xe5\xa7\x94\xe6\x89\x98\n" },
		{ "ModuleRelativePath", "Public/MathTime.h" },
		{ "ToolTip", "\xe4\xbd\xbf\xe7\x94\xa8 BlueprintAssignable \xe5\x88\x9b\xe5\xbb\xba\xe8\x93\x9d\xe5\x9b\xbe\xe5\x8f\xaf\xe7\xbb\x91\xe5\xae\x9a\xe7\x9a\x84\xe5\xa7\x94\xe6\x89\x98" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MathTime_CountdownFinishedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MathTime, nullptr, "CountdownFinishedDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MathTime_CountdownFinishedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MathTime_CountdownFinishedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MathTime_CountdownFinishedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MathTime_CountdownFinishedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UMathTimeFunctionLibrary::execStartCountdown)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InitialValue);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutputValue);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnCountdownFinished);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMathTimeFunctionLibrary::StartCountdown(Z_Param_InitialValue,Z_Param_Duration,Z_Param_Out_OutputValue,FCountdownFinishedDelegate(Z_Param_OnCountdownFinished));
		P_NATIVE_END;
	}
	void UMathTimeFunctionLibrary::StaticRegisterNativesUMathTimeFunctionLibrary()
	{
		UClass* Class = UMathTimeFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartCountdown", &UMathTimeFunctionLibrary::execStartCountdown },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMathTimeFunctionLibrary_StartCountdown_Statics
	{
		struct MathTimeFunctionLibrary_eventStartCountdown_Parms
		{
			float InitialValue;
			float Duration;
			float OutputValue;
			FScriptDelegate OnCountdownFinished;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialValue;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutputValue;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnCountdownFinished;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMathTimeFunctionLibrary_StartCountdown_Statics::NewProp_InitialValue = { "InitialValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MathTimeFunctionLibrary_eventStartCountdown_Parms, InitialValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMathTimeFunctionLibrary_StartCountdown_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MathTimeFunctionLibrary_eventStartCountdown_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMathTimeFunctionLibrary_StartCountdown_Statics::NewProp_OutputValue = { "OutputValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MathTimeFunctionLibrary_eventStartCountdown_Parms, OutputValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMathTimeFunctionLibrary_StartCountdown_Statics::NewProp_OnCountdownFinished = { "OnCountdownFinished", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MathTimeFunctionLibrary_eventStartCountdown_Parms, OnCountdownFinished), Z_Construct_UDelegateFunction_MathTime_CountdownFinishedDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 1257148356
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMathTimeFunctionLibrary_StartCountdown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathTimeFunctionLibrary_StartCountdown_Statics::NewProp_InitialValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathTimeFunctionLibrary_StartCountdown_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathTimeFunctionLibrary_StartCountdown_Statics::NewProp_OutputValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathTimeFunctionLibrary_StartCountdown_Statics::NewProp_OnCountdownFinished,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathTimeFunctionLibrary_StartCountdown_Statics::Function_MetaDataParams[] = {
		{ "Category", "MathTime" },
		{ "Comment", "/** BlueprintCallable function to start the countdown */" },
		{ "ModuleRelativePath", "Public/MathTime.h" },
		{ "ToolTip", "BlueprintCallable function to start the countdown" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMathTimeFunctionLibrary_StartCountdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMathTimeFunctionLibrary, nullptr, "StartCountdown", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMathTimeFunctionLibrary_StartCountdown_Statics::MathTimeFunctionLibrary_eventStartCountdown_Parms), Z_Construct_UFunction_UMathTimeFunctionLibrary_StartCountdown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathTimeFunctionLibrary_StartCountdown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMathTimeFunctionLibrary_StartCountdown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathTimeFunctionLibrary_StartCountdown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMathTimeFunctionLibrary_StartCountdown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMathTimeFunctionLibrary_StartCountdown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMathTimeFunctionLibrary);
	UClass* Z_Construct_UClass_UMathTimeFunctionLibrary_NoRegister()
	{
		return UMathTimeFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMathTimeFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMathTimeFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MathTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMathTimeFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMathTimeFunctionLibrary_StartCountdown, "StartCountdown" }, // 2569058665
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMathTimeFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Blueprint Function Library for MathTime */" },
		{ "IncludePath", "MathTime.h" },
		{ "ModuleRelativePath", "Public/MathTime.h" },
		{ "ToolTip", "Blueprint Function Library for MathTime" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMathTimeFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMathTimeFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMathTimeFunctionLibrary_Statics::ClassParams = {
		&UMathTimeFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMathTimeFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMathTimeFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMathTimeFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UMathTimeFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMathTimeFunctionLibrary.OuterSingleton, Z_Construct_UClass_UMathTimeFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMathTimeFunctionLibrary.OuterSingleton;
	}
	template<> MATHTIME_API UClass* StaticClass<UMathTimeFunctionLibrary>()
	{
		return UMathTimeFunctionLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMathTimeFunctionLibrary);
	UMathTimeFunctionLibrary::~UMathTimeFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Users_Administrator_Desktop_weishang_pack_MathTime_HostProject_Plugins_MathTime_Source_MathTime_Public_MathTime_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Administrator_Desktop_weishang_pack_MathTime_HostProject_Plugins_MathTime_Source_MathTime_Public_MathTime_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMathTimeFunctionLibrary, UMathTimeFunctionLibrary::StaticClass, TEXT("UMathTimeFunctionLibrary"), &Z_Registration_Info_UClass_UMathTimeFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMathTimeFunctionLibrary), 483689647U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Administrator_Desktop_weishang_pack_MathTime_HostProject_Plugins_MathTime_Source_MathTime_Public_MathTime_h_152636574(TEXT("/Script/MathTime"),
		Z_CompiledInDeferFile_FID_Users_Administrator_Desktop_weishang_pack_MathTime_HostProject_Plugins_MathTime_Source_MathTime_Public_MathTime_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Administrator_Desktop_weishang_pack_MathTime_HostProject_Plugins_MathTime_Source_MathTime_Public_MathTime_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
