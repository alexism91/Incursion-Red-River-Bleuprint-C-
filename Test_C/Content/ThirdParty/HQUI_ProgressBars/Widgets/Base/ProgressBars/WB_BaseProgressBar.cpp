class UWB_BaseProgressBar_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/HQUI_ProgressBars/Widgets/Base/ProgressBars/WB_BaseProgressBar.WB_BaseProgressBar_C:WidgetTree'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/HQUI_ProgressBars/Widgets/Base/ProgressBars/WB_BaseProgressBar.WB_BaseProgressBar_C:ExecuteUbergraph_WB_BaseProgressBar'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("bUseShader"), FGuid(0x2613CD27, 0x4251466F, 0x40ED81AD, 0x6B19865F) }, 
        { FName("Percent"), FGuid(0xEE215F9F, 0x4D64D075, 0x65A701B7, 0x2F065140) }, 
        { FName("FillType"), FGuid(0xFCF1C924, 0x44B50E8B, 0x912E7593, 0x6CAA2771) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    bool bIsVolatile = true;
    enum Visibility = ESlateVisibility::HitTestInvisible;
    class UWidgetSwitcher* WS_Marquee;
    class UProgressBar* TopToBottom;
    class UProgressBar* RightToLeft;
    class UProgressBar* LeftToRight;
    class UImage* Img_TopToBottom;
    class UImage* Img_RightToLeft;
    class UImage* Img_LeftToRight;
    class UWidgetSwitcher* Img_FillTypes;
    class UHorizontalBox* Img_FillFromCenter;
    class UImage* Img_BottomToTop;
    class UWidgetSwitcher* FillTypes;
    class UProgressBar* FillFromCenter;
    class UImage* Center_Right;
    class UImage* Center_Left;
    class UProgressBar* BottomToTop;
    class UBorder* B_FillTypes;
    byte FillType;
    double Percent;
    bool bUseShader;

};