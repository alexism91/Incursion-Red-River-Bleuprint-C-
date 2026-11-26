class ABP_BaseTrailer_C : public AVehicleTrailer
{
public:
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/Vehicle/BP_BaseTrailer.BP_BaseTrailer_C:ComponentDelegateBinding_0'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/Vehicle/BP_BaseTrailer.BP_BaseTrailer_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/Vehicle/BP_BaseTrailer.BP_BaseTrailer_C:ExecuteUbergraph_BP_BaseTrailer'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FVector CouplingOffset = FVector(-20, -0, 145);
    struct FVector AxleOffset = FVector(-800, 0, 100);
    class UVehicleNavObstacleComponent* NavObstacle = "VehicleNavObstacleComponent'Test_C/Content/Blueprints/Vehicle/BP_BaseTrailer.Default__BP_BaseTrailer_C:NavObstacle'";
    class UVehicleCrowdObstacleComponent* CrowdObstacle = "VehicleCrowdObstacleComponent'Test_C/Content/Blueprints/Vehicle/BP_BaseTrailer.Default__BP_BaseTrailer_C:CrowdObstacle'";
    class UIRRSignificanceComponent* Significance = "IRRSignificanceComponent'Test_C/Content/Blueprints/Vehicle/BP_BaseTrailer.Default__BP_BaseTrailer_C:Significance'";
    bool bWreckSimulatesPhysics = true;
    float WreckMassKg = 100;
    bool bSmoothSyncWreckOnly = false;
    bool bExplodeOnDestroyed = true;
    float ExplosionLiftSpeed = 200;
    float ExplosionDamage = 50;
    bool bAlwaysRelevant = true;
    bool bReplicateMovement = false;
    class UWidgetComponent* Widget;
    class UBP_InteractionTarget_C* BP_InteractionTarget;
    class UBP_InventoryComponent_C* BP_InventoryComponent;
    class USmoothSync* SmoothSync;
    class USceneComponent* Scene;
    class UVehicleWheelComponent* Wheel_RL2;
    class UVehicleWheelComponent* Wheel_RR2;
    class UVehicleWheelComponent* Wheel_RR1;
    class UVehicleWheelComponent* Wheel_RL1;
    class UStaticMeshComponent* Chassis;
    class UVehicleChassisComponent* VehicleChassis;
    class UVehicleWheelComponent* Wheel_RR;
    class UVehicleWheelComponent* Wheel_RL;
    class USceneComponent* DefaultSceneRoot;
    class UAkAudioEvent* Opening Sound;

};