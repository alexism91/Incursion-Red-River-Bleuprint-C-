class ABP_MissionSpawnPoint_C : public AIRRMissionSpawnPosition
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/MissionSystem/Actors/BP_MissionSpawnPoint.BP_MissionSpawnPoint_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/Actors/BP_MissionSpawnPoint.BP_MissionSpawnPoint_C:ExecuteUbergraph_BP_MissionSpawnPoint'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool DebugSpawnClass? = true;
    class UMaterialInstanceConstant* Material = "MaterialInstanceConstant'Test_C/Plugins/UPS/Content/Materials/MI_ActionPointPreviewMesh.MI_ActionPointPreviewMesh'";
    bool SpawnOnce? = true;
    bool RegisterMarker = true;
    struct FGuid SpawnPositionUID = FGuid(0xC78B6F5C, 0x42BE70DA, 0xB8DA80B6, 0xF1644A00);
    struct FActorTickFunction PrimaryActorTick = {
        "bStartWithTickEnabled": false
    };
    bool bAlwaysRelevant = true;
    bool bNetLoadOnClient = false;
    bool bReplicates = true;
    float NetUpdateFrequency = 1;
    float MinNetUpdateFrequency = 0;
    float NetPriority = 0;
    class UChildActorComponent* ChildActor;
    class UBillboardComponent* Billboard;
    class UStaticMesh* DebugMesh;
    bool Spawned?;
    class AActor* MissionActorRef;
    class AActor* SpawnedActorRef;

};