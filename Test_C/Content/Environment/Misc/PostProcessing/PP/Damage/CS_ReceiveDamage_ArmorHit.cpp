class UCS_ReceiveDamage_ArmorHit_C : public UCS_ReceiveDamage_New_C
{
public:
    struct FROscillator RotOscillation = {
        "Pitch": {
            "Amplitude": 2
        },
        "Yaw": {
            "Amplitude": 1
        },
        "Roll": {
            "Amplitude": 1
        }
    };
    struct FFOscillator FOVOscillation = {
        "Amplitude": 0.5
    };
    class ULegacyCameraShakePattern* RootShakePattern = "LegacyCameraShakePattern'Test_C/Content/Environment/Misc/PostProcessing/PP/Damage/CS_ReceiveDamage_ArmorHit.Default__CS_ReceiveDamage_ArmorHit_C:RootShakePattern'";
};