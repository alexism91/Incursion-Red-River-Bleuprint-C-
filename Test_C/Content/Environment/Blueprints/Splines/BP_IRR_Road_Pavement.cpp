class ABP_IRR_Road_Pavement_C : public ABP_IRR_Road_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Environment/Blueprints/Splines/BP_IRR_Road_Pavement.BP_IRR_Road_Pavement_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Environment/Blueprints/Splines/BP_IRR_Road_Pavement.BP_IRR_Road_Pavement_C:InheritableComponentHandler'";
    double Segment Length = 600;
    int32 Last Index = 3;
    double Segment Length Correction = 549.7807006835938;
    int32 Index = 3;
    TArray<class UStaticMesh*> Default meshes = {
        "StaticMesh'Test_C/Content/Environment/Assets/Props/Pavements/SM_Pavement_Delta_B_6Mx3M_509CFC98.SM_Pavement_Delta_B_6Mx3M_509CFC98'"
    };
    double Mesh Z offset = 0;
};