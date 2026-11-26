class UW_StatPrice_C : public UStatItemWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/Stats/W_StatPrice.W_StatPrice_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/Stats/W_StatPrice.W_StatPrice_C:ExecuteUbergraph_W_StatPrice'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UWidgetSwitcher* WidgetSwitcher_0;
    class UIRRTextBlock* FullPrice;
    class UIRRTextBlock* EstimatedPrice;

};