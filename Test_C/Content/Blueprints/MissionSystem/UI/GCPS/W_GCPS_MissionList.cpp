class UW_GCPS_MissionList_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/MissionSystem/UI/GCPS/W_GCPS_MissionList.W_GCPS_MissionList_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/UI/GCPS/W_GCPS_MissionList.W_GCPS_MissionList_C:ExecuteUbergraph_W_GCPS_MissionList'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Map Tag"), FGuid(0x2905FB28, 0x4AF0603F, 0xC8C05A82, 0x5DB42106) }, 
        { FName("HasAny?"), FGuid(0x6B62897E, 0x4664C315, 0x46B1F2AB, 0x9F92894D) }, 
        { FName("OnMissionListUpdated"), FGuid(0x0AFE2032, 0x4E1032EE, 0xCF162F8E, 0x8CE2FF12) }, 
        { FName("TrackedMissions"), FGuid(0x28077CA1, 0x4FBFF725, 0x68FD4D9B, 0xD9EB7C26) }, 
        { FName("TrackedChildren"), FGuid(0xB3DA8DD4, 0x4D35C3E1, 0xCABDAE97, 0xC7FEFAFB) }, 
        { FName("TrackCompletedMissions"), FGuid(0xE21B73A6, 0x4349B9F6, 0x5D16FA97, 0xE014882C) }, 
        { FName("MissionListInfo"), FGuid(0xE6E967CE, 0x46BE4718, 0xE1F2B6A4, 0x5E510D86) }, 
        { FName("OnMissionClicked"), FGuid(0xE34EA69D, 0x45907A76, 0x2C330898, 0xFDB8B0EB) }, 
        { FName("LocInt"), FGuid(0x9D8FFF24, 0x48C579FE, 0xAFD923A9, 0xE65F77E7) }, 
        { FName("MissionBoxes"), FGuid(0xCB202D39, 0x41A4CFBE, 0x503F18BA, 0x13F6FFFD) }, 
        { FName("MissionTag"), FGuid(0xFE7BD400, 0x4C9145B5, 0x929D5B93, 0x46525469) }, 
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
    struct FGameplayTag Map Tag = {
        "TagName": FName("None")
    };
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