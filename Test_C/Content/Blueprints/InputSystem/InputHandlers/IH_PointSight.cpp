class UIH_PointSight_C : public UInputHandler_TriggerSimpleAbility
{
public:
    struct FGameplayTag AbilityTag = {
        "TagName": FName("Character.Abilities.Active.PointShooting")
    };
    TArray<class UInputAction*> InputActions = {
        "InputAction'Test_C/Content/Blueprints/InputSystem/InputActions/IA_PointSight.IA_PointSight'"
    };
    TArray<enum> TriggerEvents = {
        Triggered
    };
};