class ABP_Spline_Plants_C : public ABP_P_Spline_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Blueprints/Environment/Splines/BP_Spline_Plants.BP_Spline_Plants_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Blueprints/Environment/Splines/BP_Spline_Plants.BP_Spline_Plants_C:InheritableComponentHandler'";
    TArray<class UObject*> SplineMeshes = {
        nullptr
    };
    double Spacing = 600;
    double TangentScale = 600;
    TArray<class UStaticMesh*> HISMMeshes = {
        "StaticMesh'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Models/Structure/Medium/SM_Rect_Base_1X2.SM_Rect_Base_1X2'"
    };
    int32 HISMLastCutoff = 0;
    int32 HISMFirstCutoff = 0;
    bool HISMRandomOrder = true;
    double HISMSpacing = 200;
    double HISMFlipYawAngle = 0;
    bool SpawnActors = true;
    TArray<class UBlueprintGeneratedClass*> Actors = {
        "BlueprintGeneratedClass'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Blueprints/Furniture/BP_Floor_Light1.BP_Floor_Light1_C'"
    };
    int32 ActorLastCutoff = 0;
    int32 ActorFirstCutoff = 0;
    bool ActorRandomOrder = true;
    bool HISMRandomYaw = true;
    TArray<double> HISMRandomYaws = {
        2,
        -2
    };
    bool SpawnSplineDebris = false;
    bool SpawnPillarDebris = false;
    struct FVector ScatterDimensions = FVector(400, 200, 100);
    int32 ScatterDensity = 3;
    int32 DebrisCullDistance = 8000;
    bool UseEndPillar = false;
    bool UseStartPillar = false;
    bool AllowSplineMesh = false;
    double PillarSpacing = 300;
    int32 PillarLastCutoff = 0;
    int32 PillarFirstCutoff = 0;
    double PillarStartOffset = -20;
    bool HISMScaleFill = false;
    double PillarFillOffset = -80;
    struct FVector ActorOffset = FVector(0, 5, 65);
    double MinAllowedDistance = 20;
    enum ECollisionEnabled DebrisCollision = ECollisionEnabled::QueryAndPhysics;
    bool DebrisConstraitMode = false;
    TArray<class UObject*> DecoMeshes = {
        nullptr
    };
    enum ECollisionEnabled DecoCollision = ECollisionEnabled::NoCollision;
    int32 DecoMeshNumber = 0;
    int32 DecoLastCutoff = 0;
    int32 DecoFirstCutoff = 0;
    TArray<double> ActorRandomYaws = {};
    bool ActorRandomDeletion = true;
    int32 HISMCullDistance = 18000;
    bool IgnoreSplineRotation = true;
    bool IgnoreSelfWhenScattering = true;
    TArray<class UStaticMesh*> SocketMeshes = {
        "StaticMesh'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Models/Nature/Foliage/SM_Fol_Fern1.SM_Fol_Fern1'",
        "StaticMesh'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Models/Nature/Foliage/SM_Fol_Fern2.SM_Fol_Fern2'",
        "StaticMesh'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Models/Nature/Foliage/SM_Fol_Fern3.SM_Fol_Fern3'"
    };
    bool AllowSocketMeshes = true;
    double SocketMeshScaleMin = 0.75;
    double SocketMeshScaleMax = 1.5;
};