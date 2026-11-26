class ABP_P_Spline_C : public AActor
{
public:
    TArray<class UChildActorComponent*> ComponentTemplates = {
        "HierarchicalInstancedStaticMeshComponent'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Blueprints/Environment/Splines/Parent/BP_P_Spline.BP_P_Spline_C:NODE_AddHierarchicalInstancedStaticMeshComponent-2'",
        "StaticMeshComponent'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Blueprints/Environment/Splines/Parent/BP_P_Spline.BP_P_Spline_C:NODE_AddStaticMeshComponent-4'",
        "SplineMeshComponent'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Blueprints/Environment/Splines/Parent/BP_P_Spline.BP_P_Spline_C:NODE_AddSplineMeshComponent-7'",
        "ChildActorComponent'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Blueprints/Environment/Splines/Parent/BP_P_Spline.BP_P_Spline_C:NODE_AddChildActorComponent-0'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Blueprints/Environment/Splines/Parent/BP_P_Spline.BP_P_Spline_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Blueprints/Environment/Splines/Parent/BP_P_Spline.BP_P_Spline_C:InheritableComponentHandler'";
    TArray<class UStaticMesh*> SplineMeshes = {
        "StaticMesh'Engine/Content/EngineMeshes/Cube.Cube'"
    };
    bool AllowInstancedMeshes = true;
    double Spacing = 300;
    double TangentScale = 300;
    TArray<class UStaticMesh*> HISMMeshes = {
        "StaticMesh'Engine/Content/EngineMeshes/Cube.Cube'",
        "StaticMesh'Engine/Content/EngineMeshes/Cube.Cube'"
    };
    int32 HISMLastCutoff = 1;
    int32 HISMFirstCutoff = 1;
    int32 HISMMeshNumber = 1;
    double HISMSpacing = 300;
    double HISMFlipYawAngle = 180;
    double ActorSpacing = 300;
    int32 ActorLastCutoff = 1;
    int32 ActorFirstCutoff = 1;
    int32 ActorNumber = 1;
    TArray<double> HISMRandomYaws = {
        30,
        60,
        -60,
        -40,
        -80,
        15
    };
    bool SpawnSplineDebris = true;
    bool SpawnPillarDebris = true;
    double DebrisSpacing = 500;
    struct FVector ScatterDimensions = FVector(400, 400, 100);
    double ScatterDistance = 150;
    int32 ScatterDensity = 20;
    TArray<class UStaticMesh*> ScatteringMeshes = {
        "StaticMesh'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Models/Structure/Helpers/SM_Helper_Debris.SM_Helper_Debris'"
    };
    int32 DebrisCullDistance = 6800;
    struct FRandomStream RandomSeedStruct = {
        "InitialSeed": 0,
        "Seed": 0
    };
    bool UseEndPillar = true;
    bool UseStartPillar = true;
    class UStaticMesh* PillarMiddleMesh = "StaticMesh'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Models/Structure/Shared/SM_Pillar_Rect_Midddle.SM_Pillar_Rect_Midddle'";
    class UStaticMesh* PillarEndMesh = "StaticMesh'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Models/Structure/Shared/SM_Pillar_Rect_Start.SM_Pillar_Rect_Start'";
    class UStaticMesh* PillarStartMesh = "StaticMesh'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Models/Structure/Shared/SM_Pillar_Rect_End.SM_Pillar_Rect_End'";
    bool AllowSplineMesh = true;
    double PillarSpacing = 800;
    int32 PillarLastCutoff = 1;
    int32 PillarFirstCutoff = 1;
    double PillarStartOffset = -150;
    double ScatterPlane = 1;
    bool HISMScaleFill = true;
    double HISMScaleFillFactor = 10;
    double HISMScaleFillMin = 1;
    double HISMScaleFillMax = 2;
    double PillarFillOffset = -400;
    struct FVector ActorOffset = FVector(0, 0, 0);
    double MinAllowedDistance = 500;
    bool HISMPlanarConstrained = true;
    enum ECollisionEnabled HISMCollision = ECollisionEnabled::QueryAndPhysics;
    bool DebrisConstraitMode = true;
    TArray<class UStaticMesh*> DecoMeshes = {
        "StaticMesh'Engine/Content/EngineMeshes/Cube.Cube'",
        "StaticMesh'Engine/Content/EngineMeshes/Cube.Cube'"
    };
    enum ECollisionEnabled DecoCollision = ECollisionEnabled::QueryAndPhysics;
    int32 DecoMeshNumber = 1;
    int32 DecoLastCutoff = 1;
    int32 DecoFirstCutoff = 1;
    bool DecoRandomOrder = true;
    double DecosSpacing = 700;
    struct FRotator HISMRotationOffset = FRotator(0, 0, 0);
    struct FRotator ActorRotationOffset = FRotator(0, 0, 0);
    TArray<double> ActorRandomYaws = {
        15,
        -15,
        5,
        8,
        10,
        -10
    };
    struct FVector HISMLocationOffset = FVector(0, 0, 0);
    TArray<class UStaticMesh*> SocketMeshes = {
        "StaticMesh'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Models/Nature/Foliage/SM_Fol_Ivy_Hanging1.SM_Fol_Ivy_Hanging1'",
        "StaticMesh'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Models/Nature/Foliage/SM_Fol_Ivy_Hanging2.SM_Fol_Ivy_Hanging2'",
        "StaticMesh'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Models/Nature/Foliage/SM_Fol_Ivy_Hanging3.SM_Fol_Ivy_Hanging3'",
        "StaticMesh'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Models/Nature/Foliage/SM_Fol_Ivy_Hanging4.SM_Fol_Ivy_Hanging4'"
    };
    double SocketMeshScaleMin = 1;
    double SocketMeshScaleMax = 1;
    struct FRotator SocketMeshRotationOffset = FRotator(0, 0, 0);
    int32 SocketMeshCullDistance = 5500;
    struct FActorTickFunction PrimaryActorTick = {
        "bStartWithTickEnabled": false
    };
    class USceneComponent* StaticMeshes;
    class UTextRenderComponent* EndText;
    class UTextRenderComponent* StartText;
    class UHierarchicalInstancedStaticMeshComponent* PillarStartMeshes;
    class UHierarchicalInstancedStaticMeshComponent* PillarEndMeshes;
    class UHierarchicalInstancedStaticMeshComponent* PillarMiddleMeshes;
    class UBoxComponent* ScatterBox;
    class USplineComponent* Spline;
    int MeshNumber;
    TArray<class UHierarchicalInstancedStaticMeshComponent*>* SplineHISMComponents;
    bool HISMRandomOrder;
    bool HISMFlipYaw;
    bool SpawnActors;
    TArray<TSubclassOf<AActor>> Actors;
    bool ActorFlipYaw;
    bool ActorRandomOrder;
    bool ActorRandomYaw;
    bool HISMRandomYaw;
    bool FastEditing;
    E_Scatter_Type ScatterType;
    TArray<class UHierarchicalInstancedStaticMeshComponent*>* ScatteringHISMs;
    int SeedNumber;
    bool UsePillars;
    byte DebrisCollision;
    bool HISMRandomDeletion;
    bool UseDecoSplines;
    TArray<class UHierarchicalInstancedStaticMeshComponent*>* SplineDecoComponents;
    bool ActorRandomDeletion;
    int HISMCullDistance;
    bool IgnoreSplineRotation;
    bool IgnoreSelfWhenScattering;
    bool StaticMeshVersion;
    TArray<class UHierarchicalInstancedStaticMeshComponent*>* SocketHISMs;
    bool AllowSocketMeshes;

};