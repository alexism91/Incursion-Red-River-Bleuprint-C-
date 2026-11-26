class UBP_IRRObjective_CompleteOperation_C : public UIRRMissionObjective
{
public:
    FText Description = FText("Complete {count} operations of type {targetdata}.");
    class UBP_TargetData_Tag_C* TargetData = "BP_TargetData_Tag_C'Test_C/Content/Blueprints/MissionSystem/Objects/Objectives/SubClasses/BP_IRRObjective_CompleteOperation.Default__BP_IRRObjective_CompleteOperation_C:BP_TargetData_Tag_C_0'";
    TArray<class UIRRMissionService_UpdateProgress*> Services = {
        "IRRMissionService_UpdateProgress'Test_C/Content/Blueprints/MissionSystem/Objects/Objectives/SubClasses/BP_IRRObjective_CompleteOperation.Default__BP_IRRObjective_CompleteOperation_C:IRRMissionService_UpdateProgress_0'"
    };
};