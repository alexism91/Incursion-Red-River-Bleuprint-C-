class UUISI_Sight_BigSize_C : public UInventorySupportedItems
{
public:
    struct FGameplayTagContainer SupportedItems = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Sight.EOTECH Vudu 1-6x Scope")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Sight.EOTECH CNVDT 1x Thermal Scope")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Sight.Trijicon ACOG 6x48 Scope")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Sight.Elcan SpecterDr 6x Scope")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Sight.Schmidt and Bender 1-8x24 PM II ShortDot Scope")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Sight.Nightforce ATACR 4-16x42 Scope"))
    });
};