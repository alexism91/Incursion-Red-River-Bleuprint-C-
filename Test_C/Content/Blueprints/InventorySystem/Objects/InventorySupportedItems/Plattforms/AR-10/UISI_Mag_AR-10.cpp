class UUISI_Mag_AR-10_C : public UInventorySupportedItems
{
public:
    struct FGameplayTagContainer SupportedItems = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Mag.Magpul PMAG 20 LR SR 762x51 20Rnd")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Mag.AR-10 Stanag 762x51 20rnd")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Mag.AR-10 X-Products X-25 762x51 50Rnd"))
    });
};