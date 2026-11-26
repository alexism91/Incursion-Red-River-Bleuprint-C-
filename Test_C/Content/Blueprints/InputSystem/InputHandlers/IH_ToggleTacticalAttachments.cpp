class UIH_ToggleTacticalAttachments_C : public UInputHandler_TriggerSimpleAbility
{
public:
    struct FGameplayTag AbilityTag = {
        "TagName": FName("Character.Abilities.Active.Toggle Tactical Attachments")
    };
    TArray<class UInputAction*> InputActions = {
        "InputAction'Test_C/Content/Blueprints/InputSystem/InputActions/IA_ToggleTacticalAttachments.IA_ToggleTacticalAttachments'"
    };
    TArray<enum> TriggerEvents = {
        Triggered
    };
};