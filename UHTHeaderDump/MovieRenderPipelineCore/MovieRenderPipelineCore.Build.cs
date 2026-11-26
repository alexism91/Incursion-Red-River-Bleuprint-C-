using UnrealBuildTool;

public class MovieRenderPipelineCore : ModuleRules {
    public MovieRenderPipelineCore(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "CinematicCamera",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "LevelSequence",
            "MovieScene",
            "MovieSceneTracks",
            "OpenColorIO",
            "UMG",
        });
    }
}
