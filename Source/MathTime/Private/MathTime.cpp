#include "MathTime.h"
#include "TimerManager.h"  // 添加这个头文件，用于 TimerHandle
#include "Engine/World.h"
#include "Engine/Engine.h"

#define LOCTEXT_NAMESPACE "FMathTimeModule"

void FMathTimeModule::StartupModule()
{
    // Module startup code here
}

void FMathTimeModule::ShutdownModule()
{
    // Module shutdown code here
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FMathTimeModule, MathTime)

// Static variables for managing countdown
static FTimerHandle TimerHandle;
static float CurrentValue;
static float InitialValue;
static int32 TotalFrames;
static int32 CurrentFrame;

/** Function implementation */
void UMathTimeFunctionLibrary::StartCountdown(float InInitialValue, float Duration, float& OutputValue, FCountdownFinishedDelegate OnCountdownFinished)
{
    // Assume 30 frames per second
    const int32 FramesPerSecond = 30;

    // Calculate the total number of frames for the given duration
    TotalFrames = FramesPerSecond * Duration;

    // Ensure the duration and frames are valid
    if (TotalFrames <= 0)
    {
        OutputValue = InInitialValue;  // Set the output value to initial in case of invalid duration
        return;
    }

    // Initialize the current value, initial value and frame count
    CurrentValue = InInitialValue;
    InitialValue = InInitialValue;
    CurrentFrame = 0;

    // Do not set OutputValue to 0 immediately, instead keep it at its initial value
    OutputValue = CurrentValue;

    // Set a timer to reduce the value on each frame
    if (GWorld)
    {
        GWorld->GetTimerManager().SetTimer(TimerHandle, [&OutputValue, OnCountdownFinished]()
            {
                CurrentFrame++;

                // Calculate the eased value based on the current frame using InterpExpoOut
                float Alpha = (float)CurrentFrame / (float)TotalFrames;

                // Use InterpExpoOut for exponential decay effect
                CurrentValue = FMath::InterpExpoOut(InitialValue, 0.0f, Alpha);

                // Update the output value to the current countdown value
                OutputValue = CurrentValue;

                // Log the current value for debugging purposes
                UE_LOG(LogTemp, Warning, TEXT("Frame %d: Current Value: %f"), CurrentFrame, CurrentValue);

                // Stop the timer when the countdown reaches 0 or the final frame
                if (CurrentFrame >= TotalFrames)
                {
                    CurrentValue = 0;  // Ensure it reaches exactly zero at the end
                    OutputValue = 0;
                    GWorld->GetTimerManager().ClearTimer(TimerHandle);

                    // Trigger the countdown finished delegate
                    OnCountdownFinished.ExecuteIfBound();
                }

            }, 1.0f / FramesPerSecond, true);  // Update every frame (30 frames per second)
    }
}