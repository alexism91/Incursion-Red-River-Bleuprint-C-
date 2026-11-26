class UAC_HeadBob_C : public ULegacyCameraShake
{
public:
    float OscillationDuration = 0.3;
    float OscillationBlendInTime = 0.2;
    struct FROscillator RotOscillation = {
        "Pitch": {
            "Amplitude": 0.4,
            "Frequency": 10,
            "InitialOffset": EInitialOscillatorOffset::EOO_OffsetZero
        },
        "Yaw": {
            "Amplitude": 0.4,
            "Frequency": 5,
            "InitialOffset": EInitialOscillatorOffset::EOO_OffsetZero
        },
        "Roll": {
            "Amplitude": 0.4,
            "Frequency": 9,
            "InitialOffset": EInitialOscillatorOffset::EOO_OffsetZero
        }
    };
    struct FVOscillator LocOscillation = {
        "X": {
            "Amplitude": 0.8,
            "Frequency": 2
        },
        "Y": {
            "Amplitude": 1,
            "Frequency": 4
        },
        "Z": {
            "Amplitude": 1,
            "Frequency": 3
        }
    };
    float AnimPlayRate = 0.8;
    float AnimScale = 0.8;
    float AnimBlendInTime = 0.4;
    float AnimBlendOutTime = 0.4;
    bool bSingleInstance = true;
    class ULegacyCameraShakePattern* RootShakePattern = "LegacyCameraShakePattern'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Blueprints/TestPlayer/AC_HeadBob.Default__AC_HeadBob_C:RootShakePattern'";
};