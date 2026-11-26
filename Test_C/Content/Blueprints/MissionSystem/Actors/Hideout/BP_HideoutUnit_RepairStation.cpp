class ABP_HideoutUnit_RepairStation_C : public ABP_HideoutUnit_Master_C
{
public:
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/MissionSystem/Actors/Hideout/BP_HideoutUnit_RepairStation.BP_HideoutUnit_RepairStation_C:ComponentDelegateBinding_0'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/MissionSystem/Actors/Hideout/BP_HideoutUnit_RepairStation.BP_HideoutUnit_RepairStation_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/MissionSystem/Actors/Hideout/BP_HideoutUnit_RepairStation.BP_HideoutUnit_RepairStation_C:InheritableComponentHandler'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/Actors/Hideout/BP_HideoutUnit_RepairStation.BP_HideoutUnit_RepairStation_C:ExecuteUbergraph_BP_HideoutUnit_RepairStation'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    TArray<FName> Tags = {
        FName("Repair Station")
    };
    class UChildActorComponent* ChildActor;
    class UBP_RepairComponent_C* BP_RepairComponent;
    class UInventoryComponent_Gunsmith* BP_GunsmithInventory;
    class UBP_InventoryComponent_C* BP_GunsmithStash;
    class UChildActorComponent* PreviewActor;
    class UWidgetComponent* Marker_RepairStation;
    class UBP_InteractionTarget_C* BP_InteractionTarget_RepairStation;
    class ABP_ItemInspectActor_Gunsmith_C* PreviewRef;

};