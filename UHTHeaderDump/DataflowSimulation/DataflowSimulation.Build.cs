using UnrealBuildTool;

public class DataflowSimulation : ModuleRules {
    public DataflowSimulation(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "DataflowCore",
            "DataflowEngine",
            "Engine",
        });
    }
}
