class UIH_CycleSights_C : public UInputHandler_TriggerSimpleAbility
{
public:
    struct FGameplayTag AbilityTag = {
        "TagName": FName("Character.Abilities.Active.Cycle Sights")
    };
    TArray<class UInputAction*> InputActions = {
        "InputAction'Test_C/Content/Blueprints/InputSystem/InputActions/IA_CycleSights.IA_CycleSights'"
    };
    TArray<enum> TriggerEvents = {
        Triggered
    };
};