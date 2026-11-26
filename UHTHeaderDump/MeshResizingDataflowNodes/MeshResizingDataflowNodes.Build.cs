using UnrealBuildTool;

public class MeshResizingDataflowNodes : ModuleRules {
    public MeshResizingDataflowNodes(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "DataflowCore",
            "DataflowEngine",
            "Engine",
            "GeometryFramework",
            "MeshResizingCore",
        });
    }
}
