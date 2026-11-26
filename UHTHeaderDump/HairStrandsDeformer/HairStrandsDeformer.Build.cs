using UnrealBuildTool;

public class HairStrandsDeformer : ModuleRules {
    public HairStrandsDeformer(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "ComputeFramework",
            "Core",
            "CoreUObject",
            "Engine",
            "HairStrandsSolver",
            "OptimusCore",
        });
    }
}
