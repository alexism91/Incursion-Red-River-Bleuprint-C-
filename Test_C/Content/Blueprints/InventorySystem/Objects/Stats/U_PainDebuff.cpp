class UU_PainDebuff_C : public UStatItemConfig
{
public:
    class UWidgetBlueprintGeneratedClass* StatWidget = "WidgetBlueprintGeneratedClass'Test_C/Content/Blueprints/InventorySystem/Widgets/Stats/W_StatPlainTextBox.W_StatPlainTextBox_C'";
    struct FGameplayTag StatTag = {
        "TagName": FName("Inventory.Stats.Pain Debuff")
    };
    FText StatDisplayName = FText("Pain Debuff");
    class USGE_Attribute_Buff_C* StatEffect = "SGE_Attribute_Buff_C'Test_C/Content/Blueprints/InventorySystem/Objects/Stats/U_PainDebuff.Default__U_PainDebuff_C:SGE_Attribute_Buff_C_0'";
    FText Unit = FText("HP", CultureInvariant);
    class UTexture2D* StatIcon = "Texture2D'Test_C/Content/Blueprints/InventorySystem/Textures/Stats/Medical_Item/PainDebuff-Icon.PainDebuff-Icon'";

};