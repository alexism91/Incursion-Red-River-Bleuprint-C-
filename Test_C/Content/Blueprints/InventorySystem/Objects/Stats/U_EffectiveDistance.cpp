class UU_EffectiveDistance_C : public UStatItemConfig
{
public:
    class UWidgetBlueprintGeneratedClass* StatWidget = "WidgetBlueprintGeneratedClass'Test_C/Content/Blueprints/InventorySystem/Widgets/Stats/W_StatPlainTextBox.W_StatPlainTextBox_C'";
    struct FGameplayTag StatTag = {
        "TagName": FName("Inventory.Stats.Effective Distance")
    };
    FText StatDisplayName = FText("Eff. Distance");
    FText Unit = FText("m", CultureInvariant);
    class UTexture2D* StatIcon = "Texture2D'Test_C/Content/Blueprints/InventorySystem/Textures/Stats/EffectiveDistance-Icon.EffectiveDistance-Icon'";
    float MaxValue = 100;
};