using UnrealBuildTool;

public class MetaHumanSDKRuntime : ModuleRules {
    public MetaHumanSDKRuntime(ReadOnlyTargetRules Target) : base(Target) {
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
