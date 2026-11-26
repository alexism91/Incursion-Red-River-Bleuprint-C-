using UnrealBuildTool;

public class LensComponent : ModuleRules {
    public LensComponent(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "CameraCalibrationCore",
            "CinematicCamera",
            "Core",
            "CoreUObject",
            "Engine",
        });
    }
}
