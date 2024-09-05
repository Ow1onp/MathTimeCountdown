#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"  // 添加这个头文件，定义 IModuleInterface
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Delegates/DelegateCombinations.h"
#include "MathTime.generated.h"

// 使用 BlueprintAssignable 创建蓝图可绑定的委托
DECLARE_DYNAMIC_DELEGATE(FCountdownFinishedDelegate);

class FMathTimeModule : public IModuleInterface
{
public:
    /** IModuleInterface implementation */
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;
};

/** Blueprint Function Library for MathTime */
UCLASS()
class MATHTIME_API UMathTimeFunctionLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    /** BlueprintCallable function to start the countdown */
    UFUNCTION(BlueprintCallable, Category = "MathTime")
    static void StartCountdown(float InitialValue, float Duration, float& OutputValue, FCountdownFinishedDelegate OnCountdownFinished);
};