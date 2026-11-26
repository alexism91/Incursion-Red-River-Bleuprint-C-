class ABP_MasterGear_C : public ABP_SkeletalMasterPickup_C
{
public:
    int32 NumReplicatedProperties = 1;
    bool bHasCookedComponentInstancingData = true;
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/InventorySystem/Templates/Gear/BP_MasterGear.BP_MasterGear_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/InventorySystem/Templates/Gear/BP_MasterGear.BP_MasterGear_C:InheritableComponentHandler'";
    bool FirstTime? = true;
    class UInventoryComponent* InventoryComponent = "InventoryComponent'Test_C/Content/Blueprints/InventorySystem/Templates/Gear/BP_MasterGear.Default__BP_MasterGear_C:InventoryComponent'";
    class UPickUpComponent* PickUpComponent = "PickUpComponent'Test_C/Content/Blueprints/InventorySystem/Templates/Gear/BP_MasterGear.Default__BP_MasterGear_C:PickupComponent'";
    class USkeletalMeshComponent* LeaderComp;
    bool PrevPhysicState_0;
};