class UIH_QuickHeal_C : public UInputHandler_TriggerSimpleAbility
{
public:
    struct FGameplayTag AbilityTag = {
        "TagName": FName("Character.Abilities.Allowed.Quick Heal")
    };
    TArray<class UInputAction*> InputActions = {
        "InputAction'Test_C/Content/Blueprints/InputSystem/InputActions/IA_QuickHeal.IA_QuickHeal'"
    };
    TArray<enum> TriggerEvents = {
        Triggered
    };
};