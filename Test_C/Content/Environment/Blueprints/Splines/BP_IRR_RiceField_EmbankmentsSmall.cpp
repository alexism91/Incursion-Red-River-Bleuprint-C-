class ABP_IRR_RiceField_EmbankmentsSmall_C : public ABP_IRR_Road_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Environment/Blueprints/Splines/BP_IRR_RiceField_EmbankmentsSmall.BP_IRR_RiceField_EmbankmentsSmall_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Environment/Blueprints/Splines/BP_IRR_RiceField_EmbankmentsSmall.BP_IRR_RiceField_EmbankmentsSmall_C:InheritableComponentHandler'";
    double Segment Length = 400;
    bool Stick to ground? = false;
    TArray<class UStaticMesh*> Default meshes = {
        "StaticMesh'Test_C/Content/Environment/Assets/Splines/Ricefield_Embankment/SM_Ricefield_EmbankmentSmall_A.SM_Ricefield_EmbankmentSmall_A'",
        "StaticMesh'Test_C/Content/Environment/Assets/Splines/Ricefield_Embankment/SM_Ricefield_EmbankmentSmall_B.SM_Ricefield_EmbankmentSmall_B'",
        "StaticMesh'Test_C/Content/Environment/Assets/Splines/Ricefield_Embankment/SM_Ricefield_EmbankmentSmall_C.SM_Ricefield_EmbankmentSmall_C'"
    };
    double Mesh Z offset = 0;
    double Mesh Y offset = 0;
};