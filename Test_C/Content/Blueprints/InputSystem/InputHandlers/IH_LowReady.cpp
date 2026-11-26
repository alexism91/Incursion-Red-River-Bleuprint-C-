class UIH_LowReady_C : public UInputHandler_TriggerSimpleAbility
{
public:
    struct FGameplayTag AbilityTag = {
        "TagName": FName("Character.Abilities.Active.Low Ready")
    };
    TArray<class UInputAction*> InputActions = {
        "InputAction'Test_C/Content/Blueprints/InputSystem/InputActions/IA_LowReady.IA_LowReady'"
    };
    TArray<enum> TriggerEvents = {
        Triggered
    };
};