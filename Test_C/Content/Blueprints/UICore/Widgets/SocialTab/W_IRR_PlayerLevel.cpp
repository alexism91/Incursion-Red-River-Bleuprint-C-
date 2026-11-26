class UW_IRR_PlayerLevel_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/UICore/Widgets/SocialTab/W_IRR_PlayerLevel.W_IRR_PlayerLevel_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/UICore/Widgets/SocialTab/W_IRR_PlayerLevel.W_IRR_PlayerLevel_C:ExecuteUbergraph_W_IRR_PlayerLevel'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("CurrentValue"), FGuid(0x051F64E5, 0x49D23C4F, 0x719ECCB8, 0x5DF501DA) }, 
        { FName("ItemName_1"), FGuid(0x718BE4E3, 0x411612B8, 0x05F61C9B, 0xB02548C5) }, 
        { FName("PB_ProgressBar"), FGuid(0x0A81C024, 0x438BAED0, 0xE5353FA2, 0xFCE84EBF) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UProgressBar* PB_ProgressBar;
    class UIRRTextBlock* ItemName_1;
    class UIRRTextBlock* CurrentValue;

};