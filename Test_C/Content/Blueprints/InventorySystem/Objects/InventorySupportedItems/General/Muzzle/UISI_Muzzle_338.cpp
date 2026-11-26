class UUISI_Muzzle_338_C : public UInventorySupportedItems
{
public:
    struct FGameplayTagContainer SupportedItems = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Muzzle.DT 338 Muzzle Brake")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Muzzle.Surefire SOCOM338-TI Muzzle Brake")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Muzzle.SilencerCo Hybrid 46 Suppressor"))
    });
};