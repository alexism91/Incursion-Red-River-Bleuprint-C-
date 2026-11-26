class UUISI_x300_Blackout_C : public UInventorySupportedItems
{
public:
    struct FGameplayTagContainer SupportedItems = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Ammunition.Rounds.x300 Blackout"))
    });
};