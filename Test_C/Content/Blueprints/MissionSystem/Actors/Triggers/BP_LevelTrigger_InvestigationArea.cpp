class ABP_LevelTrigger_InvestigationArea_C : public ABP_LevelTrigger_Zone_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/MissionSystem/Actors/Triggers/BP_LevelTrigger_InvestigationArea.BP_LevelTrigger_InvestigationArea_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/MissionSystem/Actors/Triggers/BP_LevelTrigger_InvestigationArea.BP_LevelTrigger_InvestigationArea_C:InheritableComponentHandler'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/Actors/Triggers/BP_LevelTrigger_InvestigationArea.BP_LevelTrigger_InvestigationArea_C:ExecuteUbergraph_BP_LevelTrigger_InvestigationArea'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FColor BrushColor = FColor(255, 241, 0, 255);
    float LineThickness = 50;
    FText DisplayLabel = FText("Investigate Area");
    bool bAutoRegister = false;
    class UTextRenderComponent* LabelComponent = "TextRenderComponent'Test_C/Content/Blueprints/MissionSystem/Actors/Triggers/BP_LevelTrigger_InvestigationArea.Default__BP_LevelTrigger_InvestigationArea_C:LabelComponent'";
    class UBoxComponent* CollisionComponent = "BoxComponent'Test_C/Content/Blueprints/MissionSystem/Actors/Triggers/BP_LevelTrigger_InvestigationArea.Default__BP_LevelTrigger_InvestigationArea_C:CollisionComp'";
    class UBoxComponent* RootComponent = "BoxComponent'Test_C/Content/Blueprints/MissionSystem/Actors/Triggers/BP_LevelTrigger_InvestigationArea.Default__BP_LevelTrigger_InvestigationArea_C:CollisionComp'";
    int AICount;
    bool AreaCleared;
    FName SpawnTag;

};