class UIH_EquipMelee_C : public UInputHandler_TriggerSimpleAbility
{
public:
    struct FGameplayTag AbilityTag = {
        "TagName": FName("Inventory.Equipment Slots.Melee")
    };
    TArray<class UInputAction*> InputActions = {
        "InputAction'Test_C/Content/Blueprints/InputSystem/InputActions/IA_EquipMelee.IA_EquipMelee'"
    };
    TArray<enum> TriggerEvents = {
        Triggered
    };
};