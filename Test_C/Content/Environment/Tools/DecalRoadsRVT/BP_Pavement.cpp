class ABP_Pavement_C : public ABP_DecalRoad_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Environment/Tools/DecalRoadsRVT/BP_Pavement.BP_Pavement_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Environment/Tools/DecalRoadsRVT/BP_Pavement.BP_Pavement_C:InheritableComponentHandler'";
    double Segment Length = 500;
    int32 Last Index = 3;
    double Segment Length Correction = 464.90185546875;
    enum E_Side_Lines_Type Side Lines = E_Side_Lines_Type::NewEnumerator0;
    enum E_Lines_type Center Lines = E_Lines_type::NewEnumerator0;
    enum E_Specular_type Specular Type = E_Specular_type::NewEnumerator0;
    int32 Index = 3;
    class UTexture2D* Albedo 1 = "Texture2D'Test_C/Content/Environment/Tools/DecalRoadsRVT/Textures/Roads/T_pavement_COL.T_pavement_COL'";
    class UTexture2D* Normal 1 = "Texture2D'Test_C/Content/Environment/Tools/DecalRoadsRVT/Textures/Roads/T_pavement_NRM.T_pavement_NRM'";
    class UTexture2D* Roughness = "Texture2D'Test_C/Content/Environment/Tools/DecalRoadsRVT/Textures/Roads/T_pavement_RGH.T_pavement_RGH'";
    class UTexture2D* Specular = "Texture2D'Test_C/Content/Environment/Tools/DecalRoadsRVT/Textures/Misc/T_Specular_05.T_Specular_05'";
    bool Mesh Road? = true;
    int32 Translucent Sort Priority = 11;
    double Width = 0.6499999761581421;
    double Specular multiplier = 0.800000011920929;
    double Normals multiplier = 0.6000000238418579;
};