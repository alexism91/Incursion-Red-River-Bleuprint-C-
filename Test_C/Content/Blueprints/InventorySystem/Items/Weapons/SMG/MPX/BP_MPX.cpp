class ABP_MPX_C : public ABP_MasterWeapon_C
{
public:
    bool bHasCookedComponentInstancingData = true;
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/InventorySystem/Items/Weapons/SMG/MPX/BP_MPX.BP_MPX_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/InventorySystem/Items/Weapons/SMG/MPX/BP_MPX.BP_MPX_C:InheritableComponentHandler'";
    class UInventoryComponent* InventoryComponent = "InventoryComponent'Test_C/Content/Blueprints/InventorySystem/Items/Weapons/SMG/MPX/BP_MPX.Default__BP_MPX_C:InventoryComponent'";
    class UPickUpComponent* PickUpComponent = "PickUpComponent'Test_C/Content/Blueprints/InventorySystem/Items/Weapons/SMG/MPX/BP_MPX.Default__BP_MPX_C:PickupComponent'";
    class UBP_SightComponent_C* BP_SightComponent;
    class UMuzzleComponent* Muzzle;
};