class UWB_Inbox_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/MissionSystem/UI/Inbox/WB_Inbox.WB_Inbox_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/MissionSystem/UI/Inbox/WB_Inbox.WB_Inbox_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/UI/Inbox/WB_Inbox.WB_Inbox_C:ExecuteUbergraph_WB_Inbox'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Data"), FGuid(0xB61D01E9, 0x477B338F, 0x996A1EA8, 0xD563CC8F) }, 
        { FName("SiteIndex"), FGuid(0x692CB087, 0x4826E946, 0x9139A5A6, 0x6BCE3D18) }, 
        { FName("SiteCount"), FGuid(0x78DB5944, 0x4FACA4E3, 0x98A2C58F, 0x05FA196B) }, 
        { FName("InboxList"), FGuid(0xCDE834AC, 0xA730368F, 0xA84C48C3, 0xAE9662DF) }, 
        { FName("MissionFilter"), FGuid(0xEAAF3D16, 0x485E3C6E, 0x99CCE601, 0x2C5AF603) }, 
        { FName("SearchBox"), FGuid(0xEE493EA1, 0x443A380F, 0xB690229F, 0x235E54E3) }, 
        { FName("W_InboxMessageContainer"), FGuid(0x93E39EF5, 0xAAA539C2, 0xB3B3B22D, 0x5FC6D472) }, 
        { FName("W_IRR_Line"), FGuid(0xCEB40F27, 0xC4623D98, 0x88A84322, 0x0F4065BE) }, 
        { FName("W_IRR_ListControls"), FGuid(0x7480CB11, 0xE71E3555, 0xA1D3E274, 0xE951B3E8) }, 
        { FName("W_IRR_ScrollBox_C_48"), FGuid(0xB1B01257, 0x5AD83837, 0xB9B343FD, 0x4D0B5832) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    int32 SiteIndex = 1;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_IRR_ScrollBox_C* W_IRR_ScrollBox_C_48;
    class UW_IRR_ListControls_C* W_IRR_ListControls;
    class UW_IRR_Line_C* W_IRR_Line;
    class UW_InboxMessageContainer_C* W_InboxMessageContainer;
    class UEditableTextBox* SearchBox;
    class UW_IRR_HorizontalTabList_C* MissionFilter;
    class UVerticalBox* InboxList;
    int SiteCount;
    TArray<struct FIRRInboxItem*>* Data;

};