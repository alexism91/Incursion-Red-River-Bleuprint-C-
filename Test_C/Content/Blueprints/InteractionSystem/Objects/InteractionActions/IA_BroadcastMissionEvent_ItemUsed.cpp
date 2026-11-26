class UIA_BroadcastMissionEvent_ItemUsed_C : public UIA_BroadcastMissionEvent_C
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InteractionSystem/Objects/InteractionActions/IA_BroadcastMissionEvent_ItemUsed.IA_BroadcastMissionEvent_ItemUsed_C:ExecuteUbergraph_IA_BroadcastMissionEvent_ItemUsed'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FGameplayTag Message Tag = {
        "TagName": FName("Mission.Messages.Item Used")
    };
    struct FIRRMissionEventPayload Payload = {
        "IntegerValue": 1
    };
    bool bExecuteOnServer = true;

};