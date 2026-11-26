class UBP_IRRObjectie_ClearArea_C : public UIRRMissionObjective
{
public:
    struct FGuid ObjectiveId = FGuid(0x121C557E, 0x49D24044, 0xB8160F9F, 0xBF977F68);
    bool bShared = true;
    FText Description = FText("Kill enemies in the AREA TAG PLACEHOLDER.", CultureInvariant);
    struct FIRRMissionVariable TargetVariable = {
        "Type": EIRRMissionVariableType::Bool
    };
    class UBP_TargetData_SoftPtr_C* TargetData = "BP_TargetData_SoftPtr_C'Test_C/Content/Blueprints/MissionSystem/Objects/Objectives/SubClasses/BP_IRRObjectie_ClearArea.Default__BP_IRRObjectie_ClearArea_C:BP_TargetData_SoftPtr_C_0'";
    TArray<class UBP_Service_UpdateProgress_ClearedArea_C*> Services = {
        "BP_Service_UpdateProgress_ClearedArea_C'Test_C/Content/Blueprints/MissionSystem/Objects/Objectives/SubClasses/BP_IRRObjectie_ClearArea.Default__BP_IRRObjectie_ClearArea_C:BP_Service_UpdateProgress_ZoneCleared_C_0'"
    };
    TArray<class UBP_MissionEvent_PlayMissionBriefing_C*> CompletionEvents = {
        "BP_MissionEvent_PlayMissionBriefing_C'Test_C/Content/Blueprints/MissionSystem/Objects/Objectives/SubClasses/BP_IRRObjectie_ClearArea.Default__BP_IRRObjectie_ClearArea_C:BP_MissionEvent_PlayMissionBriefing_C_0'"
    };
    struct FIRRMissionVariable ProgressVariable = {
        "Type": EIRRMissionVariableType::Bool
    };
};