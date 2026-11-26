class UW_GCPS_ToolTip_Default_C : public UIRRToolTipWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/MissionSystem/UI/GCPS/Minimap/W_GCPS_ToolTip_Default.W_GCPS_ToolTip_Default_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/Blueprints/MissionSystem/UI/GCPS/Minimap/W_GCPS_ToolTip_Default.W_GCPS_ToolTip_Default_C:FadeIn_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/UI/GCPS/Minimap/W_GCPS_ToolTip_Default.W_GCPS_ToolTip_Default_C:ExecuteUbergraph_W_GCPS_ToolTip_Default'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("FadeIn"), FGuid(0x8573183F, 0xDA6B35C8, 0xA052D4D6, 0x51A8218C) }, 
        { FName("CanvasPanel_0"), FGuid(0xCC98096F, 0xAFE33A04, 0x87D44090, 0x2D3909C6) }, 
        { FName("DescriptionText"), FGuid(0xBCB446A6, 0xA1C032A4, 0xAB9A63F0, 0x3B365B51) }, 
        { FName("HeadlineText"), FGuid(0xE8B7C0D3, 0x5207305B, 0xB5118367, 0xC4C41244) }, 
        { FName("W_IRR_Background"), FGuid(0x7070A72F, 0xF7CA3056, 0xBE70A986, 0x6DECD865) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    enum Visibility = ESlateVisibility::HitTestInvisible;
    class UW_IRR_Background_C* W_IRR_Background;
    class UIRRTextBlock* HeadlineText;
    class UIRRTextBlock* DescriptionText;
    class UCanvasPanel* CanvasPanel_0;
    class UWidgetAnimation* FadeIn;

};