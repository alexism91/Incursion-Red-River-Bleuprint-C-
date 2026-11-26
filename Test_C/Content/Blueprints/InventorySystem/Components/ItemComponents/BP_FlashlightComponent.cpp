class UBP_FlashlightComponent_C : public UFlashlightComponent
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Components/ItemComponents/BP_FlashlightComponent.BP_FlashlightComponent_C:ExecuteUbergraph_BP_FlashlightComponent'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    FName LightComponentName = FName("SpotLight");
    struct FIRRLightSettings LightSettings = {
        "LightIntensities": 150,
        "LightIntensitiesInfrared": 75
    };

};