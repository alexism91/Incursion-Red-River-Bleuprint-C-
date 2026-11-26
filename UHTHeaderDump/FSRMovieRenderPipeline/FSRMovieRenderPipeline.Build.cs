using UnrealBuildTool;

public class FSRMovieRenderPipeline : ModuleRules {
    public FSRMovieRenderPipeline(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "MovieRenderPipelineCore",
        });
    }
}
