class UIH_Sneak_C : public UInputHandler_TriggerSimpleAbility
{
public:
    struct FGameplayTag AbilityTag = {
        "TagName": FName("Character.Abilities.Active.Sneaking")
    };
    TArray<class UInputAction*> InputActions = {
        "InputAction'Test_C/Content/Blueprints/InputSystem/InputActions/IA_Sneak.IA_Sneak'"
    };
    TArray<enum> TriggerEvents = {
        Triggered
    };
};