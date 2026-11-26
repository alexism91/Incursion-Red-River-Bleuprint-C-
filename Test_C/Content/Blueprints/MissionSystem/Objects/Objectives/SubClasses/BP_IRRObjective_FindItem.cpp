class UBP_IRRObjective_FindItem_C : public UIRRMissionObjective
{
public:
    FText Description = FText("Find & collect item.");
    struct FIRRMissionVariable TargetVariable = {
        "Type": EIRRMissionVariableType::Bool
    };
    class UBP_TargetData_Tag_C* TargetData = "BP_TargetData_Tag_C'Test_C/Content/Blueprints/MissionSystem/Objects/Objectives/SubClasses/BP_IRRObjective_FindItem.Default__BP_IRRObjective_FindItem_C:BP_TargetData_Item_C_0'";
    TArray<class UBP_Service_UpdateProgress_CollectItem_C*> Services = {
        "BP_Service_UpdateProgress_CollectItem_C'Test_C/Content/Blueprints/MissionSystem/Objects/Objectives/SubClasses/BP_IRRObjective_FindItem.Default__BP_IRRObjective_FindItem_C:BP_Service_UpdateProgress_CollectItem_C_0'"
    };
    struct FIRRMissionVariable ProgressVariable = {
        "Type": EIRRMissionVariableType::Bool
    };
};