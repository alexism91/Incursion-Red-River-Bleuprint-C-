using UnrealBuildTool;

public class IRRMissionSystem : ModuleRules {
    public IRRMissionSystem(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AkAudio",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "GameplayTags",
            "GenericGraphRuntime",
            "IRRConfig",
            "IRRCoreUI",
            "IRREnhancedObjects",
            "IRRUltraDynamicSky",
            "SlateCore",
            "SteamSAL",
            "Test_C",
            "UMG",
        });
    }
}
