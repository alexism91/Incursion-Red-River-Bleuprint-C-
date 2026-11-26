class UU_DurabilityBurn_C : public UStatItemConfig
{
public:
    struct FGameplayTag StatTag = {
        "TagName": FName("Inventory.Stats.Durability Burn")
    };
    FText StatDisplayName = FText("Durability Burn");
    FText StatDescription = FText("Influences how fast the weapon durability degrades.");
    FText Unit = FText("%", CultureInvariant);
};