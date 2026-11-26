class UIO_Pickup_C : public UInteractionOption
{
public:
    struct FInteractionDisplaySetting DefaultDisplaySetting = {
        "MarkerSetting": {
            "Texture": "Texture2D'Test_C/Content/Blueprints/InventorySystem/Textures/Attachments/T_MagIcon.T_MagIcon'"
        },
        "InteractionText": FText("Press F to Pickup <red>ITEMNAME</> .")
    };
    TMap<enum, struct FInteractionActions> OnFinishedActions = {
        { EInteractionFinishedMode::Completed, {
            "Actions": {
                "IA_AddToInventory_C'Test_C/Content/Blueprints/InteractionSystem/Objects/InteractionOptions/IO_Pickup.Default__IO_Pickup_C:IF_AddToInventory_C_0'"
            }
        } }
    };
};