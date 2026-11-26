class ABP_DecalRoad_C : public AActor
{
public:
    TArray<class USplineComponent*> ComponentTemplates = {
        "SplineMeshComponent'Test_C/Content/Environment/Tools/DecalRoadsRVT/BP_DecalRoad.BP_DecalRoad_C:NODE_AddSplineMeshComponent-1'",
        "HierarchicalInstancedStaticMeshComponent'Test_C/Content/Environment/Tools/DecalRoadsRVT/BP_DecalRoad.BP_DecalRoad_C:NODE_AddHierarchicalInstancedStaticMeshComponent-0'",
        "SplineMeshComponent'Test_C/Content/Environment/Tools/DecalRoadsRVT/BP_DecalRoad.BP_DecalRoad_C:NODE_AddSplineMeshComponent-3'",
        nullptr,
        "SplineComponent'Test_C/Content/Environment/Tools/DecalRoadsRVT/BP_DecalRoad.BP_DecalRoad_C:NODE_AddSplineComponent-1'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Environment/Tools/DecalRoadsRVT/BP_DecalRoad.BP_DecalRoad_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Environment/Tools/DecalRoadsRVT/BP_DecalRoad.BP_DecalRoad_C:ExecuteUbergraph_BP_DecalRoad'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    double Segment Length = 1000;
    TArray<class URuntimeVirtualTexture*> Draw in VTs = {
        "RuntimeVirtualTexture'Test_C/Content/Environment/Tools/DecalRoadsRVT/Preview/EasyDecalRoadsRVT_Preview_RVT.EasyDecalRoadsRVT_Preview_RVT'"
    };
    enum E_Side_Lines_Type Side Lines = E_Side_Lines_Type::NewEnumerator2;
    enum E_Lines_type Center Lines = E_Lines_type::NewEnumerator1;
    TMap<enum E_Side_Lines_Type, class UObject*> Side Lines Map COL = {
        { E_Side_Lines_Type::NewEnumerator1, "Texture2D'Test_C/Content/Environment/Tools/DecalRoadsRVT/Textures/Lines/T_Road_lines_COL.T_Road_lines_COL'" }, 
        { E_Side_Lines_Type::NewEnumerator2, "Texture2D'Test_C/Content/Environment/Tools/DecalRoadsRVT/Textures/Lines/T_Lines_Wide_COL.T_Lines_Wide_COL'" }, 
        { E_Side_Lines_Type::NewEnumerator3, "Texture2D'Test_C/Content/Environment/Tools/DecalRoadsRVT/Textures/Lines/T_Highway_side_COL.T_Highway_side_COL'" }, 
        { E_Side_Lines_Type::NewEnumerator0, nullptr }
    };
    TMap<enum E_Side_Lines_Type, class UObject*> Side Lines Map NRM = {
        { E_Side_Lines_Type::NewEnumerator1, "Texture2D'Test_C/Content/Environment/Tools/DecalRoadsRVT/Textures/Lines/T_Road_lines_NRM.T_Road_lines_NRM'" }, 
        { E_Side_Lines_Type::NewEnumerator2, "Texture2D'Test_C/Content/Environment/Tools/DecalRoadsRVT/Textures/Lines/T_Lines_Wide_NRM.T_Lines_Wide_NRM'" }, 
        { E_Side_Lines_Type::NewEnumerator3, "Texture2D'Test_C/Content/Environment/Tools/DecalRoadsRVT/Textures/Lines/T_Highway_side_NRM.T_Highway_side_NRM'" }, 
        { E_Side_Lines_Type::NewEnumerator0, nullptr }
    };
    TMap<enum E_Lines_type, class UObject*> Center Lines Map COL = {
        { E_Lines_type::NewEnumerator7, "Texture2D'Test_C/Content/Environment/Tools/DecalRoadsRVT/Textures/Lines/T_Single_L_COL.T_Single_L_COL'" }, 
        { E_Lines_type::NewEnumerator5, "Texture2D'Test_C/Content/Environment/Tools/DecalRoadsRVT/Textures/Lines/T_Highway_COL.T_Highway_COL'" }, 
        { E_Lines_type::NewEnumerator4, "Texture2D'Test_C/Content/Environment/Tools/DecalRoadsRVT/Textures/Lines/T_Half_COL.T_Half_COL'" }, 
        { E_Lines_type::NewEnumerator3, "Texture2D'Test_C/Content/Environment/Tools/DecalRoadsRVT/Textures/Lines/T_Half_L_COL.T_Half_L_COL'" }, 
        { E_Lines_type::NewEnumerator2, "Texture2D'Test_C/Content/Environment/Tools/DecalRoadsRVT/Textures/Lines/T_Double_COL.T_Double_COL'" }, 
        { E_Lines_type::NewEnumerator1, "Texture2D'Test_C/Content/Environment/Tools/DecalRoadsRVT/Textures/Lines/T_Single_COL.T_Single_COL'" }, 
        { E_Lines_type::NewEnumerator0, nullptr }
    };
    TMap<enum E_Lines_type, class UObject*> Center Lines Map NRM = {
        { E_Lines_type::NewEnumerator7, "Texture2D'Test_C/Content/Environment/Tools/DecalRoadsRVT/Textures/Lines/T_Single_L_NRM.T_Single_L_NRM'" }, 
        { E_Lines_type::NewEnumerator5, "Texture2D'Test_C/Content/Environment/Tools/DecalRoadsRVT/Textures/Lines/T_Highway_NRM.T_Highway_NRM'" }, 
        { E_Lines_type::NewEnumerator4, "Texture2D'Test_C/Content/Environment/Tools/DecalRoadsRVT/Textures/Lines/T_Half_NRM.T_Half_NRM'" }, 
        { E_Lines_type::NewEnumerator3, "Texture2D'Test_C/Content/Environment/Tools/DecalRoadsRVT/Textures/Lines/T_Half_L_NRM.T_Half_L_NRM'" }, 
        { E_Lines_type::NewEnumerator2, "Texture2D'Test_C/Content/Environment/Tools/DecalRoadsRVT/Textures/Lines/T_Double_NRM.T_Double_NRM'" }, 
        { E_Lines_type::NewEnumerator1, "Texture2D'Test_C/Content/Environment/Tools/DecalRoadsRVT/Textures/Lines/T_Single_NRM.T_Single_NRM'" }, 
        { E_Lines_type::NewEnumerator0, nullptr }
    };
    TMap<enum E_Specular_type, class UTexture2D*> Specular Map = {
        { E_Specular_type::NewEnumerator3, "Texture2D'Test_C/Content/Environment/Tools/DecalRoadsRVT/Textures/Specular_Types/T_Specular_highway.T_Specular_highway'" }, 
        { E_Specular_type::NewEnumerator2, "Texture2D'Test_C/Content/Environment/Tools/DecalRoadsRVT/Textures/Specular_Types/T_Specular_add.T_Specular_add'" }, 
        { E_Specular_type::NewEnumerator1, "Texture2D'Test_C/Content/Environment/Tools/DecalRoadsRVT/Textures/Specular_Types/T_Specular_single_lane.T_Specular_single_lane'" }, 
        { E_Specular_type::NewEnumerator0, "Texture2D'Test_C/Content/Environment/Tools/DecalRoadsRVT/Textures/Specular_Types/T_Black_texture.T_Black_texture'" }, 
        { E_Specular_type::NewEnumerator4, "Texture2D'Test_C/Content/Environment/Tools/DecalRoadsRVT/Textures/Specular_Types/T_Specular_wide_lanes.T_Specular_wide_lanes'" }
    };
    double Center line width = 1;
    double Center line length = 1;
    double Start Falloff = 12;
    double End Fallof = 12;
    bool Auto Center Line? = true;
    double Tiling X = 1;
    double Tiling Y = 1;
    class UTexture2D* Albedo 1 = "Texture2D'Test_C/Content/Environment/Tools/DecalRoadsRVT/Textures/Roads/T_Asphalt_New_COL.T_Asphalt_New_COL'";
    class UTexture2D* Albedo 2 = "Texture2D'Test_C/Content/Environment/Tools/DecalRoadsRVT/Textures/Roads/T_RoadOld_2_COL.T_RoadOld_2_COL'";
    class UTexture2D* Normal 1 = "Texture2D'Test_C/Content/Environment/Tools/DecalRoadsRVT/Textures/Roads/T_Asphalt_New_NRM.T_Asphalt_New_NRM'";
    class UTexture2D* Normal 2 = "Texture2D'Test_C/Content/Environment/Tools/DecalRoadsRVT/Textures/Roads/T_RoadOld_2_NRM.T_RoadOld_2_NRM'";
    class UTexture2D* Roughness = "Texture2D'Test_C/Content/Environment/Tools/DecalRoadsRVT/Textures/Roads/T_Asphalt_New_RGH.T_Asphalt_New_RGH'";
    class UTexture2D* Specular = "Texture2D'Test_C/Content/Environment/Tools/DecalRoadsRVT/Textures/Roads/T_Asphalt_New_SPEC.T_Asphalt_New_SPEC'";
    bool Render in Main Pass? = true;
    bool Stick to ground? = true;
    int32 Translucent Sort Priority = 10;
    double Width = 1;
    TArray<class UClass*> Stick to = {
        "Class'/Script/Landscape.Landscape'",
        "Class'/Script/Landscape.LandscapeMeshProxyActor'",
        "Class'/Script/Landscape.LandscapeStreamingProxy'"
    };
    TArray<enum ObjectTypeQuery1> Stick to Object Types = {
        ObjectTypeQuery1
    };
    bool Enable collision when mesh road? = true;
    double Base Width = 500;
    double Side falloff = 500;
    FName Edit Layer Name = FName("Not working correctly with Edit Layers (Landmass plugin)");
    struct FLinearColor Center line color = FLinearColor(1, 1, 1, 1);
    struct FLinearColor Side lines color = FLinearColor(1, 1, 1, 1);
    double Mesh cull distance = 20000;
    double Deform Width multiplier = 1.5;
    class UStaticMesh* Road Decal Mesh = "StaticMesh'Test_C/Content/Environment/Tools/DecalRoadsRVT/Meshes/SM_road_decal_mesh.SM_road_decal_mesh'";
    double Roughness multiplier = 1;
    double Specular multiplier = 1;
    double Normals multiplier = 1;
    bool Raise terrain = true;
    bool Lower terrain = true;
    class UStaticMesh* Road Decal Mesh subdivided = "StaticMesh'Test_C/Content/Environment/Tools/DecalRoadsRVT/Meshes/SM_road_decal_mesh_subdivided.SM_road_decal_mesh_subdivided'";
    double Debug spheres segment length = 5000;
    struct FLinearColor Custom color = FLinearColor(1, 0, 0, 0);
    double Debug spheres scale = 1;
    double Roll scale = 1;
    class UMaterial* Custom road material = "Material'Test_C/Content/Environment/Tools/DecalRoadsRVT/Materials/M_Road_Custom_Example.M_Road_Custom_Example'";
    bool Hide mesh when selected = true;
    class USplineComponent* Spline;
    int Last Index;
    byte Forward Axis;
    double Segment Length Correction;
    E_Specular_type Specular Type;
    int Index;
    bool Border Mask?;
    bool Markings only?;
    bool Two layers?;
    bool Mesh Road?;
    class USplineMeshComponent* Current Spline Mesh;
    TArray<class UStaticMesh*> Default meshes;
    class UStaticMesh* First mesh;
    class UStaticMesh* Last mesh;
    double Mesh Z offset;
    bool Stick to filter?;
    TArray<class AActor*> Landscapes to deform;
    class ALandscape* As Landscape;
    class ULandscapeLayerInfoObject* Paint layer (no falloff);
    class ULandscapeLayerInfoObject* Paint layer (including falloff);
    class ALandscapeProxy* As Landscape Proxy;
    double Mesh Y offset;
    TArray<class USplineComponent*>* Splines Array;
    bool Precise segment length?;
    bool Left side traffic?;
    TMap<class ABP_DecalRoad_C*, struct FIntersection_type_struct> Intersections;
    bool Tiling by center;
    bool Mask center line tiling;
    bool Markings only with sidelines;
    bool Use subdivided mesh?;
    double Spline vertical offset;
    bool Custom road markers;
    bool Disable debug?;
    bool Use custom color;
    bool Improved roll calculation;
    bool Use custom road material;
    class UHierarchicalInstancedStaticMeshComponent* Instanced Mesh Comp;

};