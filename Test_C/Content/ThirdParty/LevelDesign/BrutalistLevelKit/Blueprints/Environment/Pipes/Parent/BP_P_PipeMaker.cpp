class ABP_P_PipeMaker_C : public AActor
{
public:
    TArray<class UChildActorComponent*> ComponentTemplates = {
        "HierarchicalInstancedStaticMeshComponent'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Blueprints/Environment/Pipes/Parent/BP_P_PipeMaker.BP_P_PipeMaker_C:NODE_AddHierarchicalInstancedStaticMeshComponent-0'",
        "StaticMeshComponent'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Blueprints/Environment/Pipes/Parent/BP_P_PipeMaker.BP_P_PipeMaker_C:NODE_AddStaticMeshComponent-1'",
        "ArrowComponent'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Blueprints/Environment/Pipes/Parent/BP_P_PipeMaker.BP_P_PipeMaker_C:NODE_AddArrowComponent-5'",
        "ArrowComponent'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Blueprints/Environment/Pipes/Parent/BP_P_PipeMaker.BP_P_PipeMaker_C:NODE_AddArrowComponent-7'",
        "ChildActorComponent'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Blueprints/Environment/Pipes/Parent/BP_P_PipeMaker.BP_P_PipeMaker_C:NODE_AddChildActorComponent-0'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Blueprints/Environment/Pipes/Parent/BP_P_PipeMaker.BP_P_PipeMaker_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Blueprints/Environment/Pipes/Parent/BP_P_PipeMaker.BP_P_PipeMaker_C:ExecuteUbergraph_BP_P_PipeMaker'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    double SocketMeshScaleMin = 0.5;
    double SocketMeshScaleMax = 2;
    struct FRotator SocketMeshRotationOffset = FRotator(0, 0, 0);
    TArray<class UStaticMesh*> StraightMeshes = {
        "StaticMesh'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Models/Structure/Shared/SM_Vent_Shaft_Middle1.SM_Vent_Shaft_Middle1'"
    };
    TArray<class UStaticMesh*> LeftMeshes = {
        "StaticMesh'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Models/Structure/Shared/SM_Vent_Shaft_Left1.SM_Vent_Shaft_Left1'"
    };
    TArray<class UStaticMesh*> RightMeshes = {
        "StaticMesh'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Models/Structure/Shared/SM_Vent_Shaft_Right1.SM_Vent_Shaft_Right1'"
    };
    TArray<class UStaticMesh*> DownMeshes = {
        "StaticMesh'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Models/Structure/Shared/SM_Vent_Shaft_Down1.SM_Vent_Shaft_Down1'"
    };
    TArray<class UStaticMesh*> UpMeshes = {
        "StaticMesh'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Models/Structure/Shared/SM_Vent_Shaft_Up1.SM_Vent_Shaft_Up1'"
    };
    double MiddleSpacing = 200;
    double TraceDistance = 500;
    int32 Iterations (Lenght) = 5;
    double FillStartOffset = 150;
    double FillEndOffset = 300;
    bool AutomaticMode = true;
    struct FRotator StartRotation = FRotator(0, 0, 0);
    struct FRandomStream RandomStream = {
        "InitialSeed": 0,
        "Seed": 0
    };
    double StraightStartOffset = 300;
    TArray<double> TraceDistances = {
        500
    };
    TArray<class UStaticMesh*> ScatterMeshes = {
        "StaticMesh'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Models/Structure/Splines/SM_Slime1.SM_Slime1'",
        "StaticMesh'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Models/Structure/Splines/SM_Slime2.SM_Slime2'",
        "StaticMesh'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Models/Structure/Splines/SM_Slime3.SM_Slime3'"
    };
    double WallThreshold = 30;
    double MinAllowedDistance = 200;
    bool UseStartPillar = true;
    class UStaticMesh* PillarStartMesh = "StaticMesh'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Models/Structure/Shared/SM_Pipe_Pillar1_End1.SM_Pipe_Pillar1_End1'";
    class UStaticMesh* PillarMiddleMesh = "StaticMesh'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Models/Structure/Shared/SM_Pipe_Pillar1_Middle1.SM_Pipe_Pillar1_Middle1'";
    class UStaticMesh* PillarEndMesh = "StaticMesh'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Models/Structure/Shared/SM_Pipe_Pillar1_Start1.SM_Pipe_Pillar1_Start1'";
    double PillarMeshFillOffset = -200;
    double PillarTraceStartOffset = 50;
    double PillarDensity = 0.4000000059604645;
    bool UseEndPillar = true;
    bool ConstructPillars = true;
    bool RandomPillars = true;
    struct FVector ActorOffset = FVector(0, 0, 0);
    struct FRotator ActorRotationOffset = FRotator(0, 0, 0);
    bool RandomActors = true;
    double ActorDensity = 0.4000000059604645;
    struct FLinearColor PipeColor = FLinearColor(0,484375, 0,187981, 0,045526, 0);
    struct FActorTickFunction PrimaryActorTick = {
        "bStartWithTickEnabled": false
    };
    class UHierarchicalInstancedStaticMeshComponent* PillarStartMeshes;
    class UHierarchicalInstancedStaticMeshComponent* PillarEndMeshes;
    class UHierarchicalInstancedStaticMeshComponent* PillarMiddleMeshes;
    class USceneComponent* DefaultSceneRoot;
    TArray<class UHierarchicalInstancedStaticMeshComponent*>* StraightHISMs;
    TArray<class UHierarchicalInstancedStaticMeshComponent*>* LeftHISMs;
    TArray<class UHierarchicalInstancedStaticMeshComponent*>* RightHISMs;
    TArray<class UHierarchicalInstancedStaticMeshComponent*>* UpHISMs;
    TArray<class UHierarchicalInstancedStaticMeshComponent*>* DownHISMs;
    bool LOCKED;
    int RandomSeed;
    bool TracingMode;
    E_Pipe_Aligment AligmentMode;
    bool StaticMeshVersion;
    TArray<class UHierarchicalInstancedStaticMeshComponent*>* ScatterHISMs;
    TArray<E_Pipe_Directions> GivenDirections;
    bool UseSocketScattering;
    TArray<double> GivenDistances;
    TArray<class UArrowComponent*>* GivenGuides;
    double PillarMeshStartOffset;
    TArray<TSubclassOf<AActor>> Actors;
    bool ScatterActors;
    class UMaterialInstanceDynamic* PipeMatInst;

};