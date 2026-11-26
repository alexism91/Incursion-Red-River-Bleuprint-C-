class UU_HealOverTime_C : public UStatItemConfig
{
public:
    class UWidgetBlueprintGeneratedClass* StatWidget = "WidgetBlueprintGeneratedClass'Test_C/Content/Blueprints/InventorySystem/Widgets/Stats/W_StatPlainTextBox.W_StatPlainTextBox_C'";
    struct FGameplayTag StatTag = {
        "TagName": FName("Inventory.Stats.Heal Over Time")
    };
    FText StatDisplayName = FText("Heal Over Time");
    class USGE_Attribute_Modifier_OverTime_C* StatEffect = "SGE_Attribute_Modifier_OverTime_C'Test_C/Content/Blueprints/InventorySystem/Objects/Stats/U_HealOverTime.Default__U_HealOverTime_C:SGE_Attribute_Modifier_OverTime_C_0'";
    FText Unit = FText("HP", CultureInvariant);
    class UTexture2D* StatIcon = "Texture2D'Test_C/Content/Blueprints/InventorySystem/Textures/Stats/Medical_Item/HealOverTimeStatus-Icon.HealOverTimeStatus-Icon'";

};