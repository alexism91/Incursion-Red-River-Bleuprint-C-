class UUISI_VSS_VAL_Suppressor_C : public UInventorySupportedItems
{
public:
    struct FGameplayTagContainer SupportedItems = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Muzzle.VSS Integral Suppressor")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Muzzle.AS VAL Integral Suppressor"))
    });
};