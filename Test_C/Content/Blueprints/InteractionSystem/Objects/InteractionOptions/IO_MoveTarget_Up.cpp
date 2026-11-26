class UIO_MoveTarget_Up_C : public UInteractionOption
{
public:
    TArray<class UIC_CanMoveTarget_C*> Conditions = {
        "IC_CanMoveTarget_C'Test_C/Content/Blueprints/InteractionSystem/Objects/InteractionOptions/IO_MoveTarget_Up.Default__IO_MoveTarget_Up_C:IC_CanMoveTarget_C_0'"
    };
    struct FInteractionDisplaySetting DefaultDisplaySetting = {
        "MarkerSetting": {
            "Texture": "Texture2D'Test_C/Content/Blueprints/InteractionSystem/Textures/T_IRR_Interaction_GrabIcon.T_IRR_Interaction_GrabIcon'"
        },
        "InteractionText": FText("Press <Red>F</> to move up.")
    };
    bool bForceResetToClassDefaults = true;
};