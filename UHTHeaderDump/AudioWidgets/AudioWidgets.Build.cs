using UnrealBuildTool;

public class AudioWidgets : ModuleRules {
    public AudioWidgets(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AudioSynesthesia",
            "Core",
            "CoreUObject",
            "Engine",
            "SlateCore",
            "UMG",
        });
    }
}
