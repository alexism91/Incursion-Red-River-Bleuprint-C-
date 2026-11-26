class ABP_Spline_HexaStruct1_C : public ABP_P_Spline_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Blueprints/Environment/Splines/BP_Spline_HexaStruct1.BP_Spline_HexaStruct1_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Blueprints/Environment/Splines/BP_Spline_HexaStruct1.BP_Spline_HexaStruct1_C:InheritableComponentHandler'";
    TArray<class UObject*> SplineMeshes = {
        nullptr
    };
    double Spacing = 2000;
    double TangentScale = 2000;
    TArray<class UStaticMesh*> HISMMeshes = {
        "StaticMesh'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Models/Structure/Medium/SM_Structure_Hexa1_Top.SM_Structure_Hexa1_Top'"
    };
    int32 HISMLastCutoff = 0;
    int32 HISMFirstCutoff = 0;
    bool HISMRandomOrder = true;
    double HISMFlipYawAngle = 0;
    bool SpawnActors = true;
    TArray<class UObject*> Actors = {
        nullptr
    };
    double ActorSpacing = 3000;
    int32 ActorLastCutoff = 0;
    int32 ActorFirstCutoff = 0;
    bool SpawnSplineDebris = false;
    bool SpawnPillarDebris = false;
    struct FVector ScatterDimensions = FVector(450, 450, 10);
    double ScatterDistance = 10;
    int32 ScatterDensity = 3;
    TArray<class UObject*> ScatteringMeshes = {
        nullptr,
        nullptr,
        nullptr,
        nullptr
    };
    bool UsePillars = true;
    bool UseStartPillar = false;
    class UStaticMesh* PillarMiddleMesh = "StaticMesh'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Models/Structure/Medium/SM_Structure_Hexa1_Middle.SM_Structure_Hexa1_Middle'";
    class UStaticMesh* PillarEndMesh = "StaticMesh'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Models/Structure/Medium/SM_Structure_Hexa1_Middle.SM_Structure_Hexa1_Middle'";
    bool AllowSplineMesh = false;
    double PillarSpacing = 300;
    int32 PillarLastCutoff = 0;
    int32 PillarFirstCutoff = 0;
    double PillarStartOffset = 0;
    bool HISMScaleFill = false;
    double HISMScaleFillMax = 1;
    double PillarFillOffset = -110;
    double MinAllowedDistance = 70;
    enum ECollisionEnabled DebrisCollision = ECollisionEnabled::QueryAndPhysics;
    bool HISMPlanarConstrained = false;
    bool DebrisConstraitMode = false;
    TArray<UObject*> DecoMeshes = {};
    enum ECollisionEnabled DecoCollision = ECollisionEnabled::NoCollision;
    int32 DecoMeshNumber = 0;
    int32 DecoLastCutoff = 0;
    int32 DecoFirstCutoff = 0;
    TArray<double> ActorRandomYaws = {};
    bool IgnoreSplineRotation = true;
    TArray<class UStaticMesh*> SocketMeshes = {
        "StaticMesh'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Models/Nature/Foliage/SM_Fol_Ivy_Hanging5.SM_Fol_Ivy_Hanging5'",
        "StaticMesh'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Models/Nature/Foliage/SM_Fol_Ivy_Hanging6.SM_Fol_Ivy_Hanging6'"
    };
    bool AllowSocketMeshes = true;
    double SocketMeshScaleMax = 2;
    int32 SocketMeshCullDistance = 9500;
};