class UWeatherMask_C : public UStaticMeshComponent
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/System/WeatherMask.WeatherMask_C:ExecuteUbergraph_WeatherMask'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    double Mask Snow/Dust = 1;
    double Mask Wetness = 1;
    struct FVector2D Brush Location = FVector2D(0, 0);
    struct FVector2D Brush Scale = FVector2D(0, 0);
    struct FVector2D Center Location = FVector2D(0, 0);
    class UStaticMesh* StaticMesh = "StaticMesh'Test_C/Content/ThirdParty/UltraDynamicSky/Meshes/Brush_Cube.Brush_Cube'";
    bool bEnableAutoLODGeneration = false;
    bool bGenerateOverlapEvents = false;
    bool bVisibleInReflectionCaptures = false;
    bool bVisibleInRealTimeSkyCaptures = false;
    bool bVisibleInRayTracing = false;
    bool bRenderInDepthPass = false;
    bool bReceivesDecals = false;
    bool bUseAsOccluder = false;
    bool CastShadow = false;
    bool bApplyImpulseOnDamage = false;
    bool bReplicatePhysicsToAutonomousProxy = false;
    struct FCustomPrimitiveData CustomPrimitiveData = {
        "Data": {
            0.817708,
            0.270698,
            0.039227,
            0
        }
    };
    struct FCustomPrimitiveData CustomPrimitiveDataInternal = {
        "Data": {
            0.817708,
            0.270698,
            0.039227,
            0
        }
    };
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
                "GameTraceChannel1": ECollisionResponse::ECR_Ignore,
                "GameTraceChannel2": ECollisionResponse::ECR_Ignore
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
                },
                {
                    "Channel": FName("FeetIK"),
                    "Response": ECollisionResponse::ECR_Ignore
                },
                {
                    "Channel": FName("Vaultable"),
                    "Response": ECollisionResponse::ECR_Ignore
                },
                {
                    "Channel": FName("Projectile"),
                    "Response": ECollisionResponse::ECR_Ignore
                }
            }
        },
        "bEnableGravity": false,
        "bAutoWeld": false,
        "bUpdateMassWhenScaleChanges": false
    };
    bool bHiddenInGame = true;
    struct FActorComponentTickFunction PrimaryComponentTick = {
        "bStartWithTickEnabled": false,
        "bAllowTickOnDedicatedServer": false
    };
    bool bCanEverAffectNavigation = false;
    class AUltra_Dynamic_Weather_C* UDW;
    double Brush Yaw;
    double Max Distance;
    bool Ready for Drawing;
    bool Spawned At Runtime;

};