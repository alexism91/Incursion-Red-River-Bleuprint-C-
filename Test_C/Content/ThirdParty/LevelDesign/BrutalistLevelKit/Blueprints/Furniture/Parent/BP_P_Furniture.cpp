class ABP_P_Furniture_C : public AActor
{
public:
    TArray<class UHierarchicalInstancedStaticMeshComponent*> ComponentTemplates = {
        "HierarchicalInstancedStaticMeshComponent'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Blueprints/Furniture/Parent/BP_P_Furniture.BP_P_Furniture_C:NODE_AddHierarchicalInstancedStaticMeshComponent-3'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Blueprints/Furniture/Parent/BP_P_Furniture.BP_P_Furniture_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Blueprints/Furniture/Parent/BP_P_Furniture.BP_P_Furniture_C:ExecuteUbergraph_BP_P_Furniture'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FRandomStream RandomSeedStruct = {
        "InitialSeed": 0,
        "Seed": 0
    };
    TArray<double> RandomRotations = {
        0,
        90,
        -90,
        180
    };
    bool RandomRotation = true;
    struct FRotator SocketMeshRotationOffset = FRotator(0, 0, 0);
    double SocketMeshScaleMin = 1;
    double SocketMeshScaleMax = 1;
    double SocketMeshRndMinRotation = -30;
    double SocketMeshRndMaxRotation = 30;
    bool SocketRandomAppearing = true;
    bool Active = true;
    struct FLinearColor Color = FLinearColor(0, 0, 0, 0);
    bool IsInteractable = true;
    struct FActorTickFunction PrimaryActorTick = {
        "bStartWithTickEnabled": false
    };
    class UStaticMeshComponent* FurnitureMesh;
    class USceneComponent* Meshes;
    class USceneComponent* Lights;
    class USceneComponent* DefaultSceneRoot;
    TArray<struct FF_Generated_Instance_Data*>* SpawnedHISMData;
    byte DecorationCollision;
    int SeedNumber;

};