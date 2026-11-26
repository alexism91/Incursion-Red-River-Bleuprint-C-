class UUISI_Muzzle_Handgun_C : public UInventorySupportedItems
{
public:
    struct FGameplayTagContainer SupportedItems = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Muzzle.SilencerCo Osprey 45K Suppressor")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Muzzle.Surefire Ryder 9M TI Suppressor")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Muzzle.SilencerCo Hybrid 46 Suppressor")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Muzzle.Rugged Obsidian 9 Suppressor"))
    });
};