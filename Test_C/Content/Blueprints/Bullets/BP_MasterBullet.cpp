class ABP_MasterBullet_C : public ABaseBullet
{
public:
    bool bHasCookedComponentInstancingData = true;
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/Bullets/BP_MasterBullet.BP_MasterBullet_C:SimpleConstructionScript_0'";
    struct FHitResult Hit Result = {
        "FaceIndex": 0,
        "Time": 1,
        "Distance": 0,
        "Location": FVector(0, 0, 0),
        "ImpactPoint": FVector(0, 0, 0),
        "Normal": FVector(0, 0, 0),
        "ImpactNormal": FVector(0, 0, 0),
        "TraceStart": FVector(0, 0, 0),
        "TraceEnd": FVector(0, 0, 0),
        "PenetrationDepth": 0,
        "MyItem": -1,
        "Item": 0,
        "ElementIndex": 0,
        "bBlockingHit": false,
        "bStartPenetrating": false,
        "PhysMaterial": nullptr,
        "HitObjectHandle": {
            "ReferenceObject": nullptr
        },
        "Component": nullptr,
        "BoneName": FName("None"),
        "MyBoneName": FName("None")
    };
    struct FRandomStream RandomStream = {
        "Seed": -1600455615
    };
    float DebugTrailTime = 5;
    bool DebugPooling = true;
    float MuzzleVelocityMin = 99300;
    float MuzzleVelocityMax = 99300;
    float RicochetProbability = 0;
    float RicochetProbabilityGrazing = 0;
    float RicochetRestitution = 0;
    float RicochetSpread = 0;
    bool AddImpulse = false;
    class UEBMaterialResponseMap* MaterialResponseMap = "EBMaterialResponseMap'Test_C/Content/Blueprints/MaterialResponseMap.MaterialResponseMap'";
    bool AllowComponentCollisions = true;
    enum TraceChannel = ECollisionChannel::ECC_GameTraceChannel1;
    bool TraceComplex = true;
    float CollisionMargin = 2;
    float DespawnVelocity = 5000;
    float FixedStepSeconds = 5;
    bool Retrace = false;
    enum RetraceChannel = ECollisionChannel::ECC_GameTraceChannel1;
    bool RotateRandomRoll = false;
    int32 MaxPoolSize = 10;
    TArray<WeakObject> Pooled = {
        ,
    
    };
    bool bNetLoadOnClient = false;
    float InitialLifeSpan = 5;
    enum NetDormancy = ENetDormancy::DORM_DormantAll;
    class USceneComponent* DefaultSceneRoot;
};