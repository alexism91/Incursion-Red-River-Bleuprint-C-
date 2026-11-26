using UnrealBuildTool;

public class MetaHumanDefaultPipeline : ModuleRules {
    public MetaHumanDefaultPipeline(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "ChaosClothAssetEngine",
            "ChaosOutfitAssetEngine",
            "Core",
            "CoreUObject",
            "Engine",
            "HairStrandsCore",
            "MetaHumanCharacter",
            "MetaHumanCharacterPalette",
        });
    }
}
