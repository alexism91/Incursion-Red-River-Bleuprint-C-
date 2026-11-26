class UBP_TerminalDirectoryRequirement_IsCorrectUser_C : public UIRRTerminalDirectoryRequirement
{
public:
    struct FGameplayTag RequiredUserTag = {
        "TagName": FName("None")
    };
    TArray<class UBP_TerminalSequence_Text_C*> OnFailureSequences = {
        "BP_TerminalSequence_Text_C'Test_C/Content/Blueprints/MissionSystem/Objects/Terminal/DirectoryRequirement/BP_TerminalDirectoryRequirement_IsCorrectUser.Default__BP_TerminalDirectoryRequirement_IsCorrectUser_C:BP_TerminalSequence_Text_C_0'"
    };

};