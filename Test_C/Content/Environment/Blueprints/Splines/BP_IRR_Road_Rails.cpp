class ABP_IRR_Road_Rails_C : public ABP_IRR_Road_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Environment/Blueprints/Splines/BP_IRR_Road_Rails.BP_IRR_Road_Rails_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Environment/Blueprints/Splines/BP_IRR_Road_Rails.BP_IRR_Road_Rails_C:InheritableComponentHandler'";
    double Segment Length = 2000;
    class UStaticMesh* First mesh = "StaticMesh'Test_C/Content/Environment/Assets/Props/Railroad/SM_Railroad_C.SM_Railroad_C'";
    double Width = 1.1;
    double Mesh Z offset = 0;
    double Base Width = 400;
    double Side falloff = 400;
    class ULandscapeLayerInfoObject* Paint layer (including falloff) = "LandscapeLayerInfoObject'Test_C/Content/Environment/Misc/LandscapeLayers/LandscapeLayer_Gravel.LandscapeLayer_Gravel'";
    class UStaticMesh* Road Decal Mesh = "StaticMesh'Test_C/Content/Environment/Assets/Props/Railroad/SM_Railroad_C.SM_Railroad_C'";
};