using UnrealBuildTool;

public class HairStrandsCore : ModuleRules {
    public HairStrandsCore(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "ChaosCaching",
            "Core",
            "CoreUObject",
            "DataflowEngine",
            "Engine",
            "GeometryCache",
            "MovieScene",
            "Niagara",
        });
    }
}
