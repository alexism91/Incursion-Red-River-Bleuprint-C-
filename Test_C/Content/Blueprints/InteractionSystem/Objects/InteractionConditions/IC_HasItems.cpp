class UIC_HasItems_C : public UInteractionCondition
{
public:
    struct FGameplayTagContainer ItemTags = FGameplayTagContainer({});
    TArray<int> Container Indexes;

};