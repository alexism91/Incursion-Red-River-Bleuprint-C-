class UW_IRR_MissionBriefingOverlay_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/UICore/Widgets/Misc/W_IRR_MissionBriefingOverlay.W_IRR_MissionBriefingOverlay_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/Blueprints/UICore/Widgets/Misc/W_IRR_MissionBriefingOverlay.W_IRR_MissionBriefingOverlay_C:FadeInOut_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/UICore/Widgets/Misc/W_IRR_MissionBriefingOverlay.W_IRR_MissionBriefingOverlay_C:ExecuteUbergraph_W_IRR_MissionBriefingOverlay'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("FadeInOut"), FGuid(0xB503B4B9, 0x444C0F51, 0x1AD6329D, 0x0A58D527) }, 
        { FName("Image_36"), FGuid(0xB609B9B4, 0x4FB97785, 0x7CA26285, 0x95A4A5CB) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UImage* Image_36;
    class UWidgetAnimation* FadeInOut;

};