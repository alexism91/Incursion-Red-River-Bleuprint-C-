class ABP_Spline_Cables_C : public AActor
{
public:
    TArray<class UStaticMeshComponent*> ComponentTemplates = {
        "SplineMeshComponent'Test_C/Content/ThirdParty/SD_Art/Oil_Rig/Blueprints/BP_Spline_Cables.BP_Spline_Cables_C:NODE_AddSplineMeshComponent-0'",
        "SplineMeshComponent'Test_C/Content/ThirdParty/SD_Art/Oil_Rig/Blueprints/BP_Spline_Cables.BP_Spline_Cables_C:NODE_AddSplineMeshComponent-1'",
        "SplineMeshComponent'Test_C/Content/ThirdParty/SD_Art/Oil_Rig/Blueprints/BP_Spline_Cables.BP_Spline_Cables_C:NODE_AddSplineMeshComponent-2'",
        "SplineMeshComponent'Test_C/Content/ThirdParty/SD_Art/Oil_Rig/Blueprints/BP_Spline_Cables.BP_Spline_Cables_C:NODE_AddSplineMeshComponent-3'",
        "SplineMeshComponent'Test_C/Content/ThirdParty/SD_Art/Oil_Rig/Blueprints/BP_Spline_Cables.BP_Spline_Cables_C:NODE_AddSplineMeshComponent-4'",
        "SplineMeshComponent'Test_C/Content/ThirdParty/SD_Art/Oil_Rig/Blueprints/BP_Spline_Cables.BP_Spline_Cables_C:NODE_AddSplineMeshComponent-5'",
        "StaticMeshComponent'Test_C/Content/ThirdParty/SD_Art/Oil_Rig/Blueprints/BP_Spline_Cables.BP_Spline_Cables_C:NODE_AddStaticMeshComponent-7'",
        "StaticMeshComponent'Test_C/Content/ThirdParty/SD_Art/Oil_Rig/Blueprints/BP_Spline_Cables.BP_Spline_Cables_C:NODE_AddStaticMeshComponent-8'",
        "StaticMeshComponent'Test_C/Content/ThirdParty/SD_Art/Oil_Rig/Blueprints/BP_Spline_Cables.BP_Spline_Cables_C:NODE_AddStaticMeshComponent-9'",
        "StaticMeshComponent'Test_C/Content/ThirdParty/SD_Art/Oil_Rig/Blueprints/BP_Spline_Cables.BP_Spline_Cables_C:NODE_AddStaticMeshComponent-10'",
        "StaticMeshComponent'Test_C/Content/ThirdParty/SD_Art/Oil_Rig/Blueprints/BP_Spline_Cables.BP_Spline_Cables_C:NODE_AddStaticMeshComponent-11'",
        "StaticMeshComponent'Test_C/Content/ThirdParty/SD_Art/Oil_Rig/Blueprints/BP_Spline_Cables.BP_Spline_Cables_C:NODE_AddStaticMeshComponent-12'",
        "StaticMeshComponent'Test_C/Content/ThirdParty/SD_Art/Oil_Rig/Blueprints/BP_Spline_Cables.BP_Spline_Cables_C:NODE_AddStaticMeshComponent-13'",
        "StaticMeshComponent'Test_C/Content/ThirdParty/SD_Art/Oil_Rig/Blueprints/BP_Spline_Cables.BP_Spline_Cables_C:NODE_AddStaticMeshComponent-14'",
        "StaticMeshComponent'Test_C/Content/ThirdParty/SD_Art/Oil_Rig/Blueprints/BP_Spline_Cables.BP_Spline_Cables_C:NODE_AddStaticMeshComponent-15'",
        "StaticMeshComponent'Test_C/Content/ThirdParty/SD_Art/Oil_Rig/Blueprints/BP_Spline_Cables.BP_Spline_Cables_C:NODE_AddStaticMeshComponent-16'",
        "StaticMeshComponent'Test_C/Content/ThirdParty/SD_Art/Oil_Rig/Blueprints/BP_Spline_Cables.BP_Spline_Cables_C:NODE_AddStaticMeshComponent-17'",
        "StaticMeshComponent'Test_C/Content/ThirdParty/SD_Art/Oil_Rig/Blueprints/BP_Spline_Cables.BP_Spline_Cables_C:NODE_AddStaticMeshComponent-18'",
        "StaticMeshComponent'Test_C/Content/ThirdParty/SD_Art/Oil_Rig/Blueprints/BP_Spline_Cables.BP_Spline_Cables_C:NODE_AddStaticMeshComponent-19'",
        "SplineMeshComponent'Test_C/Content/ThirdParty/SD_Art/Oil_Rig/Blueprints/BP_Spline_Cables.BP_Spline_Cables_C:NODE_AddSplineMeshComponent-6'",
        "StaticMeshComponent'Test_C/Content/ThirdParty/SD_Art/Oil_Rig/Blueprints/BP_Spline_Cables.BP_Spline_Cables_C:NODE_AddStaticMeshComponent-21'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/ThirdParty/SD_Art/Oil_Rig/Blueprints/BP_Spline_Cables.BP_Spline_Cables_C:SimpleConstructionScript_0'";
    class UMaterialInstanceConstant* Spline_Tiling_Material = "MaterialInstanceConstant'Test_C/Content/ThirdParty/SD_Art/Oil_Rig/Assets/Cable_Meshes/MI_Cables_Tiling_01.MI_Cables_Tiling_01'";
    struct FVector Vector_1 = FVector(0, 0, 0);
    struct FVector Vector_2 = FVector(0, 0, 0);
    class UStaticMesh* Spline Mesh = "StaticMesh'Test_C/Content/ThirdParty/SD_Art/Oil_Rig/Assets/Cable_Meshes/SM_Cable_Mod_Piece_Large_02_.SM_Cable_Mod_Piece_Large_02_'";
    class UStaticMesh* Cap Start = "StaticMesh'Test_C/Content/ThirdParty/SD_Art/Oil_Rig/Assets/Cable_Meshes/SM_Cable_Cap_Metal_Large_02_.SM_Cable_Cap_Metal_Large_02_'";
    class UStaticMesh* Cap_End = "StaticMesh'Test_C/Content/ThirdParty/SD_Art/Oil_Rig/Assets/Cable_Meshes/SM_Cable_Cap_Metal_Large_01_.SM_Cable_Cap_Metal_Large_01_'";
    double Texture_Tiling = 1;
    bool Custom_Color = true;
    struct FLinearColor Albedo_Color_Overlay = FLinearColor(1, 1, 1, 0);
    double Color_Mask_Intensity = 1;
    bool Flip_Cap_Start_Direction = true;
    class UStaticMesh* Spline Mesh_0 = "StaticMesh'Test_C/Content/ThirdParty/SD_Art/Oil_Rig/Assets/Cable_Meshes/SM_Cable_Mod_Piece_Large_02_.SM_Cable_Mod_Piece_Large_02_'";
    class UStaticMesh* Spline Mesh_1 = "StaticMesh'Test_C/Content/ThirdParty/SD_Art/Oil_Rig/Assets/Cable_Meshes/SM_Cable_Mod_Piece_Large_01_.SM_Cable_Mod_Piece_Large_01_'";
    class UStaticMesh* Spline Mesh_2 = "StaticMesh'Test_C/Content/ThirdParty/SD_Art/Oil_Rig/Assets/Cable_Meshes/SM_Cable_Mod_Piece_Medium_01_.SM_Cable_Mod_Piece_Medium_01_'";
    class UStaticMesh* Spline Mesh_3 = "StaticMesh'Test_C/Content/ThirdParty/SD_Art/Oil_Rig/Assets/Cable_Meshes/SM_Cable_Mod_Piece_Medium_02_.SM_Cable_Mod_Piece_Medium_02_'";
    class UStaticMesh* Spline Mesh_4 = "StaticMesh'Test_C/Content/ThirdParty/SD_Art/Oil_Rig/Assets/Cable_Meshes/SM_Cable_Mod_Piece_Small_01_.SM_Cable_Mod_Piece_Small_01_'";
    class UStaticMesh* Spline Mesh_5 = "StaticMesh'Test_C/Content/ThirdParty/SD_Art/Oil_Rig/Assets/Cable_Meshes/SM_Rope_Boat_Tiling.SM_Rope_Boat_Tiling'";
    class UStaticMesh* Cap_0 = "StaticMesh'Test_C/Content/ThirdParty/SD_Art/Oil_Rig/Assets/Cable_Meshes/SM_Cable_Cap_Metal_Large_01_.SM_Cable_Cap_Metal_Large_01_'";
    class UStaticMesh* Cap Start_0 = "StaticMesh'Test_C/Content/ThirdParty/SD_Art/Oil_Rig/Assets/Cable_Meshes/SM_Cable_Cap_Metal_Large_02_.SM_Cable_Cap_Metal_Large_02_'";
    class UStaticMesh* Cap Start_1 = "StaticMesh'Test_C/Content/ThirdParty/SD_Art/Oil_Rig/Assets/Cable_Meshes/SM_Cable_Cap_Plastic_Medium_01_.SM_Cable_Cap_Plastic_Medium_01_'";
    class UStaticMesh* Cap Start_2 = "StaticMesh'Test_C/Content/ThirdParty/SD_Art/Oil_Rig/Assets/Cable_Meshes/SM_Cable_Cap_Plastic_Small_01_.SM_Cable_Cap_Plastic_Small_01_'";
    class UStaticMesh* Cap Start_3 = "StaticMesh'Test_C/Content/ThirdParty/SD_Art/Oil_Rig/Assets/Cable_Meshes/SM_Cable_Harness_Hook_Small_01_.SM_Cable_Harness_Hook_Small_01_'";
    class UStaticMesh* Cap Start_4 = "StaticMesh'Test_C/Content/ThirdParty/SD_Art/Oil_Rig/Assets/Cable_Meshes/SM_Rope_Boat_EndPiece.SM_Rope_Boat_EndPiece'";
    struct FActorTickFunction PrimaryActorTick = {
        "bStartWithTickEnabled": false
    };
    class USplineComponent* Spline1;
    class USceneComponent* spline_mesh;
    class UMeshComponent* meshcomponent;
    E_Spline_Types Spline_Type;
    class UMaterialInstanceDynamic* Dynamic Material;
    class AActor* Target;
    double Dot_Product;
    double Dot_Var;
    byte Spline Mesh Forward Axis;
    bool Flip_Cap_End_Direction;

};