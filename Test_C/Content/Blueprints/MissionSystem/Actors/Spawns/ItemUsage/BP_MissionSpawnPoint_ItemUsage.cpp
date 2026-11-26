class ABP_MissionSpawnPoint_ItemUsage_C : public ABP_MissionSpawnPoint_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/MissionSystem/Actors/Spawns/ItemUsage/BP_MissionSpawnPoint_ItemUsage.BP_MissionSpawnPoint_ItemUsage_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/MissionSystem/Actors/Spawns/ItemUsage/BP_MissionSpawnPoint_ItemUsage.BP_MissionSpawnPoint_ItemUsage_C:InheritableComponentHandler'";
    struct FGameplayTag Item Tag = {
        "TagName": FName("None")
    };
    class UStaticMesh* DebugMesh = "StaticMesh'Test_C/Content/Blueprints/InventorySystem/Items/Quest/Bomb/Mesh/SM_Bomb.SM_Bomb'";
    TArray<class UBlueprintGeneratedClass*> SpawnClasses = {
        "BlueprintGeneratedClass'Test_C/Content/Blueprints/InteractionSystem/Actors/ItemUsage/BP_ItemUsage.BP_ItemUsage_C'"
    };
    enum RemoteRole = ENetRole::ROLE_SimulatedProxy;
    float NetUpdateFrequency = 2;
    float MinNetUpdateFrequency = 1;
    float NetPriority = 0.5;

};