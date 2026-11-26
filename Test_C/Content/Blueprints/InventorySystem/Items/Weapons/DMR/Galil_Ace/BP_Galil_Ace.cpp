class ABP_Galil_Ace_C : public ABP_MasterWeapon_C
{
public:
    bool bHasCookedComponentInstancingData = true;
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/InventorySystem/Items/Weapons/DMR/Galil_Ace/BP_Galil_Ace.BP_Galil_Ace_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/InventorySystem/Items/Weapons/DMR/Galil_Ace/BP_Galil_Ace.BP_Galil_Ace_C:InheritableComponentHandler'";
    class UInventoryComponent* InventoryComponent = "InventoryComponent'Test_C/Content/Blueprints/InventorySystem/Items/Weapons/DMR/Galil_Ace/BP_Galil_Ace.Default__BP_Galil_Ace_C:InventoryComponent'";
    class UPickUpComponent* PickUpComponent = "PickUpComponent'Test_C/Content/Blueprints/InventorySystem/Items/Weapons/DMR/Galil_Ace/BP_Galil_Ace.Default__BP_Galil_Ace_C:PickupComponent'";
    class UBP_MuzzleComponent_Barrel_C* BP_MuzzleComponent_Barrel;
    class UBP_SightComponent_C* BP_SightComponent;
};