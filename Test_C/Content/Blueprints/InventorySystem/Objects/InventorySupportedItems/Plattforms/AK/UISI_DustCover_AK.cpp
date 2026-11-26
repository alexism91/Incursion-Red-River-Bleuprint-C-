class UUISI_DustCover_AK_C : public UInventorySupportedItems
{
public:
    struct FGameplayTagContainer SupportedItems = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Dust Cover.AK Izhmash Dust Cover")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Dust Cover.AKM Dust Cover")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Dust Cover.AK SAG MK3 Upper Rail Dust Cover")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Dust Cover.AK Zenitco B-33 Dust Cover"))
    });
};