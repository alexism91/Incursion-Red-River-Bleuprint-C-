class UBP_MissionEvent_TriggerMissions_C : public UIRRMissionEvent
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/Objects/Events/BP_MissionEvent_TriggerMissions.BP_MissionEvent_TriggerMissions_C:ExecuteUbergraph_BP_MissionEvent_TriggerMissions'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    enum NetworkExecType = EIRRMissionNetworkExecType::OnlyServer;
    TArray<class UIRRMissionSetup*> Missions;

};