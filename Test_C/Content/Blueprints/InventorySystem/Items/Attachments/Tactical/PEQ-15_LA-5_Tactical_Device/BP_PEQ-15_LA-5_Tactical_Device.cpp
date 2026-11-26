class ABP_PEQ-15_LA-5_Tactical_Device_C : public ABP_StaticMasterPickup_C
{
public:
    bool bHasCookedComponentInstancingData = true;
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/InventorySystem/Items/Attachments/Tactical/PEQ-15_LA-5_Tactical_Device/BP_PEQ-15_LA-5_Tactical_Device.BP_PEQ-15_LA-5_Tactical_Device_C:ComponentDelegateBinding_0'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/InventorySystem/Items/Attachments/Tactical/PEQ-15_LA-5_Tactical_Device/BP_PEQ-15_LA-5_Tactical_Device.BP_PEQ-15_LA-5_Tactical_Device_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/InventorySystem/Items/Attachments/Tactical/PEQ-15_LA-5_Tactical_Device/BP_PEQ-15_LA-5_Tactical_Device.BP_PEQ-15_LA-5_Tactical_Device_C:InheritableComponentHandler'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Items/Attachments/Tactical/PEQ-15_LA-5_Tactical_Device/BP_PEQ-15_LA-5_Tactical_Device.BP_PEQ-15_LA-5_Tactical_Device_C:ExecuteUbergraph_BP_PEQ-15_LA-5_Tactical_Device'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    class UInventoryComponent* InventoryComponent = "InventoryComponent'Test_C/Content/Blueprints/InventorySystem/Items/Attachments/Tactical/PEQ-15_LA-5_Tactical_Device/BP_PEQ-15_LA-5_Tactical_Device.Default__BP_PEQ-15_LA-5_Tactical_Device_C:InventoryComponent'";
    class UPickUpComponent* PickUpComponent = "PickUpComponent'Test_C/Content/Blueprints/InventorySystem/Items/Attachments/Tactical/PEQ-15_LA-5_Tactical_Device/BP_PEQ-15_LA-5_Tactical_Device.Default__BP_PEQ-15_LA-5_Tactical_Device_C:PickupComponent'";
    class USpotLightComponent* SpotLight;
    class UBP_FlashlightComponent_C* BP_FlashlightComponent;
    class UStaticMeshComponent* LaserMesh_A;
    class UStaticMeshComponent* LaserMesh_B;
    class UStaticMeshComponent* LaserDot_B;
    class UStaticMeshComponent* LaserDot_A;
    class ULaserComponent* Laser_A;
    class ULaserComponent* Laser_B;
    TSoftObjectPtr<UActorComponent> NewVar_0;
    bool IRLaser?;

};