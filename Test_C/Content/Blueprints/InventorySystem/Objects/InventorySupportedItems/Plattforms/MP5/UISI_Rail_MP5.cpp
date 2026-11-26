class UUISI_Rail_MP5_C : public UInventorySupportedItems
{
public:
    struct FGameplayTagContainer SupportedItems = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Rail.MP5 Picatinny Rail")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Sight.Hensoldt Wetzlar Fero-Z 4x24 Scope"))
    });
};