class ABP_M1050_LRF_Binoculars_C : public ABP_SkeletalMasterPickup_C
{
public:
    bool bHasCookedComponentInstancingData = true;
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/InventorySystem/Items/Gadgets/Binoculars/M1050_LRF_Binoculars/BP_M1050_LRF_Binoculars.BP_M1050_LRF_Binoculars_C:ComponentDelegateBinding_0'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/InventorySystem/Items/Gadgets/Binoculars/M1050_LRF_Binoculars/BP_M1050_LRF_Binoculars.BP_M1050_LRF_Binoculars_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/InventorySystem/Items/Gadgets/Binoculars/M1050_LRF_Binoculars/BP_M1050_LRF_Binoculars.BP_M1050_LRF_Binoculars_C:InheritableComponentHandler'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Items/Gadgets/Binoculars/M1050_LRF_Binoculars/BP_M1050_LRF_Binoculars.BP_M1050_LRF_Binoculars_C:ExecuteUbergraph_BP_M1050_LRF_Binoculars'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool SupportHiddenShadows = false;
    class UInventoryComponent* InventoryComponent = "InventoryComponent'Test_C/Content/Blueprints/InventorySystem/Items/Gadgets/Binoculars/M1050_LRF_Binoculars/BP_M1050_LRF_Binoculars.Default__BP_M1050_LRF_Binoculars_C:InventoryComponent'";
    class UPickUpComponent* PickUpComponent = "PickUpComponent'Test_C/Content/Blueprints/InventorySystem/Items/Gadgets/Binoculars/M1050_LRF_Binoculars/BP_M1050_LRF_Binoculars.Default__BP_M1050_LRF_Binoculars_C:PickupComponent'";
    class UBP_MuzzleComponent_Barrel_C* BP_MuzzleComponent_Barrel;
    class UIRRRangefinderDisplayComponent* IRRRangefinderDisplay;
    class ULaserComponent* Laser_A;
    class UStaticMeshComponent* LaserMesh_A;
    class UStaticMeshComponent* LaserDot_A;
    class UBP_WeaponComponent_C* BP_WeaponComponent;
    class UBP_SightComponent_C* BP_SightComponent;
    class UStaticMeshComponent* SM_Razor_HD4000_Glass;

};