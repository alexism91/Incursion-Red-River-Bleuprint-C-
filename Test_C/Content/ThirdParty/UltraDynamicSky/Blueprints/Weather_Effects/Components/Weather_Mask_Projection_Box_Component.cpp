class UWeather_Mask_Projection_Box_Component_C : public UWeatherMask_C
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Components/Weather_Mask_Projection_Box_Component.Weather_Mask_Projection_Box_Component_C:ExecuteUbergraph_Weather_Mask_Projection_Box_Component'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    double Blur Radius = 100;
    double Blur Slope (Wetness) = 1;
    double Blur Slope (Snow/Dust) = 1;
    int32 Capture Pixel Size = 5;
    struct FVector Capture Box Size = FVector(0, 0, 0);
    double Height Dilation = 8;
    bool Recycle Scene Capture for Repeated Mask Draws = true;
    class USceneCaptureComponent2D* SceneCaptureComponent2D;
    TArray<class AActor*> Exclude Actors from Occlusion;
    class UMaterialInstanceDynamic* Mask_MID;
    class UMaterialInstanceDynamic* Height_MID;
    double Top Height;
    class UTextureRenderTarget2D* Depth Render Target;
    int Capture X Resolution;
    bool UDW Runtime;

};