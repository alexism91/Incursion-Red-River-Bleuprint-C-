class UW_TutorialMarker_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/TutorialSystem/W_TutorialMarker.W_TutorialMarker_C:WidgetTree'";
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class USizeBox* ProgressButtonBox;
    class UImage* Icon;
    class UImage* Background;
};