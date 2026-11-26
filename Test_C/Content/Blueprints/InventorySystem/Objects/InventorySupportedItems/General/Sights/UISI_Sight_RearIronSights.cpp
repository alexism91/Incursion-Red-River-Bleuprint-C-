class UUISI_Sight_RearIronSights_C : public UInventorySupportedItems
{
public:
    struct FGameplayTagContainer SupportedItems = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Sight.SCAR Rear Sight")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Sight.AR-15 Colt A2 Rear Sight")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Sight.KAC Folding Micro Rear Sight")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Sight.RFB Rear Sight"))
    });
};