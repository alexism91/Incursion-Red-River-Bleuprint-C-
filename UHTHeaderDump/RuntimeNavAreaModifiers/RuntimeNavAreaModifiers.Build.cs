using UnrealBuildTool;

public class RuntimeNavAreaModifiers : ModuleRules {
    public RuntimeNavAreaModifiers(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "NavigationSystem",
            "PCG",
        });
    }
}
