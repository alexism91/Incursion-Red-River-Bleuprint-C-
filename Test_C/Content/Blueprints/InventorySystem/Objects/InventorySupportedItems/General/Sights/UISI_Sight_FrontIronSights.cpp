class UUISI_Sight_FrontIronSights_C : public UInventorySupportedItems
{
public:
    struct FGameplayTagContainer SupportedItems = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Sight.KAC Folding Micro Front Sight")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Sight.RFB Front Sight"))
    });
};