class ABP_MissionSpawnPoint_Reinforcement_C : public ABP_MissionSpawnPoint_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/MissionSystem/Actors/Spawns/Reinforcement/BP_MissionSpawnPoint_Reinforcement.BP_MissionSpawnPoint_Reinforcement_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/MissionSystem/Actors/Spawns/Reinforcement/BP_MissionSpawnPoint_Reinforcement.BP_MissionSpawnPoint_Reinforcement_C:InheritableComponentHandler'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/Actors/Spawns/Reinforcement/BP_MissionSpawnPoint_Reinforcement.BP_MissionSpawnPoint_Reinforcement_C:ExecuteUbergraph_BP_MissionSpawnPoint_Reinforcement'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FTimerHandle Timer = {
        "Handle": 0
    };
    struct FIRRSpawnReinforcementSettings Reinforcement Settings = {
        "bEnabled": true,
        "MinSpawns": 3,
        "MaxSpawns": 6,
        "bUseCoopMultiplier": true,
        "MinSpawnRadius": 2000,
        "MaxSpawnRadius": 5000,
        "TargetReachRadius": 300,
        "ClusterRadius": 500,
        "RallySeedCount": 32,
        "RallyFallbackCount": 3,
        "RallyIndoorWeight": 2,
        "RallyCoverWeight": 1,
        "BotTypeWeights": {},
        "AllegianceId": FName("UICS"),
        "bValidateSpawns": true,
        "bSpawnInWaves": false,
        "SpawnPerWave": 3,
        "WaveInterval": 10
    };
    enum RemoteRole = ENetRole::ROLE_SimulatedProxy;
    float Reinforcement Delay;
    class ABP_ReinforcementSpawner_C* ReinforcementSpawner;
    bool ReinforcementInitFinished;

};