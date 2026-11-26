using UnrealBuildTool;

public class GeometryDataflowNodes : ModuleRules {
    public GeometryDataflowNodes(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "DataflowCore",
            "Engine",
            "GeometryFramework",
        });
    }
}
