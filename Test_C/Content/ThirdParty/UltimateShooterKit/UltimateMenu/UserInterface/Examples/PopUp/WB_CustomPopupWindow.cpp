class UWB_CustomPopupWindow_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/UltimateShooterKit/UltimateMenu/UserInterface/Examples/PopUp/WB_CustomPopupWindow.WB_CustomPopupWindow_C:WidgetTree'";
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/ThirdParty/UltimateShooterKit/UltimateMenu/UserInterface/Examples/PopUp/WB_CustomPopupWindow.WB_CustomPopupWindow_C:FadeIn_INST'",
        "WidgetAnimation'Test_C/Content/ThirdParty/UltimateShooterKit/UltimateMenu/UserInterface/Examples/PopUp/WB_CustomPopupWindow.WB_CustomPopupWindow_C:OnButtonClicked_INST'",
        "WidgetAnimation'Test_C/Content/ThirdParty/UltimateShooterKit/UltimateMenu/UserInterface/Examples/PopUp/WB_CustomPopupWindow.WB_CustomPopupWindow_C:UI_Idle_INST'",
        "WidgetAnimation'Test_C/Content/ThirdParty/UltimateShooterKit/UltimateMenu/UserInterface/Examples/PopUp/WB_CustomPopupWindow.WB_CustomPopupWindow_C:UI_Sliders_INST'"
    };
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/ThirdParty/UltimateShooterKit/UltimateMenu/UserInterface/Examples/PopUp/WB_CustomPopupWindow.WB_CustomPopupWindow_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/UltimateShooterKit/UltimateMenu/UserInterface/Examples/PopUp/WB_CustomPopupWindow.WB_CustomPopupWindow_C:ExecuteUbergraph_WB_CustomPopupWindow'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("ButtonTextColor"), FGuid(0x3AECA4E0, 0x41D6EC27, 0x6F47288E, 0x14C73416) }, 
        { FName("Widget_TutorialVideo"), FGuid(0x5AA2E098, 0x49F87A26, 0x14CEB08B, 0x61472422) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FLinearColor ButtonTextColor = FLinearColor(0, 0, 0, 0);
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_WindowHeader_C* W_WindowHeader;
    class UW_IRR_Background_Gradient_C* W_IRR_Background_Gradient;
    class UW_IRR_Background_C* W_IRR_Background;
    class USizeBox* SizeBox_25;
    class UIRRTextBlock* MessageText;
    class UIRRScaledSizeBox* IRRScaledSizeBox_0;
    class UW_IRR_Button_Medium_C* ContinueButton;
    class UOverlay* ContentContainer;
    class UOverlay* Content;
    class UOverlay* Container;
    class UHorizontalBox* ButtonBox;
    class UWidgetAnimation* FadeIn;
    class UWidgetAnimation* OnButtonClicked;
    class UWidgetAnimation* UI_Idle;
    class UWidgetAnimation* UI_Sliders;
    class UWB_TutorialVideo_C* Widget_TutorialVideo;

};