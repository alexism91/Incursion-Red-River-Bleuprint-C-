class ABP_IRR_Road_Asphalt_C : public ABP_IRR_Road_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Environment/Assets/Props/UrbanRoads/BP_IRR_Road_Asphalt.BP_IRR_Road_Asphalt_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Environment/Assets/Props/UrbanRoads/BP_IRR_Road_Asphalt.BP_IRR_Road_Asphalt_C:InheritableComponentHandler'";
    double Segment Length = 1200;
    TArray<class UStaticMesh*> Default meshes = {
        "StaticMesh'Test_C/Content/Environment/Assets/Props/UrbanRoads/SM_Urban_Road_A.SM_Urban_Road_A'",
        "StaticMesh'Test_C/Content/Environment/Assets/Props/UrbanRoads/SM_Urban_Road_A.SM_Urban_Road_A'",
        "StaticMesh'Test_C/Content/Environment/Assets/Props/UrbanRoads/SM_Urban_Road_A.SM_Urban_Road_A'"
    };
};