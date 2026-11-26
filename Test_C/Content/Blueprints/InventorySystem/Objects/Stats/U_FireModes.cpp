class UU_FireModes_C : public UStatItemConfig
{
public:
    struct FGameplayTagContainer Fire Modes = FGameplayTagContainer({});
    class UWidgetBlueprintGeneratedClass* StatWidget = "WidgetBlueprintGeneratedClass'Test_C/Content/Blueprints/InventorySystem/Widgets/Stats/W_StatPlainTextBox.W_StatPlainTextBox_C'";
    struct FGameplayTag StatTag = {
        "TagName": FName("Inventory.Stats.Firemodes")
    };
    FText StatDisplayName = FText("Firemodes");
    FText StatDescription = FText("Types Of Fire");
    class UTexture2D* StatIcon = "Texture2D'Test_C/Content/Blueprints/InventorySystem/Textures/Stats/Firemodes-Icon.Firemodes-Icon'";
    bool bInvert = true;
    float MaxValue = 100;

};