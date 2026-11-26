class ABP_MissionSpawnPoint_ItemPlacement_Explosive_C : public ABP_MissionSpawnPoint_ItemPlacement_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/MissionSystem/Actors/Spawns/ItemPlacement/BP_MissionSpawnPoint_ItemPlacement_Explosive.BP_MissionSpawnPoint_ItemPlacement_Explosive_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/MissionSystem/Actors/Spawns/ItemPlacement/BP_MissionSpawnPoint_ItemPlacement_Explosive.BP_MissionSpawnPoint_ItemPlacement_Explosive_C:InheritableComponentHandler'";
    struct FGameplayTag Item Tag = {
        "TagName": FName("Inventory.Items.Quest.Bomb")
    };
    class UStaticMesh* Placing Mesh = "StaticMesh'Test_C/Content/Blueprints/InventorySystem/Items/Quest/Bomb/Mesh/SM_Bomb.SM_Bomb'";
    TArray<class UBlueprintGeneratedClass*> SpawnClasses = {
        "BlueprintGeneratedClass'Test_C/Content/Blueprints/InteractionSystem/Actors/ItemPlacement/BP_ItemPlacement_Bomb.BP_ItemPlacement_Bomb_C'"
    };
};