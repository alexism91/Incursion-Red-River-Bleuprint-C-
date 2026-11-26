class ABP_IRR_Road_Highway_C : public ABP_IRR_Road_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Environment/Blueprints/Splines/BP_IRR_Road_Highway.BP_IRR_Road_Highway_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Environment/Blueprints/Splines/BP_IRR_Road_Highway.BP_IRR_Road_Highway_C:InheritableComponentHandler'";
    double Segment Length = 2000;
    TArray<class UStaticMesh*> Default meshes = {
        "StaticMesh'Test_C/Content/SM_IRR_Highway.SM_IRR_Highway'"
    };
};