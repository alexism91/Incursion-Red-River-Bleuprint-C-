class UWB_EmailLog_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/CMG/Widgets/EmailStyle/WB_EmailLog.WB_EmailLog_C:WidgetTree'";
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/ThirdParty/CMG/Widgets/EmailStyle/WB_EmailLog.WB_EmailLog_C:QuestInfo_INST'",
        "WidgetAnimation'Test_C/Content/ThirdParty/CMG/Widgets/EmailStyle/WB_EmailLog.WB_EmailLog_C:QuestList_INST'"
    };
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/ThirdParty/CMG/Widgets/EmailStyle/WB_EmailLog.WB_EmailLog_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/CMG/Widgets/EmailStyle/WB_EmailLog.WB_EmailLog_C:ExecuteUbergraph_WB_EmailLog'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("ActiveList"), FGuid(0xD0831BFD, 0x4F6DB7B5, 0x6585518F, 0x9329E41D) }, 
        { FName("QuestManager"), FGuid(0x5E85939A, 0x4656631D, 0xE71E00B9, 0xB76A16C0) }, 
        { FName("CanTriggerTrackKey"), FGuid(0xEA3FB492, 0x4D4821E5, 0xB4102F9D, 0xA3C8A4EE) }, 
        { FName("SelectedQuest"), FGuid(0xC640449E, 0x49E172BA, 0x935DA0B9, 0x7BDB971D) }, 
        { FName("TrackQuestPercent"), FGuid(0x61D51484, 0x494AD6C0, 0xAD7190BA, 0xD1E6EA17) }, 
        { FName("Track_TimerHandle"), FGuid(0x26E27495, 0x4D2DA0BA, 0xAD5D7BBA, 0xAD341553) }, 
        { FName("TrackQuestKeys"), FGuid(0x97EF89E7, 0x48E33DB9, 0xAE63B68D, 0x0600E452) }, 
        { FName("LogVisible"), FGuid(0xC6C29833, 0x4CFAAED6, 0xB78164B0, 0x0EB53ABE) }, 
        { FName("CloseKeys"), FGuid(0x392BD90D, 0x41267E98, 0x06984290, 0x94E1D52E) }
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
    class UWB_EmailInfo_C* WB_EmailInfo;
    class UWB_QuestLogFilter_C* SpamFilter;
    class UWB_EmailList_C* Spam;
    class UWidgetSwitcher* QuestListSwitcher;
    class UTextBlock* QuestDescription;
    class UOverlay* MainContainer;
    class UWB_QuestLogFilter_C* InvoiceFilter;
    class UWB_EmailList_C* Invoice;
    class UWidgetSwitcher* EmailInfoSwitcher;
    class UWB_QuestLogFilter_C* DailyFilter;
    class UWB_EmailList_C* Daily;
    class UWB_QuestLogFilter_C* AllFilter;
    class UWB_EmailList_C* All;
    class UWidgetAnimation* QuestInfo;
    class UWidgetAnimation* QuestList;
    bool LogVisible;
    double TrackQuestPercent;
    class UWB_SingleEmail_C* SelectedQuest;
    bool CanTriggerTrackKey;
    class UManager_Quest_C* QuestManager;
    class UWB_EmailList_C* ActiveList;

};