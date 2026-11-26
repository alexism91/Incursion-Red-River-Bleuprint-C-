class UUDS_Weather_Settings_C : public UIRRWeatherSettings
{
public:
    double Cloud Coverage;
    double Rain;
    double Snow;
    double Thunder/Lightning;
    double Wind Intensity;
    double Fog;
    double Dust;
    double Material Wetness;
    double Material Snow Coverage;
    double Material Dust Coverage;
    TSoftObjectPtr<UTexture2D> Icon Texture;
    FName User Friendly Name;
    class UAkAudioEvent* Weather AK Event;
};