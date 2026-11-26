class UW_IRR_MissionBriefingControl_C : public UIRRMissionBriefingControlWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/UICore/Widgets/Misc/W_IRR_MissionBriefingControl.W_IRR_MissionBriefingControl_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/UICore/Widgets/Misc/W_IRR_MissionBriefingControl.W_IRR_MissionBriefingControl_C:ExecuteUbergraph_W_IRR_MissionBriefingControl'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Source Actor"), FGuid(0x643E91CA, 0x4C956795, 0x4C8849A4, 0x2CDC0C35) }, 
        { FName("Agent"), FGuid(0x4F30A8C5, 0x4807819C, 0x1104E686, 0xE09F7AD4) }, 
        { FName("Briefing Data"), FGuid(0x5AFF9C6D, 0x4339F82C, 0xE23F6995, 0xF91AC195) }, 
        { FName("ListentingTime"), FGuid(0xBCC55B45, 0x46CBB547, 0x1CDC9FA4, 0xB9EAE7CF) }, 
        { FName("FinalTime"), FGuid(0x49505D13, 0x4DB22160, 0xF2B9E7A4, 0x67F7E565) }, 
        { FName("FinalDuration"), FGuid(0xA25CCFAD, 0x45A0C776, 0x3E32D0A1, 0x85D4E072) }, 
        { FName("CurrentSeconds"), FGuid(0x2AF99520, 0x4207A87F, 0x3C41E2AF, 0xA4E5BC7D) }, 
        { FName("TimeTimer"), FGuid(0x11394A15, 0x4423BD4A, 0xF738AEBE, 0x06586FB7) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FTimerHandle TimeTimer = {
        "Handle": 0
    };
    struct FIRRDayTime FinalTime = {
        "Hours": 0,
        "Minutes": 0,
        "Seconds": 0
    };
    struct FIRRDayTime ListentingTime = {
        "Hours": 0,
        "Minutes": 0,
        "Seconds": 0
    };
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
    double CurrentSeconds;
    double FinalDuration;
    class UIRRAgentSetup* Agent;
    class AActor* Source Actor;

};