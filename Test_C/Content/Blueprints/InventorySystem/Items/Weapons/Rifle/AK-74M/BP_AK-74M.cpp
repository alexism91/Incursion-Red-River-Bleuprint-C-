class ABP_AK-74M_C : public ABP_MasterWeapon_C
{
public:
    bool bHasCookedComponentInstancingData = true;
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/InventorySystem/Items/Weapons/Rifle/AK-74M/BP_AK-74M.BP_AK-74M_C:ComponentDelegateBinding_0'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/InventorySystem/Items/Weapons/Rifle/AK-74M/BP_AK-74M.BP_AK-74M_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/InventorySystem/Items/Weapons/Rifle/AK-74M/BP_AK-74M.BP_AK-74M_C:InheritableComponentHandler'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Items/Weapons/Rifle/AK-74M/BP_AK-74M.BP_AK-74M_C:ExecuteUbergraph_BP_AK-74M'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    class UInventoryComponent* InventoryComponent = "InventoryComponent'Test_C/Content/Blueprints/InventorySystem/Items/Weapons/Rifle/AK-74M/BP_AK-74M.Default__BP_AK-74M_C:InventoryComponent'";
    class UPickUpComponent* PickUpComponent = "PickUpComponent'Test_C/Content/Blueprints/InventorySystem/Items/Weapons/Rifle/AK-74M/BP_AK-74M.Default__BP_AK-74M_C:PickupComponent'";
    class UStaticMeshComponent* StaticMesh_0;
    class UBP_SightComponent_C* BP_SightComponent;
    class UMuzzleComponent* Muzzle;

};