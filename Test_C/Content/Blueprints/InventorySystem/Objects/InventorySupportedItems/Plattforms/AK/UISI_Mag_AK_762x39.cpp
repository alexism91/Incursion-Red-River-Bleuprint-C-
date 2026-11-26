class UUISI_Mag_AK_762x39_C : public UInventorySupportedItems
{
public:
    struct FGameplayTagContainer SupportedItems = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Mag.AK 762x39 Bakelite 30rnd")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Mag.Z111 762x39 30rnd")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Mag.AK 762x39 20rnd")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Mag.AK Magpul PMAG GEN M3 762x39 30Rnd")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Mag.AK Molot Arms 762x39 75Rnd"))
    });
};