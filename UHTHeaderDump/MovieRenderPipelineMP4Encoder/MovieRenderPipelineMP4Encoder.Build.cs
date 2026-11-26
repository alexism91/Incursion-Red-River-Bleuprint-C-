using UnrealBuildTool;

public class MovieRenderPipelineMP4Encoder : ModuleRules {
    public MovieRenderPipelineMP4Encoder(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "MovieRenderPipelineCore",
            "OpenColorIO",
        });
    }
}
