class ABP_LevelTrigger_Loot_Item_C : public AActor
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/MissionSystem/Actors/Triggers/BP_LevelTrigger_Loot_Item.BP_LevelTrigger_Loot_Item_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/Actors/Triggers/BP_LevelTrigger_Loot_Item.BP_LevelTrigger_Loot_Item_C:ExecuteUbergraph_BP_LevelTrigger_Loot_Item'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    class UBoxComponent* Box;
    class USceneComponent* DefaultSceneRoot;
    int AICount;
    bool AreaCleared;

};