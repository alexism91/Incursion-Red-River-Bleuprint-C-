class UIC_HasTags_C : public UInteractionCondition
{
public:
    struct FInteractionGameplayTagContainers OwnerTags = {
        "RequiredTags": FGameplayTagContainer({}),
        "BlockingTags": FGameplayTagContainer({})
    };
    struct FInteractionGameplayTagContainers InteractingActorTags = {
        "RequiredTags": FGameplayTagContainer({}),
        "BlockingTags": FGameplayTagContainer({})
    };

};