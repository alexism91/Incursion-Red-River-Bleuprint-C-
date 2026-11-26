class UU_MuzzleVelocity_C : public UStatItemConfig
{
public:
    class UWidgetBlueprintGeneratedClass* StatWidget = "WidgetBlueprintGeneratedClass'Test_C/Content/Blueprints/InventorySystem/Widgets/Stats/W_StatPlainTextBox.W_StatPlainTextBox_C'";
    struct FGameplayTag StatTag = {
        "TagName": FName("Inventory.Stats.Muzzle Velocity")
    };
    FText StatDisplayName = FText("Velocity");
    FText Unit = FText("m/s", CultureInvariant);
    class UTexture2D* StatIcon = "Texture2D'Test_C/Content/Blueprints/InventorySystem/Textures/Stats/MuzzleVelocity-Icon.MuzzleVelocity-Icon'";
    bool bUseColors = true;
    float MaxValue = 1200;
};