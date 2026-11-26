class UW_MissionOverview_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/MissionSystem/UI/JobBoard/W_MissionOverview.W_MissionOverview_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/MissionSystem/UI/JobBoard/W_MissionOverview.W_MissionOverview_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/UI/JobBoard/W_MissionOverview.W_MissionOverview_C:ExecuteUbergraph_W_MissionOverview'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Track?"), FGuid(0x92A9C7FF, 0x44276802, 0x735507B4, 0x80ADBD10) }, 
        { FName("Extended Information?"), FGuid(0x26345239, 0x4F5B487C, 0x78A9A4AE, 0xAE31C0B6) }, 
        { FName("Mission Data"), FGuid(0x59E32557, 0x4FCD04F9, 0x7C074690, 0xC96C020A) }, 
        { FName("ActionButtonSwitcher"), FGuid(0xB9D7FFD8, 0x4AFE5E09, 0xFAAC2391, 0x5363EF12) }, 
        { FName("BriefingFilter"), FGuid(0x57765B7B, 0x4E5C0CD2, 0x966F3A83, 0xDD7A8BEF) }, 
        { FName("ClaimRewardsButton"), FGuid(0xDAD089AE, 0x4B0249FB, 0x70A9E384, 0xD423F6A5) }, 
        { FName("IRRTextBlock"), FGuid(0xDDCA3A18, 0x508A3C4A, 0xBC0B196E, 0x369AA9A5) }, 
        { FName("RetrackMissionButton"), FGuid(0x074A839B, 0x47989C98, 0xB4B33980, 0x0634E31D) }, 
        { FName("TrackButton"), FGuid(0x4DE6A4DB, 0xD7B93FD6, 0xBB8FD1E2, 0x428FA3E7) }, 
        { FName("W_IRR_Background"), FGuid(0x953DEB9C, 0x3D7435C9, 0x8462EBEF, 0xFE62A744) }, 
        { FName("W_MissionInfo"), FGuid(0x341DB05A, 0x43E73D39, 0xBF9FA290, 0x3CD7628F) }, 
        { FName("WidgetSwitcher_2"), FGuid(0xF67A30D1, 0x447E34FE, 0xB3A8D968, 0x88F17610) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool Extended Information? = true;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UWidgetSwitcher* WidgetSwitcher_2;
    class UW_MissionInfo_C* W_MissionInfo;
    class UW_IRR_Background_C* W_IRR_Background;
    class UW_IRR_Button_Laptop_Big_C* TrackButton;
    class UW_IRR_Button_Laptop_Big_C* RetrackMissionButton;
    class UIRRTextBlock* IRRTextBlock;
    class UW_IRR_Button_Laptop_Big_C* ClaimRewardsButton;
    class UW_IRR_HorizontalTabList_C* BriefingFilter;
    class UWidgetSwitcher* ActionButtonSwitcher;
    class UIRRMissionData* Mission Data;
    bool Track?;

};