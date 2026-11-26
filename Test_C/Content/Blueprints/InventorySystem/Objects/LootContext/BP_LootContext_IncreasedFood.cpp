class UBP_LootContext_IncreasedFood_C : public ULootContextModifier
{
public:
    struct FGameplayTagContainer RequiredContainerTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Loot.Container.Crate")),
        FGameplayTag::RequestGameplayTag(FName("Loot.Container.Jacket")),
        FGameplayTag::RequestGameplayTag(FName("Loot.LooseLoot"))
    });
    TMap<struct FGameplayTag, float> ItemSpawnMultipliers = {
        { {
            "TagName": FName("Inventory.Items.Provisions")
        }, 10 }
    };
    float ContainerSpawnCountMultiplier = 1.5;
};