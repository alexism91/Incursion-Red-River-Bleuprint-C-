class UIO_NoSpace_C : public UInteractionOption
{
public:
    struct FInteractionDisplaySetting DefaultDisplaySetting = {
        "InteractionText": FText("Not enough space for <red>ITEMNAME</> .")
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
        "Action": "IA_PlayMontage_C'Test_C/Content/Blueprints/InteractionSystem/Objects/InteractionOptions/IO_NoSpace.Default__IO_NoSpace_C:IA_PlayMontage_C_0'"
    };
    bool bForceResetToClassDefaults = true;
};