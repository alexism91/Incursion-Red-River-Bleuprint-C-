class UUISI_Sight_Canted_C : public UInventorySupportedItems
{
public:
    struct FGameplayTagContainer SupportedItems = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Rail.Leupold DeltaPoint Mount")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Rail.Trijicon RMR Mount")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Sight.Zenitco BelOMO PK-06 Reflex Sight"))
    });
};