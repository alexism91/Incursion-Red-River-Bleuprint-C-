class UBP_TerminalSequence_RequestLogin_C : public UBP_TerminalSequence_C
{
public:
    struct FIRRTerminalCommand Command = {
        "Keyword": FName("None"),
        "Aliases": {},
        "CommandTag": {
            "TagName": FName("None")
        },
        "Command": FText("RequestLogin", CultureInvariant),
        "Argument": "IRRTerminalArgument_Login'Test_C/Content/Blueprints/MissionSystem/Objects/Terminal/Sequences/BP_TerminalSequence_RequestLogin.Default__BP_TerminalSequence_RequestLogin_C:IRRTerminalArgument_Login_0'",
        "OnSuccessSequences": {
            "BP_TerminalSequence_Text_C'Test_C/Content/Blueprints/MissionSystem/Objects/Terminal/Sequences/BP_TerminalSequence_RequestLogin.Default__BP_TerminalSequence_RequestLogin_C:BP_TerminalSequence_Text_C_0'"
        },
        "OnFailSequences": {
            "BP_TerminalSequence_Text_C'Test_C/Content/Blueprints/MissionSystem/Objects/Terminal/Sequences/BP_TerminalSequence_RequestLogin.Default__BP_TerminalSequence_RequestLogin_C:BP_TerminalSequence_Text_C_1'"
        }
    };
    class UWidgetBlueprintGeneratedClass* Widget = "WidgetBlueprintGeneratedClass'Test_C/Content/Blueprints/MissionSystem/UI/Terminal/Response/W_TerminalResponse_RequestLogin.W_TerminalResponse_RequestLogin_C'";

};