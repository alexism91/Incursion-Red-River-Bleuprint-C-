class ABP_LevelTrigger_ClearArea_C : public ABP_LevelTrigger_Zone_C
{
public:
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/MissionSystem/Actors/Triggers/BP_LevelTrigger_ClearArea.BP_LevelTrigger_ClearArea_C:ComponentDelegateBinding_0'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/MissionSystem/Actors/Triggers/BP_LevelTrigger_ClearArea.BP_LevelTrigger_ClearArea_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/MissionSystem/Actors/Triggers/BP_LevelTrigger_ClearArea.BP_LevelTrigger_ClearArea_C:InheritableComponentHandler'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/Actors/Triggers/BP_LevelTrigger_ClearArea.BP_LevelTrigger_ClearArea_C:ExecuteUbergraph_BP_LevelTrigger_ClearArea'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FGameplayTag TriggerCategory = {
        "TagName": FName("Editor.TriggerCategory.ClearArea")
    };
    struct FColor BrushColor = FColor(255, 0, 0, 255);
    float LineThickness = 50;
    FText DisplayLabel = FText("Clear Area");
    bool bAutoRegister = false;
    class UTextRenderComponent* LabelComponent = "TextRenderComponent'Test_C/Content/Blueprints/MissionSystem/Actors/Triggers/BP_LevelTrigger_ClearArea.Default__BP_LevelTrigger_ClearArea_C:LabelComponent'";
    class UBoxComponent* CollisionComponent = "BoxComponent'Test_C/Content/Blueprints/MissionSystem/Actors/Triggers/BP_LevelTrigger_ClearArea.Default__BP_LevelTrigger_ClearArea_C:CollisionComp'";
    class UBoxComponent* RootComponent = "BoxComponent'Test_C/Content/Blueprints/MissionSystem/Actors/Triggers/BP_LevelTrigger_ClearArea.Default__BP_LevelTrigger_ClearArea_C:CollisionComp'";
    class UIRRClearAreaComponent* IRRClearArea;
    FName SpawnTag;

};