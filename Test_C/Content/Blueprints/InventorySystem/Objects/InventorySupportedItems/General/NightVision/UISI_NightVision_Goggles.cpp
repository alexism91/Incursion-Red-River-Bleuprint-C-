class UUISI_NightVision_Goggles_C : public UInventorySupportedItems
{
public:
    struct FGameplayTagContainer SupportedItems = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Gear.Night Vision.PVS 31s Night Vision Goggles")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Gear.Night Vision.L3Harris GPNVG-18"))
    });
};