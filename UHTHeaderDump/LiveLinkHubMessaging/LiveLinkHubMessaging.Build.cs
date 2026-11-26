using UnrealBuildTool;

public class LiveLinkHubMessaging : ModuleRules {
    public LiveLinkHubMessaging(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "LiveLink",
            "LiveLinkInterface",
            "LiveLinkMessageBusFramework",
        });
    }
}
