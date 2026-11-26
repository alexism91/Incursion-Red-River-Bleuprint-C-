using UnrealBuildTool;

public class ChaosOutfitAssetDataflowNodes : ModuleRules {
    public ChaosOutfitAssetDataflowNodes(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Chaos",
            "ChaosClothAssetEngine",
            "ChaosOutfitAssetEngine",
            "Core",
            "CoreUObject",
            "DataflowCore",
            "DataflowNodes",
            "Engine",
            "MeshResizingCore",
        });
    }
}
