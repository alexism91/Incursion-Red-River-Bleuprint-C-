class UW_IRR_DeployMissionContainer_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/MissionSystem/UI/Deploy/W_IRR_DeployMissionContainer.W_IRR_DeployMissionContainer_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/Blueprints/MissionSystem/UI/Deploy/W_IRR_DeployMissionContainer.W_IRR_DeployMissionContainer_C:FadeIn_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/UI/Deploy/W_IRR_DeployMissionContainer.W_IRR_DeployMissionContainer_C:ExecuteUbergraph_W_IRR_DeployMissionContainer'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("TrackedMissions"), FGuid(0x72504B2A, 0x4AEC6126, 0x30E60F8F, 0x73DA5F5A) }, 
        { FName("TrackedChildren"), FGuid(0xF83FED86, 0x4171D3D6, 0xEB19CF8D, 0x7CA4D406) }, 
        { FName("TrackCompletedMissions"), FGuid(0xA4F509B6, 0x40ED133D, 0xA068EFA3, 0xFE952D6E) }, 
        { FName("MapTag"), FGuid(0xACA8953A, 0x4ED6D0F8, 0x4AFEB89A, 0xA40352D7) }, 
        { FName("MissionListInfo"), FGuid(0x33E95CB0, 0x4E08CBC0, 0xEEBAD89D, 0x3D9DFC54) }, 
        { FName("OnMissionClicked"), FGuid(0xFEC13CE7, 0x4899E57F, 0xEB8A2FB1, 0xDB2DBD34) }, 
        { FName("LocInt"), FGuid(0x7FDE8953, 0x4121D882, 0x9C559FBA, 0xFB26A3B4) }, 
        { FName("MissionBoxes"), FGuid(0x49E0C335, 0x44B2BC78, 0xA738B193, 0xE4B2018D) }, 
        { FName("MissionTag"), FGuid(0xFE73EB9A, 0x441D465C, 0xA24BAEB3, 0x9638E589) }, 
        { FName("FadeIn"), FGuid(0x8C06E2DB, 0x4909343F, 0xB75F946E, 0xC4B242B3) }, 
        { FName("HorizontalBox_2"), FGuid(0x0E627162, 0x927A3EDB, 0xA3FC87D0, 0x3270F886) }, 
        { FName("InfoBox"), FGuid(0xF083B4C4, 0x35E03151, 0xBFAF1575, 0x8BD6B666) }, 
        { FName("Missions"), FGuid(0x0A2269F3, 0x4737883B, 0xE0BD3689, 0x41C73FDE) }, 
        { FName("W_IRR_Line"), FGuid(0xA5187EB9, 0x49F4C2A3, 0x73910CA0, 0xD4722FCA) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FGameplayTag MissionTag = {
        "TagName": FName("None")
    };
     OnMissionClicked = ;
    struct FGameplayTag MapTag = {
        "TagName": FName("None")
    };
    bool TrackCompletedMissions = true;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_IRR_Line_C* W_IRR_Line;
    class UW_Deploy_MissionList_C* Missions;
    class UOverlay* InfoBox;
    class UHorizontalBox* HorizontalBox_2;
    class UWidgetAnimation* FadeIn;
    TArray<class UW_TrackedMissionBox_C*>* MissionBoxes;
    int LocInt;
    class UW_MissionList_Item_C* MissionListInfo;
    TArray<class UWidget*>* TrackedChildren;
    TArray<class UIRRMissionData*> TrackedMissions;

};