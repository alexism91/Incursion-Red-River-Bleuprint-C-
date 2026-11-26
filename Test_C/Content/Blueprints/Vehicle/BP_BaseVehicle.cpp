class ABP_BaseVehicle_C : public ABaseVehicle
{
public:
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/Vehicle/BP_BaseVehicle.BP_BaseVehicle_C:ComponentDelegateBinding_0'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/Vehicle/BP_BaseVehicle.BP_BaseVehicle_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/Vehicle/BP_BaseVehicle.BP_BaseVehicle_C:ExecuteUbergraph_BP_BaseVehicle'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    class UVehicleNavObstacleComponent* NavObstacle = "VehicleNavObstacleComponent'Test_C/Content/Blueprints/Vehicle/BP_BaseVehicle.Default__BP_BaseVehicle_C:NavObstacle'";
    class UVehicleCrowdObstacleComponent* CrowdObstacle = "VehicleCrowdObstacleComponent'Test_C/Content/Blueprints/Vehicle/BP_BaseVehicle.Default__BP_BaseVehicle_C:CrowdObstacle'";
    class UIRRSignificanceComponent* Significance = "IRRSignificanceComponent'Test_C/Content/Blueprints/Vehicle/BP_BaseVehicle.Default__BP_BaseVehicle_C:Significance'";
    bool bWreckSimulatesPhysics = true;
    float WreckMassKg = 100;
    bool bSmoothSyncWreckOnly = false;
    bool bSpawnWreckEffects = true;
    int32 WreckEffectCountMin = 3;
    float WreckEffectSink = 80;
    float WreckEffectEdgeMargin = 100;
    bool bExplodeOnDestroyed = true;
    float ExplosionLiftSpeed = 300;
    float ExplosionDamage = 50;
    bool bAlwaysRelevant = true;
    bool bReplicateMovement = false;
    class UWidgetComponent* Marker;
    class UBP_InteractionTarget_C* BP_InteractionTarget;
    class UBP_InventoryComponent_C* BP_InventoryComponent;
    class UBP_AdvancedLightComponent_C* BP_AdvancedLightComponent;
    class USpotLightComponent* SpotLight_L;
    class USpotLightComponent* SpotLight_R;
    class UAdvancedAkComponent* AdvancedAk;
    class USmoothSync* SmoothSync;
    class USceneComponent* StrikePoint;
    class UVehicleHitchComponent* VehicleHitch;
    class UStaticMeshComponent* Chassis;
    class UVehicleChassisComponent* VehicleChassis;
    class UVehicleWheelComponent* Wheel_RR;
    class UVehicleWheelComponent* Wheel_RL;
    class UVehicleWheelComponent* Wheel_FR;
    class UVehicleWheelComponent* Wheel_FL;
    class USceneComponent* DefaultSceneRoot;
    class UAkAudioEvent* Opening Sound;

};