class ABP_LevelTrigger_C : public AIRRLevelTrigger
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/MissionSystem/Actors/Triggers/BP_LevelTrigger.BP_LevelTrigger_C:SimpleConstructionScript_0'";
    class UTextRenderComponent* LabelComponent = "TextRenderComponent'Test_C/Content/Blueprints/MissionSystem/Actors/Triggers/BP_LevelTrigger.Default__BP_LevelTrigger_C:LabelComponent'";
    class UBoxComponent* CollisionComponent = "BoxComponent'Test_C/Content/Blueprints/MissionSystem/Actors/Triggers/BP_LevelTrigger.Default__BP_LevelTrigger_C:CollisionComp'";
    bool bAlwaysRelevant = true;
    bool bReplicates = true;
    class UBoxComponent* RootComponent = "BoxComponent'Test_C/Content/Blueprints/MissionSystem/Actors/Triggers/BP_LevelTrigger.Default__BP_LevelTrigger_C:CollisionComp'";
};