class ABP_Steiner_CQBL-1_Laser_C : public ABP_MasterTactical_C
{
public:
    bool bHasCookedComponentInstancingData = true;
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/InventorySystem/Items/Attachments/Tactical/Steiner-CQBL_Laser/BP_Steiner_CQBL-1_Laser.BP_Steiner_CQBL-1_Laser_C:ComponentDelegateBinding_0'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/InventorySystem/Items/Attachments/Tactical/Steiner-CQBL_Laser/BP_Steiner_CQBL-1_Laser.BP_Steiner_CQBL-1_Laser_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/InventorySystem/Items/Attachments/Tactical/Steiner-CQBL_Laser/BP_Steiner_CQBL-1_Laser.BP_Steiner_CQBL-1_Laser_C:InheritableComponentHandler'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Items/Attachments/Tactical/Steiner-CQBL_Laser/BP_Steiner_CQBL-1_Laser.BP_Steiner_CQBL-1_Laser_C:ExecuteUbergraph_BP_Steiner_CQBL-1_Laser'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    class UInventoryComponent* InventoryComponent = "InventoryComponent'Test_C/Content/Blueprints/InventorySystem/Items/Attachments/Tactical/Steiner-CQBL_Laser/BP_Steiner_CQBL-1_Laser.Default__BP_Steiner_CQBL-1_Laser_C:InventoryComponent'";
    class UPickUpComponent* PickUpComponent = "PickUpComponent'Test_C/Content/Blueprints/InventorySystem/Items/Attachments/Tactical/Steiner-CQBL_Laser/BP_Steiner_CQBL-1_Laser.Default__BP_Steiner_CQBL-1_Laser_C:PickupComponent'";
    class ULaserComponent* Laser_B;
    class ULaserComponent* Laser_A;
    class UStaticMeshComponent* LaserMesh_B;
    class UStaticMeshComponent* LaserDot_B;
    class UStaticMeshComponent* LaserMesh_A;
    class UStaticMeshComponent* LaserDot_A;
    bool IRLaser?;

};