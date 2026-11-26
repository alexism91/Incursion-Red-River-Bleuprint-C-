class UBP_Service_Kill_WithEquipment_Cond_C : public UIRRMissionService_UpdateProgress
{
public:
    struct FGameplayTag MessageToListen = {
        "TagName": FName("Mission.Messages.Killed")
    };
    TMap<struct FGameplayTag, struct FGameplayTag> Equipment;

};