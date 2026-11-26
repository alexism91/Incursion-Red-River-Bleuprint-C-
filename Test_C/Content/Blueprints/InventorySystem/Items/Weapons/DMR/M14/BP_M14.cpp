class ABP_M14_C : public ABP_MasterWeapon_C
{
public:
    bool bHasCookedComponentInstancingData = true;
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/InventorySystem/Items/Weapons/DMR/M14/BP_M14.BP_M14_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/InventorySystem/Items/Weapons/DMR/M14/BP_M14.BP_M14_C:InheritableComponentHandler'";
    TArray<FString> ToIgnorePayload = {
        "Chambered",
        "Chamber Opened",
        "Chamber Closed"
    };
    class UInventoryComponent* InventoryComponent = "InventoryComponent'Test_C/Content/Blueprints/InventorySystem/Items/Weapons/DMR/M14/BP_M14.Default__BP_M14_C:InventoryComponent'";
    class UPickUpComponent* PickUpComponent = "PickUpComponent'Test_C/Content/Blueprints/InventorySystem/Items/Weapons/DMR/M14/BP_M14.Default__BP_M14_C:PickupComponent'";
    class UBP_SightComponent_C* BP_SightComponent;
};