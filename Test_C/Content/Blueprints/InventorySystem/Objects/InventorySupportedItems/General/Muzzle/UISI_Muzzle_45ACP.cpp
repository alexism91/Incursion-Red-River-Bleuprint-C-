class UUISI_Muzzle_45ACP_C : public UInventorySupportedItems
{
public:
    struct FGameplayTagContainer SupportedItems = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Muzzle.SilencerCo Omega 45k Suppressor")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Muzzle.SilencerCo Hybrid 46 Suppressor")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Muzzle.KVP XL 45ACP Suppressor"))
    });
};