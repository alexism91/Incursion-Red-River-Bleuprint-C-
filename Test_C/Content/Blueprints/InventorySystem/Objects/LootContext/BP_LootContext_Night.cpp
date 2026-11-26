class UBP_LootContext_Night_C : public ULootContextModifier
{
public:
    struct FGameplayTagContainer RequiredContainerTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Loot.Container")),
        FGameplayTag::RequestGameplayTag(FName("Loot.LooseLoot"))
    });
    struct FGameplayTagContainer RequiredQueryTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("World.Time.Night"))
    });
    TMap<struct FGameplayTag, float> RaritySpawnMultipliers = {
        { {
            "TagName": FName("Inventory.Rarity Types.Tier 3")
        }, 2 }, 
        { {
            "TagName": FName("Inventory.Rarity Types.Tier 4")
        }, 2 }
    };
};