class ABP_ReinforcementSpawner_C : public AActor
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/MissionSystem/Actors/BP_ReinforcementSpawner.BP_ReinforcementSpawner_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/Actors/BP_ReinforcementSpawner.BP_ReinforcementSpawner_C:ExecuteUbergraph_BP_ReinforcementSpawner'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
     OnFinishedSpawnReinforcements = ;
    int32 MinSpawns = 4;
    int32 MaxSpawns = 6;
    bool bUseCoopMultiplier? = true;
    float SpawnRadius = 1000;
    struct FVector LocSpawnOrigin = FVector(0, 0, 0);
    bool SpawnInWaves = true;
    int32 SpawnPerWave = 2;
    float WaitBetweenSpawns = 30;
     OnFinishedInitReinforcements = ;
    TArray<FName> Tags = {
        FName("Reinforcement")
    };
    class USceneComponent* DefaultSceneRoot;
    bool Spawn AIController?;
    int FinalSpawnCount;
    int LocFinalSpawnCount;
    TArray<class ABP_IRR_AI_BaseCharacter_C*> Pawns;
    TSubclassOf<AActor> ReinforcementClass;
    TArray<struct FVector> Result Locations;
    class AActor* Initiator;

};