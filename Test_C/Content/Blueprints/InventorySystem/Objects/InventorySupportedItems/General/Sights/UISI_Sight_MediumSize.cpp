class UUISI_Sight_MediumSize_C : public UInventorySupportedItems
{
public:
    struct FGameplayTagContainer SupportedItems = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Sight.Leupold HAMR 4x24 Hybrid Scope")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Sight.SIG Sauer BRAVO4 4x30 Scope")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Sight.Trijicon ACOG 4x24 Scope")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Sight.EOTECH HHS-1 Hybrid_Sight")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Sight.Trijicon SkeetIR 1x Thermal Scope")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Rail.GBRS Hydra Mount")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Sight.Elcan SpecterDR 1x/4x Scope"))
    });
};