class ABP_MP5SD_C : public ABP_MasterWeapon_C
{
public:
    bool bHasCookedComponentInstancingData = true;
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/InventorySystem/Items/Weapons/SMG/MP5SD/BP_MP5SD.BP_MP5SD_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/InventorySystem/Items/Weapons/SMG/MP5SD/BP_MP5SD.BP_MP5SD_C:InheritableComponentHandler'";
    class UInventoryComponent* InventoryComponent = "InventoryComponent'Test_C/Content/Blueprints/InventorySystem/Items/Weapons/SMG/MP5SD/BP_MP5SD.Default__BP_MP5SD_C:InventoryComponent'";
    class UPickUpComponent* PickUpComponent = "PickUpComponent'Test_C/Content/Blueprints/InventorySystem/Items/Weapons/SMG/MP5SD/BP_MP5SD.Default__BP_MP5SD_C:PickupComponent'";
    class UForegripComponent* Foregrip;
    class UBP_SightComponent_C* BP_SightComponent;
    class UMuzzleComponent* Muzzle;
};