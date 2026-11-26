class ABP_MissionSpawnPoint_ItemPlacement_Bug_C : public ABP_MissionSpawnPoint_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/MissionSystem/Actors/Spawns/LEGACY/Sabotage/BP_MissionSpawnPoint_ItemPlacement_Bug.BP_MissionSpawnPoint_ItemPlacement_Bug_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/MissionSystem/Actors/Spawns/LEGACY/Sabotage/BP_MissionSpawnPoint_ItemPlacement_Bug.BP_MissionSpawnPoint_ItemPlacement_Bug_C:InheritableComponentHandler'";
    class UStaticMesh* DebugMesh = "StaticMesh'Test_C/Content/Blueprints/InventorySystem/Items/Quest/Bug/Mesh/SM_Bug.SM_Bug'";
    FName SpawnTag = FName("Bug Placement");
    TArray<class UBlueprintGeneratedClass*> SpawnClasses = {
        "BlueprintGeneratedClass'Test_C/Content/Blueprints/InteractionSystem/Actors/ItemPlacement/BP_ItemPlacement_Bug.BP_ItemPlacement_Bug_C'"
    };
    enum RemoteRole = ENetRole::ROLE_SimulatedProxy;
};