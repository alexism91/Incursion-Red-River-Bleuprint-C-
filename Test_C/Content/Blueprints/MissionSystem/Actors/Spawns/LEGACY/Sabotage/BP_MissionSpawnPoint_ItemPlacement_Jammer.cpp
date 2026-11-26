class ABP_MissionSpawnPoint_ItemPlacement_Jammer_C : public ABP_MissionSpawnPoint_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/MissionSystem/Actors/Spawns/LEGACY/Sabotage/BP_MissionSpawnPoint_ItemPlacement_Jammer.BP_MissionSpawnPoint_ItemPlacement_Jammer_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/MissionSystem/Actors/Spawns/LEGACY/Sabotage/BP_MissionSpawnPoint_ItemPlacement_Jammer.BP_MissionSpawnPoint_ItemPlacement_Jammer_C:InheritableComponentHandler'";
    class UStaticMesh* DebugMesh = "StaticMesh'Test_C/Content/Blueprints/InventorySystem/Items/Quest/Jammer/Mesh/SM_Jammer.SM_Jammer'";
    FName SpawnTag = FName("Jammer Placement");
    TArray<class UBlueprintGeneratedClass*> SpawnClasses = {
        "BlueprintGeneratedClass'Test_C/Content/Blueprints/InteractionSystem/Actors/ItemPlacement/BP_ItemPlacement_Jammer.BP_ItemPlacement_Jammer_C'"
    };
    enum RemoteRole = ENetRole::ROLE_SimulatedProxy;
};