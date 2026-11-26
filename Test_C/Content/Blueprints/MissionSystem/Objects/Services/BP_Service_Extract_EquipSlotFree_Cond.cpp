class UBP_Service_Extract_EquipSlotFree_Cond_C : public UIRRMissionService_UpdateProgress
{
public:
    struct FGameplayTag Slot = {
        "TagName": FName("None")
    };
    struct FGameplayTag MessageToListen = {
        "TagName": FName("Mission.Messages.Extracted")
    };
    bool bIgnoreTargetData = true;

};