class UWB_MainTutorialWindow_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/MainTutorialMessage/TutorialContent/WB_MainTutorialWindow.WB_MainTutorialWindow_C:WidgetTree'";
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/MainTutorialMessage/TutorialContent/WB_MainTutorialWindow.WB_MainTutorialWindow_C:FadeIn_INST'",
        "WidgetAnimation'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/MainTutorialMessage/TutorialContent/WB_MainTutorialWindow.WB_MainTutorialWindow_C:OnButtonClicked_INST'",
        "WidgetAnimation'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/MainTutorialMessage/TutorialContent/WB_MainTutorialWindow.WB_MainTutorialWindow_C:UI_Idle_INST'",
        "WidgetAnimation'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/MainTutorialMessage/TutorialContent/WB_MainTutorialWindow.WB_MainTutorialWindow_C:UI_Sliders_INST'"
    };
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/MainTutorialMessage/TutorialContent/WB_MainTutorialWindow.WB_MainTutorialWindow_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/MainTutorialMessage/TutorialContent/WB_MainTutorialWindow.WB_MainTutorialWindow_C:ExecuteUbergraph_WB_MainTutorialWindow'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("ButtonTextColor"), FGuid(0xFDF3EB66, 0x452F7069, 0xF3598C9E, 0xA5B4494D) }, 
        { FName("Widget_TutorialVideo"), FGuid(0x63B5BBB3, 0x4973ABFA, 0xFDA10ABB, 0x72781261) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FLinearColor ButtonTextColor = FLinearColor(0, 0, 0, 0);
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UWB_Base_Icon_C* WB_Base_Icon;
    class UImage* Top_Shine;
    class UImage* Top_Line;
    class UImage* Top_Fill;
    class UTextBlock* Text_Headline;
    class USlider* Slider_82;
    class USlider* Slider_20;
    class URetainerBox* RetainerBox_1;
    class URetainerBox* RetainerBox_0;
    class UOverlay* OV_TutorialVideo;
    class UOverlay* OV_HeadlineIcon;
    class UOverlay* OV_CustomText;
    class UTextBlock* MessageText;
    class UImage* Image_25;
    class UHorizontalBox* HB_Headline;
    class UTextBlock* ButtonText;
    class UWB_Base_Icon_C* ButtonIcon;
    class UButton* Button_Continue;
    class UImage* Bottom_Shine;
    class UImage* Bottom_Line;
    class UImage* Bottom_Fill;
    class UBorder* B_ContentFill;
    class UWidgetAnimation* FadeIn;
    class UWidgetAnimation* OnButtonClicked;
    class UWidgetAnimation* UI_Idle;
    class UWidgetAnimation* UI_Sliders;
    class UWB_TutorialVideo_C* Widget_TutorialVideo;

};