class ABP_InventoryThrowable_C : public AGrenadeActor
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/InventorySystem/BaseActors/BP_InventoryThrowable.BP_InventoryThrowable_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/InventorySystem/BaseActors/BP_InventoryThrowable.BP_InventoryThrowable_C:InheritableComponentHandler'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/BaseActors/BP_InventoryThrowable.BP_InventoryThrowable_C:ExecuteUbergraph_BP_InventoryThrowable'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHideGrenadeMeshOnDetonate = false;
    float DelayedDestroyTime = 60;
    bool bDrawDebug = true;
    class UAkAudioEvent* GrenadeBounceEvent = "AkAudioEvent'Test_C/Content/Soundbanks/Events/Default_Work_Unit/Player/Player_BulletCases.Player_BulletCases'";
    float GrenadeBounceImpactThreshold = 30;
    class UAkRtpc* GrenadeBounceImpactRtpc = "AkRtpc'Test_C/Content/WwiseAudio/Game_Parameters/Default_Work_Unit/Explosives/Grenade/Grenade_BounceVelocity.Grenade_BounceVelocity'";
    float GrenadeBounceAudioCooldown = 0.2;
    class USphereComponent* CollisionComp = "SphereComponent'Test_C/Content/Blueprints/InventorySystem/BaseActors/BP_InventoryThrowable.Default__BP_InventoryThrowable_C:CollisionComp'";
    class UStaticMeshComponent* GrenadeMesh = "StaticMeshComponent'Test_C/Content/Blueprints/InventorySystem/BaseActors/BP_InventoryThrowable.Default__BP_InventoryThrowable_C:GrenadeMesh'";
    class UProjectileMovementComponent* ProjectileMovement = "ProjectileMovementComponent'Test_C/Content/Blueprints/InventorySystem/BaseActors/BP_InventoryThrowable.Default__BP_InventoryThrowable_C:ProjectileMovement'";
    class UAkComponent* GrenadeAkComponent = "AkComponent'Test_C/Content/Blueprints/InventorySystem/BaseActors/BP_InventoryThrowable.Default__BP_InventoryThrowable_C:GrenadeAkComponent'";
    class UIRRGrenadePredictionComponent* GrenadePredictionComponent = "IRRGrenadePredictionComponent'Test_C/Content/Blueprints/InventorySystem/BaseActors/BP_InventoryThrowable.Default__BP_InventoryThrowable_C:GrenadePredictionComponent'";
    class USphereComponent* RootComponent = "SphereComponent'Test_C/Content/Blueprints/InventorySystem/BaseActors/BP_InventoryThrowable.Default__BP_InventoryThrowable_C:CollisionComp'";
    class USmoothSync* SmoothSync;

};