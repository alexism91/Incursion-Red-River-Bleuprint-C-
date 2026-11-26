class UBP_IRRObjectie_Place_C : public UIRRMissionObjective
{
public:
    struct FGuid ObjectiveId = FGuid(0x967D3629, 0x4B68F39C, 0xF281BFAE, 0xFDC7103D);
    FText Description = FText("Place {item} at marked position.");
    struct FIRRMissionVariable TargetVariable = {
        "Type": EIRRMissionVariableType::Bool
    };
    TArray<class UIRRMissionService_UpdateProgress*> Services = {
        "IRRMissionService_UpdateProgress'Test_C/Content/Blueprints/MissionSystem/Objects/Objectives/SubClasses/BP_IRRObjectie_Place.Default__BP_IRRObjectie_Place_C:IRRMissionService_UpdateProgress_0'"
    };
    struct FIRRMissionVariable ProgressVariable = {
        "Type": EIRRMissionVariableType::Bool
    };
};