class ABP_AI_Manager_C : public AAIManager
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/AI/BP_AI_Manager.BP_AI_Manager_C:SimpleConstructionScript_0'";
    double Underground Visibility Factor = 0.5;
    float OptimizationTickRate = 0.5;
    float MaxDistance = 2500;
    class UCurveFloat* TimeVisibilityCurve = "CurveFloat'Test_C/Content/Blueprints/Curves/Movement/FC_AI_Visibility.FC_AI_Visibility'";
    class UCurveFloat* TimeVisiblitySunAngleCurve = "CurveFloat'Test_C/Content/Blueprints/Curves/AI/Time_SunAngleCurve.Time_SunAngleCurve'";
    struct FActorTickFunction PrimaryActorTick = {
        "bStartWithTickEnabled": false
    };
    bool bCanBeDamaged = false;
    TArray<FName> Tags = {
        FName("AI Manager")
    };
    class USceneComponent* DefaultSceneRoot;

};