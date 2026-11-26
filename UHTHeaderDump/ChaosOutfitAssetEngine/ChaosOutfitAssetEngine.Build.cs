using UnrealBuildTool;

public class ChaosOutfitAssetEngine : ModuleRules {
    public ChaosOutfitAssetEngine(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Chaos",
            "ChaosClothAssetEngine",
            "Core",
            "CoreUObject",
            "Engine",
        });
    }
}
