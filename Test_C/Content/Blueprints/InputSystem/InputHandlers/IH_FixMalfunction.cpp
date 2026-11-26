class UIH_FixMalfunction_C : public UInputHandler_TriggerSimpleAbility
{
public:
    struct FGameplayTag AbilityTag = {
        "TagName": FName("Character.Abilities.Active.Fix Malfunction")
    };
    bool bOnlyTab = true;
    TArray<class UInputAction*> InputActions = {
        "InputAction'Test_C/Content/Blueprints/InputSystem/InputActions/IA_FixMalfunction.IA_FixMalfunction'"
    };
    TArray<enum> TriggerEvents = {
        Triggered
    };
};