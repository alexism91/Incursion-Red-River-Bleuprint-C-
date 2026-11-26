class UBP_IRRObjective_TradeInItem_C : public UIRRMissionObjective
{
public:
    struct FGuid ObjectiveId = FGuid(0x7DE8B404, 0x477FBB40, 0xD13AC3B0, 0x7C3D6744);
    FText Description = FText("Trade in {count} {targetdata} at the trader.");
    TArray<class UIRRSpawnData*> SpawnData = {
        "IRRSpawnData'Test_C/Content/Blueprints/MissionSystem/Objects/Objectives/SubClasses/BP_IRRObjective_TradeInItem.Default__BP_IRRObjective_TradeInItem_C:IRRSpawnData_0'"
    };
    class UBP_TargetData_Tag_C* TargetData = "BP_TargetData_Tag_C'Test_C/Content/Blueprints/MissionSystem/Objects/Objectives/SubClasses/BP_IRRObjective_TradeInItem.Default__BP_IRRObjective_TradeInItem_C:BP_TargetData_Item_C_0'";
    TArray<class UIRRMissionService_UpdateProgress*> Services = {
        "IRRMissionService_UpdateProgress'Test_C/Content/Blueprints/MissionSystem/Objects/Objectives/SubClasses/BP_IRRObjective_TradeInItem.Default__BP_IRRObjective_TradeInItem_C:IRRMissionService_UpdateProgress_0'"
    };
    bool bNoCompletionBriefing = true;
};