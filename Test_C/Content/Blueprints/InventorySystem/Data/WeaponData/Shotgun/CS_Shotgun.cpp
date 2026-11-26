class UCS_Shotgun_C : public ULegacyCameraShake
{
public:
    float OscillationDuration = 0.2;
    float OscillationBlendOutTime = 0.1;
    struct FROscillator RotOscillation = {
        "Pitch": {
            "Amplitude": 5,
            "Frequency": 6,
            "InitialOffset": EInitialOscillatorOffset::EOO_OffsetZero,
            "Waveform": EOscillatorWaveform::PerlinNoise
        },
        "Roll": {
            "Amplitude": 4,
            "Frequency": 33
        }
    };
    struct FVOscillator LocOscillation = {
        "X": {
            "Amplitude": 1,
            "Frequency": 2
        }
    };
    struct FFOscillator FOVOscillation = {
        "Waveform": EOscillatorWaveform::PerlinNoise
    };
    class ULegacyCameraShakePattern* RootShakePattern = "LegacyCameraShakePattern'Test_C/Content/Blueprints/InventorySystem/Data/WeaponData/Shotgun/CS_Shotgun.Default__CS_Shotgun_C:RootShakePattern'";
};