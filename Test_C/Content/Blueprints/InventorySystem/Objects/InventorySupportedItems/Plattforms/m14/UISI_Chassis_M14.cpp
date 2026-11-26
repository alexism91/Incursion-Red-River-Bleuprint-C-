class UUISI_Chassis_M14_C : public UInventorySupportedItems
{
public:
    struct FGameplayTagContainer SupportedItems = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Stock.M14 Troy SASS Chassis")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Stock.M14 Springfield Armory Wooden Chassis")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Stock.M14 Norinco M305 Polymer Chassis")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Stock.M14 SAGE International Chassis"))
    });
};