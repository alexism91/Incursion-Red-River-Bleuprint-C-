class ABP_IRR_Road_Muddy_C : public ABP_IRR_Road_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Environment/Blueprints/Splines/BP_IRR_Road_Muddy.BP_IRR_Road_Muddy_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Environment/Blueprints/Splines/BP_IRR_Road_Muddy.BP_IRR_Road_Muddy_C:InheritableComponentHandler'";
    TArray<class UStaticMesh*> Default meshes = {
        "StaticMesh'Test_C/Content/Environment/Assets/Props/SculptRoad_Muddy/SM_MudRoads_A.SM_MudRoads_A'",
        "StaticMesh'Test_C/Content/Environment/Assets/Props/SculptRoad_Muddy/SM_MudRoads_B.SM_MudRoads_B'",
        "StaticMesh'Test_C/Content/Environment/Assets/Props/SculptRoad_Muddy/SM_MudRoads_C.SM_MudRoads_C'"
    };
    double Mesh Y offset = 0;
};