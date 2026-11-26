class ABP_StaticMasterPickup_C : public APickUpActor
{
public:
    bool bHasCookedComponentInstancingData = true;
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/InventorySystem/BaseActors/BP_StaticMasterPickup.BP_StaticMasterPickup_C:ComponentDelegateBinding_0'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/InventorySystem/BaseActors/BP_StaticMasterPickup.BP_StaticMasterPickup_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/BaseActors/BP_StaticMasterPickup.BP_StaticMasterPickup_C:ExecuteUbergraph_BP_StaticMasterPickup'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    class UInventoryComponent* InventoryComponent = "InventoryComponent'Test_C/Content/Blueprints/InventorySystem/BaseActors/BP_StaticMasterPickup.Default__BP_StaticMasterPickup_C:InventoryComponent'";
    class UPickUpComponent* PickUpComponent = "PickUpComponent'Test_C/Content/Blueprints/InventorySystem/BaseActors/BP_StaticMasterPickup.Default__BP_StaticMasterPickup_C:PickupComponent'";
    struct FActorTickFunction PrimaryActorTick = {
        "bAllowTickOnDedicatedServer": false
    };
    bool bNetLoadOnClient = false;
    enum NetDormancy = ENetDormancy::DORM_DormantAll;
    float NetUpdateFrequency = 2;
    float MinNetUpdateFrequency = 1;
    float NetPriority = 0.5;
    class UBP_InteractionTarget_C* BP_InteractionTarget;
    class UBP_GameplayTagsComponent_C* BP_GameplayTagsComponent;
    class UStaticMeshComponent* StaticMesh;
    TArray<class USceneComponent*>* SecondaryMeshes;
    bool SupportHiddenShadows;
    class UInventoryComponent* ItemOwner;
    bool Is Equipped;
    TArray<class UMaterialInstanceDynamic*> DynamicMaterials;

};