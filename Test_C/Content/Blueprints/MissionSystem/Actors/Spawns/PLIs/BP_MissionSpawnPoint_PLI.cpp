class ABP_MissionSpawnPoint_PLI_C : public ABP_MissionSpawnPoint_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/MissionSystem/Actors/Spawns/PLIs/BP_MissionSpawnPoint_PLI.BP_MissionSpawnPoint_PLI_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/MissionSystem/Actors/Spawns/PLIs/BP_MissionSpawnPoint_PLI.BP_MissionSpawnPoint_PLI_C:InheritableComponentHandler'";
    class UStaticMesh* DebugMesh = "StaticMesh'Test_C/Content/Blueprints/InventorySystem/Items/Quest/Bomb/Mesh/SM_Bomb.SM_Bomb'";
    FName SpawnTag = FName("PLI_Placeholder");
    enum RemoteRole = ENetRole::ROLE_SimulatedProxy;

};