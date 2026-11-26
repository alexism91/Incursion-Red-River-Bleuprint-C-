class UIH_ToggleMagnifier_C : public UInputHandler_TriggerSimpleAbility
{
public:
    struct FGameplayTag AbilityTag = {
        "TagName": FName("Character.Abilities.Active.Magnifier")
    };
    bool bOnlyTab = true;
    TArray<class UInputAction*> InputActions = {
        "InputAction'Test_C/Content/Blueprints/InputSystem/InputActions/IA_ToggleMagnifier.IA_ToggleMagnifier'"
    };
    TArray<enum> TriggerEvents = {
        Triggered
    };
};