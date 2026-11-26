class UIH_Crouch_C : public UInputHandler_TriggerSimpleAbility
{
public:
    struct FGameplayTag AbilityTag = {
        "TagName": FName("Character.Abilities.Active.Crouching")
    };
    TArray<class UInputAction*> InputActions = {
        "InputAction'Test_C/Content/Blueprints/InputSystem/InputActions/IA_Crouch.IA_Crouch'"
    };
    TArray<enum> TriggerEvents = {
        Triggered
    };
};