class UCS_Rifle_C : public ULegacyCameraShake
{
public:
    float OscillationDuration = 0.2;
    float OscillationBlendOutTime = 0.1;
    struct FROscillator RotOscillation = {
        "Pitch": {
            "InitialOffset": EInitialOscillatorOffset::EOO_OffsetZero,
            "Waveform": EOscillatorWaveform::PerlinNoise
        },
        "Roll": {
            "Amplitude": 1,
            "Frequency": 15
        }
    };
    struct FFOscillator FOVOscillation = {
        "Amplitude": 1.5,
        "Frequency": 5,
        "Waveform": EOscillatorWaveform::PerlinNoise
    };
    class ULegacyCameraShakePattern* RootShakePattern = "LegacyCameraShakePattern'Test_C/Content/Blueprints/InventorySystem/Data/WeaponData/Rifle/CS_Rifle.Default__CS_Rifle_C:RootShakePattern'";
};