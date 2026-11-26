class UIO_MoveTarget_Down_C : public UInteractionOption
{
public:
    TArray<class UIC_CanMoveTarget_C*> Conditions = {
        "IC_CanMoveTarget_C'Test_C/Content/Blueprints/InteractionSystem/Objects/InteractionOptions/IO_MoveTarget_Down.Default__IO_MoveTarget_Down_C:IC_CanMoveTarget_C_1'"
    };
    struct FInteractionDisplaySetting DefaultDisplaySetting = {
        "MarkerSetting": {
            "Texture": "Texture2D'Test_C/Content/Blueprints/InteractionSystem/Textures/T_IRR_Interaction_GrabIcon.T_IRR_Interaction_GrabIcon'"
        },
        "InteractionText": FText("Press <Red>F</> to move down.")
    };
};