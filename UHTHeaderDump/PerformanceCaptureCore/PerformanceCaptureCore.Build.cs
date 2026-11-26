using UnrealBuildTool;

public class PerformanceCaptureCore : ModuleRules {
    public PerformanceCaptureCore(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "IKRig",
            "LiveLinkInterface",
        });
    }
}
