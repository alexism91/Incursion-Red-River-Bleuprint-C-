class UIO_Stash_C : public UInteractionOption
{
public:
    struct FInteractionDisplaySetting DefaultDisplaySetting = {
        "MarkerSetting": {
            "Texture": "Texture2D'Test_C/Content/Blueprints/InventorySystem/Textures/Attachments/T_MagIcon.T_MagIcon'"
        },
        "InteractionText": FText("Press <Red>F</> to <Red>open</> stash")
    };
    struct FInteractionDisplaySetting HoldDisplaySetting = {
        "MarkerSetting": {
            "BorderColor": {
                "SpecifiedColor": FLinearColor(0,255208, 0,255208, 0,255208, 1)
            }
        },
        "InteractionText": FText("hold")
    };
    TMap<enum, struct FInteractionActions> OnFinishedActions = {
        { EInteractionFinishedMode::Completed, {
            "Actions": {
                "IA_StartAbility_C'Test_C/Content/Blueprints/InteractionSystem/Objects/InteractionOptions/IO_Stash.Default__IO_Stash_C:IA_StartAbility_C_0'",
                "IA_SetCustomViewTarget_C'Test_C/Content/Blueprints/InteractionSystem/Objects/InteractionOptions/IO_Stash.Default__IO_Stash_C:IA_SetCustomViewTarget_C_0'"
            }
        } }
    };
};