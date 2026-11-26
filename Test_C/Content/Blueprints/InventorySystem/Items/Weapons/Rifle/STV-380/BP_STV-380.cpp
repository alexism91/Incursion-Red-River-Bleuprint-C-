class ABP_STV-380_C : public ABP_MasterWeapon_C
{
public:
    bool bHasCookedComponentInstancingData = true;
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/InventorySystem/Items/Weapons/Rifle/STV-380/BP_STV-380.BP_STV-380_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/InventorySystem/Items/Weapons/Rifle/STV-380/BP_STV-380.BP_STV-380_C:InheritableComponentHandler'";
    class UInventoryComponent* InventoryComponent = "InventoryComponent'Test_C/Content/Blueprints/InventorySystem/Items/Weapons/Rifle/STV-380/BP_STV-380.Default__BP_STV-380_C:InventoryComponent'";
    class UPickUpComponent* PickUpComponent = "PickUpComponent'Test_C/Content/Blueprints/InventorySystem/Items/Weapons/Rifle/STV-380/BP_STV-380.Default__BP_STV-380_C:PickupComponent'";
    class UMuzzleComponent* Muzzle;
    class UBP_SightComponent_C* BP_SightComponent;
};