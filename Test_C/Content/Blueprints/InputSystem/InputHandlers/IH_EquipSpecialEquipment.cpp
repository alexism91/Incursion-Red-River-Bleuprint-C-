class UIH_EquipSpecialEquipment_C : public UInputHandler_TriggerSimpleAbility
{
public:
    struct FGameplayTag AbilityTag = {
        "TagName": FName("Inventory.Equipment Slots.Special Equipment")
    };
    TArray<class UInputAction*> InputActions = {
        "InputAction'Test_C/Content/Blueprints/InputSystem/InputActions/IA_EquipSpecialEquipment.IA_EquipSpecialEquipment'"
    };
    TArray<enum> TriggerEvents = {
        Triggered
    };
};