class UW_InboxList_Item_C : public UIRRHierarchyListItemWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/MissionSystem/UI/Inbox/W_InboxList_Item.W_InboxList_Item_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/MissionSystem/UI/Inbox/W_InboxList_Item.W_InboxList_Item_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/UI/Inbox/W_InboxList_Item.W_InboxList_Item_C:ExecuteUbergraph_W_InboxList_Item'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("BaseColor"), FGuid(0x8D0CABD5, 0x47576B3A, 0x36086791, 0x920CC4C9) }, 
        { FName("MessageData"), FGuid(0x48E2C31C, 0x44352FC6, 0xD60B2D84, 0x073A26DB) }, 
        { FName("OnAddToCart"), FGuid(0xAB508E6E, 0x4C8F6568, 0xE38D9E92, 0xD174ACCA) }, 
        { FName("BackgroundBorder"), FGuid(0xB93D7534, 0x6A9A3AC5, 0xB0BE8CF8, 0xF5C5FA6A) }, 
        { FName("BorderInfo"), FGuid(0xFD6764AD, 0x4A9F4833, 0xB1E80289, 0x3F90690A) }, 
        { FName("Button"), FGuid(0xFBE75AD3, 0x0E983D10, 0xB7AE1D6A, 0x354A5262) }, 
        { FName("ItemSizeBox"), FGuid(0x7AA84728, 0x78FB39C2, 0x893A5571, 0x45519D97) }, 
        { FName("MessageReference"), FGuid(0x53DF9680, 0xEF8636E5, 0x9F51594E, 0xCF2FDB29) }, 
        { FName("MessageTextAbb"), FGuid(0x7A8713CB, 0x459E2F58, 0xDA4D4381, 0xE415B930) }, 
        { FName("NotTracked"), FGuid(0x932A0BC2, 0x401898FF, 0x4A401395, 0x8B94007B) }, 
        { FName("SelectionBorder"), FGuid(0xB9F4B7CC, 0x514C3E9F, 0xAB2C5CD0, 0x03698FFC) }, 
        { FName("TextBorder"), FGuid(0xD47D3F7C, 0x277D38B8, 0x9E5F07E8, 0x1ABB9DC6) }, 
        { FName("W_AgentIcon"), FGuid(0xC8891E8F, 0x58963651, 0xB2D44EBE, 0xA5C36470) }, 
        { FName("W_DeleteButton"), FGuid(0x29BE8C07, 0x591033C2, 0x9BA2D55A, 0xDADB9CEF) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
     OnAddToCart = ;
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
    class UW_InboxDeleteButton_C* W_DeleteButton;
    class UW_AgentIcon_C* W_AgentIcon;
    class UBorder* TextBorder;
    class UBorder* SelectionBorder;
    class UWB_Base_Icon_Notification_C* NotTracked;
    class UIRRNotesTextBlock* MessageTextAbb;
    class UIRRTextBlock* MessageReference;
    class USizeBox* ItemSizeBox;
    class UW_IRR_BaseButton_C* Button;
    class UBorder* BorderInfo;
    class UBorder* BackgroundBorder;
    class UMaterialInstance* BaseColor;

};