class UBP_LootContext_IncreasedRarity_C : public ULootContextModifier
{
public:
    struct FGameplayTagContainer RequiredContainerTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Loot.Container")),
        FGameplayTag::RequestGameplayTag(FName("Loot.LooseLoot"))
    });
    TMap<struct FGameplayTag, float> RaritySpawnMultipliers = {
        { {
            "TagName": FName("Inventory.Rarity Types.Tier 3")
        }, 1.5 }, 
        { {
            "TagName": FName("Inventory.Rarity Types.Tier 4")
        }, 1.5 }
    };
    float ContainerSpawnCountMultiplier = 1.25;
};