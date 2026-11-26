class ABP_TargetOnRail_C : public AActor
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/ThirdParty/LevelDesign/MilitaryFiringRange/FiringRange/Blueprints/BP_TargetOnRail.BP_TargetOnRail_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/LevelDesign/MilitaryFiringRange/FiringRange/Blueprints/BP_TargetOnRail.BP_TargetOnRail_C:ExecuteUbergraph_BP_TargetOnRail'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    double StepSize = 300;
    double Max = 600;
    double Min = -600;
    double Speed = 100;
    struct FActorTickFunction PrimaryActorTick = {
        "bCanEverTick": true
    };
    class UStaticMeshComponent* Constraint;
    class UStaticMeshComponent* SM_Paper_Targets_01f;
    class UStaticMeshComponent* SM_Roof_Target_Rail_Tracks_01a;
    class USceneComponent* Scene;
    double TargetLocation;

};