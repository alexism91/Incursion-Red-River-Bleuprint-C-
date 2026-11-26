class ABP_Trijicon_ACOG_4x24_Scope_C : public ABP_MasterAttachment_C
{
public:
    bool bHasCookedComponentInstancingData = true;
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/InventorySystem/Items/Attachments/Sight/Trijicon_ACOG_4x24_Scope/BP_Trijicon_ACOG_4x24_Scope.BP_Trijicon_ACOG_4x24_Scope_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/InventorySystem/Items/Attachments/Sight/Trijicon_ACOG_4x24_Scope/BP_Trijicon_ACOG_4x24_Scope.BP_Trijicon_ACOG_4x24_Scope_C:InheritableComponentHandler'";
    class UInventoryComponent* InventoryComponent = "InventoryComponent'Test_C/Content/Blueprints/InventorySystem/Items/Attachments/Sight/Trijicon_ACOG_4x24_Scope/BP_Trijicon_ACOG_4x24_Scope.Default__BP_Trijicon_ACOG_4x24_Scope_C:InventoryComponent'";
    class UPickUpComponent* PickUpComponent = "PickUpComponent'Test_C/Content/Blueprints/InventorySystem/Items/Attachments/Sight/Trijicon_ACOG_4x24_Scope/BP_Trijicon_ACOG_4x24_Scope.Default__BP_Trijicon_ACOG_4x24_Scope_C:PickupComponent'";
    struct FActorTickFunction PrimaryActorTick = {
        "TickGroup": ETickingGroup::TG_PostUpdateWork
    };
    class UStaticMeshComponent* SM_Trijicon_ACOG_4x24_Scope_Glass;
    class UBP_SightComponent_C* BP_Scope;
};