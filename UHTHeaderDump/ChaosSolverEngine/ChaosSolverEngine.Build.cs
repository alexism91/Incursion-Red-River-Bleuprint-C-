using UnrealBuildTool;

public class ChaosSolverEngine : ModuleRules {
    public ChaosSolverEngine(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Chaos",
            "ChaosVDRuntime",
            "Core",
            "CoreUObject",
            "DataflowSimulation",
            "DeveloperSettings",
            "Engine",
        });
    }
}
