class UWB_CustomTutorialWindow_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/UltimateShooterKit/UltimateMenu/UserInterface/Examples/Tutorial/WB_CustomTutorialWindow.WB_CustomTutorialWindow_C:WidgetTree'";
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/ThirdParty/UltimateShooterKit/UltimateMenu/UserInterface/Examples/Tutorial/WB_CustomTutorialWindow.WB_CustomTutorialWindow_C:FadeIn_INST'"
    };
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/ThirdParty/UltimateShooterKit/UltimateMenu/UserInterface/Examples/Tutorial/WB_CustomTutorialWindow.WB_CustomTutorialWindow_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/UltimateShooterKit/UltimateMenu/UserInterface/Examples/Tutorial/WB_CustomTutorialWindow.WB_CustomTutorialWindow_C:ExecuteUbergraph_WB_CustomTutorialWindow'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Tutorialge Info"), FGuid(0xFD858716, 0x42DDFBBA, 0x41C7878C, 0xF10EF2F7) }, 
        { FName("TutorialIndex"), FGuid(0x379C196F, 0x41F97AD9, 0x4210F486, 0xB6F624A0) }, 
        { FName("ButtonTextColor"), FGuid(0x74064BAF, 0x4538B541, 0x06A387AB, 0x6D41745D) }, 
        { FName("Widget_TutorialVideo"), FGuid(0x6B8CDBA3, 0x4779D801, 0xEC0EF6A6, 0x1AD4CAFD) }, 
        { FName("FadeIn"), FGuid(0xD6666BE5, 0xF1D033DE, 0xB7134A38, 0xC82B32C8) }, 
        { FName("ButtonBox"), FGuid(0xEA10C89C, 0xB3493C73, 0xAC9C5AA9, 0x3C65F5D1) }, 
        { FName("Container"), FGuid(0xFBA980EF, 0x31833250, 0x9F2E0CD0, 0x2CC885C2) }, 
        { FName("Content"), FGuid(0x7B6AFBEA, 0x59E53459, 0xAD519D59, 0xA7B0FFBA) }, 
        { FName("ContentContainer"), FGuid(0xE99FFF4E, 0x69CF3883, 0x89E2374E, 0x66A6E5BA) }, 
        { FName("ContinueButton"), FGuid(0x671305FE, 0x29823E50, 0x9077A019, 0x4DE4B207) }, 
        { FName("IRRScaledSizeBox_0"), FGuid(0xA65821FA, 0x684C34CD, 0xA1BCA7B5, 0x0A5ECFA4) }, 
        { FName("MessageText"), FGuid(0x03BEE17C, 0xB0B832E1, 0xA90EFA23, 0xB40BBF30) }, 
        { FName("SizeBox_25"), FGuid(0x8A862205, 0xBE1837B0, 0x9BB58528, 0x438B389A) }, 
        { FName("W_IRR_Background"), FGuid(0x8E55CA47, 0xA5E33597, 0x91B09465, 0x4809CBAD) }, 
        { FName("W_IRR_Background_Gradient"), FGuid(0xDC23E6BF, 0x88F13389, 0xB51E8B12, 0xEBB6853A) }, 
        { FName("W_WindowHeader"), FGuid(0xEE65F0BC, 0x109E3788, 0x9B012634, 0xC6F77BED) }
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
    class UWB_TutorialVideo_C* Widget_TutorialVideo;
    int TutorialIndex;
    TArray<struct FS_MainTutorialMessage> Tutorialge Info;

};