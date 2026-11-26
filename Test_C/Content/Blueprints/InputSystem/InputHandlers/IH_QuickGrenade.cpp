class UIH_QuickGrenade_C : public UInputHandler_TriggerSimpleAbility
{
public:
    struct FGameplayTag AbilityTag = {
        "TagName": FName("Character.Abilities.Allowed.Quick Grenade")
    };
    TArray<class UInputAction*> InputActions = {
        "InputAction'Test_C/Content/Blueprints/InputSystem/InputActions/IA_QuickGrenade.IA_QuickGrenade'"
    };
    TArray<enum> TriggerEvents = {
        Triggered
    };
};