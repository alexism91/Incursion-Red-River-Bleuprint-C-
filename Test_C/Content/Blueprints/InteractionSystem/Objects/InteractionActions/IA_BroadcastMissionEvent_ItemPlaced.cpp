class UIA_BroadcastMissionEvent_ItemPlaced_C : public UIA_BroadcastMissionEvent_C
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InteractionSystem/Objects/InteractionActions/IA_BroadcastMissionEvent_ItemPlaced.IA_BroadcastMissionEvent_ItemPlaced_C:ExecuteUbergraph_IA_BroadcastMissionEvent_ItemPlaced'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FIRRMissionEventPayload Payload = {
        "IntegerValue": 1
    };
    bool bExecuteOnServer = true;

};