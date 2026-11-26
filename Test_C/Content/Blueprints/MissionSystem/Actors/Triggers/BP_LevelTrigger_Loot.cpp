class ABP_LevelTrigger_Loot_C : public ABP_LevelTrigger_Zone_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/MissionSystem/Actors/Triggers/BP_LevelTrigger_Loot.BP_LevelTrigger_Loot_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/MissionSystem/Actors/Triggers/BP_LevelTrigger_Loot.BP_LevelTrigger_Loot_C:InheritableComponentHandler'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/Actors/Triggers/BP_LevelTrigger_Loot.BP_LevelTrigger_Loot_C:ExecuteUbergraph_BP_LevelTrigger_Loot'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FColor BrushColor = FColor(255, 0, 0, 255);
    float LineThickness = 50;
    class UTextRenderComponent* LabelComponent = "TextRenderComponent'Test_C/Content/Blueprints/MissionSystem/Actors/Triggers/BP_LevelTrigger_Loot.Default__BP_LevelTrigger_Loot_C:LabelComponent'";
    class UBoxComponent* CollisionComponent = "BoxComponent'Test_C/Content/Blueprints/MissionSystem/Actors/Triggers/BP_LevelTrigger_Loot.Default__BP_LevelTrigger_Loot_C:CollisionComp'";
    class UBoxComponent* RootComponent = "BoxComponent'Test_C/Content/Blueprints/MissionSystem/Actors/Triggers/BP_LevelTrigger_Loot.Default__BP_LevelTrigger_Loot_C:CollisionComp'";
    class UBillboardComponent* MissingLocations;
    int PickUpCount;
    TArray<struct FTransform> LootTransforms;
    TMap<struct FGameplayTag, int> LootItems;
    FName SpawnTag;
    bool Spawned?;

};