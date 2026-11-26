class UBP_IRRObjectie_Kill_C : public UIRRMissionObjective
{
public:
    struct FGuid ObjectiveId = FGuid(0x8A533CD8, 0x4F184BAC, 0x66F727A4, 0xEE5C8EE4);
    bool bShared = true;
    FText Description = FText("Eliminate {count} with a {targetdata}.");
    class UBP_TargetData_AI_C* TargetData = "BP_TargetData_AI_C'Test_C/Content/Blueprints/MissionSystem/Objects/Objectives/SubClasses/BP_IRRObjectie_Kill.Default__BP_IRRObjectie_Kill_C:BP_TargetData_AI_C_0'";
    TArray<class UIRRMissionService_UpdateProgress*> Services = {
        "IRRMissionService_UpdateProgress'Test_C/Content/Blueprints/MissionSystem/Objects/Objectives/SubClasses/BP_IRRObjectie_Kill.Default__BP_IRRObjectie_Kill_C:IRRMissionService_UpdateProgress_0'"
    };
    TArray<class UBP_MissionEvent_PlayMissionBriefing_C*> CompletionEvents = {
        "BP_MissionEvent_PlayMissionBriefing_C'Test_C/Content/Blueprints/MissionSystem/Objects/Objectives/SubClasses/BP_IRRObjectie_Kill.Default__BP_IRRObjectie_Kill_C:BP_MissionEvent_PlayMissionBriefing_C_0'"
    };
};