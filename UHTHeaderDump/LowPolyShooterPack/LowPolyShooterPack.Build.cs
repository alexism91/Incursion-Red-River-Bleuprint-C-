using UnrealBuildTool;

public class LowPolyShooterPack : ModuleRules {
    public LowPolyShooterPack(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "GameplayTags",
            "InputCore",
            "PhysicsCore",
            "UMG",
        });
    }
}
