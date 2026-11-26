class ABP_EmbankmentSpline_C : public AActor
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Environment/Assets/Splines/Ricefield_Embankment/BP_EmbankmentSpline.BP_EmbankmentSpline_C:SimpleConstructionScript_0'";
    double SplineLength = 400;
    class UPCGComponent* PCG;
    class USplineComponent* Spline;
    class USceneComponent* DefaultSceneRoot;
    class UStaticMesh* PCGMainMesh;
    TArray<class UStaticMesh*> RandomMeshArray;

};