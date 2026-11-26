class ABP_Airdrop_C : public AAirdrop
{
public:
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/Airdrop/BP_Airdrop.BP_Airdrop_C:ComponentDelegateBinding_0'"
    };
    TArray<class UTimelineTemplate*> Timelines = {
        "TimelineTemplate'Test_C/Content/Blueprints/Airdrop/BP_Airdrop.BP_Airdrop_C:Timeline_Template'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/Airdrop/BP_Airdrop.BP_Airdrop_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/Airdrop/BP_Airdrop.BP_Airdrop_C:ExecuteUbergraph_BP_Airdrop'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FIRRSpawnReinforcementSettings Reinforcement = {
        "bEnabled": true,
        "MinSpawns": 4,
        "MaxSpawns": 6,
        "bUseCoopMultiplier": true,
        "MinSpawnRadius": 5000,
        "MaxSpawnRadius": 15000,
        "TargetReachRadius": 300,
        "ClusterRadius": 500,
        "RallySeedCount": 32,
        "RallyFallbackCount": 3,
        "RallyIndoorWeight": 2,
        "RallyCoverWeight": 1,
        "BotTypeWeights": {
            { FName("Patrol"), 1 }
        },
        "AllegianceId": FName("None"),
        "bValidateSpawns": true,
        "bSpawnInWaves": true,
        "SpawnPerWave": 1,
        "WaveInterval": 2
    };
    struct FLinearColor FlareColor = FLinearColor(1, 0, 0, 1);
    float ApproachHeight = 25000;
    float AirDuration = 360;
    float LandingDuration = 8;
    float FallLinearDamping = 2;
    float FallAngularDamping = 0.2;
    float BounceUpSpeed = 200;
    float BounceHorizontalKeep = 0.1;
    float SettleSpeed = 4;
    float SettleHoldTime = 0.5;
    float MaxDropDriftRadius = 250;
    float LifeTime = 900;
    class UObject* Billboard = nullptr;
    class UIRRNavObstacleComponent* NavObstacle = "IRRNavObstacleComponent'Test_C/Content/Blueprints/Airdrop/BP_Airdrop.Default__BP_Airdrop_C:NavObstacle'";
    class USceneComponent* RootComponent = "SceneComponent'Test_C/Content/Blueprints/Airdrop/BP_Airdrop.Default__BP_Airdrop_C:Root'";
    class UNiagaraComponent* Niagara_Flare;
    class UWidgetComponent* Marker;
    class USmoothSync* SmoothSync;
    class UStaticMeshComponent* SM_Supply_Drop_Crate_2_2;
    class UStaticMeshComponent* SM_Parachute_1;
    class UBP_InteractionTarget_C* BP_InteractionTarget;
    class UBP_InventoryComponent_C* BP_InventoryComponent;
    class UBP_IRRMarkerComponent_Mission_C* BP_IRRMarkerComponent_Mission;
    class UBP_IRRObjectiveComponent_C* BP_IRRObjectiveComponent;
    class UStaticMeshComponent* SM_Supply_Drop_Crate_1;
    class UTimelineComponent* Timeline;
    class UAkAudioEvent* Loot Sound;
    int ReinforcementID;
private:
    float Timeline_NewTrack_0_D359381641C59A73195BEABEAC44692F;
    byte Timeline__Direction_D359381641C59A73195BEABEAC44692F;

};