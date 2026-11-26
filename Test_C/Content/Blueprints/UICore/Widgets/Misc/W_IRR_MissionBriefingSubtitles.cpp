class UW_IRR_MissionBriefingSubtitles_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/UICore/Widgets/Misc/W_IRR_MissionBriefingSubtitles.W_IRR_MissionBriefingSubtitles_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/Blueprints/UICore/Widgets/Misc/W_IRR_MissionBriefingSubtitles.W_IRR_MissionBriefingSubtitles_C:FadeInOut_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/UICore/Widgets/Misc/W_IRR_MissionBriefingSubtitles.W_IRR_MissionBriefingSubtitles_C:ExecuteUbergraph_W_IRR_MissionBriefingSubtitles'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Index"), FGuid(0x8DDD2EDA, 0x4D7C3EF6, 0x941628B6, 0x5EBDFD0A) }, 
        { FName("Briefing Data"), FGuid(0xE63C9530, 0x45DD6831, 0xBFC7CF86, 0x1713DE62) }, 
        { FName("FadeInOut"), FGuid(0xB503B4B9, 0x444C0F51, 0x1AD6329D, 0x0A58D527) }, 
        { FName("Author"), FGuid(0x875365AF, 0x44608B4E, 0xFF9740BB, 0xBBFB0D16) }, 
        { FName("Text"), FGuid(0xAC1C2160, 0x4D4C0A46, 0xAFADCA85, 0x643E14D3) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FIRRMissionBriefing Briefing Data = {
        "Text": {},
        "BriefingAudioEvent": nullptr,
        "Priority": 0,
        "bCanSkip": true,
        "bInterruptedByDanger": true,
        "Subtitles": {}
    };
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class URichTextBlock* Text;
    class UIRRTextBlock* Author;
    class UWidgetAnimation* FadeInOut;
    int Index;

};