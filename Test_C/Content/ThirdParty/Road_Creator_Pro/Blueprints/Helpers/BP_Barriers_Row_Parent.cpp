class ABP_Barriers_Row_Parent_C : public AActor
{
public:
    TArray<class UStaticMeshComponent*> ComponentTemplates = {
        "StaticMeshComponent'Test_C/Content/ThirdParty/Road_Creator_Pro/Blueprints/Helpers/BP_Barriers_Row_Parent.BP_Barriers_Row_Parent_C:NODE_AddStaticMeshComponent-1'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/ThirdParty/Road_Creator_Pro/Blueprints/Helpers/BP_Barriers_Row_Parent.BP_Barriers_Row_Parent_C:SimpleConstructionScript_0'";
    int32 Poles = 4;
    double Spacing = 100;
    class UStaticMesh* Main Mesh = "StaticMesh'Test_C/Content/ThirdParty/Road_Creator_Pro/Meshes/Parking_Poles/SM_Parking_Pole_1.SM_Parking_Pole_1'";
    double Additional Panel Scale divider = 1;
    bool Pivot at Center of Pole Mesh = true;
    bool Receives Decals = true;
    struct FActorTickFunction PrimaryActorTick = {
        "bStartWithTickEnabled": false
    };
    class USplineComponent* Spline;
    class UInstancedStaticMeshComponent* InstancedStaticMesh_Panel;
    class UInstancedStaticMeshComponent* InstancedStaticMesh_Chain;
    class UInstancedStaticMeshComponent* InstancedStaticMesh_MainMesh;
    class USceneComponent* DefaultSceneRoot;
    bool Use Spline;
    bool Straight Lines Spline;
    bool Chain;
    class UMaterialInterface* Main Mesh Material;
    class UMaterialInterface* Main Mesh Material 2;
    class UMaterialInterface* Chain Material;
    class UStaticMesh* Panel Mesh;
    class UMaterialInterface* Panel Material;
    double Spacing calculated;
    double Pole Rotation;
    bool Keep Vertical;
    bool Invert direction;
    double Direction Multiplier;
    bool No last pole;
    bool Physics Enabled Meshes;
    TArray<struct FTransform> Main Mesh Transforms;
    bool 🏔 Align spline points to Landscape;
    bool 🏔 Align each mesh to environemt;
    double Chain Height;
    double 🏔 Align Offset;

};