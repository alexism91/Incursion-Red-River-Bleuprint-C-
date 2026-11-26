class UW_JobBoard_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/MissionSystem/UI/JobBoard/W_JobBoard.W_JobBoard_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/MissionSystem/UI/JobBoard/W_JobBoard.W_JobBoard_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/UI/JobBoard/W_JobBoard.W_JobBoard_C:ExecuteUbergraph_W_JobBoard'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("SelectedMission"), FGuid(0xD59C2C44, 0x42AB6898, 0xCC93C0B5, 0x4B533B8D) }, 
        { FName("Out Data"), FGuid(0xC9A30AC1, 0x4A9603B4, 0x84656DA3, 0x46E19255) }, 
        { FName("SiteIndex"), FGuid(0x635EC445, 0x44AB7CE6, 0xC45225AD, 0xD0894D1F) }, 
        { FName("SiteCount"), FGuid(0x5F1DDDA6, 0x448F3522, 0xE62895AA, 0xAD93B870) }, 
        { FName("BoxList"), FGuid(0x9005E49C, 0x4D504781, 0x697E049A, 0x80B3D3DE) }, 
        { FName("MissionFilter"), FGuid(0xB4A116E9, 0x413F767B, 0xCE543F98, 0x448F3F94) }, 
        { FName("MissionInfo"), FGuid(0xA6D2311D, 0x8C80377E, 0x86A3867B, 0x294CD452) }, 
        { FName("RerollMissions"), FGuid(0x82DAC325, 0x4E6834CC, 0x96207330, 0xDFEA100C) }, 
        { FName("W_IRR_Line_1"), FGuid(0x5E6B2737, 0x4FD8CC59, 0x2D1BC7BD, 0x7F2DC412) }, 
        { FName("W_IRR_ListControls"), FGuid(0x88293558, 0xA1F63D6B, 0x8342BDB5, 0x4F9BF24B) }, 
        { FName("W_IRR_ScrollBox_C_48"), FGuid(0xF56DF1FA, 0x404B930A, 0x254400BE, 0xF98703B0) }, 
        { FName("W_IRR_SearchBox"), FGuid(0x3A9512BD, 0x406D4259, 0xBAB331BC, 0x67C2E3E1) }, 
        { FName("W_MissionOverview"), FGuid(0xE3270C35, 0xC21B3393, 0x8F1BB935, 0x872B2408) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_MissionOverview_C* W_MissionOverview;
    class UW_IRR_SearchBox_C* W_IRR_SearchBox;
    class UW_IRR_ScrollBox_C* W_IRR_ScrollBox_C_48;
    class UW_IRR_ListControls_C* W_IRR_ListControls;
    class UW_IRR_Line_C* W_IRR_Line_1;
    class UW_IRR_Button_Small_C* RerollMissions;
    class UOverlay* MissionInfo;
    class UW_IRR_HorizontalTabList_C* MissionFilter;
    class UVerticalBox* BoxList;
    int SiteCount;
    int SiteIndex;
    TArray<class UIRRMissionData*> Out Data;
    class UW_MissionList_Item_C* SelectedMission;

};