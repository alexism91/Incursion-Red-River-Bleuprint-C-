class ABP_MasterGrenade_C : public ABP_SkeletalMasterPickup_C
{
public:
    bool bHasCookedComponentInstancingData = true;
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/InventorySystem/Templates/Master/Grenade/BP_MasterGrenade.BP_MasterGrenade_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/InventorySystem/Templates/Master/Grenade/BP_MasterGrenade.BP_MasterGrenade_C:InheritableComponentHandler'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Templates/Master/Grenade/BP_MasterGrenade.BP_MasterGrenade_C:ExecuteUbergraph_BP_MasterGrenade'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    class UInventoryComponent* InventoryComponent = "InventoryComponent'Test_C/Content/Blueprints/InventorySystem/Templates/Master/Grenade/BP_MasterGrenade.Default__BP_MasterGrenade_C:InventoryComponent'";
    class UPickUpComponent* PickUpComponent = "PickUpComponent'Test_C/Content/Blueprints/InventorySystem/Templates/Master/Grenade/BP_MasterGrenade.Default__BP_MasterGrenade_C:PickupComponent'";
    class USenseStimulusComponent* SenseStimulus;
    class UBP_GrenadeComponent_C* BP_GrenadeComponent;

};