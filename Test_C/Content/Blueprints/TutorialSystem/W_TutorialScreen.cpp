class UW_TutorialScreen_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/TutorialSystem/W_TutorialScreen.W_TutorialScreen_C:WidgetTree'";
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/Blueprints/TutorialSystem/W_TutorialScreen.W_TutorialScreen_C:FadeInOut_INST'"
    };
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UImage* Image_23;
    class UWidgetAnimation* FadeInOut;
};