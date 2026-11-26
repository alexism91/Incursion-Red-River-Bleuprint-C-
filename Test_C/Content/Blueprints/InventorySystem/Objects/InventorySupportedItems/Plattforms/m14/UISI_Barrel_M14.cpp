class UUISI_Barrel_M14_C : public UInventorySupportedItems
{
public:
    struct FGameplayTagContainer SupportedItems = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Barrel.M14_16 Inch 762x51 Barrel")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Barrel.M14 22 Inch 762x51 Barrel"))
    });
};