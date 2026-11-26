class ABP_KAC_LAMG_C : public ABP_MasterWeapon_C
{
public:
    bool bHasCookedComponentInstancingData = true;
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/InventorySystem/Items/Weapons/Lmg/KAC_LAMG/BP_KAC_LAMG.BP_KAC_LAMG_C:ComponentDelegateBinding_0'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/InventorySystem/Items/Weapons/Lmg/KAC_LAMG/BP_KAC_LAMG.BP_KAC_LAMG_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/InventorySystem/Items/Weapons/Lmg/KAC_LAMG/BP_KAC_LAMG.BP_KAC_LAMG_C:InheritableComponentHandler'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Items/Weapons/Lmg/KAC_LAMG/BP_KAC_LAMG.BP_KAC_LAMG_C:ExecuteUbergraph_BP_KAC_LAMG'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    int32 MagDepth = 12;
    FString BulletPrefix = "b";
    struct FTransform BulletTransform = {
        "Rotation": FQuat(-0, 0,70710677, 0, 0,70710677),
        "Translation": FVector(-0,023444, 0, 0),
        "Scale3D": FVector(0,01, 0,01, 0,01)
    };
    int32 BoneDepth = 23;
    bool IsMagInstalled = true;
    class UInventoryComponent* InventoryComponent = "InventoryComponent'Test_C/Content/Blueprints/InventorySystem/Items/Weapons/Lmg/KAC_LAMG/BP_KAC_LAMG.Default__BP_KAC_LAMG_C:InventoryComponent'";
    class UPickUpComponent* PickUpComponent = "PickUpComponent'Test_C/Content/Blueprints/InventorySystem/Items/Weapons/Lmg/KAC_LAMG/BP_KAC_LAMG.Default__BP_KAC_LAMG_C:PickupComponent'";
    class UBP_MuzzleComponent_Barrel_C* BP_MuzzleComponent_Barrel;
    class UBP_SightComponent_C* BP_SightComponent;
    TArray<class UStaticMeshComponent*>* BulletMeshes;

};