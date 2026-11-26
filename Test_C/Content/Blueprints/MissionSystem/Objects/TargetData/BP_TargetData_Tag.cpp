class UBP_TargetData_Tag_C : public UIRRTargetData
{
public:
    int32 NumReplicatedProperties = 1;
    struct FGameplayTag Tag = {
        "TagName": FName("None")
    };

};