class UIH_CycleTacticalAttachments_C : public UInputHandler_TriggerSimpleAbility
{
public:
    struct FGameplayTag AbilityTag = {
        "TagName": FName("Character.Abilities.Active.Cycle Tactical Attachments")
    };
    TArray<class UInputAction*> InputActions = {
        "InputAction'Test_C/Content/Blueprints/InputSystem/InputActions/IA_CycleTacticalAttachments.IA_CycleTacticalAttachments'"
    };
    TArray<enum> TriggerEvents = {
        Triggered
    };
};