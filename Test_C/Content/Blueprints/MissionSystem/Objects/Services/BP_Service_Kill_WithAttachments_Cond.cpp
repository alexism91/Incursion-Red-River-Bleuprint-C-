class UBP_Service_Kill_WithAttachments_Cond_C : public UIRRMissionService_UpdateProgress
{
public:
    struct FGameplayTagContainer AttachmentTags = FGameplayTagContainer({});
    struct FGameplayTag MessageToListen = {
        "TagName": FName("Mission.Messages.Killed")
    };

};