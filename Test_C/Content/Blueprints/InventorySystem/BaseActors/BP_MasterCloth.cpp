class ABP_MasterCloth_C : public AClothingActor
{
public:
    TArray<class USkeletalMeshComponent*> ComponentTemplates = {
        "SkeletalMeshComponent'Test_C/Content/Blueprints/InventorySystem/BaseActors/BP_MasterCloth.BP_MasterCloth_C:NODE_AddSkeletalMeshComponent-2'",
        "SkeletalMeshComponent'Test_C/Content/Blueprints/InventorySystem/BaseActors/BP_MasterCloth.BP_MasterCloth_C:NODE_AddSkeletalMeshComponent-3'",
        "SkeletalMeshComponent'Test_C/Content/Blueprints/InventorySystem/BaseActors/BP_MasterCloth.BP_MasterCloth_C:NODE_AddSkeletalMeshComponent-5'",
        "SkeletalMeshComponent'Test_C/Content/Blueprints/InventorySystem/BaseActors/BP_MasterCloth.BP_MasterCloth_C:NODE_AddSkeletalMeshComponent-6'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/InventorySystem/BaseActors/BP_MasterCloth.BP_MasterCloth_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/BaseActors/BP_MasterCloth.BP_MasterCloth_C:ExecuteUbergraph_BP_MasterCloth'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool Auto Register With Budget Allocator = true;
    bool UseSkeletalMeshBudgeted = true;
    class USceneComponent* DefaultSceneRoot;
    bool DisableShadows;
    bool MergeMeshes;

};