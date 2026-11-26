class UU_Heat_C : public UStatItemConfig
{
public:
    struct FGameplayTag StatTag = {
        "TagName": FName("Inventory.Stats.Heat")
    };
    FText StatDisplayName = FText("Heat");
    FText StatDescription = FText("Influences how much the weapon heats over time while firing it.");
    FText Unit = FText("%", CultureInvariant);
};