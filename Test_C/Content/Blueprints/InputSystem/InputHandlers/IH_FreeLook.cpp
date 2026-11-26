class UIH_FreeLook_C : public UInputHandler_TriggerSimpleAbility
{
public:
    struct FGameplayTag AbilityTag = {
        "TagName": FName("Character.Abilities.Active.Free Look")
    };
    bool bOnlyTab = true;
    TArray<class UInputAction*> InputActions = {
        "InputAction'Test_C/Content/Blueprints/InputSystem/InputActions/IA_FreeLook.IA_FreeLook'"
    };
    TArray<enum> TriggerEvents = {
        Started,
        Completed
    };
};