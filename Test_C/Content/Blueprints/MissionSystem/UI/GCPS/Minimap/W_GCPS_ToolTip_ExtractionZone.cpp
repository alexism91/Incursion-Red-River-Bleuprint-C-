class UW_GCPS_ToolTip_ExtractionZone_C : public UIRRToolTipWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/MissionSystem/UI/GCPS/Minimap/W_GCPS_ToolTip_ExtractionZone.W_GCPS_ToolTip_ExtractionZone_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/Blueprints/MissionSystem/UI/GCPS/Minimap/W_GCPS_ToolTip_ExtractionZone.W_GCPS_ToolTip_ExtractionZone_C:FadeIn_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/UI/GCPS/Minimap/W_GCPS_ToolTip_ExtractionZone.W_GCPS_ToolTip_ExtractionZone_C:ExecuteUbergraph_W_GCPS_ToolTip_ExtractionZone'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("FadeIn"), FGuid(0x4A092B54, 0x8624339A, 0xB4714FC6, 0xEC258FBA) }, 
        { FName("CanvasPanel_0"), FGuid(0x52130646, 0xAAC23EFD, 0xAE5DBBAE, 0x84FD8F17) }, 
        { FName("CloseTimeText"), FGuid(0x172EA537, 0x46A4ED58, 0x12E69799, 0x01B1490F) }, 
        { FName("GateSwitcher"), FGuid(0x7F61ECAC, 0x4AEAA168, 0x265EF1AA, 0x4035FE48) }, 
        { FName("HeadlineText"), FGuid(0xA72668F4, 0xD6F03020, 0x8FB4E572, 0x22608747) }, 
        { FName("OpenTimeText"), FGuid(0xF2BC6972, 0x42BE2114, 0x74FCDCAC, 0xFAED9916) }, 
        { FName("StatusText"), FGuid(0x283EB0A3, 0x42157CAF, 0x219A749C, 0xB3AB65A5) }, 
        { FName("W_IRR_Background"), FGuid(0x3A3DD0E5, 0xFC5D38A4, 0xA261E52A, 0x22702444) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    enum Visibility = ESlateVisibility::HitTestInvisible;
    class UW_IRR_Background_C* W_IRR_Background;
    class UIRRTextBlock* StatusText;
    class UIRRTextBlock* OpenTimeText;
    class UIRRTextBlock* HeadlineText;
    class UWidgetSwitcher* GateSwitcher;
    class UIRRTextBlock* CloseTimeText;
    class UCanvasPanel* CanvasPanel_0;
    class UWidgetAnimation* FadeIn;

};