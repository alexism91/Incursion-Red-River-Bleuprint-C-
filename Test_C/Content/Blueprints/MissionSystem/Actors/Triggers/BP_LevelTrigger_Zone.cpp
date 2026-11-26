class ABP_LevelTrigger_Zone_C : public ABP_LevelTrigger_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/MissionSystem/Actors/Triggers/BP_LevelTrigger_Zone.BP_LevelTrigger_Zone_C:SimpleConstructionScript_0'";
    float LineThickness = 100;
    bool bAutoRegister = true;
    class UTextRenderComponent* LabelComponent = "TextRenderComponent'Test_C/Content/Blueprints/MissionSystem/Actors/Triggers/BP_LevelTrigger_Zone.Default__BP_LevelTrigger_Zone_C:LabelComponent'";
    class UBoxComponent* CollisionComponent = "BoxComponent'Test_C/Content/Blueprints/MissionSystem/Actors/Triggers/BP_LevelTrigger_Zone.Default__BP_LevelTrigger_Zone_C:CollisionComp'";
    enum RemoteRole = ENetRole::ROLE_SimulatedProxy;
    class UBoxComponent* RootComponent = "BoxComponent'Test_C/Content/Blueprints/MissionSystem/Actors/Triggers/BP_LevelTrigger_Zone.Default__BP_LevelTrigger_Zone_C:CollisionComp'";
    class UBP_LootModifierComponent_C* BP_LootModifierComponent;
    class UBP_IRRMarkerComponent_C* BP_IRRMarkerComponent;
};