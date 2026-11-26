class UUISI_Stock_ZenitCo_PT_C : public UInventorySupportedItems
{
public:
    struct FGameplayTagContainer SupportedItems = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Stock.Zenitco PT-1 Stock")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Stock.Zenitco PT-3 Stock"))
    });
};