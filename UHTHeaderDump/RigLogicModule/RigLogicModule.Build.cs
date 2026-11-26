using UnrealBuildTool;

public class RigLogicModule : ModuleRules {
    public RigLogicModule(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "ControlRig",
            "Core",
            "CoreUObject",
            "Engine",
        });
    }
}
