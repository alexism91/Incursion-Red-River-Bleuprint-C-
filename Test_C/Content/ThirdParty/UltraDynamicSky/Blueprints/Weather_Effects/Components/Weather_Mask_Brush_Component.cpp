class UWeather_Mask_Brush_Component_C : public UWeatherMask_C
{
public:
    struct FLinearColor Brush Color = FLinearColor(0, 0, 0, 0);
    class UStaticMesh* StaticMesh = "StaticMesh'Test_C/Content/ThirdParty/UltraDynamicSky/Meshes/Brush_Square.Brush_Square'";
    UDS_Weather_Mask_Brush Brush;
    bool Cancel Masks Above;
    class UTexture2D* Brush Texture;

};