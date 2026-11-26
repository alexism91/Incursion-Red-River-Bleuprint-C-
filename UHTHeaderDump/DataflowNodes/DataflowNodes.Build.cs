using UnrealBuildTool;

public class DataflowNodes : ModuleRules {
    public DataflowNodes(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Chaos",
            "Core",
            "CoreUObject",
            "DataflowCore",
            "DataflowEnginePlugin",
            "Engine",
        });
    }
}
