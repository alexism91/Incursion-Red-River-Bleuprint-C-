class UIH_EquipPistol_C : public UInputHandler_TriggerSimpleAbility
{
public:
    struct FGameplayTag AbilityTag = {
        "TagName": FName("Inventory.Equipment Slots.Pistol")
    };
    TArray<class UInputAction*> InputActions = {
        "InputAction'Test_C/Content/Blueprints/InputSystem/InputActions/IA_EquipHolster.IA_EquipHolster'"
    };
    TArray<enum> TriggerEvents = {
        Triggered
    };
};