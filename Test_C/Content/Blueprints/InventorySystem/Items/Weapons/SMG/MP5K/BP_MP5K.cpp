class ABP_MP5K_C : public ABP_MasterWeapon_C
{
public:
    bool bHasCookedComponentInstancingData = true;
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/InventorySystem/Items/Weapons/SMG/MP5K/BP_MP5K.BP_MP5K_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/InventorySystem/Items/Weapons/SMG/MP5K/BP_MP5K.BP_MP5K_C:InheritableComponentHandler'";
    class UInventoryComponent* InventoryComponent = "InventoryComponent'Test_C/Content/Blueprints/InventorySystem/Items/Weapons/SMG/MP5K/BP_MP5K.Default__BP_MP5K_C:InventoryComponent'";
    class UPickUpComponent* PickUpComponent = "PickUpComponent'Test_C/Content/Blueprints/InventorySystem/Items/Weapons/SMG/MP5K/BP_MP5K.Default__BP_MP5K_C:PickupComponent'";
    class UBP_SightComponent_C* BP_SightComponent;
    class UMuzzleComponent* Muzzle;
};