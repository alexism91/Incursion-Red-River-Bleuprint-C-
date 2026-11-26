using UnrealBuildTool;

public class RuntimeDataTable : ModuleRules {
    public RuntimeDataTable(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "EasyCsv",
            "Engine",
        });
    }
}
