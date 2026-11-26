class ABP_AI_Spawner_C : public AActor
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/AI/Spawning/BP_AI_Spawner.BP_AI_Spawner_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/AI/Spawning/BP_AI_Spawner.BP_AI_Spawner_C:ExecuteUbergraph_BP_AI_Spawner'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool Enabled? = true;
    int32 EnemyCount = 20;
    double CoopMultiplicator = 0.3;
    TArray<double> WeightPerPriority = {
        20,
        10,
        5
    };
    float RespawnTimer = 60;
    class USceneComponent* DefaultSceneRoot;
    bool Respawn?;
    TArray<class ABP_RandomSpawnLocation_AI_C*> RandomAISpawnLocations;
    TArray<class ABP_RandomSpawnLocation_AI_C*> FixedAISpawnLocations;
    int RandomSpawnCount;
    int FixedSpawnCount;
    bool Validate?;
    int OriginalSpawnCount;

};