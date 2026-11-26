class UW_GCPS_ToolTip_Operation_C : public UIRRToolTipWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/MissionSystem/UI/GCPS/Minimap/W_GCPS_ToolTip_Operation.W_GCPS_ToolTip_Operation_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/Blueprints/MissionSystem/UI/GCPS/Minimap/W_GCPS_ToolTip_Operation.W_GCPS_ToolTip_Operation_C:FadeIn_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/UI/GCPS/Minimap/W_GCPS_ToolTip_Operation.W_GCPS_ToolTip_Operation_C:ExecuteUbergraph_W_GCPS_ToolTip_Operation'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("FadeIn"), FGuid(0x8573183F, 0xDA6B35C8, 0xA052D4D6, 0x51A8218C) }, 
        { FName("CanvasPanel_0"), FGuid(0xCC98096F, 0xAFE33A04, 0x87D44090, 0x2D3909C6) }, 
        { FName("FactionText"), FGuid(0x46BD5E7A, 0x469B3874, 0x9800429B, 0xC0DA9122) }, 
        { FName("HeadlineText"), FGuid(0xE8B7C0D3, 0x5207305B, 0xB5118367, 0xC4C41244) }, 
        { FName("TypeText"), FGuid(0x9E27B77E, 0x41222FD9, 0x67D18098, 0xEDB0824F) }, 
        { FName("W_IRR_Background"), FGuid(0x7070A72F, 0xF7CA3056, 0xBE70A986, 0x6DECD865) }, 
        { FName("W_RewardBox"), FGuid(0x50B2482C, 0x450EE88B, 0x4543FBBB, 0x6B5A7DED) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    enum Visibility = ESlateVisibility::HitTestInvisible;
    class UW_RewardBox_C* W_RewardBox;
    class UW_IRR_Background_C* W_IRR_Background;
    class UIRRTextBlock* TypeText;
    class UIRRTextBlock* HeadlineText;
    class UIRRTextBlock* FactionText;
    class UCanvasPanel* CanvasPanel_0;
    class UWidgetAnimation* FadeIn;

};