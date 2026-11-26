class UU_ChanceToWound_C : public UStatItemConfig
{
public:
    class UWidgetBlueprintGeneratedClass* StatWidget = "WidgetBlueprintGeneratedClass'Test_C/Content/Blueprints/InventorySystem/Widgets/Stats/W_StatPlainTextBox.W_StatPlainTextBox_C'";
    struct FGameplayTag StatTag = {
        "TagName": FName("Inventory.Stats.Chance To Wound")
    };
    FText StatDisplayName = FText("Chance To Wound");
    class USGE_IsWounded_C* StatEffect = "SGE_IsWounded_C'Test_C/Content/Blueprints/InventorySystem/Objects/Stats/U_ChanceToWound.Default__U_ChanceToWound_C:SGE_Wound_C_0'";
    FText Unit = FText("%", CultureInvariant);
    class UTexture2D* StatIcon = "Texture2D'Test_C/Content/Blueprints/InventorySystem/Textures/Stats/Medical_Item/BleedingTime-Icon.BleedingTime-Icon'";

};