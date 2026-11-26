class ABP_MissionSpawnPoint_ItemPlacement_Bomb_C : public ABP_MissionSpawnPoint_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/MissionSystem/Actors/Spawns/LEGACY/Sabotage/BP_MissionSpawnPoint_ItemPlacement_Bomb.BP_MissionSpawnPoint_ItemPlacement_Bomb_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/MissionSystem/Actors/Spawns/LEGACY/Sabotage/BP_MissionSpawnPoint_ItemPlacement_Bomb.BP_MissionSpawnPoint_ItemPlacement_Bomb_C:InheritableComponentHandler'";
    class UStaticMesh* DebugMesh = "StaticMesh'Test_C/Content/Blueprints/InventorySystem/Items/Quest/Bomb/Mesh/SM_Bomb.SM_Bomb'";
    FName SpawnTag = FName("Bomb Placement");
    TArray<class UBlueprintGeneratedClass*> SpawnClasses = {
        "BlueprintGeneratedClass'Test_C/Content/Blueprints/InteractionSystem/Actors/ItemPlacement/BP_ItemPlacement_Bomb.BP_ItemPlacement_Bomb_C'"
    };
    enum RemoteRole = ENetRole::ROLE_SimulatedProxy;
};