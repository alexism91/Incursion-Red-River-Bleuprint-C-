class UIH_Aim_C : public UInputHandler_TriggerSimpleAbility
{
public:
    struct FGameplayTag AbilityTag = {
        "TagName": FName("Character.Abilities.Active.Aiming")
    };
    TArray<class UInputAction*> InputActions = {
        "InputAction'Test_C/Content/Blueprints/InputSystem/InputActions/IA_Aim.IA_Aim'"
    };
    TArray<enum> TriggerEvents = {
        Triggered
    };
};