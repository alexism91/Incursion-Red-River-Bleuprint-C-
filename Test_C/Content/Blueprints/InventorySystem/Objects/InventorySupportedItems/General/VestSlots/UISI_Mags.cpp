class UUISI_Mags_C : public UInventorySupportedItems
{
public:
    struct FGameplayTagContainer SupportedItems = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Mag")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Ammunition"))
    });
};