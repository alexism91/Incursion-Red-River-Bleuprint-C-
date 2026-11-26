class UIH_ToggleNightVision_C : public UInputHandler_TriggerSimpleAbility
{
public:
    struct FGameplayTag AbilityTag = {
        "TagName": FName("Character.Abilities.Active.Night Vision")
    };
    bool bOnlyTab = true;
    TArray<class UInputAction*> InputActions = {
        "InputAction'Test_C/Content/Blueprints/InputSystem/InputActions/IA_ToggleNightVision.IA_ToggleNightVision'"
    };
    TArray<enum> TriggerEvents = {
        Triggered
    };
};