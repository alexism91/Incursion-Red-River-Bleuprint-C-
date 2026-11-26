class UW_ObjectiveActionWidget_Deliver_C : public UIRRObjectiveActionWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/MissionSystem/UI/General/W_ObjectiveActionWidget_Deliver.W_ObjectiveActionWidget_Deliver_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/MissionSystem/UI/General/W_ObjectiveActionWidget_Deliver.W_ObjectiveActionWidget_Deliver_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/UI/General/W_ObjectiveActionWidget_Deliver.W_ObjectiveActionWidget_Deliver_C:ExecuteUbergraph_W_ObjectiveActionWidget_Deliver'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("MissionDeliverContainer"), FGuid(0x31397B90, 0x42DCA2D5, 0x152D5286, 0x063FB7C3) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_IRR_Mission_Deliver_Container_C* MissionDeliverContainer;

};