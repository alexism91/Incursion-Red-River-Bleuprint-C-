class ABP_OperationStartPoint_Auto_C : public AIRROperationStartPoint_Auto
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/MissionSystem/Actors/Spawns/Operations/BP_OperationStartPoint_Auto.BP_OperationStartPoint_Auto_C:SimpleConstructionScript_0'";
    struct FIRROperationActivation Activation = {
        "MaxGateWaitTime": 360
    };
    bool bAlwaysRelevant = true;
    class USceneComponent* DefaultSceneRoot;
};