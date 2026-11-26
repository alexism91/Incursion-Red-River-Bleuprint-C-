class UBP_MissionEvent_TriggerReinforcement_C : public UIRRMissionEvent
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/Objects/Events/BP_MissionEvent_TriggerReinforcement.BP_MissionEvent_TriggerReinforcement_C:ExecuteUbergraph_BP_MissionEvent_TriggerReinforcement'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    FName Target Tag = FName("Terminal");
    struct FTimerHandle ReportNoiseTimer = {
        "Handle": 0
    };
    FName Reinforcemnt Spawner Tag = FName("Reinforcement");
    enum NetworkExecType = EIRRMissionNetworkExecType::OnlyServer;
    int SpawnCounter;
    TArray<class AActor*> Spawner;

};