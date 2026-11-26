class UBP_IRRObjectie_TerminalInteraction_C : public UIRRMissionObjective
{
public:
    struct FGuid ObjectiveId = FGuid(0x967D3629, 0x4B68F39C, 0xF281BFAE, 0xFDC7103D);
    FText Description = FText("Locate and boot up the terminal.");
    struct FIRRMissionVariable TargetVariable = {
        "Type": EIRRMissionVariableType::Bool
    };
    TArray<class UIRRMissionService_UpdateProgress*> Services = {
        "IRRMissionService_UpdateProgress'Test_C/Content/Blueprints/MissionSystem/Objects/Objectives/SubClasses/BP_IRRObjectie_TerminalInteraction.Default__BP_IRRObjectie_TerminalInteraction_C:IRRMissionService_UpdateProgress_0'"
    };
    bool bNoCompletionBriefing = true;
    struct FIRRMissionVariable ProgressVariable = {
        "Type": EIRRMissionVariableType::Bool
    };
};