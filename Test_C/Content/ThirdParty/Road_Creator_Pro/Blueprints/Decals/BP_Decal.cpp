class ABP_Decal_C : public AActor
{
public:
    TArray<class UDecalComponent*> ComponentTemplates = {
        "DecalComponent'Test_C/Content/ThirdParty/Road_Creator_Pro/Blueprints/Decals/BP_Decal.BP_Decal_C:NODE_AddDecalComponent-0'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/ThirdParty/Road_Creator_Pro/Blueprints/Decals/BP_Decal.BP_Decal_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/Road_Creator_Pro/Blueprints/Decals/BP_Decal.BP_Decal_C:ExecuteUbergraph_BP_Decal'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    class UTexture2D* Decal Texture = "Texture2D'Test_C/Content/ThirdParty/Road_Creator_Pro/Textures/Markings/T_Arrow_Straight.T_Arrow_Straight'";
    struct FColor Color = FColor(187, 187, 187, 255);
    double Opacity = 1;
    double Line Width, cm = 14;
    struct FVector Scale = FVector(1, 1, 1);
    double Size, m = 5;
    double Size normalized = 1;
    double Cracks Amount = 0.6;
    double Height = 30;
    double Dashed Gap = 0.5;
    double Dashed Period, m = 4;
    struct FVector2D Texture Size record = FVector2D(0, 0);
    double Spline Line Segment Length, m = 1;
    struct FActorTickFunction PrimaryActorTick = {
        "bStartWithTickEnabled": false
    };
    class USplineComponent* Spline;
    class UDecalComponent* Decal;
    class UBillboardComponent* Billboard;
    class USceneComponent* DefaultSceneRoot;
    int Sort Order;
    bool Line;
    bool Spline line;
    bool Dashed Line;
    bool Mirror;
    class UMaterialInstanceDynamic* Decal Material;
    bool Retro-Reflective;

};