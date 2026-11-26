class UUISI_Handguard_AK_C : public UInventorySupportedItems
{
public:
    struct FGameplayTagContainer SupportedItems = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Handguard.CAF WASR Wooden Handguard")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Handguard.AK Izhmash Polymer Handguard")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Handguard.AK Zenitco B-10 Handguard")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Handguard.AK Zenitco B-30 Handguard")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Handguard.AK SAG MK1 Handguard")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Handguard.AK SAG MK2x1 Handguard")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Handguard.AK Magpul MOE M-LOK FDE Hanguard")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Handguard.KPYK CRC-1U040 Handguard"))
    });
};