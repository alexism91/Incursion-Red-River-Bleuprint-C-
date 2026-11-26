class ABP_SIG_Sauer_BRAVO4_4x30_Scope_C : public ABP_MasterAttachment_C
{
public:
    bool bHasCookedComponentInstancingData = true;
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/InventorySystem/Items/Attachments/Sight/SIG_Sauer_BRAVO4_4x30_Scope/BP_SIG_Sauer_BRAVO4_4x30_Scope.BP_SIG_Sauer_BRAVO4_4x30_Scope_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/InventorySystem/Items/Attachments/Sight/SIG_Sauer_BRAVO4_4x30_Scope/BP_SIG_Sauer_BRAVO4_4x30_Scope.BP_SIG_Sauer_BRAVO4_4x30_Scope_C:InheritableComponentHandler'";
    class UInventoryComponent* InventoryComponent = "InventoryComponent'Test_C/Content/Blueprints/InventorySystem/Items/Attachments/Sight/SIG_Sauer_BRAVO4_4x30_Scope/BP_SIG_Sauer_BRAVO4_4x30_Scope.Default__BP_SIG_Sauer_BRAVO4_4x30_Scope_C:InventoryComponent'";
    class UPickUpComponent* PickUpComponent = "PickUpComponent'Test_C/Content/Blueprints/InventorySystem/Items/Attachments/Sight/SIG_Sauer_BRAVO4_4x30_Scope/BP_SIG_Sauer_BRAVO4_4x30_Scope.Default__BP_SIG_Sauer_BRAVO4_4x30_Scope_C:PickupComponent'";
    struct FActorTickFunction PrimaryActorTick = {
        "TickGroup": ETickingGroup::TG_PostUpdateWork
    };
    class UStaticMeshComponent* SIG_Sauer_BRAVO4_4x30_Scope_Glass;
    class UBP_SightComponent_C* BP_SightComponent;
};