class ABP_EasyFog_C : public AActor
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Environment/Tools/EasyFog/Blueprints/BP_EasyFog.BP_EasyFog_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Environment/Tools/EasyFog/Blueprints/BP_EasyFog.BP_EasyFog_C:ExecuteUbergraph_BP_EasyFog'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    class UTexture2D* Base Color Map = "Texture2D'Test_C/Content/Environment/Tools/EasyFog/Textures/Fog/T_smoothCloudsNoise_02_D.T_smoothCloudsNoise_02_D'";
    class UTexture2D* Opacity Map = "Texture2D'Test_C/Content/Environment/Tools/EasyFog/Textures/Fog/T_mountainFog_01_mask.T_mountainFog_01_mask'";
    class UTexture2D* Normal Map = "Texture2D'Test_C/Content/Environment/Tools/EasyFog/Textures/Fog/T_normalProxy_N.T_normalProxy_N'";
    struct FLinearColor Base Color Tint = FLinearColor(1, 1, 1, 0);
    float BaseColorContrast = -0.3;
    float Base Color Intensity = 1;
    float Emissive Intensity = 0.5;
    float Fog Density = 1;
    float Geometry Fading Distance = 1000;
    float Camera Fading Distance = 1000;
    float Wind Speed Y = 200;
    float Wind Speed X = 200;
    float Wind Noise Tiling = 0.02;
    struct FActorTickFunction PrimaryActorTick = {
        "bStartWithTickEnabled": false
    };
    class UStaticMeshComponent* FogCard;
    class USceneComponent* DefaultSceneRoot;
    class UMaterialInstanceDynamic* Fog Material Instance;
    double Use Atmosphere Color;
    float Normal Map Intensity;
    bool Cast Shadow?;
    float Wind : Yes/No;
    float View Angle Fade;
    float Wind Noise Contrast;

};