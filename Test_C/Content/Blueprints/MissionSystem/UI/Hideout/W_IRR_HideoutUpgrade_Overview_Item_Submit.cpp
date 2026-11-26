class UW_IRR_HideoutUpgrade_Overview_Item_Submit_C : public UW_IRR_HideoutUpgrade_Overview_Item_C
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/MissionSystem/UI/Hideout/W_IRR_HideoutUpgrade_Overview_Item_Submit.W_IRR_HideoutUpgrade_Overview_Item_Submit_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/MissionSystem/UI/Hideout/W_IRR_HideoutUpgrade_Overview_Item_Submit.W_IRR_HideoutUpgrade_Overview_Item_Submit_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/UI/Hideout/W_IRR_HideoutUpgrade_Overview_Item_Submit.W_IRR_HideoutUpgrade_Overview_Item_Submit_C:ExecuteUbergraph_W_IRR_HideoutUpgrade_Overview_Item_Submit'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Delivered Items"), FGuid(0x84CBD590, 0x44EADA9A, 0x7EC4C3B1, 0xEF439BB5) }, 
        { FName("OnItemsSubmitted_0"), FGuid(0x5BC242AE, 0x45037381, 0x03EA11BB, 0x151EF16A) }, 
        { FName("MissionDeliverContainer_0"), FGuid(0xE0E502DC, 0x49550CC5, 0x3A3B97B5, 0x092236F6) }, 
        { FName("Unit"), FGuid(0xC4626739, 0x41AD6B71, 0xBE713E9C, 0xCF31A129) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
     OnItemsSubmitted_0 = ;
    class UIRRHideoutUnitComponent* Unit;
    class UW_IRR_Mission_Deliver_Container_C* MissionDeliverContainer_0;
    TMap<struct FGuid, int> Delivered Items;

};