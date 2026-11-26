class UCS_Suppression_Large_C : public ULegacyCameraShake
{
public:
    float OscillationDuration = 0.4;
    float OscillationBlendInTime = 0.2;
    struct FROscillator RotOscillation = {
        "Pitch": {
            "Amplitude": 1.25,
            "Frequency": 2.8,
            "Waveform": EOscillatorWaveform::PerlinNoise
        },
        "Yaw": {
            "Amplitude": 1.25,
            "Frequency": 2.8,
            "Waveform": EOscillatorWaveform::PerlinNoise
        },
        "Roll": {
            "Amplitude": 1.25,
            "Frequency": 12,
            "Waveform": EOscillatorWaveform::PerlinNoise
        }
    };
    struct FVOscillator LocOscillation = {
        "X": {
            "Amplitude": 1.25
        },
        "Y": {
            "Amplitude": 1.25,
            "Frequency": 1,
            "Waveform": EOscillatorWaveform::PerlinNoise
        },
        "Z": {
            "Amplitude": 1.25,
            "Frequency": 1,
            "Waveform": EOscillatorWaveform::PerlinNoise
        }
    };
    struct FFOscillator FOVOscillation = {
        "Amplitude": 1.25,
        "Frequency": 1
    };
    float AnimScale = 1.5;
    class ULegacyCameraShakePattern* RootShakePattern = "LegacyCameraShakePattern'Test_C/Content/Environment/Misc/PostProcessing/PP/Damage/CS_Suppression_Large.Default__CS_Suppression_Large_C:RootShakePattern'";
};