class UIH_EquipGCPS_C : public UInputHandler_TriggerSimpleAbility
{
public:
    struct FGameplayTag AbilityTag = {
        "TagName": FName("Inventory.Equipment Slots.GCPS")
    };
    TArray<class UInputAction*> InputActions = {
        "InputAction'Test_C/Content/Blueprints/InputSystem/InputActions/IA_EquipGCPS.IA_EquipGCPS'"
    };
    TArray<enum> TriggerEvents = {
        Triggered
    };
};