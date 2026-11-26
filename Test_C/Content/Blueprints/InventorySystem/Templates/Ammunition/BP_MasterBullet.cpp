class ABP_MasterBullet_C : public ABP_StaticMasterPickup_C
{
public:
    bool bHasCookedComponentInstancingData = true;
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/InventorySystem/Templates/Ammunition/BP_MasterBullet.BP_MasterBullet_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/InventorySystem/Templates/Ammunition/BP_MasterBullet.BP_MasterBullet_C:InheritableComponentHandler'";
    class UInventoryComponent* InventoryComponent = "InventoryComponent'Test_C/Content/Blueprints/InventorySystem/Templates/Ammunition/BP_MasterBullet.Default__BP_MasterBullet_C:InventoryComponent'";
    class UPickUpComponent* PickUpComponent = "PickUpComponent'Test_C/Content/Blueprints/InventorySystem/Templates/Ammunition/BP_MasterBullet.Default__BP_MasterBullet_C:PickupComponent'";
    class UBulletComponent* Bullet;
};