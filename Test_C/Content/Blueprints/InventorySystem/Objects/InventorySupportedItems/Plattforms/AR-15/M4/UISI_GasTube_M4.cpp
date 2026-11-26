class UUISI_GasTube_M4_C : public UInventorySupportedItems
{
public:
    struct FGameplayTagContainer SupportedItems = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Gas Tube.Daniel Defense MK12 Low Profile Gas Block")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Gas Tube.M4A1 Front Sight With Gas Block"))
    });
};