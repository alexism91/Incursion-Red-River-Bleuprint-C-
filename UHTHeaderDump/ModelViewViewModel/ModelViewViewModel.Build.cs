using UnrealBuildTool;

public class ModelViewViewModel : ModuleRules {
    public ModelViewViewModel(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "FieldNotification",
            "SlateCore",
            "UMG",
        });
    }
}
