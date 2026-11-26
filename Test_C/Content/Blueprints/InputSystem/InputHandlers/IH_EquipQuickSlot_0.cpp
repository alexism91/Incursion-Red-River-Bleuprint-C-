class UIH_EquipQuickSlot_0_C : public UInputHandler_TriggerSimpleAbility
{
public:
    struct FGameplayTag AbilityTag = {
        "TagName": FName("Inventory.Equipment Slots.Quick Slot.0")
    };
    TArray<class UInputAction*> InputActions = {
        "InputAction'Test_C/Content/Blueprints/InputSystem/InputActions/IA_EquipQuickSlot_0.IA_EquipQuickSlot_0'"
    };
    TArray<enum> TriggerEvents = {
        Triggered
    };
};