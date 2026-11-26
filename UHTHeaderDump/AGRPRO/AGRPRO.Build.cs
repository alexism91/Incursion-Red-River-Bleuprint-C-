using UnrealBuildTool;

public class AGRPRO : ModuleRules {
    public AGRPRO(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AkAudio",
            "Core",
            "CoreUObject",
            "Engine",
            "GameplayTags",
            "InputCore",
            "Niagara",
            "PhysicsCore",
            "UMG",
        });
    }
}
