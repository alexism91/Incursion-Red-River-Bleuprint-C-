class UWBP_ChatEntry_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/UICore/Widgets/SocialTab/WBP_ChatEntry.WBP_ChatEntry_C:WidgetTree'";
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UIRRTextBlock* NameText;
    class UIRRTextBlock* MsgText;
};