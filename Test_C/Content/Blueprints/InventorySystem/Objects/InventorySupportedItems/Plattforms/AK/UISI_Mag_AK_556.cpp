class UUISI_Mag_AK_556_C : public UInventorySupportedItems
{
public:
    struct FGameplayTagContainer SupportedItems = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Mag.AK 556x45 Black 30rnd")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Mag.AK 556x45 30rnd")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Mag.AK 556x45 45rnd"))
    });
};