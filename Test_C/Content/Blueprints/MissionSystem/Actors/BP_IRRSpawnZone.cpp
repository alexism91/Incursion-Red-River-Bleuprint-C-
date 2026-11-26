class ABP_IRRSpawnZone_C : public AActor
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/MissionSystem/Actors/BP_IRRSpawnZone.BP_IRRSpawnZone_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/Actors/BP_IRRSpawnZone.BP_IRRSpawnZone_C:ExecuteUbergraph_BP_IRRSpawnZone'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
     OnSpawnAreaInitialized = ;
    struct FTransform MissionBoxSpawnTransform = {
        "Rotation": FQuat(-0, 0, -0,70710677, 0,70710677),
        "Translation": FVector(200, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    double PlayerSpawnsRadius = 75;
    struct FVector MissionBoxLocation = FVector(0, 0, 0);
    double Minimum AI Distance To Spawn Zone = 10000;
    class UWorldPartitionStreamingSourceComponent* WorldPartitionStreamingSource;
    class UChildActorComponent* ChildActor3;
    class UChildActorComponent* ChildActor2;
    class UChildActorComponent* ChildActor1;
    class UChildActorComponent* ChildActor;
    class USceneComponent* StartPositionsRoot;
    class USceneComponent* DefaultSceneRoot;
    int StartPositionCounter;
    TArray<TSoftObjectPtr<ABP_IRRExtractionZone_C>> ConflictingExtractionZones;

};