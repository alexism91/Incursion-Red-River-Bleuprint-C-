class ABP_MissionSpawnPoint_ItemPlacement_C : public ABP_MissionSpawnPoint_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/MissionSystem/Actors/Spawns/ItemPlacement/BP_MissionSpawnPoint_ItemPlacement.BP_MissionSpawnPoint_ItemPlacement_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/MissionSystem/Actors/Spawns/ItemPlacement/BP_MissionSpawnPoint_ItemPlacement.BP_MissionSpawnPoint_ItemPlacement_C:InheritableComponentHandler'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/Actors/Spawns/ItemPlacement/BP_MissionSpawnPoint_ItemPlacement.BP_MissionSpawnPoint_ItemPlacement_C:ExecuteUbergraph_BP_MissionSpawnPoint_ItemPlacement'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FGameplayTag Item Tag = {
        "TagName": FName("None")
    };
    class UStaticMesh* DebugMesh = "StaticMesh'Test_C/Content/Blueprints/InventorySystem/Items/Quest/Bomb/Mesh/SM_Bomb.SM_Bomb'";
    TArray<class UBlueprintGeneratedClass*> SpawnClasses = {
        "BlueprintGeneratedClass'Test_C/Content/Blueprints/InteractionSystem/Actors/ItemPlacement/BP_ItemPlacement.BP_ItemPlacement_C'"
    };
    enum RemoteRole = ENetRole::ROLE_SimulatedProxy;
    class UStaticMesh* Placing Mesh;

};