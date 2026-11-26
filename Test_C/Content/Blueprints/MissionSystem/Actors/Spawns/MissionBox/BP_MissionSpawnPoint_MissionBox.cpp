class ABP_MissionSpawnPoint_MissionBox_C : public ABP_MissionSpawnPoint_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/MissionSystem/Actors/Spawns/MissionBox/BP_MissionSpawnPoint_MissionBox.BP_MissionSpawnPoint_MissionBox_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/MissionSystem/Actors/Spawns/MissionBox/BP_MissionSpawnPoint_MissionBox.BP_MissionSpawnPoint_MissionBox_C:InheritableComponentHandler'";
    class UStaticMesh* DebugMesh = "StaticMesh'Test_C/Content/SM_REPLACE_ASSET.SM_REPLACE_ASSET'";
    FName SpawnTag = FName("Mission Box");
    TArray<class UBlueprintGeneratedClass*> SpawnClasses = {
        "BlueprintGeneratedClass'Test_C/Content/Blueprints/InventorySystem/ExampleActors/BP_MissionBox.BP_MissionBox_C'"
    };
    enum RemoteRole = ENetRole::ROLE_SimulatedProxy;
    class UInventoryComponent* InventoryRef;
};