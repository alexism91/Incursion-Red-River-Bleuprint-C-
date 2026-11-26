class UW_StatWeight_C : public UStatItemWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/Stats/W_StatWeight.W_StatWeight_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/Stats/W_StatWeight.W_StatWeight_C:ExecuteUbergraph_W_StatWeight'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UIRRTextBlock* WeightText_1;
    class UIRRTextBlock* WeightText;

};