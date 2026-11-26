class UCS_SMG_C : public ULegacyCameraShake
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
            "Amplitude": 0.7,
            "Frequency": 10
        }
    };
    struct FFOscillator FOVOscillation = {
        "Waveform": EOscillatorWaveform::PerlinNoise
    };
    class ULegacyCameraShakePattern* RootShakePattern = "LegacyCameraShakePattern'Test_C/Content/Blueprints/InventorySystem/Data/WeaponData/SMG/CS_SMG.Default__CS_SMG_C:RootShakePattern'";
};