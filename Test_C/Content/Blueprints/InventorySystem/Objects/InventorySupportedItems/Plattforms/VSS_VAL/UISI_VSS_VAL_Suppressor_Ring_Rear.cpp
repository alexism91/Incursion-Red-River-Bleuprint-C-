class UUISI_VSS_VAL_Suppressor_Ring_Rear_C : public UInventorySupportedItems
{
public:
    struct FGameplayTagContainer SupportedItems = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Rail.VAL Aftermarket Picatinny Rail Long")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Rail.VAL King Arms Picatinny Basic Rail"))
    });
};