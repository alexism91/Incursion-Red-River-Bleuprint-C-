class ABP_IRR_Road_Dirt_Path_C : public ABP_IRR_Road_Muddy_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Environment/Blueprints/Splines/BP_IRR_Road_Dirt_Path.BP_IRR_Road_Dirt_Path_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Environment/Blueprints/Splines/BP_IRR_Road_Dirt_Path.BP_IRR_Road_Dirt_Path_C:InheritableComponentHandler'";
    int32 Last Index = 0;
    double Segment Length Correction = 603.5001220703125;
    int32 Index = 0;
    TArray<class UStaticMesh*> Default meshes = {
        "StaticMesh'Test_C/Content/Environment/Assets/Splines/GravelRoad/SM_GravelRoad.SM_GravelRoad'"
    };
    double Mesh Z offset = 6.220117;
    double Base Width = 160;
    double Side falloff = 175;
    class ULandscapeLayerInfoObject* Paint layer (including falloff) = "LandscapeLayerInfoObject'Test_C/Content/Environment/Misc/LandscapeLayers/LandscapeLayer_Mud.LandscapeLayer_Mud'";
};