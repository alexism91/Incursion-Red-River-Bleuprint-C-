using UnrealBuildTool;

public class Kronos : ModuleRules {
    public Kronos(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "Lobby",
            "OnlineSubsystemUtils",
            "Test_C",
            "UMG",
        });
    }
}
