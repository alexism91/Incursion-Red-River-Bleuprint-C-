class UW_InboxMessageContainer_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/MissionSystem/UI/Inbox/W_InboxMessageContainer.W_InboxMessageContainer_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/MissionSystem/UI/Inbox/W_InboxMessageContainer.W_InboxMessageContainer_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/UI/Inbox/W_InboxMessageContainer.W_InboxMessageContainer_C:ExecuteUbergraph_W_InboxMessageContainer'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("MessageData"), FGuid(0xC2F5AD09, 0x400CE541, 0xC5EF14B7, 0xA892C5D3) }, 
        { FName("Background"), FGuid(0x120C2F59, 0xC4AD33D3, 0xA966CE79, 0x2FFDA241) }, 
        { FName("ClaimBox"), FGuid(0xDA33645A, 0x4AFABA81, 0x3D9F318A, 0x538D362B) }, 
        { FName("ClaimRewardsButton"), FGuid(0xB1AFC653, 0x49817CB8, 0x557A0396, 0x4EE0CF05) }, 
        { FName("DeleteButton"), FGuid(0x36AFB24C, 0x4C3F2E18, 0x9D68A7A6, 0x84BF0212) }, 
        { FName("SteamBox"), FGuid(0xE1F93FC1, 0x4776D9AD, 0x3CD511A6, 0x2E5633AE) }, 
        { FName("SteamButton"), FGuid(0xE9B4D62C, 0x4573CB0F, 0x472EB7AF, 0xA2742646) }, 
        { FName("W_InboxMessage"), FGuid(0x5C0E2A3E, 0x5D1F3A0D, 0x8FBF9800, 0xB515665E) }, 
        { FName("W_IRR_Background"), FGuid(0xCDB91FAD, 0x4EACAACC, 0x94BD8F83, 0x09BDD83E) }, 
        { FName("WidgetSwitcher_0"), FGuid(0x19E568AC, 0x4DA239D4, 0x26E1E6AD, 0x702C19DC) }, 
        { FName("WidgetSwitcher_19"), FGuid(0x18D96E42, 0x78B239A5, 0x899471FA, 0xE6B0DC3E) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FIRRInboxItem MessageData = {
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
    class UWidgetSwitcher* WidgetSwitcher_19;
    class UWidgetSwitcher* WidgetSwitcher_0;
    class UW_IRR_Background_C* W_IRR_Background;
    class UW_InboxMessage_C* W_InboxMessage;
    class UW_IRR_Button_Laptop_Big_C* SteamButton;
    class UHorizontalBox* SteamBox;
    class UW_IRR_Button_Laptop_Big_C* DeleteButton;
    class UW_IRR_Button_Laptop_Big_C* ClaimRewardsButton;
    class UVerticalBox* ClaimBox;
    class UBorder* Background;

};