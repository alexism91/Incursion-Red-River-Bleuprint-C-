class UIH_CheckAmmo_C : public UInputHandler_TriggerSimpleAbility
{
public:
    struct FGameplayTag AbilityTag = {
        "TagName": FName("Character.Abilities.Allowed.InspectMag")
    };
    bool bOnlyTab = true;
    TArray<class UInputAction*> InputActions = {
        "InputAction'Test_C/Content/Blueprints/InputSystem/InputActions/IA_CheckAmmo.IA_CheckAmmo'"
    };
    TArray<enum> TriggerEvents = {
        Triggered
    };
};