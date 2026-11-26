class UU_HealInstant_C : public UStatItemConfig
{
public:
    class UWidgetBlueprintGeneratedClass* StatWidget = "WidgetBlueprintGeneratedClass'Test_C/Content/Blueprints/InventorySystem/Widgets/Stats/W_StatPlainTextBox.W_StatPlainTextBox_C'";
    struct FGameplayTag StatTag = {
        "TagName": FName("Inventory.Stats.Heal Instant")
    };
    FText StatDisplayName = FText("Heal Instant");
    class USGE_Attribute_Modifier_Instant_C* StatEffect = "SGE_Attribute_Modifier_Instant_C'Test_C/Content/Blueprints/InventorySystem/Objects/Stats/U_HealInstant.Default__U_HealInstant_C:SGE_Heal_C_0'";
    FText Unit = FText("HP", CultureInvariant);
    class UTexture2D* StatIcon = "Texture2D'Test_C/Content/Blueprints/InventorySystem/Textures/Stats/Medical_Item/HealInstant-Icon.HealInstant-Icon'";

};