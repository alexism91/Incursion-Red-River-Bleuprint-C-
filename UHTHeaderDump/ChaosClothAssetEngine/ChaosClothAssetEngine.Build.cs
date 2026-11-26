using UnrealBuildTool;

public class ChaosClothAssetEngine : ModuleRules {
    public ChaosClothAssetEngine(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "ClothingSystemRuntimeCommon",
            "ClothingSystemRuntimeInterface",
            "Core",
            "CoreUObject",
            "DataflowEngine",
            "DataflowSimulation",
            "Engine",
        });
    }
}
