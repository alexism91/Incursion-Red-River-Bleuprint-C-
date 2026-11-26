class UUISI_Muzzle_300BLK_C : public UInventorySupportedItems
{
public:
    struct FGameplayTagContainer SupportedItems = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Muzzle.Honey Badger Cherry Bomb Muzzle Brake")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Muzzle.Honey Badger Standard Suppressor")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Muzzle.Honey Badger Whistletip Muzzle Brake"))
    });
};