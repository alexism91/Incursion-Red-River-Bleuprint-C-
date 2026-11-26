class ABP_MasterMag_C : public ABP_StaticMasterPickup_C
{
public:
    bool bHasCookedComponentInstancingData = true;
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/InventorySystem/Templates/Attachments/BP_MasterMag.BP_MasterMag_C:ComponentDelegateBinding_0'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/InventorySystem/Templates/Attachments/BP_MasterMag.BP_MasterMag_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/InventorySystem/Templates/Attachments/BP_MasterMag.BP_MasterMag_C:InheritableComponentHandler'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Templates/Attachments/BP_MasterMag.BP_MasterMag_C:ExecuteUbergraph_BP_MasterMag'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FLinearColor Text Color = FLinearColor(0, 0,66, 1, 1);
    class UInventoryComponent* InventoryComponent = "InventoryComponent'Test_C/Content/Blueprints/InventorySystem/Templates/Attachments/BP_MasterMag.Default__BP_MasterMag_C:InventoryComponent'";
    class UPickUpComponent* PickUpComponent = "PickUpComponent'Test_C/Content/Blueprints/InventorySystem/Templates/Attachments/BP_MasterMag.Default__BP_MasterMag_C:PickupComponent'";
    class UInventoryComponent* InventoryOwner;
    int BulletCount;
    TArray<class UInstancedStaticMeshComponent*>* BulletInstances;

};