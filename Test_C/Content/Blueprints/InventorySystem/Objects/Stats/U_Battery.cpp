class UU_Battery_C : public UStatItemConfig
{
public:
    class UWidgetBlueprintGeneratedClass* StatWidget = "WidgetBlueprintGeneratedClass'Test_C/Content/Blueprints/InventorySystem/Widgets/Stats/W_StatProgressBar.W_StatProgressBar_C'";
    struct FGameplayTag StatTag = {
        "TagName": FName("Inventory.Stats.Durability")
    };
    FText StatDisplayName = FText("Battery");
    FText Unit = FText("%", CultureInvariant);
    class UTexture2D* StatIcon = "Texture2D'Test_C/Content/Blueprints/InventorySystem/Textures/Stats/Durability-Icon.Durability-Icon'";
    bool bUseColors = true;
    float MaxValue = 100;

};