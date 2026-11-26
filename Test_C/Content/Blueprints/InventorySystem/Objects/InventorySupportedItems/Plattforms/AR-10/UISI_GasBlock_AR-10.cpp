class UUISI_GasBlock_AR-10_C : public UInventorySupportedItems
{
public:
    struct FGameplayTagContainer SupportedItems = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Gas Tube.AR-10 Low Profile Gas Block")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Gas Tube.SR-25 M110 Gas Block")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Gas Tube.SR-25 HTX Concepts Low Profile Gas Block"))
    });
};