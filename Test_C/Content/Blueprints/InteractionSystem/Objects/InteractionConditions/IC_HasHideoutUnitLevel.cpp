class UIC_HasHideoutUnitLevel_C : public UInteractionCondition
{
public:
    struct FGameplayTag HideoutUnitTag = {
        "TagName": FName("None")
    };
    int Level;
    bool UseOwner?;

};