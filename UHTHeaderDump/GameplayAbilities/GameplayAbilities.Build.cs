using UnrealBuildTool;

public class GameplayAbilities : ModuleRules {
    public GameplayAbilities(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "DataRegistry",
            "DeveloperSettings",
            "Engine",
            "GameplayTags",
            "GameplayTasks",
            "IrisCore",
            "MovieScene",
            "NetCore",
            "Niagara",
            "PhysicsCore",
        });
    }
}
