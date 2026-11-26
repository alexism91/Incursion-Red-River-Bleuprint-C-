class UCS_MeleeImpact_C : public ULegacyCameraShake
{
public:
    float OscillationDuration = 0.3;
    float OscillationBlendOutTime = 0.1;
    struct FROscillator RotOscillation = {
        "Pitch": {
            "Amplitude": 5,
            "Frequency": 3,
            "Waveform": EOscillatorWaveform::PerlinNoise
        },
        "Yaw": {
            "Amplitude": 5,
            "Frequency": 3,
            "Waveform": EOscillatorWaveform::PerlinNoise
        },
        "Roll": {
            "Amplitude": 5,
            "Frequency": 3,
            "Waveform": EOscillatorWaveform::PerlinNoise
        }
    };
    struct FVOscillator LocOscillation = {
        "X": {
            "Waveform": EOscillatorWaveform::PerlinNoise
        },
        "Y": {
            "Amplitude": 3,
            "Frequency": 0.5,
            "Waveform": EOscillatorWaveform::PerlinNoise
        },
        "Z": {
            "Amplitude": 3,
            "Frequency": 0.5,
            "Waveform": EOscillatorWaveform::PerlinNoise
        }
    };
    struct FFOscillator FOVOscillation = {
        "Amplitude": 1,
        "Frequency": 1
    };
    float AnimPlayRate = 1.25;
    float AnimScale = 1.25;
    float AnimBlendInTime = 0.1;
    float AnimBlendOutTime = 0.1;
    class ULegacyCameraShakePattern* RootShakePattern = "LegacyCameraShakePattern'Test_C/Content/Environment/Misc/PostProcessing/PP/Damage/CS_MeleeImpact.Default__CS_MeleeImpact_C:RootShakePattern'";
};