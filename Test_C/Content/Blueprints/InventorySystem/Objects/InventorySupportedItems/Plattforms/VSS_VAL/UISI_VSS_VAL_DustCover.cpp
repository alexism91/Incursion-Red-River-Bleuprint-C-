class UUISI_VSS_VAL_DustCover_C : public UInventorySupportedItems
{
public:
    struct FGameplayTagContainer SupportedItems = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Dust Cover.VSS Dust Cover")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Dust Cover.AS VAL Dust Cover"))
    });
};