class UBP_Service_UpdateProgress_ClearedArea_C : public UIRRMissionService_UpdateProgress
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/Objects/Services/BP_Service_UpdateProgress_ClearedArea.BP_Service_UpdateProgress_ClearedArea_C:ExecuteUbergraph_BP_Service_UpdateProgress_ClearedArea'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FGameplayTag MessageToListen = {
        "TagName": FName("Mission.Messages.Cleared Area")
    };

};