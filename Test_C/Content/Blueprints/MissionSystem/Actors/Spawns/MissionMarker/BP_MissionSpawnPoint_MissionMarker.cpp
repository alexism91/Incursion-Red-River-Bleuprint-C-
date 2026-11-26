class ABP_MissionSpawnPoint_MissionMarker_C : public ABP_MissionSpawnPoint_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/MissionSystem/Actors/Spawns/MissionMarker/BP_MissionSpawnPoint_MissionMarker.BP_MissionSpawnPoint_MissionMarker_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/MissionSystem/Actors/Spawns/MissionMarker/BP_MissionSpawnPoint_MissionMarker.BP_MissionSpawnPoint_MissionMarker_C:InheritableComponentHandler'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/Actors/Spawns/MissionMarker/BP_MissionSpawnPoint_MissionMarker.BP_MissionSpawnPoint_MissionMarker_C:ExecuteUbergraph_BP_MissionSpawnPoint_MissionMarker'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FGuid SpawnPositionUID = FGuid(0x334584D5, 0x4B4F35D7, 0xE5B1F688, 0x6F084290);
    enum RemoteRole = ENetRole::ROLE_SimulatedProxy;
    float NetUpdateFrequency = 2;
    float NetPriority = 0.5;
    class UBP_IRRMarkerComponent_Mission_C* BP_IRRMarkerComponent_Mission;

};