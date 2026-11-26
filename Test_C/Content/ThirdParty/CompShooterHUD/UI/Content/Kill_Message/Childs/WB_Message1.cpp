class UWB_Message1_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/Kill_Message/Childs/WB_Message1.WB_Message1_C:WidgetTree'";
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/Kill_Message/Childs/WB_Message1.WB_Message1_C:FadeInAnim_INST'",
        "WidgetAnimation'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/Kill_Message/Childs/WB_Message1.WB_Message1_C:FadeOutAnim_INST'",
        "WidgetAnimation'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/Kill_Message/Childs/WB_Message1.WB_Message1_C:FadeHighlight2_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/Kill_Message/Childs/WB_Message1.WB_Message1_C:ExecuteUbergraph_WB_Message1'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("IsRunning"), FGuid(0x2D6EC0A1, 0x48F8D6CF, 0x09E9DFB0, 0x1FE9ED13) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedPaint = false;
    class USizeBox* SizeBox_2;
    class UScaleBox* Scale_Icon;
    class USizeBox* SB_Icon;
    class USizeBox* SB_Blur;
    class UImage* Img_Highlight2;
    class UImage* Img_Highlight;
    class UImage* Img_Blur;
    class UImage* Icon;
    class UTextBlock* Head2;
    class UTextBlock* Head1;
    class UHorizontalBox* HB_Head;
    class UTextBlock* Child2;
    class UTextBlock* Child1;
    class UBorder* b_Icon;
    class UBorder* b_HighlightAnim;
    class UBorder* b_Highlight2Color;
    class UBorder* b_Highlight2;
    class UBorder* b_Highlight;
    class UBorder* b_Head;
    class UBorder* b_Content;
    class UBorder* b_Child;
    class UBorder* b_BlurAnim;
    class UBorder* b_Blur;
    class UWidgetAnimation* FadeInAnim;
    class UWidgetAnimation* FadeOutAnim;
    class UWidgetAnimation* FadeHighlight2;
    bool IsRunning;

};