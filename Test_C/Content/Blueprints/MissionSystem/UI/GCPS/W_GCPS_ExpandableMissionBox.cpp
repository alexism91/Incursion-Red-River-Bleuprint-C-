class UW_GCPS_ExpandableMissionBox_C : public UIRRExpandableMissionBox
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/MissionSystem/UI/GCPS/W_GCPS_ExpandableMissionBox.W_GCPS_ExpandableMissionBox_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/MissionSystem/UI/GCPS/W_GCPS_ExpandableMissionBox.W_GCPS_ExpandableMissionBox_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/UI/GCPS/W_GCPS_ExpandableMissionBox.W_GCPS_ExpandableMissionBox_C:ExecuteUbergraph_W_GCPS_ExpandableMissionBox'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("MapTag"), FGuid(0xE14C9BB9, 0x41BA4C91, 0x3D44509A, 0xEF744A3D) }, 
        { FName("W_GCPS_MissionList"), FGuid(0x1788A4CA, 0x4CF6C6BB, 0xE7DD7381, 0xC9CE3B0C) }, 
        { FName("W_GCPS_MissionList_1"), FGuid(0x24E056A4, 0x4727C976, 0x660BAF8B, 0x24D8C223) }, 
        { FName("W_IRR_HorizontalTabList"), FGuid(0xF516DD9E, 0x4151139A, 0x49784E9F, 0xB10FC7F7) }, 
        { FName("W_IRR_ScrollBox_C_0"), FGuid(0xB7D73508, 0x425041E2, 0xE3F4239F, 0xEE616563) }, 
        { FName("WidgetSwitcher"), FGuid(0x4CE2B116, 0x49CEC9F8, 0x89D2EBA9, 0x5DFFD5AF) }, 
        { FName("WidgetSwitcher_0"), FGuid(0x75150F31, 0x4A70450E, 0xCE40419C, 0x0C83127B) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FGameplayTag MapTag = {
        "TagName": FName("None")
    };
    float ExpandedWidth = 308;
    float ExpandDuration = 0.2;
    bool bStartExpanded = true;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UWidgetSwitcher* WidgetSwitcher_0;
    class UOverlay* WidgetSwitcher;
    class UW_IRR_ScrollBox_C* W_IRR_ScrollBox_C_0;
    class UW_IRR_HorizontalTabList_C* W_IRR_HorizontalTabList;
    class UW_GCPS_MissionList_C* W_GCPS_MissionList_1;
    class UW_GCPS_MissionList_C* W_GCPS_MissionList;

};