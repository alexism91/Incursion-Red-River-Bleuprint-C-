class UUISI_TacticalDevices_SmallSize_C : public UInventorySupportedItems
{
public:
    struct FGameplayTagContainer SupportedItems = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Tactical.Steiner CQBL-1 Laser")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Tactical.Zenitco Klesch 2IKS3 Laser")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Tactical.Inforce APLc Compact Flashlight")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Tactical.Streamlight TLR-1HL Flashlight"))
    });
};