class UW_IRR_Currency_C : public UInventoryCurrencyWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/UICore/Widgets/SocialTab/W_IRR_Currency.W_IRR_Currency_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/UICore/Widgets/SocialTab/W_IRR_Currency.W_IRR_Currency_C:ExecuteUbergraph_W_IRR_Currency'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UHorizontalBox* MoneyBox;

};