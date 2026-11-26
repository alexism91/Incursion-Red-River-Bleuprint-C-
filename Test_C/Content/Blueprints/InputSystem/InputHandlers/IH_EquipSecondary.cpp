class UIH_EquipSecondary_C : public UInputHandler_TriggerSimpleAbility
{
public:
    struct FGameplayTag AbilityTag = {
        "TagName": FName("Inventory.Equipment Slots.Secondary")
    };
    TArray<class UInputAction*> InputActions = {
        "InputAction'Test_C/Content/Blueprints/InputSystem/InputActions/IA_EquipSecondary.IA_EquipSecondary'"
    };
    TArray<enum> TriggerEvents = {
        Triggered
    };
};