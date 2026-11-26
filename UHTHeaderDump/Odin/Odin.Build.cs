using UnrealBuildTool;

public class Odin : ModuleRules {
    public Odin(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AudioCapture",
            "AudioMixer",
            "Core",
            "CoreUObject",
            "Engine",
        });
    }
}
