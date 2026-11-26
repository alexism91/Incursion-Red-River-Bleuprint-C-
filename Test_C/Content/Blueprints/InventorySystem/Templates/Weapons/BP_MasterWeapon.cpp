class ABP_MasterWeapon_C : public ABP_SkeletalMasterPickup_C
{
public:
    bool bHasCookedComponentInstancingData = true;
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/InventorySystem/Templates/Weapons/BP_MasterWeapon.BP_MasterWeapon_C:ComponentDelegateBinding_0'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/InventorySystem/Templates/Weapons/BP_MasterWeapon.BP_MasterWeapon_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/InventorySystem/Templates/Weapons/BP_MasterWeapon.BP_MasterWeapon_C:InheritableComponentHandler'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Templates/Weapons/BP_MasterWeapon.BP_MasterWeapon_C:ExecuteUbergraph_BP_MasterWeapon'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool UpdateItemState? = false;
    TArray<FString> ToIgnorePayload = {
        "Chambered",
        "Chamber Opened",
        "Chamber Closed",
        "Switch Fire Mode"
    };
    bool bHandleAttachmentLocally = true;
    class UInventoryComponent* InventoryComponent = "InventoryComponent'Test_C/Content/Blueprints/InventorySystem/Templates/Weapons/BP_MasterWeapon.Default__BP_MasterWeapon_C:InventoryComponent'";
    class UPickUpComponent* PickUpComponent = "PickUpComponent'Test_C/Content/Blueprints/InventorySystem/Templates/Weapons/BP_MasterWeapon.Default__BP_MasterWeapon_C:PickupComponent'";
    class UStaticMeshComponent* StaticMesh;
    class UBP_SightComponent_C* BP_PointSight;
    class UBP_WeaponComponent_C* BP_WeaponComponent;
    bool ShowcaseWeapon?;

};