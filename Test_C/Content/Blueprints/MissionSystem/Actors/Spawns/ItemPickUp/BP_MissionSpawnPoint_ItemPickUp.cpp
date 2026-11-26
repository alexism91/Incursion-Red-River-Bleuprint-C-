class ABP_MissionSpawnPoint_ItemPickUp_C : public ABP_MissionSpawnPoint_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/MissionSystem/Actors/Spawns/ItemPickUp/BP_MissionSpawnPoint_ItemPickUp.BP_MissionSpawnPoint_ItemPickUp_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/MissionSystem/Actors/Spawns/ItemPickUp/BP_MissionSpawnPoint_ItemPickUp.BP_MissionSpawnPoint_ItemPickUp_C:InheritableComponentHandler'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/Actors/Spawns/ItemPickUp/BP_MissionSpawnPoint_ItemPickUp.BP_MissionSpawnPoint_ItemPickUp_C:ExecuteUbergraph_BP_MissionSpawnPoint_ItemPickUp'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    enum RemoteRole = ENetRole::ROLE_SimulatedProxy;
    float NetUpdateFrequency = 2;
    float NetPriority = 0.5;
    class UBP_IRRMarkerComponent_Mission_C* BP_IRRMarkerComponent_Mission;

};