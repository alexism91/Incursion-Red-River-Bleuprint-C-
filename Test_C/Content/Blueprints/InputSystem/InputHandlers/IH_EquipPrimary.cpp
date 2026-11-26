class UIH_EquipPrimary_C : public UInputHandler_TriggerSimpleAbility
{
public:
    struct FGameplayTag AbilityTag = {
        "TagName": FName("Inventory.Equipment Slots.Primary")
    };
    TArray<class UInputAction*> InputActions = {
        "InputAction'Test_C/Content/Blueprints/InputSystem/InputActions/IA_EquipPrimary.IA_EquipPrimary'"
    };
    TArray<enum> TriggerEvents = {
        Triggered
    };
};