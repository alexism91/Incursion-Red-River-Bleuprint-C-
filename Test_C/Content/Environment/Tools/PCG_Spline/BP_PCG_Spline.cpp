class ABP_PCG_Spline_C : public AActor
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Environment/Tools/PCG_Spline/BP_PCG_Spline.BP_PCG_Spline_C:SimpleConstructionScript_0'";
    struct FDataTableRowHandle Tags Table = {
        "DataTable": "DataTable'Test_C/Content/Environment/Tools/PCG_Spline/DataTables/DT_PathTags.DT_PathTags'",
        "RowName": FName("Road")
    };
    class USceneComponent* Scene;
    class UBillboardComponent* Billboard;
    class UPCGComponent* PCG;
    class USplineComponent* Spline;
    class UStaticMesh* Mesh;
    bool Linear;
    double MeshDensity;
    bool EnableMesh;
    class UStaticMesh* MeshRandom;
    TArray<struct FS_Items> PlaceableItems;
    TArray<struct FS_ItemsCurved> CurvedItems;
    double MeshRandomPercentage;

};