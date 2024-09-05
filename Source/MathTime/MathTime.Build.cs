using UnrealBuildTool;

public class MathTime : ModuleRules
{
    public MathTime(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicIncludePaths.AddRange(
            new string[] {
                // Add public include paths required here ...
            }
        );

        PrivateIncludePaths.AddRange(
            new string[] {
                // Add other private include paths required here ...
            }
        );

        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                "CoreUObject",   // 包含 UObject 和 UFunction
                "Engine",        // 包含 TimerManager 和 GWorld
                "InputCore",     // 可选，输入处理
                "Slate",         // 可选，UI功能
                "SlateCore",     // 可选，UI框架
                "UMG",           // 可选，用户界面
                "GameplayTasks"  // 可选，处理任务
            }
        );

        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                // 添加私有依赖模块
            }
        );

        DynamicallyLoadedModuleNames.AddRange(
            new string[]
            {
                // 添加动态加载模块
            }
        );
    }
}