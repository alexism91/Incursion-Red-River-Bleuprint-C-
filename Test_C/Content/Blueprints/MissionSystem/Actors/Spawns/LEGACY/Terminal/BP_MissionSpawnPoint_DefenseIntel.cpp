class ABP_MissionSpawnPoint_DefenseIntel_C : public ABP_MissionSpawnPoint_ItemPickUp_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/MissionSystem/Actors/Spawns/LEGACY/Terminal/BP_MissionSpawnPoint_DefenseIntel.BP_MissionSpawnPoint_DefenseIntel_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/MissionSystem/Actors/Spawns/LEGACY/Terminal/BP_MissionSpawnPoint_DefenseIntel.BP_MissionSpawnPoint_DefenseIntel_C:InheritableComponentHandler'";
    class UStaticMesh* DebugMesh = "StaticMesh'Test_C/Content/Environment/Assets/Props/Intel/SM_Intel_CD_01.SM_Intel_CD_01'";
    FName SpawnTag = FName("Terminal Disc");
    TArray<FName> Tags = {
        FName("Keycard")
    };
};