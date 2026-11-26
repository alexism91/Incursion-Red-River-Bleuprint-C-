class UIH_Interact_C : public UInputHandler_TriggerSimpleAbility
{
public:
    struct FGameplayTag AbilityTag = {
        "TagName": FName("Character.Abilities.Allowed.Interact")
    };
    TArray<class UInputAction*> InputActions = {
        "InputAction'Test_C/Content/Blueprints/InputSystem/InputActions/IA_Interact.IA_Interact'"
    };
    TArray<enum> TriggerEvents = {
        Started,
        Completed
    };
};