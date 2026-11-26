class UW_StatPlainTextBox_C : public UStatItemWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/Stats/W_StatPlainTextBox.W_StatPlainTextBox_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/Stats/W_StatPlainTextBox.W_StatPlainTextBox_C:ExecuteUbergraph_W_StatPlainTextBox'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("CompareBox"), FGuid(0x490F4FF4, 0xDE5533E3, 0x964B53C5, 0x642462E7) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    enum StatItemAppearance = EStatItemAppearanceType::PlainTextBox;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UHorizontalBox* CompareBox;

};