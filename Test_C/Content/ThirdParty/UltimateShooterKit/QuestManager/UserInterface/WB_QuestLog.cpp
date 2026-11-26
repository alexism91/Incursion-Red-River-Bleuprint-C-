class UWB_QuestLog_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/UltimateShooterKit/QuestManager/UserInterface/WB_QuestLog.WB_QuestLog_C:WidgetTree'";
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/ThirdParty/UltimateShooterKit/QuestManager/UserInterface/WB_QuestLog.WB_QuestLog_C:QuestLogPopUp_INST'",
        "WidgetAnimation'Test_C/Content/ThirdParty/UltimateShooterKit/QuestManager/UserInterface/WB_QuestLog.WB_QuestLog_C:QuestInfo_INST'",
        "WidgetAnimation'Test_C/Content/ThirdParty/UltimateShooterKit/QuestManager/UserInterface/WB_QuestLog.WB_QuestLog_C:QuestList_INST'"
    };
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/ThirdParty/UltimateShooterKit/QuestManager/UserInterface/WB_QuestLog.WB_QuestLog_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/UltimateShooterKit/QuestManager/UserInterface/WB_QuestLog.WB_QuestLog_C:ExecuteUbergraph_WB_QuestLog'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("ActiveList"), FGuid(0xAC3277B2, 0x4C08FCF7, 0x8D08DDA8, 0xBA72B1C0) }, 
        { FName("QuestManager"), FGuid(0xD2C3A076, 0x423BBB21, 0xDB7B8886, 0x58834682) }, 
        { FName("CanTriggerTrackKey"), FGuid(0x15D9E194, 0x4FF0CAB4, 0x5B4EAFA0, 0xA1C0582D) }, 
        { FName("SelectedQuest"), FGuid(0x286E7B86, 0x499B489A, 0x2D00E09E, 0x8D5EE3F3) }, 
        { FName("TrackQuestPercent"), FGuid(0x641CA90C, 0x4B39D32D, 0x707D5686, 0x9357F10E) }, 
        { FName("Track_TimerHandle"), FGuid(0xF60C5E7B, 0x4A88217C, 0x399A7FAA, 0xE972DF1E) }, 
        { FName("TrackQuestKeys"), FGuid(0x3F11AA80, 0x4045C7FB, 0x442228BB, 0x7E5DD283) }, 
        { FName("LogVisible"), FGuid(0x15C49C99, 0x437E75EE, 0x1875EBAF, 0x73D1C932) }, 
        { FName("CloseKeys"), FGuid(0x5ADFD66E, 0x4DF3E631, 0xB0889D8B, 0xBCC49A67) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    TArray<struct FKey> CloseKeys = {
        {
            "KeyName": FName("Escape")
        },
        {
            "KeyName": FName("Tab")
        }
    };
    TArray<struct FKey> TrackQuestKeys = {
        {
            "KeyName": FName("X")
        }
    };
    struct FTimerHandle Track_TimerHandle = {
        "Handle": 0
    };
    bool bIsFocusable = true;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UWB_QuestList_C* SideQuestList;
    class UWB_QuestLogFilter_C* SideFilter;
    class UWidgetSwitcher* QuestListSwitcher;
    class UWB_QuestInfo_C* QuestInfoWidget;
    class UWB_QuestList_C* MainQuestList;
    class UWB_QuestLogFilter_C* MainFilter;
    class UOverlay* MainContainer;
    class UWB_QuestList_C* CompletedQuestList;
    class UWB_QuestLogFilter_C* CompletedFilter;
    class UWB_QuestList_C* AllQuestList;
    class UWB_QuestLogFilter_C* AllFilter;
    class UWidgetAnimation* QuestLogPopUp;
    class UWidgetAnimation* QuestInfo;
    class UWidgetAnimation* QuestList;
    bool LogVisible;
    double TrackQuestPercent;
    class UWB_SingleQuest_C* SelectedQuest;
    bool CanTriggerTrackKey;
    class UManager_Quest_C* QuestManager;
    class UWB_QuestList_C* ActiveList;

};