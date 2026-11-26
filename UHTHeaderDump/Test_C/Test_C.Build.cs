using UnrealBuildTool;

public class Test_C : ModuleRules {
    public Test_C(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AGRPRO",
            "AICoverSystem",
            "AIModule",
            "AkAudio",
            "AnimGraphRuntime",
            "AnimationBudgetAllocator",
            "AudioMixer",
            "CinematicCamera",
            "CommonLoadingScreen",
            "CommonLoadingSettings",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "EasyBallistics",
            "Engine",
            "EnhancedInput",
            "GameplayAbilities",
            "GameplayTags",
            "HTN",
            "HairStrandsCore",
            "HeadMountedDisplay",
            "IRRAdvancedAI",
            "IRRConfig",
            "IRRCore",
            "IRRCoreUI",
            "IRREnhancedObjects",
            "IRRMissionSystem",
            "IRRNightVision",
            "IRRRadioSystem",
            "IRRSignificanceSystem",
            "IRRUltraDynamicSky",
            "InputCore",
            "Kronos",
            "LXR",
            "LowPolyShooterPack",
            "NavigationSystem",
            "NetCore",
            "Niagara",
            "NinjaInput",
            "Odin",
            "PatrolActionSystem",
            "PhysicsCore",
            "SenseSystem",
            "SlateCore",
            "UMG",
            "Water",
        });
    }
}
