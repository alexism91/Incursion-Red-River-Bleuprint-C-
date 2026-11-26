class UBP_TargetData_HideoutUnit_C : public UIRRTargetData
{
public:
    int32 NumReplicatedProperties = 2;
    struct FGameplayTag HideoutUnitIdentifier = {
        "TagName": FName("None")
    };
    int HideoutUnitLevel;

};