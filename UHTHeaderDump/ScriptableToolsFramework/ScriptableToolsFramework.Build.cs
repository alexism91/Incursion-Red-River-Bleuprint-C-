using UnrealBuildTool;

public class ScriptableToolsFramework : ModuleRules {
    public ScriptableToolsFramework(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "InputCore",
            "InteractiveToolsFramework",
            "ModelingComponents",
            "UMG",
        });
    }
}
