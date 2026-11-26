class UBP_IRRObjective_LootArea_C : public UIRRMissionObjective
{
public:
    bool bShared = true;
    FText Description = FText("Retrieve evidence from {x}.");
    struct FIRRMissionVariable TargetVariable = {
        "Type": EIRRMissionVariableType::Bool
    };
    class UBP_TargetData_SoftPtr_C* TargetData = "BP_TargetData_SoftPtr_C'Test_C/Content/Blueprints/MissionSystem/Objects/Objectives/SubClasses/BP_IRRObjective_LootArea.Default__BP_IRRObjective_LootArea_C:BP_TargetData_SoftPtr_C_0'";
    TArray<class UIRRMissionService_UpdateProgress*> Services = {
        "IRRMissionService_UpdateProgress'Test_C/Content/Blueprints/MissionSystem/Objects/Objectives/SubClasses/BP_IRRObjective_LootArea.Default__BP_IRRObjective_LootArea_C:IRRMissionService_UpdateProgress_0'"
    };
    struct FIRRMissionVariable ProgressVariable = {
        "Type": EIRRMissionVariableType::Bool
    };
};