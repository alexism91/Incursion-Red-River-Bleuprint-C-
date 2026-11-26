using UnrealBuildTool;

public class MetaHumanCharacter : ModuleRules {
    public MetaHumanCharacter(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "MetaHumanCharacterPalette",
            "MetaHumanSDKRuntime",
        });
    }
}
