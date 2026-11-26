class UUISI_Stock_MP5_C : public UInventorySupportedItems
{
public:
    struct FGameplayTagContainer SupportedItems = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Stock.MP5 A3 Fixed Buttstock")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Stock.MP5 End-Cap Buttstock")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Stock.MP5 A3 F Retractable Buttstock")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Stock.MP5 A2 Fixed Buttstock"))
    });
};