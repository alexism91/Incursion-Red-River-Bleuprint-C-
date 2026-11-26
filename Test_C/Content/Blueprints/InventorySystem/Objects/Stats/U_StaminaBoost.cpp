class UU_StaminaBoost_C : public UStatItemConfig
{
public:
    class UWidgetBlueprintGeneratedClass* StatWidget = "WidgetBlueprintGeneratedClass'Test_C/Content/Blueprints/InventorySystem/Widgets/Stats/W_StatPlainTextBox.W_StatPlainTextBox_C'";
    struct FGameplayTag StatTag = {
        "TagName": FName("Inventory.Stats.Stamina Boost")
    };
    FText StatDisplayName = FText("Stamina Boost");
    class USGE_Stamina_Influence_C* StatEffect = "SGE_Stamina_Influence_C'Test_C/Content/Blueprints/InventorySystem/Objects/Stats/U_StaminaBoost.Default__U_StaminaBoost_C:SGE_Stamina_Influence_C_0'";
    FText Unit = FText("%", CultureInvariant);
    class UTexture2D* StatIcon = "Texture2D'Test_C/Content/Blueprints/InventorySystem/Textures/Stats/Medical_Item/StaminaBoost-Icon.StaminaBoost-Icon'";
    bool bUseColors = true;

};