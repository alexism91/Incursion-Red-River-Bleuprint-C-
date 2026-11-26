class UUISI_PistolGrip_AK_C : public UInventorySupportedItems
{
public:
    struct FGameplayTagContainer SupportedItems = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Pistol Grip.AKM Wooden Pistol Grip")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Pistol Grip.AK Izhmash Polymer PistolGrip")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Pistol Grip.AKS-74U Pistol Grip")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Pistol Grip.PP-19 Pistol Grip")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Rail.AK Doublestar AR-15 Pistol Grip Adapter")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Pistol Grip.AK Magpul MOE FDE Pistol Grip")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Pistol Grip.AK-12 Pistol Grip"))
    });
};