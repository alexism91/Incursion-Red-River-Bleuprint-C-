class ABP_RandomSpawnLocation_AI_C : public AIRRAISpawnPoint
{
public:
    TArray<class UStaticMeshComponent*> ComponentTemplates = {
        "StaticMeshComponent'Test_C/Content/Blueprints/AI/Spawning/BP_RandomSpawnLocation_AI.BP_RandomSpawnLocation_AI_C:NODE_AddStaticMeshComponent-0'",
        "StaticMeshComponent'Test_C/Content/Blueprints/AI/Spawning/BP_RandomSpawnLocation_AI.BP_RandomSpawnLocation_AI_C:NODE_AddStaticMeshComponent-1'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/AI/Spawning/BP_RandomSpawnLocation_AI.BP_RandomSpawnLocation_AI_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/AI/Spawning/BP_RandomSpawnLocation_AI.BP_RandomSpawnLocation_AI_C:InheritableComponentHandler'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/AI/Spawning/BP_RandomSpawnLocation_AI.BP_RandomSpawnLocation_AI_C:ExecuteUbergraph_BP_RandomSpawnLocation_AI'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    class UMaterial* Material = "Material'Test_C/Plugins/UPS/Content/Materials/M_ActionPointBlock.M_ActionPointBlock'";
    struct FVector SpawnOffset = FVector(0, 0, 50);
    int32 PatrolCountMin = 2;
    int32 PatrolCountMax = 3;
    int32 SpawnAmount = 1;
    enum E_AI_Behaviour Behaviour = E_AI_Behaviour::NewEnumerator0;
    struct FLinearColor Line Color = FLinearColor(1, 1, 1, 1);
     OnAISpawned = ;
    bool SpawnAIController? = true;
    float PatrolRadius = 500;
    struct FActorTickFunction PrimaryActorTick = {
        "bStartWithTickEnabled": false
    };
    bool bHidden = true;
    class USceneComponent* RootComponent = "SceneComponent'Test_C/Content/Blueprints/AI/Spawning/BP_RandomSpawnLocation_AI.Default__BP_RandomSpawnLocation_AI_C:Root'";
    class UStaticMeshComponent* StaticMesh;
    class UBillboardComponent* Billboard;
    int Priority;
    class APawn* CharacterRef;
    bool PatrolSpawn?;
    TArray<TSubclassOf<AActor>> SpawnClass;
    TArray<struct FVector> SpawnLocations;
    bool MissionSpawn?;
    FName MissionSpawnTag;

};