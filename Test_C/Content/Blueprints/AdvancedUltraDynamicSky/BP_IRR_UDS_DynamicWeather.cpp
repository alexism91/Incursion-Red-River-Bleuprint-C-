class ABP_IRR_UDS_DynamicWeather_C : public AUltra_Dynamic_Weather_C
{
public:
    int32 NumReplicatedProperties = 2;
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/AdvancedUltraDynamicSky/BP_IRR_UDS_DynamicWeather.BP_IRR_UDS_DynamicWeather_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/AdvancedUltraDynamicSky/BP_IRR_UDS_DynamicWeather.BP_IRR_UDS_DynamicWeather_C:InheritableComponentHandler'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/AdvancedUltraDynamicSky/BP_IRR_UDS_DynamicWeather.BP_IRR_UDS_DynamicWeather_C:ExecuteUbergraph_BP_IRR_UDS_DynamicWeather'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    double Time to Transition to New Weather (Seconds) = 300;
    struct FSoftObjectPath ReplicatedWeather = FSoftObjectPath("");
    struct FGameplayTag Map Tag = {
        "TagName": FName("None")
    };
    double Spawn Direction Forward Bias = -2;
    float Rain Particles Time Dilation = 1.4;
    double Splash Particles Alpha = 1.6;
    double Raindrop Decal Scale = 1.2;
    bool Enable Snow Particles = false;
    double Maximum Lightning Flash Light Intensity = 15;
    bool Lightning Flashes Cast Shadows = false;
    double Lightning Flash Light Shaft Intensity = 1;
    bool Enable Obscured Lightning = false;
    bool Enable Fog Particles = true;
    double Max Fog Particle Percentage (Rain) = 2;
    double Max Material Wetness = 0.95;
    bool Start With a Random Weather Type = true;
    TMap<UObject*, double> Weather Type Probabilities (Spring) = {};
    TMap<UObject*, double> Weather Type Probabilities (Summer) = {};
    TMap<UObject*, double> Weather Type Probabilities (Autumn) = {};
    TMap<UObject*, double> Weather Type Probabilities (Winter) = {};
    bool Blend Season Probabilities = false;
    double Rain Volume = 0;
    double Distant Thunder Volume = 0;
    double Close Thunder Volume = 0;
    double Wind Volume = 0;
    double Wind Whistling Volume = 0;
    double Intended Cloud Wind Speed = 0.8448663540236125;
    double Intended Cloud Coverage = 3;
    bool Replicate Lightning Direction = true;
    bool Flashing Lightning = true;
    struct FVector2D Summer Temperature Min and Max = FVector2D(75,2, 86);
    struct FVector2D Autumn Temperature Min and Max = FVector2D(77, 87,8);
    struct FVector2D Winter Temperature Min and Max = FVector2D(77, 84,2);
    struct FVector2D Spring Temperature Min and Max = FVector2D(77, 86);
    int32 Random Seed = 0;
    bool Apply Dynamic Trails to Snow = false;
    bool Apply Dynamic Trails to Dust = false;
    double Base Wetness when Raining = 0.9;
    enum UDS_DLWE_Mode Fallback DLWE Mode = UDS_DLWE_Mode::NewEnumerator1;
    int32 Mask Target Resolution = 512;
    class UUDS_OcclusionSettings_C* Occlusion Settings = "UDS_OcclusionSettings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Occlusion/Occlusion_Settings/IRR_Occlusion_Settings.IRR_Occlusion_Settings'";
    struct FVector2D Global Min and Max Temperature = FVector2D(76,202, 86);
    double Current Wind Direction = 180;
    bool ED_Raining = true;
    bool ED_Cloudy = true;
    bool Enable Screen Droplets = true;
    double Screen Center Strength = 0.1;
    double Camera Facing Rain Bias = 3;
    bool Wet Screen When Emerging from Water = false;
    bool Rain System Spawning = true;
    bool Enable Dust Particles = false;
    bool Enable Wind Debris = true;
    int32 Weather Mask Target Size = 5000;
    bool Weather Mask Target in Use = true;
    double Weather Mask Projection Value = 50;
    double Intended Fog = 9;
    bool Wind Debris System Spawning = true;
    int32 DLWE Snow Mode = 0;
    double Season = 0.4433315068082191;
    TArray<double> Individual Seasons = {
        0.5566684931917809,
        0.4433315068082191,
        0,
        0
    };
    enum UDS_Weather_Display_Names ED_CurrentWeather = UDS_Weather_Display_Names::NewEnumerator3;
    bool Fog Particles Active = true;
    int32 Anti Aliasing Method = 4;
    struct FVector Editor Mask Target Root = FVector(-97106,73, -67767,125, 5755);
    bool Not Limiting Construction = true;
    double Last Construction Script Time = 1765.3556281998754;
    double Current Rainbow Strength = 0;
    byte Previous Temperature Scale = 0;
    bool Apply Changes Above Volumetric Cloud Layer = false;
    bool Snow Update Needed = false;
    bool Dust Update Needed = false;
    bool Material Dust Update Needed = false;
    struct FVector Applied Rain Velocity = FVector(-1289,1179, 3,137188E-05, -1500);
    TArray<struct FVector> Sound Cache Old = {
        FVector(0,2, 20000, 0),
        FVector(0,03567664, 5445,2456, 0),
        FVector(0,12284655, 5445,2456, 0),
        FVector(0,070636764, 5445,2456, 0),
        FVector(0,070636764, 5445,2456, 0),
        FVector(0,070636764, 5445,2456, 0),
        FVector(0,15, 20000, 10),
        FVector(0,15, 20000, 10),
        FVector(0,15, 20000, 10),
        FVector(0,15, 20000, 10)
    };
    TArray<double> Cached Sound Directional Occlusion = {
        1,
        1,
        1,
        1
    };
    double Cached Wind LPF = 5445.245562604985;
    double Cached Wind Sound Intensity = 0.7445245562604985;
    TArray<bool> Sound Cache Changing = {
        true,
        true,
        true,
        true,
        true,
        true,
        true,
        true,
        true,
        true
    };
    struct FRandomStream Random Stream = {
        "InitialSeed": 30999,
        "Seed": 30999
    };
    enum RemoteRole = ENetRole::ROLE_SimulatedProxy;
    class UUDS_Weather_Settings_C* As UDS Weather Settings;

};