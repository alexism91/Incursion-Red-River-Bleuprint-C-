class ABP_Spline+_IRR_C : public AActor
{
public:
    TArray<class USplineComponent*> ComponentTemplates = {
        "HierarchicalInstancedStaticMeshComponent'Test_C/Content/Environment/Tools/Spline+/Blueprints/BP_Spline+_IRR.BP_Spline+_IRR_C:NODE_AddHierarchicalInstancedStaticMeshComponent-0'",
        "StaticMeshComponent'Test_C/Content/Environment/Tools/Spline+/Blueprints/BP_Spline+_IRR.BP_Spline+_IRR_C:NODE_AddStaticMeshComponent-2'",
        "SplineMeshComponent'Test_C/Content/Environment/Tools/Spline+/Blueprints/BP_Spline+_IRR.BP_Spline+_IRR_C:NODE_AddSplineMeshComponent-15'",
        "SplineMeshComponent'Test_C/Content/Environment/Tools/Spline+/Blueprints/BP_Spline+_IRR.BP_Spline+_IRR_C:NODE_AddSplineMeshComponent-36'",
        "SplineMeshComponent'Test_C/Content/Environment/Tools/Spline+/Blueprints/BP_Spline+_IRR.BP_Spline+_IRR_C:NODE_AddSplineMeshComponent-39'",
        "SplineMeshComponent'Test_C/Content/Environment/Tools/Spline+/Blueprints/BP_Spline+_IRR.BP_Spline+_IRR_C:NODE_AddSplineMeshComponent-40'",
        "SplineMeshComponent'Test_C/Content/Environment/Tools/Spline+/Blueprints/BP_Spline+_IRR.BP_Spline+_IRR_C:NODE_AddSplineMeshComponent-41'",
        "ChildActorComponent'Test_C/Content/Environment/Tools/Spline+/Blueprints/BP_Spline+_IRR.BP_Spline+_IRR_C:NODE_AddChildActorComponent-3'",
        "SplineComponent'Test_C/Content/Environment/Tools/Spline+/Blueprints/BP_Spline+_IRR.BP_Spline+_IRR_C:NODE_AddSplineComponent-0'",
        "SplineComponent'Test_C/Content/Environment/Tools/Spline+/Blueprints/BP_Spline+_IRR.BP_Spline+_IRR_C:NODE_AddSplineComponent-1'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Environment/Tools/Spline+/Blueprints/BP_Spline+_IRR.BP_Spline+_IRR_C:SimpleConstructionScript_1'";
    double MeshLengthSpawnThreshold (Repeating) = 61.25;
    struct FRandomStream Random Stream = {
        "InitialSeed": 0,
        "Seed": 0
    };
    enum E_SplinePeriodic_StaticMeshType PeriodicStaticMeshType = E_SplinePeriodic_StaticMeshType::NewEnumerator2;
    double Height Offset, cm = 5;
    double 🏔 Side Falloff, m = 6;
    bool Raise Heights = true;
    bool Lower Heights = true;
    FName Edit Layer Name = FName("Splines");
    bool Use Middle Mesh [0] Width = true;
    TArray<FName> Tags = {
        FName("Road")
    };
    class USplineComponent* Spline;
    class USceneComponent* DefaultSceneRoot;
    bool GenerateMaterials;
    byte Mobility;
    byte SplineCollisions;
    bool Linear Curve;
    TArray<struct FST_SplineMesh_Properties> SplineMesh_Properties;
    TMap<class UStaticMesh*, class UInstancedStaticMeshComponent*>* StaticMeshInstances;
    TArray<struct FST_SplineActors_Properties> SplineActor_Properties;
    int SplineSequenceNumber;
    TArray<class UStaticMeshComponent*>* StaticMeshes;
    class ALandscapeProxy* Landscape to deform;
    class AStaticMeshActor* Pick Mesh to Conform;
    class ULandscapeLayerInfoObject* Paint Layer;
    double DeformWidth;
    class UInstancedStaticMeshComponent* ISM Deform Preview Planes;
    bool Closed Loop;

};