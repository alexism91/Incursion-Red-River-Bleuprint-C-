class UCS_SniperRifle_C : public ULegacyCameraShake
{
public:
    float OscillationDuration = 0.25;
    float OscillationBlendOutTime = 0.1;
    struct FROscillator RotOscillation = {
        "Pitch": {
            "InitialOffset": EInitialOscillatorOffset::EOO_OffsetZero,
            "Waveform": EOscillatorWaveform::PerlinNoise
        },
        "Roll": {
            "Amplitude": 4,
            "Frequency": 25
        }
    };
    struct FFOscillator FOVOscillation = {
        "Waveform": EOscillatorWaveform::PerlinNoise
    };
    class ULegacyCameraShakePattern* RootShakePattern = "LegacyCameraShakePattern'Test_C/Content/Blueprints/InventorySystem/Data/WeaponData/SniperRifle/CS_SniperRifle.Default__CS_SniperRifle_C:RootShakePattern'";
};