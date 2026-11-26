class UUDW_Lightning_Spawn_Manager_C : public UActorComponent
{
public:
    bool Spawn Global Lightning = true;
    double Random Timer Multiplier = 1;
    struct FTimerHandle Lightning Timer = {
        "Handle": 0
    };
    struct FTimerHandle Check Timer = {
        "Handle": 0
    };
    struct FActorComponentTickFunction PrimaryComponentTick = {
        "bStartWithTickEnabled": false
    };
    class AUltra_Dynamic_Weather_C* UDW;
    class AWeather_Override_Volume_C* Weather Override Volume;
    class UUDS_Weather_Settings_C* Weather State;

};