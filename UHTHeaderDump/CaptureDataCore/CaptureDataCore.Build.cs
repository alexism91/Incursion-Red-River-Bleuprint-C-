using UnrealBuildTool;

public class CaptureDataCore : ModuleRules {
    public CaptureDataCore(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "CameraCalibrationCore",
            "Core",
            "CoreUObject",
            "Engine",
            "ImgMedia",
        });
    }
}
