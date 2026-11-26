class UIH_SwitchFireMode_C : public UInputHandler_TriggerSimpleAbility
{
public:
    struct FGameplayTag AbilityTag = {
        "TagName": FName("Character.Abilities.Allowed.SwitchFireMode")
    };
    TArray<class UInputAction*> InputActions = {
        "InputAction'Test_C/Content/Blueprints/InputSystem/InputActions/IA_SwitchFireMode.IA_SwitchFireMode'"
    };
    TArray<enum> TriggerEvents = {
        Triggered
    };
};