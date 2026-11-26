class AUDS_Occlusion_Volume_C : public AActor
{
public:
    TArray<class UCapsuleComponent*> ComponentTemplates = {
        "BoxComponent'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Occlusion/UDS_Occlusion_Volume.UDS_Occlusion_Volume_C:NODE_AddBoxComponent-0'",
        "SphereComponent'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Occlusion/UDS_Occlusion_Volume.UDS_Occlusion_Volume_C:NODE_AddSphereComponent-0'",
        "CapsuleComponent'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Occlusion/UDS_Occlusion_Volume.UDS_Occlusion_Volume_C:NODE_AddCapsuleComponent-0'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Occlusion/UDS_Occlusion_Volume.UDS_Occlusion_Volume_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Occlusion/UDS_Occlusion_Volume.UDS_Occlusion_Volume_C:ExecuteUbergraph_UDS_Occlusion_Volume'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FVector Box Extent = FVector(100, 100, 100);
    double Sphere Radius = 100;
    bool Affects Sound Occlusion / Interior Adjusments = true;
    float Capsule Half Height = 200;
    struct FActorTickFunction PrimaryActorTick = {
        "bStartWithTickEnabled": false
    };
    class USceneComponent* DefaultSceneRoot;
    UDS_OcclusionShape Collision Shape;
    int Piority;
    bool Block Weather Particles;
    class UPrimitiveComponent* Collision Component;
    bool Is Underground;
    bool Block GCPS Signal;

};