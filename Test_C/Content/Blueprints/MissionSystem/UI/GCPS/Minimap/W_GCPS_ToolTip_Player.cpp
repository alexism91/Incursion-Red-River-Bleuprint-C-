class UW_GCPS_ToolTip_Player_C : public UIRRToolTipWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/MissionSystem/UI/GCPS/Minimap/W_GCPS_ToolTip_Player.W_GCPS_ToolTip_Player_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/Blueprints/MissionSystem/UI/GCPS/Minimap/W_GCPS_ToolTip_Player.W_GCPS_ToolTip_Player_C:FadeIn_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/UI/GCPS/Minimap/W_GCPS_ToolTip_Player.W_GCPS_ToolTip_Player_C:ExecuteUbergraph_W_GCPS_ToolTip_Player'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("FadeIn"), FGuid(0x758ED905, 0xE77A30D9, 0xA065CA19, 0x5976195A) }, 
        { FName("CanvasPanel_0"), FGuid(0xAB2A49E1, 0x39C43F52, 0x8F11F486, 0x8348A3E3) }, 
        { FName("LeaderText"), FGuid(0xFAE0318C, 0x5F2C3A00, 0x9ED7F399, 0x978055D7) }, 
        { FName("PlayerNameText"), FGuid(0x5EE1C1C0, 0x2BBA3904, 0xB2ACC723, 0x84EE9CDF) }, 
        { FName("W_IRR_Background"), FGuid(0x0A3E8A48, 0xD1913023, 0xB1A0B734, 0x366FE558) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    enum Visibility = ESlateVisibility::HitTestInvisible;
    class UW_IRR_Background_C* W_IRR_Background;
    class UIRRTextBlock* PlayerNameText;
    class UIRRTextBlock* LeaderText;
    class UCanvasPanel* CanvasPanel_0;
    class UWidgetAnimation* FadeIn;

};