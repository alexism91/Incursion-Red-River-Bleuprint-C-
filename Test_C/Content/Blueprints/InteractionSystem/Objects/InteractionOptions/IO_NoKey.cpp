class UIO_NoKey_C : public UInteractionOption
{
public:
    struct FInteractionDisplaySetting DefaultDisplaySetting = {
        "InteractionText": FText("You don't have the required KEYNAME.")
    };
    struct FInteractionDisplaySetting HoldDisplaySetting = {
        "MarkerSetting": {
            "BorderColor": {
                "SpecifiedColor": FLinearColor(0,255208, 0,255208, 0,255208, 1)
            }
        },
        "InteractionText": FText("hold")
    };
    struct FInteractionHoldingSettings HoldInteractionSetting = {
        "HoldTime": 0.5,
        "Action": "IA_PlayMontage_C'Test_C/Content/Blueprints/InteractionSystem/Objects/InteractionOptions/IO_NoKey.Default__IO_NoKey_C:IA_PlayMontage_C_0'"
    };
    bool bForceResetToClassDefaults = true;
};