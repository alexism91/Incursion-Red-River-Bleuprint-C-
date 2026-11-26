class ABP_MissionSpawnPoint_ItemPlacement_Jammer_C : public ABP_MissionSpawnPoint_ItemPlacement_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/MissionSystem/Actors/Spawns/ItemPlacement/BP_MissionSpawnPoint_ItemPlacement_Jammer.BP_MissionSpawnPoint_ItemPlacement_Jammer_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/MissionSystem/Actors/Spawns/ItemPlacement/BP_MissionSpawnPoint_ItemPlacement_Jammer.BP_MissionSpawnPoint_ItemPlacement_Jammer_C:InheritableComponentHandler'";
    struct FGameplayTag Item Tag = {
        "TagName": FName("Inventory.Items.Quest.Jammer")
    };
    class UStaticMesh* Placing Mesh = "StaticMesh'Test_C/Content/Blueprints/InventorySystem/Items/Quest/Jammer/Mesh/SM_Jammer_NEW.SM_Jammer_NEW'";
    struct FGuid SpawnPositionUID = FGuid(0x98FC94B7, 0x4506BE8B, 0x910103BD, 0x8ACC2489);
    TArray<class UBlueprintGeneratedClass*> SpawnClasses = {
        "BlueprintGeneratedClass'Test_C/Content/Blueprints/InteractionSystem/Actors/ItemPlacement/BP_ItemPlacement_Jammer.BP_ItemPlacement_Jammer_C'"
    };
};