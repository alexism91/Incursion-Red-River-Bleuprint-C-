class UIH_HoldBreath_C : public UInputHandler_TriggerSimpleAbility
{
public:
    struct FGameplayTag AbilityTag = {
        "TagName": FName("Character.Abilities.Active.Hold Breath")
    };
    bool bOnlyTab = true;
    TArray<class UInputAction*> InputActions = {
        "InputAction'Test_C/Content/Blueprints/InputSystem/InputActions/IA_HoldBreath.IA_HoldBreath'"
    };
    TArray<enum> TriggerEvents = {
        Triggered
    };
};