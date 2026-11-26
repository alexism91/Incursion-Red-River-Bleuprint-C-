class ABP_Decal_Ped_Crossing_C : public ABP_Decal_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/ThirdParty/Road_Creator_Pro/Blueprints/Decals/BP_Decal_Ped_Crossing.BP_Decal_Ped_Crossing_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/ThirdParty/Road_Creator_Pro/Blueprints/Decals/BP_Decal_Ped_Crossing.BP_Decal_Ped_Crossing_C:InheritableComponentHandler'";
    class UObject* Decal Texture = nullptr;
    bool Line = true;
    bool Dashed Line = true;
    double Size, m = 8;
    double Dashed Gap = 0.6;
    double Dashed Period, m = 1;
};