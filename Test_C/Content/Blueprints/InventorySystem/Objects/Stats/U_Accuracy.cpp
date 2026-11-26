class UU_Accuracy_C : public UStatItemConfig
{
public:
    class UWidgetBlueprintGeneratedClass* StatWidget = "WidgetBlueprintGeneratedClass'Test_C/Content/Blueprints/InventorySystem/Widgets/Stats/W_StatPlainTextBox.W_StatPlainTextBox_C'";
    struct FGameplayTag StatTag = {
        "TagName": FName("Inventory.Stats.Accuracy")
    };
    FText StatDisplayName = FText("Accuracy");
    FText Unit = FText("MRAD", CultureInvariant);
    class UTexture2D* StatIcon = "Texture2D'Test_C/Content/Blueprints/InventorySystem/Textures/Stats/Accuracy-Icon.Accuracy-Icon'";
    bool bInvert = true;
    float MaxValue = 5;
};