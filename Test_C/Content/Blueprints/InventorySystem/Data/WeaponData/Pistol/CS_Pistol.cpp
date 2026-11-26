class UCS_Pistol_C : public ULegacyCameraShake
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
            "Amplitude": 1.5,
            "Frequency": 18
        }
    };
    struct FFOscillator FOVOscillation = {
        "Waveform": EOscillatorWaveform::PerlinNoise
    };
    class ULegacyCameraShakePattern* RootShakePattern = "LegacyCameraShakePattern'Test_C/Content/Blueprints/InventorySystem/Data/WeaponData/Pistol/CS_Pistol.Default__CS_Pistol_C:RootShakePattern'";
};