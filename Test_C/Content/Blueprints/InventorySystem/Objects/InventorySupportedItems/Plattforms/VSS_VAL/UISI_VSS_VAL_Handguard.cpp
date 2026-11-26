class UUISI_VSS_VAL_Handguard_C : public UInventorySupportedItems
{
public:
    struct FGameplayTagContainer SupportedItems = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Handguard.VAL Plum Polymer Handguard")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Handguard.Val Black Polymer Handguard"))
    });
};