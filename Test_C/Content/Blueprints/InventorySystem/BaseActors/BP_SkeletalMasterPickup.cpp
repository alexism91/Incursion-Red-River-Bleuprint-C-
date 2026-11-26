class ABP_SkeletalMasterPickup_C : public APickUpActor
{
public:
    bool bHasCookedComponentInstancingData = true;
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/InventorySystem/BaseActors/BP_SkeletalMasterPickup.BP_SkeletalMasterPickup_C:ComponentDelegateBinding_0'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/InventorySystem/BaseActors/BP_SkeletalMasterPickup.BP_SkeletalMasterPickup_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/BaseActors/BP_SkeletalMasterPickup.BP_SkeletalMasterPickup_C:ExecuteUbergraph_BP_SkeletalMasterPickup'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    FName Marker Socket Name = FName("root");
    bool SupportHiddenShadows = true;
    bool UpdateItemState? = true;
    class UInventoryComponent* InventoryComponent = "InventoryComponent'Test_C/Content/Blueprints/InventorySystem/BaseActors/BP_SkeletalMasterPickup.Default__BP_SkeletalMasterPickup_C:InventoryComponent'";
    class UPickUpComponent* PickUpComponent = "PickUpComponent'Test_C/Content/Blueprints/InventorySystem/BaseActors/BP_SkeletalMasterPickup.Default__BP_SkeletalMasterPickup_C:PickupComponent'";
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
    class USkeletalMeshComponent* SkeletalMesh;
    TArray<class USceneComponent*>* SecondaryMeshes;
    bool PrevPhysicState;
    TArray<FString> ToIgnorePayload;
    TArray<class UMaterialInstanceDynamic*> DynamicMaterials;
    bool Is Equipped;

};