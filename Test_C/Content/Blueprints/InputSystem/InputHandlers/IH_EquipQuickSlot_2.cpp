class UIH_EquipQuickSlot_2_C : public UInputHandler_TriggerSimpleAbility
{
public:
    struct FGameplayTag AbilityTag = {
        "TagName": FName("Inventory.Equipment Slots.Quick Slot.2")
    };
    TArray<class UInputAction*> InputActions = {
        "InputAction'Test_C/Content/Blueprints/InputSystem/InputActions/IA_EquipQuickSlot_2.IA_EquipQuickSlot_2'"
    };
    TArray<enum> TriggerEvents = {
        Triggered
    };
};