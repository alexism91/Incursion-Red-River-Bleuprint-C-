using UnrealBuildTool;

public class IRRAdvancedAI : ModuleRules {
    public IRRAdvancedAI(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "GameplayTags",
            "HTN",
            "IRRConfig",
            "LXR",
            "NavigationSystem",
            "PCG",
        });
    }
}
