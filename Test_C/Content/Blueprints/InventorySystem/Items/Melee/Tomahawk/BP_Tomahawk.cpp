class ABP_Tomahawk_C : public ABP_SkeletalMasterPickup_C
{
public:
    bool bHasCookedComponentInstancingData = true;
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/InventorySystem/Items/Melee/Tomahawk/BP_Tomahawk.BP_Tomahawk_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/InventorySystem/Items/Melee/Tomahawk/BP_Tomahawk.BP_Tomahawk_C:InheritableComponentHandler'";
    bool SupportHiddenShadows = false;
    class UInventoryComponent* InventoryComponent = "InventoryComponent'Test_C/Content/Blueprints/InventorySystem/Items/Melee/Tomahawk/BP_Tomahawk.Default__BP_Tomahawk_C:InventoryComponent'";
    class UPickUpComponent* PickUpComponent = "PickUpComponent'Test_C/Content/Blueprints/InventorySystem/Items/Melee/Tomahawk/BP_Tomahawk.Default__BP_Tomahawk_C:PickupComponent'";
    enum NetDormancy = ENetDormancy::DORM_Awake;
    class UBP_MeleeComponent_C* BP_MeleeComponent;
};