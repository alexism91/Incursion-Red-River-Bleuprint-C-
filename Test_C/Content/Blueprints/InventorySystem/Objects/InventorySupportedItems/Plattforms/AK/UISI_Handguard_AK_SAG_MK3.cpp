class UUISI_Handguard_AK_SAG_MK3_C : public UInventorySupportedItems
{
public:
    struct FGameplayTagContainer SupportedItems = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Handguard.AK SAG MK3 Lower Rail Handguard")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Handguard.AK SAG MK3 Lower M-LOK Handguard"))
    });
};