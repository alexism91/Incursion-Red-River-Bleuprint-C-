class UBP_Service_UpdateProgress_HideoutUnitUpgraded_C : public UIRRMissionService_UpdateProgress
{
public:
    struct FGameplayTag MessageToListen = {
        "TagName": FName("Mission.Messages.Hideout Unit Upgrade")
    };

};