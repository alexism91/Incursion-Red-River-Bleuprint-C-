using UnrealBuildTool;

public class LiveLinkControlRig : ModuleRules {
    public LiveLinkControlRig(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "ControlRig",
            "Core",
            "CoreUObject",
            "Engine",
            "LiveLinkInterface",
            "RigVM",
        });
    }
}
