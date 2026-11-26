using UnrealBuildTool;

public class GeometryCollectionDepNodes : ModuleRules {
    public GeometryCollectionDepNodes(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Chaos",
            "Core",
            "CoreUObject",
            "DataflowCore",
            "DataflowEnginePlugin",
            "Engine",
        });
    }
}
