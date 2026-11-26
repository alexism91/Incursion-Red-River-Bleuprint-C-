using UnrealBuildTool;

public class Engine : ModuleRules {
    public Engine(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AudioExtensions",
            "AudioLinkCore",
            "AudioMixer",
            "AudioPlatformConfiguration",
            "Chaos",
            "ChaosCloth",
            "ClothingSystemRuntimeInterface",
            "Core",
            "CoreOnline",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "FieldNotification",
            "ImageCore",
            "InputCore",
            "IrisCore",
            "Landscape",
            "MeshDescription",
            "NNE",
            "NetCore",
            "PacketHandler",
            "PhysicsCore",
            "RenderCore",
            "Slate",
            "SlateCore",
            "StateStream",
            "StaticMeshDescription",
            "TypedElementFramework",
            "TypedElementRuntime",
            "UMG",
            "UniversalObjectLocator",
        });
    }
}
