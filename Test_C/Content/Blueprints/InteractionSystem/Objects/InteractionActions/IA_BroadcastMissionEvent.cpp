class UIA_BroadcastMissionEvent_C : public UInteractionAction
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InteractionSystem/Objects/InteractionActions/IA_BroadcastMissionEvent.IA_BroadcastMissionEvent_C:ExecuteUbergraph_IA_BroadcastMissionEvent'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FGameplayTag Message Tag = {
        "TagName": FName("Mission.Messages.Item Placed")
    };
    struct FIRRMissionEventPayload Payload = {
        "IntegerValue": 0,
        "FloatValue": 0,
        "BoolValue": false,
        "StringPayload": ""
    };

};