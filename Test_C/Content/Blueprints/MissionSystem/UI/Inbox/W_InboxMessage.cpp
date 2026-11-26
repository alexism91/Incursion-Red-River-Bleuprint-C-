class UW_InboxMessage_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/MissionSystem/UI/Inbox/W_InboxMessage.W_InboxMessage_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/MissionSystem/UI/Inbox/W_InboxMessage.W_InboxMessage_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/UI/Inbox/W_InboxMessage.W_InboxMessage_C:ExecuteUbergraph_W_InboxMessage'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Message Data"), FGuid(0x65048981, 0x44893450, 0xF09552B8, 0xCA6BB5E0) }, 
        { FName("AuthorText"), FGuid(0x772599C6, 0x4CA63C6B, 0xB57DB0DF, 0x29DDF820) }, 
        { FName("DateText"), FGuid(0x8CC8F304, 0x10A63DFC, 0x8CD2832F, 0x8A6998CE) }, 
        { FName("ReferenceText"), FGuid(0x91B3DDFD, 0x4D9C330F, 0xB9EDDA46, 0x834A747C) }, 
        { FName("W_AgentIcon"), FGuid(0x33084717, 0x686C3E74, 0xA375069F, 0xA85B4AF1) }, 
        { FName("W_DeleteButton"), FGuid(0xB7A3A572, 0xA77E3984, 0x95350068, 0xD8477DCE) }, 
        { FName("W_IRR_Background"), FGuid(0xB22A0B15, 0x1E5B3C38, 0xA57DB5D6, 0xF66F86D5) }, 
        { FName("W_IRR_MissionBriefingText"), FGuid(0xC50A16CB, 0x4BBE740F, 0xEA381894, 0x206BF49B) }, 
        { FName("W_RewardBox"), FGuid(0x6B2AB71D, 0x4EEF3A20, 0xDC858E90, 0x2A3CFB11) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FIRRInboxItem Message Data = {
        "Title": "",
        "Author": FSoftObjectPath(""),
        "Briefing": {
            "Text": {},
            "BriefingAudioEvent": nullptr,
            "Priority": 0,
            "bCanSkip": true,
            "bInterruptedByDanger": true,
            "Subtitles": {}
        },
        "Timestamp": FDateTime("lundi 1 janvier 0001 00:00:00"),
        "UID": FGuid(0x00000000, 0x00000000, 0x00000000, 0x00000000),
        "bOpened": false,
        "RewardItems": {},
        "XPReward": 0,
        "FactionRewards": {},
        "bRewardClaimed": false,
        "LinkURL": "",
        "bNews": false
    };
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_RewardBox_C* W_RewardBox;
    class UW_IRR_MissionBriefingText_C* W_IRR_MissionBriefingText;
    class UW_IRR_Background_C* W_IRR_Background;
    class UW_InboxDeleteButton_C* W_DeleteButton;
    class UW_AgentIcon_C* W_AgentIcon;
    class UIRRTextBlock* ReferenceText;
    class UIRRTextBlock* DateText;
    class UIRRTextBlock* AuthorText;

};