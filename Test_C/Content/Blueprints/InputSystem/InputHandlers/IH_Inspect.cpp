class UIH_Inspect_C : public UInputHandler_TriggerSimpleAbility
{
public:
    struct FGameplayTag AbilityTag = {
        "TagName": FName("Character.Abilities.Active.Inspecting")
    };
    TArray<class UInputAction*> InputActions = {
        "InputAction'Test_C/Content/Blueprints/InputSystem/InputActions/IA_Inspect.IA_Inspect'"
    };
    TArray<enum> TriggerEvents = {
        Triggered
    };
};