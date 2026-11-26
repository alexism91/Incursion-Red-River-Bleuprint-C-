class ABP_MasterForegrip_C : public ABP_MasterAttachment_C
{
public:
    bool bHasCookedComponentInstancingData = true;
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/InventorySystem/Templates/Attachments/BP_MasterForegrip.BP_MasterForegrip_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/InventorySystem/Templates/Attachments/BP_MasterForegrip.BP_MasterForegrip_C:InheritableComponentHandler'";
    class UInventoryComponent* InventoryComponent = "InventoryComponent'Test_C/Content/Blueprints/InventorySystem/Templates/Attachments/BP_MasterForegrip.Default__BP_MasterForegrip_C:InventoryComponent'";
    class UPickUpComponent* PickUpComponent = "PickUpComponent'Test_C/Content/Blueprints/InventorySystem/Templates/Attachments/BP_MasterForegrip.Default__BP_MasterForegrip_C:PickupComponent'";
    class UForegripComponent* Foregrip;
};