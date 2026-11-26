class UIH_ToggleAttachmentMenu_C : public UInputHandler_TriggerSimpleAbility
{
public:
    struct FGameplayTag AbilityTag = {
        "TagName": FName("Character.Abilities.Active.AttachmentMenuOpen")
    };
    bool bOnlyTab = true;
    TArray<class UInputAction*> InputActions = {
        "InputAction'Test_C/Content/Blueprints/InputSystem/InputActions/IA_ToggleAttachmentMenu.IA_ToggleAttachmentMenu'"
    };
    TArray<enum> TriggerEvents = {
        Started,
        Completed
    };
};