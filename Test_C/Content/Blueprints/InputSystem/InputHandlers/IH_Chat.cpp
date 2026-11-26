class UIH_Chat_C : public UNinjaInputHandler
{
public:
    TArray<class UInputAction*> InputActions = {
        "InputAction'Test_C/Content/Blueprints/InputSystem/InputActions/IA_Chat.IA_Chat'"
    };
    TArray<enum> TriggerEvents = {
        Triggered
    };

};