class AWeather_Override_Volume_C : public AActor
{
public:
    int32 NumReplicatedProperties = 10;
    TArray<class UObject*> ComponentTemplates = {
        nullptr
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Override_Volume.Weather_Override_Volume_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Override_Volume.Weather_Override_Volume_C:ExecuteUbergraph_Weather_Override_Volume'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    double Transition Width = 20000;
    class UUDS_Weather_Settings_C* Weather Type = "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Rain.Rain'";
    bool Override Material Effects = true;
    double Volume Alpha = 1;
    TMap<class UUDS_Weather_Settings_C*, double> Weather Type Probabilities (Spring) = {
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Snow_Blizzard.Snow_Blizzard'", 0 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Clear_Skies.Clear_Skies'", 0.7 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Cloudy.Cloudy'", 1.3 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Foggy.Foggy'", 0.35 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Rain_Light.Rain_Light'", 1 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Snow_Light.Snow_Light'", 0.35 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Overcast.Overcast'", 0.8 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Partly_Cloudy.Partly_Cloudy'", 1.4 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Rain.Rain'", 1 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Snow.Snow'", 0.2 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Rain_Thunderstorm.Rain_Thunderstorm'", 0.8 }
    };
    TMap<class UUDS_Weather_Settings_C*, double> Weather Type Probabilities (Summer) = {
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Snow_Blizzard.Snow_Blizzard'", 0 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Clear_Skies.Clear_Skies'", 0.7 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Cloudy.Cloudy'", 1.2 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Foggy.Foggy'", 0 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Rain_Light.Rain_Light'", 1 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Snow_Light.Snow_Light'", 0 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Overcast.Overcast'", 0.7 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Partly_Cloudy.Partly_Cloudy'", 1.4 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Rain.Rain'", 1 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Snow.Snow'", 0 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Rain_Thunderstorm.Rain_Thunderstorm'", 0.8 }
    };
    TMap<class UUDS_Weather_Settings_C*, double> Weather Type Probabilities (Autumn) = {
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Snow_Blizzard.Snow_Blizzard'", 0 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Clear_Skies.Clear_Skies'", 0.3 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Cloudy.Cloudy'", 1.2 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Foggy.Foggy'", 0.5 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Rain_Light.Rain_Light'", 1 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Snow_Light.Snow_Light'", 0.25 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Overcast.Overcast'", 1 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Partly_Cloudy.Partly_Cloudy'", 1.4 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Rain.Rain'", 1 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Snow.Snow'", 0 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Rain_Thunderstorm.Rain_Thunderstorm'", 0.8 }
    };
    TMap<class UUDS_Weather_Settings_C*, double> Weather Type Probabilities (Winter) = {
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Snow_Blizzard.Snow_Blizzard'", 0.8 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Clear_Skies.Clear_Skies'", 0.1 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Cloudy.Cloudy'", 1.3 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Foggy.Foggy'", 0.35 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Rain_Light.Rain_Light'", 0 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Snow_Light.Snow_Light'", 1 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Overcast.Overcast'", 1.2 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Partly_Cloudy.Partly_Cloudy'", 1 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Rain.Rain'", 0 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Snow.Snow'", 1 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Rain_Thunderstorm.Rain_Thunderstorm'", 0 }
    };
    class UUDS_Weather_Settings_C* Editor Preview State = "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Partly_Cloudy.Partly_Cloudy'";
    struct FVector Spline Bounds Center = FVector(0, 0, 0);
    bool Show Weather Label in Editor = true;
    class UUDS_Weather_Settings_C* Weather State = "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Clear_Skies.Clear_Skies'";
    struct FVector Canvas Scale Factor = FVector(0, 0, 0);
    struct FVector Canvas Offset = FVector(0, 0, 0);
    struct FLinearColor Volume Color = FLinearColor(0,325483, 1, 0,031642, 1);
    struct FVector Material State Buffer = FVector(0, 0, 0);
    FString Random Weather Label Text = "Random";
    double Wind Direction = 180;
    bool Apply Temperature Ranges = true;
    struct FVector2D Summer Temperature Min and Max = FVector2D(55, 80);
    struct FVector2D Autumn Temperature Min and Max = FVector2D(40, 70);
    struct FVector2D Winter Temperature Min and Max = FVector2D(20, 55);
    struct FVector2D Spring Temperature Min and Max = FVector2D(30, 65);
    struct FActorTickFunction PrimaryActorTick = {
        "bCanEverTick": true
    };
    bool bAlwaysRelevant = true;
    bool bEnableAutoLODGeneration = false;
    bool bReplicates = true;
    float NetUpdateFrequency = 10;
    class UUDW_Lightning_Spawn_Manager_C* Lightning_Spawn_Manager;
    class URandom_Weather_Variation_C* Random_Weather_Variation;
    class UBillboardComponent* Billboard;
    class USplineComponent* Spline;
    UDS_Weather_Override_Mode Mode;
    int Priority;
    double Scaled Transition Width;
    class AUltra_Dynamic_Weather_C* UDW;
    class UUDS_Climate_Preset_C* Apply Climate Preset;
    double Total Sphere Bounds;
    TArray<struct FVector> World Space Triangles;
    TArray<struct FCanvasUVTri> Canvas Space Triangles;
    bool Started;
    bool Transitioning Weather;
    class UUDS_Weather_Settings_C* Transition Weather A;
    class UUDS_Weather_Settings_C* Transition Weather B;
    double Transition Time Remaining;
    bool Changing to Random Weather;
    bool Changing from Random Weather;
    double Transition Timer Length;
    TArray<struct FVector> Runtime Spline Points;
    class UUDS_Weather_Settings_C* Preview Weather State;
    bool Apply Wind Direction;
    bool Applied Last Update;
    UDS_TemperatureType Temperature Scale;

};