class ABP_Machete_C : public ABP_SkeletalMasterPickup_C
{
public:
    bool bHasCookedComponentInstancingData = true;
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/InventorySystem/Items/Melee/Machete/BP_Machete.BP_Machete_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/InventorySystem/Items/Melee/Machete/BP_Machete.BP_Machete_C:InheritableComponentHandler'";
    bool SupportHiddenShadows = false;
    class UInventoryComponent* InventoryComponent = "InventoryComponent'Test_C/Content/Blueprints/InventorySystem/Items/Melee/Machete/BP_Machete.Default__BP_Machete_C:InventoryComponent'";
    class UPickUpComponent* PickUpComponent = "PickUpComponent'Test_C/Content/Blueprints/InventorySystem/Items/Melee/Machete/BP_Machete.Default__BP_Machete_C:PickupComponent'";
    enum NetDormancy = ENetDormancy::DORM_Awake;
    class UBP_MeleeComponent_C* BP_MeleeComponent;
};