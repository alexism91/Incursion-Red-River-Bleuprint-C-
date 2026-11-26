class ABP_TerminalMaster_C : public AActor
{
public:
    TArray<class UInputAxisKeyDelegateBinding*> DynamicBindingObjects = {
        "InputKeyDelegateBinding'Test_C/Content/Blueprints/InteractionSystem/Actors/Terminal/BP_TerminalMaster.BP_TerminalMaster_C:InputKeyDelegateBinding_0'",
        "ComponentDelegateBinding'Test_C/Content/Blueprints/InteractionSystem/Actors/Terminal/BP_TerminalMaster.BP_TerminalMaster_C:ComponentDelegateBinding_0'",
        "InputAxisKeyDelegateBinding'Test_C/Content/Blueprints/InteractionSystem/Actors/Terminal/BP_TerminalMaster.BP_TerminalMaster_C:InputAxisKeyDelegateBinding_0'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/InteractionSystem/Actors/Terminal/BP_TerminalMaster.BP_TerminalMaster_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InteractionSystem/Actors/Terminal/BP_TerminalMaster.BP_TerminalMaster_C:ExecuteUbergraph_BP_TerminalMaster'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool Input? = true;
    float Blend Time = 0.25;
    FName Reinforcemnt Spawner Tag = FName("Reinforcement A");
    class UAkAudioEvent* Alarm Start = "AkAudioEvent'Test_C/Content/WwiseAudio/Events/Default_Work_Unit/SFX/IObjects/Alarm/reinforcementsAlarm_start.reinforcementsAlarm_start'";
    class UAkAudioEvent* Alarm Stop = "AkAudioEvent'Test_C/Content/WwiseAudio/Events/Default_Work_Unit/SFX/IObjects/Alarm/reinforcementsAlarm_stop.reinforcementsAlarm_stop'";
    struct FIRRSpawnReinforcementSettings Reinforcement = {
        "bEnabled": true,
        "MinSpawns": 8,
        "MaxSpawns": 10,
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
        "AllegianceId": FName("IGC"),
        "bValidateSpawns": true,
        "bSpawnInWaves": true,
        "SpawnPerWave": 2,
        "WaveInterval": 30
    };
    struct FActorTickFunction PrimaryActorTick = {
        "bStartWithTickEnabled": false
    };
    bool bAlwaysRelevant = true;
    bool bReplicates = true;
    TArray<FName> Tags = {
        FName("Terminal")
    };
    class UAkComponent* Ak;
    class UBP_IRRMarkerComponent_C* BP_IRRMarkerComponent;
    class UWidgetInteractionComponent* WidgetInteraction;
    class UCameraComponent* Camera;
    class UWidgetComponent* Terminal;
    class UBP_IRRMessageComponent_C* BP_IRRMessageComponent;
    class UBP_IRRTerminalComponent_C* BP_IRRTerminalComponent;
    class USceneComponent* NoiseLocation;
    class UStaticMeshComponent* StaticMesh;
    class UBP_GameplayTagsComponent_C* BP_GameplayTagsComponent;
    class UWidgetComponent* InteractionWidget;
    class UBP_InteractionTarget_C* BP_TerminalInteraction;
    class UW_TerminalConsole_C* TerminalUI;
    int ReinforcementID;

};