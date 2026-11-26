class UCS_ReceiveDamage_New_C : public ULegacyCameraShake
{
public:
    float OscillationDuration = 0.8;
    float OscillationBlendInTime = 0;
    float OscillationBlendOutTime = 0.5;
    struct FROscillator RotOscillation = {
        "Pitch": {
            "Amplitude": 4,
            "Frequency": 4,
            "InitialOffset": EInitialOscillatorOffset::EOO_OffsetZero,
            "Waveform": EOscillatorWaveform::PerlinNoise
        },
        "Yaw": {
            "Amplitude": 2,
            "Frequency": 4,
            "InitialOffset": EInitialOscillatorOffset::EOO_OffsetZero,
            "Waveform": EOscillatorWaveform::PerlinNoise
        },
        "Roll": {
            "Amplitude": 2,
            "Frequency": 4,
            "InitialOffset": EInitialOscillatorOffset::EOO_OffsetZero,
            "Waveform": EOscillatorWaveform::PerlinNoise
        }
    };
    struct FFOscillator FOVOscillation = {
        "Amplitude": 1,
        "Frequency": 4,
        "InitialOffset": EInitialOscillatorOffset::EOO_OffsetZero,
        "Waveform": EOscillatorWaveform::PerlinNoise
    };
    class ULegacyCameraShakePattern* RootShakePattern = "LegacyCameraShakePattern'Test_C/Content/Environment/Misc/PostProcessing/PP/Damage/CS_ReceiveDamage_New.Default__CS_ReceiveDamage_New_C:RootShakePattern'";
};