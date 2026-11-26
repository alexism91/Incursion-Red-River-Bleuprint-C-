class UBP_IRRObjective_FindLocation_C : public UIRRMissionObjective
{
public:
    FText Description = FText("Find {x} location.");
    struct FIRRMissionVariable TargetVariable = {
        "Type": EIRRMissionVariableType::Bool
    };
    TArray<class UIRRMissionService_UpdateProgress*> Services = {
        "IRRMissionService_UpdateProgress'Test_C/Content/Blueprints/MissionSystem/Objects/Objectives/SubClasses/BP_IRRObjective_FindLocation.Default__BP_IRRObjective_FindLocation_C:IRRMissionService_UpdateProgress_0'"
    };
    struct FIRRMissionVariable ProgressVariable = {
        "Type": EIRRMissionVariableType::Bool
    };
};