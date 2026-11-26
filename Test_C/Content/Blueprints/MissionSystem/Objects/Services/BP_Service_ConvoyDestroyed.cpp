class UBP_Service_ConvoyDestroyed_C : public UIRRMissionService_UpdateProgress
{
public:
    struct FGameplayTag MessageToListen = {
        "TagName": FName("Mission.Messages.Convoy Destroyed")
    };
};