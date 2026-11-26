class UIH_EquipQuickSlot_3_C : public UInputHandler_TriggerSimpleAbility
{
public:
    struct FGameplayTag AbilityTag = {
        "TagName": FName("Inventory.Equipment Slots.Quick Slot.3")
    };
    TArray<class UInputAction*> InputActions = {
        "InputAction'Test_C/Content/Blueprints/InputSystem/InputActions/IA_EquipQuickSlot_3.IA_EquipQuickSlot_3'"
    };
    TArray<enum> TriggerEvents = {
        Triggered
    };
};