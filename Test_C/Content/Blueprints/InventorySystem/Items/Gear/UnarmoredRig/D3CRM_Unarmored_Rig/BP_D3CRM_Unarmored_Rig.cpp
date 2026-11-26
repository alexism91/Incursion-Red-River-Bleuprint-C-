class ABP_D3CRM_Unarmored_Rig_C : public ABP_MasterGear_Unarmored_Rig_C
{
public:
    bool bHasCookedComponentInstancingData = true;
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/InventorySystem/Items/Gear/UnarmoredRig/D3CRM_Unarmored_Rig/BP_D3CRM_Unarmored_Rig.BP_D3CRM_Unarmored_Rig_C:ComponentDelegateBinding_0'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/InventorySystem/Items/Gear/UnarmoredRig/D3CRM_Unarmored_Rig/BP_D3CRM_Unarmored_Rig.BP_D3CRM_Unarmored_Rig_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/InventorySystem/Items/Gear/UnarmoredRig/D3CRM_Unarmored_Rig/BP_D3CRM_Unarmored_Rig.BP_D3CRM_Unarmored_Rig_C:InheritableComponentHandler'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Items/Gear/UnarmoredRig/D3CRM_Unarmored_Rig/BP_D3CRM_Unarmored_Rig.BP_D3CRM_Unarmored_Rig_C:ExecuteUbergraph_BP_D3CRM_Unarmored_Rig'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    FName Marker Socket Name = FName("spine_02");
    class UInventoryComponent* InventoryComponent = "InventoryComponent'Test_C/Content/Blueprints/InventorySystem/Items/Gear/UnarmoredRig/D3CRM_Unarmored_Rig/BP_D3CRM_Unarmored_Rig.Default__BP_D3CRM_Unarmored_Rig_C:InventoryComponent'";
    class UPickUpComponent* PickUpComponent = "PickUpComponent'Test_C/Content/Blueprints/InventorySystem/Items/Gear/UnarmoredRig/D3CRM_Unarmored_Rig/BP_D3CRM_Unarmored_Rig.Default__BP_D3CRM_Unarmored_Rig_C:PickupComponent'";
    class USceneComponent* NewVar_0;

};