class UBP_IRRObjective_InvestigateArea_C : public UIRRMissionObjective
{
public:
    struct FGuid ObjectiveId = FGuid(0x7E191678, 0x43559C20, 0x43E059A2, 0xE4E40DCA);
    FText Description = FText("Investigate {x} location.");
    struct FIRRMissionVariable TargetVariable = {
        "Type": EIRRMissionVariableType::Bool
    };
    class UBP_TargetData_SoftPtr_C* TargetData = "BP_TargetData_SoftPtr_C'Test_C/Content/Blueprints/MissionSystem/Objects/Objectives/SubClasses/BP_IRRObjective_InvestigateArea.Default__BP_IRRObjective_InvestigateArea_C:BP_TargetData_SoftPtr_C_0'";
    TArray<class UIRRMissionService_UpdateProgress*> Services = {
        "IRRMissionService_UpdateProgress'Test_C/Content/Blueprints/MissionSystem/Objects/Objectives/SubClasses/BP_IRRObjective_InvestigateArea.Default__BP_IRRObjective_InvestigateArea_C:IRRMissionService_UpdateProgress_0'"
    };
    TArray<class UBP_MissionEvent_PlayMissionBriefing_C*> CompletionEvents = {
        "BP_MissionEvent_PlayMissionBriefing_C'Test_C/Content/Blueprints/MissionSystem/Objects/Objectives/SubClasses/BP_IRRObjective_InvestigateArea.Default__BP_IRRObjective_InvestigateArea_C:BP_MissionEvent_PlayMissionBriefing_C_0'"
    };
    struct FIRRMissionVariable ProgressVariable = {
        "Type": EIRRMissionVariableType::Bool
    };
};