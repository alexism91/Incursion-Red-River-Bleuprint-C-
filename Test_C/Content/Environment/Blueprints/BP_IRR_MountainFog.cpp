class ABP_IRR_MountainFog_C : public ABP_EasyFog_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Environment/Blueprints/BP_IRR_MountainFog.BP_IRR_MountainFog_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Environment/Blueprints/BP_IRR_MountainFog.BP_IRR_MountainFog_C:InheritableComponentHandler'";
    double Use Atmosphere Color = 1;
    float Emissive Intensity = 0.33;
    float Fog Density = 0.3;
    float Wind : Yes/No = 1;
    float Wind Speed Y = 400;
    float Wind Speed X = 800;
    float View Angle Fade = 5;
    float Wind Noise Tiling = 0.003;
};