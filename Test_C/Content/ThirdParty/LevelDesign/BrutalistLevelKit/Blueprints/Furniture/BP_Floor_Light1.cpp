class ABP_Floor_Light1_C : public ABP_P_Furniture_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Blueprints/Furniture/BP_Floor_Light1.BP_Floor_Light1_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Blueprints/Furniture/BP_Floor_Light1.BP_Floor_Light1_C:InheritableComponentHandler'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Blueprints/Furniture/BP_Floor_Light1.BP_Floor_Light1_C:ExecuteUbergraph_BP_Floor_Light1'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FLinearColor Color = FLinearColor(1, 0,928451, 0,601163, 0);
    class USpotLightComponent* SpotLight;
    class UMaterialInstanceDynamic* LightMatInst;

};