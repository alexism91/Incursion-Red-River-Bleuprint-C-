class UW_IRR_MissionBriefingImage_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/MissionSystem/UI/JobBoard/W_IRR_MissionBriefingImage.W_IRR_MissionBriefingImage_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("MissionImage"), FGuid(0xBA61BD75, 0x49D236DD, 0xF60D8EAE, 0xF0E5066E) }, 
        { FName("MissionMap"), FGuid(0x9F1D20ED, 0x43BABD99, 0x15472EA8, 0xC1BDC13A) }
    };
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UIRRTextBlock* MissionMap;
    class UImage* MissionImage;

};