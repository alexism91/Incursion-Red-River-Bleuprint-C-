class UUDS_Occlusion_Portal_C : public UStaticMeshComponent
{
public:
    double Sample Range = 2000;
    double Distance Falloff Exponent = 2;
    double Directional Occlusion = 0.55;
    class UStaticMesh* StaticMesh = "StaticMesh'Test_C/Content/ThirdParty/UltraDynamicSky/Meshes/Portal_Arrow.Portal_Arrow'";
    bool bUseDefaultCollision = true;
    TArray<class UMaterial*> OverrideMaterials = {
        "Material'Engine/Content/BasicShapes/BasicShapeMaterial.BasicShapeMaterial'"
    };
    bool bEnableAutoLODGeneration = false;
    bool bGenerateOverlapEvents = false;
    bool bVisibleInReflectionCaptures = false;
    bool bVisibleInRealTimeSkyCaptures = false;
    bool bVisibleInRayTracing = false;
    bool bRenderInDepthPass = false;
    bool bReceivesDecals = false;
    bool bUseAsOccluder = false;
    bool CastShadow = false;
    struct FBodyInstance BodyInstance = {
        "ObjectType": ECollisionChannel::ECC_PhysicsBody,
        "CollisionEnabled": ECollisionEnabled::QueryOnly,
        "CollisionProfileName": FName("Custom"),
        "CollisionResponses": {
            "ResponseToChannels": {
                "WorldStatic": ECollisionResponse::ECR_Ignore,
                "WorldDynamic": ECollisionResponse::ECR_Ignore,
                "Pawn": ECollisionResponse::ECR_Ignore,
                "Visibility": ECollisionResponse::ECR_Ignore,
                "Camera": ECollisionResponse::ECR_Ignore,
                "PhysicsBody": ECollisionResponse::ECR_Ignore,
                "Vehicle": ECollisionResponse::ECR_Ignore,
                "Destructible": ECollisionResponse::ECR_Ignore,
                "GameTraceChannel5": ECollisionResponse::ECR_Block
            },
            "ResponseArray": {
                {
                    "Channel": FName("WorldStatic"),
                    "Response": ECollisionResponse::ECR_Ignore
                },
                {
                    "Channel": FName("WorldDynamic"),
                    "Response": ECollisionResponse::ECR_Ignore
                },
                {
                    "Channel": FName("Pawn"),
                    "Response": ECollisionResponse::ECR_Ignore
                },
                {
                    "Channel": FName("Visibility"),
                    "Response": ECollisionResponse::ECR_Ignore
                },
                {
                    "Channel": FName("Camera"),
                    "Response": ECollisionResponse::ECR_Ignore
                },
                {
                    "Channel": FName("PhysicsBody"),
                    "Response": ECollisionResponse::ECR_Ignore
                },
                {
                    "Channel": FName("Vehicle"),
                    "Response": ECollisionResponse::ECR_Ignore
                },
                {
                    "Channel": FName("Destructible"),
                    "Response": ECollisionResponse::ECR_Ignore
                }
            }
        }
    };
    bool bComponentToWorldUpdated = true;
    bool bHiddenInGame = true;
    bool bBoundsChangeTriggersStreamingDataRebuild = false;
    struct FActorComponentTickFunction PrimaryComponentTick = {
        "bStartWithTickEnabled": false,
        "bAllowTickOnDedicatedServer": false
    };
    bool bAutoActivate = true;
    bool bCanEverAffectNavigation = false;
    double Global Occlusion;
};