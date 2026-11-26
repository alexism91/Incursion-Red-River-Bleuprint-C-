class UIO_LootContainer_C : public UInteractionOption
{
public:
    enum InteractionType = EInteractionType::Hold;
    struct FInteractionDisplaySetting DefaultDisplaySetting = {
        "MarkerSetting": {
            "Texture": "Texture2D'Test_C/Content/Blueprints/InventorySystem/Textures/Attachments/T_MagIcon.T_MagIcon'"
        },
        "InteractionText": FText("Hold <Red>F</> to loot dead body")
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
        "Action": "IA_PlayMontage_C'Test_C/Content/Blueprints/InteractionSystem/Objects/InteractionOptions/IO_LootContainer.Default__IO_LootContainer_C:IA_PlayMontage_C_0'"
    };
    TMap<enum, struct FInteractionActions> OnFinishedActions = {
        { EInteractionFinishedMode::Completed, {
            "Actions": {
                "IA_AddLootContainer_C'Test_C/Content/Blueprints/InteractionSystem/Objects/InteractionOptions/IO_LootContainer.Default__IO_LootContainer_C:IF_AddLootContainer_C_0'",
                "IA_OpenInventory_C'Test_C/Content/Blueprints/InteractionSystem/Objects/InteractionOptions/IO_LootContainer.Default__IO_LootContainer_C:IA_OpenInventory_C_0'"
            }
        } }
    };
};