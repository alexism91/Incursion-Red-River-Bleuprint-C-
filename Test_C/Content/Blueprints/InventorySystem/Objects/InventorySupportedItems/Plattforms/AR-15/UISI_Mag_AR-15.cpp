class UUISI_Mag_AR-15_C : public UInventorySupportedItems
{
public:
    struct FGameplayTagContainer SupportedItems = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Mag.SCAR-L 556x45 30rnd")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Mag.AR-15 Colt A2 Stanag 556x45 20Rnd")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Mag.AR-15 Colt A2 Stanag 556x45 30Rnd")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Mag.AR-15 SureFire MAG5 Stanag 556x45 60Rnd")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Mag.AR-15 MagPul PMAG 556x45 60rnd"))
    });
};