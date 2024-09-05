// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMathTime_init() {}
	MATHTIME_API UFunction* Z_Construct_UDelegateFunction_MathTime_CountdownFinishedDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MathTime;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MathTime()
	{
		if (!Z_Registration_Info_UPackage__Script_MathTime.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_MathTime_CountdownFinishedDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MathTime",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xB85A8A46,
				0x7F618707,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MathTime.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MathTime.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MathTime(Z_Construct_UPackage__Script_MathTime, TEXT("/Script/MathTime"), Z_Registration_Info_UPackage__Script_MathTime, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xB85A8A46, 0x7F618707));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
