class ABP_MasterGear_Backpack_C : public ABP_MasterGear_C
{
public:
    bool bHasCookedComponentInstancingData = true;
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/InventorySystem/Templates/Gear/BP_MasterGear_Backpack.BP_MasterGear_Backpack_C:ComponentDelegateBinding_0'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/InventorySystem/Templates/Gear/BP_MasterGear_Backpack.BP_MasterGear_Backpack_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/InventorySystem/Templates/Gear/BP_MasterGear_Backpack.BP_MasterGear_Backpack_C:InheritableComponentHandler'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Templates/Gear/BP_MasterGear_Backpack.BP_MasterGear_Backpack_C:ExecuteUbergraph_BP_MasterGear_Backpack'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    class UInventoryComponent* InventoryComponent = "InventoryComponent'Test_C/Content/Blueprints/InventorySystem/Templates/Gear/BP_MasterGear_Backpack.Default__BP_MasterGear_Backpack_C:InventoryComponent'";
    class UPickUpComponent* PickUpComponent = "PickUpComponent'Test_C/Content/Blueprints/InventorySystem/Templates/Gear/BP_MasterGear_Backpack.Default__BP_MasterGear_Backpack_C:PickupComponent'";
    class UBP_InteractionTarget_C* BP_Loot;

};