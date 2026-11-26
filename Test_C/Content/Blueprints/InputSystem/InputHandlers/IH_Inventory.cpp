class UIH_Inventory_C : public UInputHandler_TriggerSimpleAbility
{
public:
    struct FGameplayTag AbilityTag = {
        "TagName": FName("Character.Abilities.Active.Inventory Open")
    };
    TArray<class UInputAction*> InputActions = {
        "InputAction'Test_C/Content/Blueprints/InputSystem/InputActions/IA_Inventory.IA_Inventory'"
    };
    TArray<enum> TriggerEvents = {
        Triggered
    };
};