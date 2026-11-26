class UUISI_Muzzle_Shotgun_C : public UInventorySupportedItems
{
public:
    struct FGameplayTagContainer SupportedItems = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Muzzle.SilencerCo Salvo12 Suppressor")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Muzzle.CMB Helical 12Ga Muzzle Brake"))
    });
};