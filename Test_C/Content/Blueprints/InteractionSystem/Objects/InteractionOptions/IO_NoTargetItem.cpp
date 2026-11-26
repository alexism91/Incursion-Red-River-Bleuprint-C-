class UIO_NoTargetItem_C : public UInteractionOption
{
public:
    struct FInteractionDisplaySetting DefaultDisplaySetting = {
        "InteractionText": FText("You don't have the required TARGETITEM.")
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
        "Action": "IA_PlayMontage_C'Test_C/Content/Blueprints/InteractionSystem/Objects/InteractionOptions/IO_NoTargetItem.Default__IO_NoTargetItem_C:IA_PlayMontage_C_0'"
    };
    bool bForceResetToClassDefaults = true;
};