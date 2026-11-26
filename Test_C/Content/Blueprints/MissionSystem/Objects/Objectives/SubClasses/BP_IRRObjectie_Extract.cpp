class UBP_IRRObjectie_Extract_C : public UIRRMissionObjective
{
public:
    struct FGuid ObjectiveId = FGuid(0x84574E49, 0x44952017, 0x5465FA8F, 0x190F38F4);
    FText Description = FText("Extract {x} times successfully from a raid.");
    TArray<class UIRRMissionService_UpdateProgress*> Services = {
        "IRRMissionService_UpdateProgress'Test_C/Content/Blueprints/MissionSystem/Objects/Objectives/SubClasses/BP_IRRObjectie_Extract.Default__BP_IRRObjectie_Extract_C:IRRMissionService_UpdateProgress_0'"
    };
    bool bNoCompletionBriefing = true;
};