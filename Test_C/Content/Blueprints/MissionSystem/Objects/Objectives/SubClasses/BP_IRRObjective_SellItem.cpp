class UBP_IRRObjective_SellItem_C : public UIRRMissionObjective
{
public:
    struct FGuid ObjectiveId = FGuid(0xA6DEA796, 0x47ABBE83, 0x028409B0, 0x4AFE3024);
    FText Description = FText("Sell {count} {targetdata} to the vendor");
    TArray<class UIRRMissionService_UpdateProgress*> Services = {
        "IRRMissionService_UpdateProgress'Test_C/Content/Blueprints/MissionSystem/Objects/Objectives/SubClasses/BP_IRRObjective_SellItem.Default__BP_IRRObjective_SellItem_C:IRRMissionService_UpdateProgress_0'"
    };
    bool bNoCompletionBriefing = true;
};