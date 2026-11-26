class UCS_Suppression_Med_C : public ULegacyCameraShake
{
public:
    float OscillationDuration = 0.4;
    float OscillationBlendInTime = 0.2;
    struct FROscillator RotOscillation = {
        "Pitch": {
            "Amplitude": 0.8,
            "Frequency": 2.8,
            "Waveform": EOscillatorWaveform::PerlinNoise
        },
        "Yaw": {
            "Amplitude": 0.8,
            "Frequency": 2.8,
            "Waveform": EOscillatorWaveform::PerlinNoise
        },
        "Roll": {
            "Amplitude": 0.8,
            "Frequency": 12,
            "Waveform": EOscillatorWaveform::PerlinNoise
        }
    };
    struct FVOscillator LocOscillation = {
        "X": {
            "Amplitude": 0.5
        },
        "Y": {
            "Amplitude": 0.5,
            "Frequency": 1,
            "Waveform": EOscillatorWaveform::PerlinNoise
        },
        "Z": {
            "Amplitude": 0.5,
            "Frequency": 1,
            "Waveform": EOscillatorWaveform::PerlinNoise
        }
    };
    struct FFOscillator FOVOscillation = {
        "Amplitude": 0.5,
        "Frequency": 1
    };
    class ULegacyCameraShakePattern* RootShakePattern = "LegacyCameraShakePattern'Test_C/Content/Environment/Misc/PostProcessing/PP/Damage/CS_Suppression_Med.Default__CS_Suppression_Med_C:RootShakePattern'";
};