class UBP_Service_Extract_MinimumLootValue_Cond_C : public UIRRMissionService_UpdateProgress
{
public:
    int32 MinLootValue = 20000;
    struct FGameplayTag MessageToListen = {
        "TagName": FName("Mission.Messages.Extracted")
    };
    bool bIgnoreTargetData = true;

};