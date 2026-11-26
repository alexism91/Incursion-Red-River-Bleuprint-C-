class UBP_Service_Extract_NoDamageTaken_Cond_C : public UIRRMissionService_UpdateProgress
{
public:
    struct FGameplayTag MessageToListen = {
        "TagName": FName("Mission.Messages.Extracted")
    };
    bool bIgnoreTargetData = true;

};