class UW_Deploy_MissionList_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/MissionSystem/UI/Deploy/W_Deploy_MissionList.W_Deploy_MissionList_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/UI/Deploy/W_Deploy_MissionList.W_Deploy_MissionList_C:ExecuteUbergraph_W_Deploy_MissionList'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("HasAny?"), FGuid(0x92DCC107, 0x45E00E23, 0x4221C2B4, 0xC3342890) }, 
        { FName("OnMissionListUpdated"), FGuid(0x85F496F6, 0x4D652CE9, 0x0F5248A6, 0xED0FE479) }, 
        { FName("TrackedMissions"), FGuid(0xE88DC67A, 0x41F03C66, 0x26DCE8BC, 0x5CDB5897) }, 
        { FName("TrackedChildren"), FGuid(0x3BFC3994, 0x47A674D4, 0x016869BD, 0x6A90C757) }, 
        { FName("TrackCompletedMissions"), FGuid(0x52BDEBE5, 0x4DB9AF01, 0x411A2D92, 0x1CF1B136) }, 
        { FName("MissionListInfo"), FGuid(0xCBD5858C, 0x4B5D7086, 0x7CB07480, 0x9F689358) }, 
        { FName("OnMissionClicked"), FGuid(0x12554CDF, 0x4184D2A3, 0x3969C685, 0x0663DDFA) }, 
        { FName("LocInt"), FGuid(0x58599F60, 0x4657F17D, 0x0BC74AB5, 0xCD4ED556) }, 
        { FName("MissionBoxes"), FGuid(0xE4BE067C, 0x445F5FFD, 0xFB270394, 0x36218B90) }, 
        { FName("MissionTag"), FGuid(0x8C64931E, 0x4F54193F, 0x2CD8298B, 0xB29D8210) }, 
        { FName("CompletedMissionList"), FGuid(0x3DDF4FFF, 0xCF5E342A, 0x94A8DD55, 0xBCA15DBC) }, 
        { FName("TrackedMissionList"), FGuid(0xB35C56AD, 0x6A143BE7, 0x80325E37, 0xFF4E4D8A) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FGameplayTag MissionTag = {
        "TagName": FName("None")
    };
     OnMissionClicked = ;
    bool TrackCompletedMissions = true;
     OnMissionListUpdated = ;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UVerticalBox* TrackedMissionList;
    class UVerticalBox* CompletedMissionList;
    TArray<class UW_TrackedMissionBox_C*>* MissionBoxes;
    int LocInt;
    class UW_MissionList_Item_C* MissionListInfo;
    TArray<class UWidget*>* TrackedChildren;
    TArray<class UIRRMissionData*> TrackedMissions;
    bool HasAny?;

};