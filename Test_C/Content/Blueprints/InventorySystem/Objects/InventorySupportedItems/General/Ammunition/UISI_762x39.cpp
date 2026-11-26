class UUISI_762x39_C : public UInventorySupportedItems
{
public:
    struct FGameplayTagContainer SupportedItems = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Ammunition.Rounds.762x39"))
    });
};