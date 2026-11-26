class ABP_SVDS_C : public ABP_MasterWeapon_C
{
public:
    bool bHasCookedComponentInstancingData = true;
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/InventorySystem/Items/Weapons/DMR/SVDS/BP_SVDS.BP_SVDS_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/InventorySystem/Items/Weapons/DMR/SVDS/BP_SVDS.BP_SVDS_C:InheritableComponentHandler'";
    class UInventoryComponent* InventoryComponent = "InventoryComponent'Test_C/Content/Blueprints/InventorySystem/Items/Weapons/DMR/SVDS/BP_SVDS.Default__BP_SVDS_C:InventoryComponent'";
    class UPickUpComponent* PickUpComponent = "PickUpComponent'Test_C/Content/Blueprints/InventorySystem/Items/Weapons/DMR/SVDS/BP_SVDS.Default__BP_SVDS_C:PickupComponent'";
    class UMuzzleComponent* Muzzle;
    class UBP_SightComponent_C* BP_SightComponent;
};