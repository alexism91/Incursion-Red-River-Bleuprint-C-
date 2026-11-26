class UIH_Run_C : public UInputHandler_TriggerSimpleAbility
{
public:
    struct FGameplayTag AbilityTag = {
        "TagName": FName("Character.Abilities.Active.Running.Wants To Run")
    };
    TArray<class UInputAction*> InputActions = {
        "InputAction'Test_C/Content/Blueprints/InputSystem/InputActions/IA_Run.IA_Run'"
    };
    TArray<enum> TriggerEvents = {
        Triggered
    };
};