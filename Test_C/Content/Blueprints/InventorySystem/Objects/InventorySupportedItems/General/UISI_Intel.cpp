class UUISI_Intel_C : public UInventorySupportedItems
{
public:
    struct FGameplayTagContainer SupportedItems = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Quest.Defense.Intel A")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Quest.Defense.Intel B")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Quest.Defense.Intel C")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Quest.Defense.Intel D")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Quest.Defense.Intel Fang")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Quest.Operation Plans")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Quest.Shipping Manifest")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Quest.Troop Movement Paper")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Quest.USB Drive")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Quest.Classified Document-IGC")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Quest.Classified Document-VLF")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Quest.Classified Document-UICS")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Quest.Construction HxAxS Blueprint Materials List")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Quest.Construction HxAxS Blueprint Layout Guide")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Quest.Key Cards"))
    });
};