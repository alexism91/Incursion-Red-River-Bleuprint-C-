using UnrealBuildTool;

public class HairStrandsSolver : ModuleRules {
    public HairStrandsSolver(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "DataflowCore",
            "DataflowSimulation",
            "Engine",
            "HairStrandsCore",
            "OptimusCore",
        });
    }
}
