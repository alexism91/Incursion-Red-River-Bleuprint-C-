class UIO_Revive_C : public UInteractionOption
{
public:
    enum InteractionType = EInteractionType::Wait;
    TArray<class UIC_HasItem_C*> Conditions = {
        "IC_HasItem_C'Test_C/Content/Blueprints/InteractionSystem/Objects/InteractionOptions/IO_Revive.Default__IO_Revive_C:IC_HasItem_C_0'"
    };
    struct FInteractionDisplaySetting DefaultDisplaySetting = {
        "MarkerSetting": {
            "Texture": "Texture2D'Test_C/Content/Blueprints/InventorySystem/Textures/Meds/T_Syringe.T_Syringe'",
            "BorderColor": {
                "SpecifiedColor": FLinearColor(0,447059, 0,447059, 0,447059, 1)
            }
        },
        "InteractionText": FText("Hold <Red>F</> to revive dead team mate")
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
        "HoldTime": 1
    };
    struct FInteractionWaitSetting WaitInteractionSetting = {
        "Action": "IA_UseInteractionItem_C'Test_C/Content/Blueprints/InteractionSystem/Objects/InteractionOptions/IO_Revive.Default__IO_Revive_C:IA_StartAbility_UseItem_C_0'"
    };
    TMap<enum, struct FInteractionActions> OnFinishedActions = {
        { EInteractionFinishedMode::Completed, {
            "Actions": {
                "IA_Revive_Execution_C'Test_C/Content/Blueprints/InteractionSystem/Objects/InteractionOptions/IO_Revive.Default__IO_Revive_C:IA_Revive_C_0'"
            }
        } }
    };
};