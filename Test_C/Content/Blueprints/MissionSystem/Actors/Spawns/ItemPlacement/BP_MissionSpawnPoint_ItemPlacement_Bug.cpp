class ABP_MissionSpawnPoint_ItemPlacement_Bug_C : public ABP_MissionSpawnPoint_ItemPlacement_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/MissionSystem/Actors/Spawns/ItemPlacement/BP_MissionSpawnPoint_ItemPlacement_Bug.BP_MissionSpawnPoint_ItemPlacement_Bug_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/MissionSystem/Actors/Spawns/ItemPlacement/BP_MissionSpawnPoint_ItemPlacement_Bug.BP_MissionSpawnPoint_ItemPlacement_Bug_C:InheritableComponentHandler'";
    struct FGameplayTag Item Tag = {
        "TagName": FName("Inventory.Items.Quest.Bug")
    };
    class UStaticMesh* Placing Mesh = "StaticMesh'Test_C/Content/Blueprints/InventorySystem/Items/Quest/Bug/Mesh/SM_Bug_NEW.SM_Bug_NEW'";
    class UStaticMesh* DebugMesh = "StaticMesh'Test_C/Content/Blueprints/InventorySystem/Items/Quest/Bug/Mesh/SM_Bug.SM_Bug'";
    struct FGuid SpawnPositionUID = FGuid(0x269AFA17, 0x4D58FD49, 0xD2DC55A6, 0x009983BC);
    TArray<class UBlueprintGeneratedClass*> SpawnClasses = {
        "BlueprintGeneratedClass'Test_C/Content/Blueprints/InteractionSystem/Actors/ItemPlacement/BP_ItemPlacement_Bug.BP_ItemPlacement_Bug_C'"
    };
};