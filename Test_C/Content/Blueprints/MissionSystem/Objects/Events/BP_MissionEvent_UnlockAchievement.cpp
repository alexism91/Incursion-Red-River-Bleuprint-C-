class UBP_MissionEvent_UnlockAchievement_C : public UIRRMissionEvent
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/Objects/Events/BP_MissionEvent_UnlockAchievement.BP_MissionEvent_UnlockAchievement_C:ExecuteUbergraph_BP_MissionEvent_UnlockAchievement'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    enum NetworkExecType = EIRRMissionNetworkExecType::OnlyClient;
    FString Achievement APIName;

};