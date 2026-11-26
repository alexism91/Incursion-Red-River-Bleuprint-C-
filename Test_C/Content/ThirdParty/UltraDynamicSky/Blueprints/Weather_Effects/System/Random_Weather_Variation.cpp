class URandom_Weather_Variation_C : public UActorComponent
{
public:
    int32 NumReplicatedProperties = 7;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/System/Random_Weather_Variation.Random_Weather_Variation_C:ExecuteUbergraph_Random_Weather_Variation'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    double Current Timer Length = -1;
    class UUDS_Weather_Settings_C* Current Random Weather State = "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Cloudy.Cloudy'";
    struct FActorComponentTickFunction PrimaryComponentTick = {
        "bCanEverTick": true,
        "bStartWithTickEnabled": false
    };
    bool bReplicates = true;
    class AUltra_Dynamic_Weather_C* UDW;
    class UUDS_Weather_Settings_C* Target Random Weather Type;
    TMap<class UUDS_Weather_Settings_C*, double> Weather Type Probabilities (Summer);
    TMap<class UUDS_Weather_Settings_C*, double> Weather Type Probabilities (Autumn);
    TMap<class UUDS_Weather_Settings_C*, double> Weather Type Probabilities (Winter);
    TMap<class UUDS_Weather_Settings_C*, double> Weather Type Probabilities (Spring);
    double Current Lerp Alpha;
    class AWeather_Override_Volume_C* Volume;
    int Total Changes;
    bool Changing Weather;
    class UUDS_Weather_Settings_C* Last Random Weather Type;
    double Change Timer;
    bool Started;

};