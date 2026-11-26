using UnrealBuildTool;

public class Chaos : ModuleRules {
    public Chaos(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "ChaosVDRuntime",
            "Core",
            "CoreUObject",
            "Engine",
        });
    }
}
