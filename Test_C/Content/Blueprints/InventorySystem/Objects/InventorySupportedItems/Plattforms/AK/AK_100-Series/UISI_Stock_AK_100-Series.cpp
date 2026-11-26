class UUISI_Stock_AK_100-Series_C : public UInventorySupportedItems
{
public:
    struct FGameplayTagContainer SupportedItems = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Stock.AK Izhmash Polymer Stock")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Stock.AK SAG ACR Stock")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Stock.AK SAG Buffertube")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Stock.AK-12 Collapsible Stock"))
    });
};