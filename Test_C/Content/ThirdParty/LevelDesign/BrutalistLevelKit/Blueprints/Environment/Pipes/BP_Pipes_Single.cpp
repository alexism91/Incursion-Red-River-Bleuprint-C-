class ABP_Pipes_Single_C : public ABP_P_PipeMaker_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Blueprints/Environment/Pipes/BP_Pipes_Single.BP_Pipes_Single_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Blueprints/Environment/Pipes/BP_Pipes_Single.BP_Pipes_Single_C:InheritableComponentHandler'";
    TArray<class UStaticMesh*> StraightMeshes = {
        "StaticMesh'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Models/Structure/Shared/SM_Pipe_Single_Middle2.SM_Pipe_Single_Middle2'",
        "StaticMesh'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Models/Structure/Shared/SM_Pipe_Single_Middle1.SM_Pipe_Single_Middle1'",
        "StaticMesh'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Models/Structure/Shared/SM_Pipe_Single_Middle3.SM_Pipe_Single_Middle3'",
        "StaticMesh'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Models/Structure/Shared/SM_Pipe_Single_Middle4.SM_Pipe_Single_Middle4'"
    };
    TArray<class UStaticMesh*> LeftMeshes = {
        "StaticMesh'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Models/Structure/Shared/SM_Pipe_Single_Left1.SM_Pipe_Single_Left1'"
    };
    TArray<class UStaticMesh*> RightMeshes = {
        "StaticMesh'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Models/Structure/Shared/SM_Pipe_Single_Right1.SM_Pipe_Single_Right1'"
    };
    TArray<class UStaticMesh*> DownMeshes = {
        "StaticMesh'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Models/Structure/Shared/SM_Pipe_Single_Down1.SM_Pipe_Single_Down1'"
    };
    TArray<class UStaticMesh*> UpMeshes = {
        "StaticMesh'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Models/Structure/Shared/SM_Pipe_Single_Up1.SM_Pipe_Single_Up1'"
    };
    double MiddleSpacing = 100;
    double FillStartOffset = 50;
    double FillEndOffset = 100;
    double StraightStartOffset = 50;
    TArray<double> TraceDistances = {
        200
    };
    double PillarTraceStartOffset = 30;
    bool ConstructPillars = false;
    struct FVector ActorOffset = FVector(0, 0, 25);
    TArray<class UBlueprintGeneratedClass*> Actors = {
        "BlueprintGeneratedClass'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Blueprints/Furniture/BP_Industry_Light1.BP_Industry_Light1_C'"
    };
    struct FLinearColor PipeColor = FLinearColor(0,482353, 0,05098, 0,039216, 0);
};