using UnrealBuildTool;

public class MetaHumanCharacterPalette : ModuleRules {
    public MetaHumanCharacterPalette(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "MetaHumanSDKRuntime",
        });
    }
}
