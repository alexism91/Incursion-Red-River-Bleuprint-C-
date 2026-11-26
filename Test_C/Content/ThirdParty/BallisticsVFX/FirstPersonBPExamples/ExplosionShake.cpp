class UExplosionShake_C : public ULegacyCameraShake
{
public:
    float OscillationDuration = 1;
    float OscillationBlendOutTime = 1.5;
    struct FROscillator RotOscillation = {
        "Pitch": {
            "Amplitude": 10,
            "Frequency": 15
        },
        "Yaw": {
            "Amplitude": 4,
            "Frequency": 5
        },
        "Roll": {
            "Amplitude": 5,
            "Frequency": 2
        }
    };
    bool bSingleInstance = true;

};