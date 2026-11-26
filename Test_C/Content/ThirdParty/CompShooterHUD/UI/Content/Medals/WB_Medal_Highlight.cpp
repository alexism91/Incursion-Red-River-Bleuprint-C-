class UWB_Medal_Highlight_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/Medals/WB_Medal_Highlight.WB_Medal_Highlight_C:WidgetTree'";
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/Medals/WB_Medal_Highlight.WB_Medal_Highlight_C:Highlight_Fade_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/Medals/WB_Medal_Highlight.WB_Medal_Highlight_C:ExecuteUbergraph_WB_Medal_Highlight'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UOverlay* OV_Content;
    class UImage* Line4;
    class UImage* Line3;
    class UImage* Line2;
    class UImage* Line1;
    class UImage* Hor_Highlight2;
    class UImage* Hor_Highlight1;
    class UImage* Highlight_Circle;
    class UImage* Highlight_Blur;
    class UWidgetAnimation* Highlight_Fade;

};