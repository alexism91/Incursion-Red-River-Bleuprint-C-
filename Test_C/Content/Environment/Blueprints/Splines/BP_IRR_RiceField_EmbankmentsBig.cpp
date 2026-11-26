class ABP_IRR_RiceField_EmbankmentsBig_C : public ABP_IRR_Road_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Environment/Blueprints/Splines/BP_IRR_RiceField_EmbankmentsBig.BP_IRR_RiceField_EmbankmentsBig_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Environment/Blueprints/Splines/BP_IRR_RiceField_EmbankmentsBig.BP_IRR_RiceField_EmbankmentsBig_C:InheritableComponentHandler'";
    double Segment Length = 700;
    bool Stick to ground? = false;
    TArray<class UStaticMesh*> Default meshes = {
        "StaticMesh'Test_C/Content/Environment/Assets/Splines/Ricefield_Embankment/SM_Ricefield_EmbankmentBig_A.SM_Ricefield_EmbankmentBig_A'",
        "StaticMesh'Test_C/Content/Environment/Assets/Splines/Ricefield_Embankment/SM_Ricefield_EmbankmentBig_B.SM_Ricefield_EmbankmentBig_B'",
        "StaticMesh'Test_C/Content/Environment/Assets/Splines/Ricefield_Embankment/SM_Ricefield_EmbankmentBig_C.SM_Ricefield_EmbankmentBig_C'",
        "StaticMesh'Test_C/Content/Environment/Assets/Splines/Ricefield_Embankment/SM_Ricefield_EmbankmentBig_D.SM_Ricefield_EmbankmentBig_D'"
    };
    double Mesh Z offset = 0;
    double Mesh Y offset = 0;
};