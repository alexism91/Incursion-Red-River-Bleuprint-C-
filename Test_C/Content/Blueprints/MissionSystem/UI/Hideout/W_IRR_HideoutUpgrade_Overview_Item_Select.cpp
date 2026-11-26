class UW_IRR_HideoutUpgrade_Overview_Item_Select_C : public UW_IRR_HideoutUpgrade_Overview_Item_C
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/MissionSystem/UI/Hideout/W_IRR_HideoutUpgrade_Overview_Item_Select.W_IRR_HideoutUpgrade_Overview_Item_Select_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/MissionSystem/UI/Hideout/W_IRR_HideoutUpgrade_Overview_Item_Select.W_IRR_HideoutUpgrade_Overview_Item_Select_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/UI/Hideout/W_IRR_HideoutUpgrade_Overview_Item_Select.W_IRR_HideoutUpgrade_Overview_Item_Select_C:ExecuteUbergraph_W_IRR_HideoutUpgrade_Overview_Item_Select'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Selected Items"), FGuid(0xA5E98BC5, 0x47AA0615, 0xB82DCDA3, 0x03A0AE77) }, 
        { FName("MissionDeliverContainer_0"), FGuid(0x99387F6B, 0x4721E6E2, 0x0EACA3A0, 0xB9CB53FD) }, 
        { FName("Unit"), FGuid(0x25A2E144, 0x4E1E3A6C, 0x53736184, 0x7E11B4A8) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    class UIRRHideoutUnitComponent* Unit;
    class UW_IRR_Mission_Deliver_Container_C* MissionDeliverContainer_0;
    TMap<struct FGuid, int> Selected Items;

};