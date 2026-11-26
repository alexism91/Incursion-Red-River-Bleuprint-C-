class ABP_MasterBarrel_C : public ABP_MasterAttachment_C
{
public:
    bool bHasCookedComponentInstancingData = true;
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/InventorySystem/Templates/Attachments/BP_MasterBarrel.BP_MasterBarrel_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/InventorySystem/Templates/Attachments/BP_MasterBarrel.BP_MasterBarrel_C:InheritableComponentHandler'";
    class UInventoryComponent* InventoryComponent = "InventoryComponent'Test_C/Content/Blueprints/InventorySystem/Templates/Attachments/BP_MasterBarrel.Default__BP_MasterBarrel_C:InventoryComponent'";
    class UPickUpComponent* PickUpComponent = "PickUpComponent'Test_C/Content/Blueprints/InventorySystem/Templates/Attachments/BP_MasterBarrel.Default__BP_MasterBarrel_C:PickupComponent'";
    class UBP_MuzzleComponent_Barrel_C* BP_MuzzleComponent_Barrel;
};