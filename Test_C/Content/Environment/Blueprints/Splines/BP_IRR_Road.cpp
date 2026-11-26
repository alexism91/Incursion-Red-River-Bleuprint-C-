class ABP_IRR_Road_C : public ABP_Pavement_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Environment/Blueprints/Splines/BP_IRR_Road.BP_IRR_Road_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Environment/Blueprints/Splines/BP_IRR_Road.BP_IRR_Road_C:InheritableComponentHandler'";
    double Segment Length = 750;
    TArray<UObject*> Draw in VTs = {};
    int32 Last Index = 112;
    double Segment Length Correction = 746.4004424778761;
    int32 Index = 112;
    double Width = 1;
    double Mesh Z offset = 13.348727;
    double Base Width = 200;
    double Side falloff = 300;
    class ULandscapeLayerInfoObject* Paint layer (including falloff) = "LandscapeLayerInfoObject'Test_C/Content/Environment/Misc/LandscapeLayers/LandscapeLayer_Dirt.LandscapeLayer_Dirt'";
    double Mesh Y offset = -2.5;
    double Deform Width multiplier = 1.2;
    double Specular multiplier = 1;
    double Normals multiplier = 1;
    bool Improved roll calculation = true;
    TArray<FName> Tags = {
        FName("Road")
    };
};