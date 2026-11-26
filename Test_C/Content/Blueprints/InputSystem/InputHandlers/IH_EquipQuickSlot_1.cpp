class UIH_EquipQuickSlot_1_C : public UInputHandler_TriggerSimpleAbility
{
public:
    struct FGameplayTag AbilityTag = {
        "TagName": FName("Inventory.Equipment Slots.Quick Slot.1")
    };
    TArray<class UInputAction*> InputActions = {
        "InputAction'Test_C/Content/Blueprints/InputSystem/InputActions/IA_EquipQuickSlot_1.IA_EquipQuickSlot_1'"
    };
    TArray<enum> TriggerEvents = {
        Triggered
    };
};