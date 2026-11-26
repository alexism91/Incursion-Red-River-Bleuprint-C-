class UU_Cooldown_C : public UStatItemConfig
{
public:
    struct FGameplayTag StatTag = {
        "TagName": FName("Inventory.Stats.Cooldown")
    };
    FText StatDisplayName = FText("Cooldown");
    FText StatDescription = FText("Influences how fast the weapon cooldowns again.");
    FText Unit = FText("%", CultureInvariant);
};