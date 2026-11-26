class ABP_StreamingVolume_C : public AActor
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Environment/Blueprints/BP_StreamingVolume.BP_StreamingVolume_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Environment/Blueprints/BP_StreamingVolume.BP_StreamingVolume_C:ExecuteUbergraph_BP_StreamingVolume'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FStreamingSourceShape LevelStreamingShape = {
        "bUseGridLoadingRange": true,
        "LoadingRangeScale": 1.5,
        "Radius": 10000,
        "bIsSector": false,
        "SectorAngle": 360,
        "Location": FVector(0, 0, 0),
        "Rotation": FRotator(0, 0, 0)
    };
    struct FActorTickFunction PrimaryActorTick = {
        "bStartWithTickEnabled": false
    };
    class UWeather_Mask_Projection_Box_Component_C* Weather_Mask_Projection_Box_Component;
    class UWorldPartitionStreamingSourceComponent* WorldPartitionStreamingSource;
    class USceneComponent* DefaultSceneRoot;

};