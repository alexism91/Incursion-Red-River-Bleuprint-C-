class UUISI_Sight_Mount_M14_C : public UInventorySupportedItems
{
public:
    struct FGameplayTagContainer SupportedItems = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Rail.M14 Leapers UTG Sight Mount")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Rail.M14 SAGE International Sight Mount"))
    });
};