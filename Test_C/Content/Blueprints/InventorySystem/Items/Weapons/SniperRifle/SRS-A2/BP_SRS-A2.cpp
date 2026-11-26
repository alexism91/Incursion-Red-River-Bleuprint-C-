class ABP_SRS-A2_C : public ABP_MasterWeapon_C
{
public:
    bool bHasCookedComponentInstancingData = true;
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/InventorySystem/Items/Weapons/SniperRifle/SRS-A2/BP_SRS-A2.BP_SRS-A2_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/InventorySystem/Items/Weapons/SniperRifle/SRS-A2/BP_SRS-A2.BP_SRS-A2_C:InheritableComponentHandler'";
    class UInventoryComponent* InventoryComponent = "InventoryComponent'Test_C/Content/Blueprints/InventorySystem/Items/Weapons/SniperRifle/SRS-A2/BP_SRS-A2.Default__BP_SRS-A2_C:InventoryComponent'";
    class UPickUpComponent* PickUpComponent = "PickUpComponent'Test_C/Content/Blueprints/InventorySystem/Items/Weapons/SniperRifle/SRS-A2/BP_SRS-A2.Default__BP_SRS-A2_C:PickupComponent'";
    class UBP_SightComponent_C* BP_SightComponent;
    class UMuzzleComponent* Muzzle;
};