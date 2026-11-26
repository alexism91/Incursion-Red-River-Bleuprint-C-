class ABP_P_Stairs_C : public AActor
{
public:
    TArray<class UChildActorComponent*> ComponentTemplates = {
        "ChildActorComponent'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Blueprints/Environment/Stairs/Parent/BP_P_Stairs.BP_P_Stairs_C:NODE_AddChildActorComponent-0'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Blueprints/Environment/Stairs/Parent/BP_P_Stairs.BP_P_Stairs_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Blueprints/Environment/Stairs/Parent/BP_P_Stairs.BP_P_Stairs_C:InheritableComponentHandler'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Blueprints/Environment/Stairs/Parent/BP_P_Stairs.BP_P_Stairs_C:ExecuteUbergraph_BP_P_Stairs'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    int32 Wide = 2;
    int32 Long = 5;
    struct FRandomStream RandomSeedStruct = {
        "InitialSeed": 0,
        "Seed": 0
    };
    class UStaticMesh* StairsMiddleMesh = "StaticMesh'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Models/Structure/Buildings/Stairs/SM_Stairs_Steps1_Middle.SM_Stairs_Steps1_Middle'";
    double StairsWidth = 200;
    double StairsDepth = 100;
    double StairsHeight = 100;
    class UStaticMesh* StairsSideMiddleMesh = "StaticMesh'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Models/Structure/Buildings/Stairs/SM_Stairs_Steps1_SideM.SM_Stairs_Steps1_SideM'";
    bool UseLeftSide = true;
    bool UseRightSide = true;
    class UStaticMesh* StairsSideStartMesh = "StaticMesh'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Models/Structure/Buildings/Stairs/SM_Stairs_Steps1_SideS.SM_Stairs_Steps1_SideS'";
    class UStaticMesh* StairsSideEndMesh = "StaticMesh'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Models/Structure/Buildings/Stairs/SM_Stairs_Steps1_SideE.SM_Stairs_Steps1_SideE'";
    bool UseSideEnds = true;
    bool UseSupport = true;
    class UStaticMesh* StairsSupportUpMesh = "StaticMesh'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Models/Structure/Buildings/Stairs/SM_Stairs_Steps1_Sup_Up.SM_Stairs_Steps1_Sup_Up'";
    class UStaticMesh* StairsSupportTileMesh = "StaticMesh'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Models/Structure/Buildings/Stairs/SM_Stairs_Steps1_Sup_Tile.SM_Stairs_Steps1_Sup_Tile'";
    struct FRotator SocketRotationOffset = FRotator(0, 0, 0);
    bool SpawnActors = true;
    class UStaticMesh* StairsSideMiddleLeftMesh = "StaticMesh'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Models/Structure/Buildings/Stairs/SM_Stairs_Steps1_SideM.SM_Stairs_Steps1_SideM'";
    class UStaticMesh* StairsSideStartLeftMesh = "StaticMesh'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Models/Structure/Buildings/Stairs/SM_Stairs_Steps1_SideS.SM_Stairs_Steps1_SideS'";
    class UStaticMesh* StairsSideEndLeftMesh = "StaticMesh'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Models/Structure/Buildings/Stairs/SM_Stairs_Steps1_SideE.SM_Stairs_Steps1_SideE'";
    bool UseUniqueLeftSideMeshes = true;
    struct FLinearColor StairsColor = FLinearColor(0,744792, 0,744792, 0,744792, 0);
    FName ColorParameterName = FName("L1Color");
    class UHierarchicalInstancedStaticMeshComponent* StairsSideEndLeftMeshes;
    class UHierarchicalInstancedStaticMeshComponent* StairsSideStartLeftMeshes;
    class UHierarchicalInstancedStaticMeshComponent* StairsSideMiddleLeftMeshes;
    class UHierarchicalInstancedStaticMeshComponent* StairsSupportTileMeshes;
    class UHierarchicalInstancedStaticMeshComponent* StairsSupportUpMeshes;
    class UHierarchicalInstancedStaticMeshComponent* StairsSideEndMeshes;
    class UHierarchicalInstancedStaticMeshComponent* StairsSideStartMeshes;
    class UHierarchicalInstancedStaticMeshComponent* StairsSideMiddleMeshes;
    class UHierarchicalInstancedStaticMeshComponent* StairsMiddleMeshes;
    class USceneComponent* Content;
    class USceneComponent* Scene;
    bool RandomActors;
    TArray<TSubclassOf<AActor>> Actors;
    TArray<class UChildActorComponent*>* SpawnedActors;
    class UMaterialInstanceDynamic* StairsMatInst;

};