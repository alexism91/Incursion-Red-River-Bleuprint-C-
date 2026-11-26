class UW_AlphaWatermark_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/UICore/Widgets/Misc/W_AlphaWatermark.W_AlphaWatermark_C:WidgetTree'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/UICore/Widgets/Misc/W_AlphaWatermark.W_AlphaWatermark_C:ExecuteUbergraph_W_AlphaWatermark'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UTextBlock* BuildVersionText;

};