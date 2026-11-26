class ABP_MP5_C : public ABP_MasterWeapon_C
{
public:
    bool bHasCookedComponentInstancingData = true;
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/InventorySystem/Items/Weapons/SMG/MP5/BP_MP5.BP_MP5_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/InventorySystem/Items/Weapons/SMG/MP5/BP_MP5.BP_MP5_C:InheritableComponentHandler'";
    class UInventoryComponent* InventoryComponent = "InventoryComponent'Test_C/Content/Blueprints/InventorySystem/Items/Weapons/SMG/MP5/BP_MP5.Default__BP_MP5_C:InventoryComponent'";
    class UPickUpComponent* PickUpComponent = "PickUpComponent'Test_C/Content/Blueprints/InventorySystem/Items/Weapons/SMG/MP5/BP_MP5.Default__BP_MP5_C:PickupComponent'";
    class UBP_SightComponent_C* BP_SightComponent;
    class UMuzzleComponent* Muzzle;
};