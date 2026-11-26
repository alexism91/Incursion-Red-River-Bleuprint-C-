class UUISI_VSS_VAL_Mag_C : public UInventorySupportedItems
{
public:
    struct FGameplayTagContainer SupportedItems = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Mag.VAL 9x39 Plum 20Rnd")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Mag.VAL 9x39 Plum 10rnd"))
    });
};